import type { Connection, TextDocumentChangeEvent } from 'vscode-languageserver'
import type { TextDocument } from 'vscode-languageserver-textdocument'
import { fileURLToPath } from 'url'

export const reportDiagnostics = async ({ document }: TextDocumentChangeEvent<TextDocument>, connection: Connection) => {
  const lang = await import('aeria-lang')
  const resultEither = lang.compileSource({
    filename: fileURLToPath(document.uri),
    source: document.getText(),
    module: 'esnext',
  })


  console.log(JSON.stringify(resultEither, null, 2))
  if( lang.isLeft(resultEither) ) {
    const result = lang.unwrapEither(resultEither)

    connection.sendDiagnostics({
      uri: document.uri,
      diagnostics: [
        {
          message: 'test',
          range: {
            start: {
              line: 2,
              character: 0
            },
            end: {
              line: 2,
              character: 10
            },
          }
        }
      ]
    })
  }
}

