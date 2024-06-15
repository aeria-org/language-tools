import type { InitializeResult } from 'vscode-languageserver'
import { createConnection, ProposedFeatures, TextDocuments } from 'vscode-languageserver/node'
import { TextDocument } from 'vscode-languageserver-textdocument'
import { reportDiagnostics } from './lib.js'

const connection = createConnection(ProposedFeatures.all)
const documents = new TextDocuments(TextDocument)

connection.onInitialize((params) => {
  const result: InitializeResult = {
    capabilities: {
      definitionProvider: true,
      documentFormattingProvider: true,
      completionProvider: {},
      hoverProvider: true,
    }
  }

  return result
})

documents.onDidChangeContent(async (event) => {
  return reportDiagnostics(event, connection)
})

documents.listen(connection)
connection.listen()

