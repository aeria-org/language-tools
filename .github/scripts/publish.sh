#!/bin/sh

case $BRANCH_NAME in
  develop)
    pnpm changeset publish --tag nightly
  ;;
  *)
    pnpm changeset publish
  ;;
esac

pnpm --filter=./packages/vscode run pack
pnpm --filter=./packages/vscode publish:ovsx
echo -n "$VSCE_PAT" > ~/.vsce
pnpm --filter=./packages/vscode publish:vsce

