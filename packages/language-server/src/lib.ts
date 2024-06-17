import type { Connection, TextDocumentChangeEvent } from 'vscode-languageserver'
import type { TextDocument } from 'vscode-languageserver-textdocument'
import { fileURLToPath, pathToFileURL } from 'url'

export const reportDiagnostics = async ({ document }: TextDocumentChangeEvent<TextDocument>, connection: Connection) => {
  const lang = await import('aeria-lang')
  const source = document.getText()

  const resultEither = lang.compileSource({
    filename: fileURLToPath(document.uri),
    source,
    module: 'esnext',
  })


  if( lang.isLeft(resultEither) ) {
    const diagnostic = lang.unwrap(lang.unwrap(resultEither))
    const range = lang.getNormalizedSpan(diagnostic.span)

    connection.sendDiagnostics({
      uri: pathToFileURL(diagnostic.filepath).href,
      diagnostics: [
        {
          message: diagnostic.info,
          range,
        }
      ]
    })
    return
  }

  connection.sendDiagnostics({
    uri: document.uri,
    diagnostics: []
  })
}

