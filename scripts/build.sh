#!/bin/sh

pnpm --filter=./packages/tree-sitter-aeria ci:build
pnpm --filter=./packages/language-server build
pnpm --filter=./packages/vscode build

