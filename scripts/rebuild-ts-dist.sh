#!/bin/sh

pnpm --filter=tree-sitter-aeria build

rm -rf packages/neovim/ts-dist
mkdir packages/neovim/ts-dist

cp packages/tree-sitter-aeria/aeria.so packages/neovim/ts-dist
cp -r packages/tree-sitter-aeria/queries packages/neovim/ts-dist

