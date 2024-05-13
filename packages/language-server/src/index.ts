import type {
  InitializeResult,
} from 'vscode-languageserver'

import {
  createConnection,
  ProposedFeatures,
  TextDocuments,
} from 'vscode-languageserver/node'

import { TextDocument } from 'vscode-languageserver-textdocument'

const connection = createConnection(ProposedFeatures.all)
const documents = new TextDocuments(TextDocument)

connection.onInitialize((params) => {
  const result: InitializeResult = {
    capabilities: {
      definitionProvider: true,
      documentFormattingProvider: true,
      completionProvider: {
        resolveProvider: true,
      },
      hoverProvider: true,
    }
  }

  return result
})

documents.onDidChangeContent(() => {
  connection.window.showInformationMessage('Language server loaded (testing)')
})

documents.listen(connection)
connection.listen()

