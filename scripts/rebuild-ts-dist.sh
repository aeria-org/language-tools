#!/bin/sh

pnpm --filter=tree-sitter-aeria build

rm -rf packages/neovim/dist
mkdir packages/neovim/dist

cp packages/tree-sitter-aeria/aeria.so packages/neovim/dist
cp -r packages/tree-sitter-aeria/queries packages/neovim/dist

