import type { Connection, TextDocumentChangeEvent } from 'vscode-languageserver'
import type { TextDocument } from 'vscode-languageserver-textdocument'
import { fileURLToPath } from 'url'

export const reportDiagnostics = async ({ document }: TextDocumentChangeEvent<TextDocument>, connection: Connection) => {
  const lang = await import('@aeriajs/compiler')

  const source = document.getText()
  const result = await lang.parseAndCheck({
    [fileURLToPath(document.uri)]: source,
  }, {
    languageServer: true,
  })

  if( !result.success ) {
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
    return
  }

  connection.sendDiagnostics({
    uri: document.uri,
    diagnostics: []
  })
}

