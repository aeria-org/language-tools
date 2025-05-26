import type { Connection, TextDocumentChangeEvent } from 'vscode-languageserver'
import type { TextDocument } from 'vscode-languageserver-textdocument'
import { fileURLToPath } from 'node:url'
import { readFile } from 'node:fs/promises'
import { glob } from 'glob'

export const reportDiagnostics = async ({ document }: TextDocumentChangeEvent<TextDocument>, connection: Connection) => {
  const lang = await import('@aeriajs/compiler')

  const currentFileName = fileURLToPath(document.uri).split(process.cwd() + '/').at(-1)
  const fileList = await glob('**/*.aeria')

  const sources: Record<string, string> = {}
  for (const fileName of fileList) {
    if( fileName === currentFileName ) {
      sources[fileName] = document.getText()
    } else {
      sources[fileName] = await readFile(fileName, {
        encoding: 'utf-8',
      })
    }
  }

  const result = await lang.parseAndCheck(sources, {
    languageServer: true,
  })

  const diagnostics = result.errors.map((error) => ({
    message: error.message,
    range: {
      start: {
        line: error.location.line - 1,
        character: error.location.start,
      },
      end: {
        line: error.location.line - 1,
        character: error.location.end,
      },
    }
  }))

  connection.sendDiagnostics({
    uri: document.uri,
    diagnostics,
  })
}

