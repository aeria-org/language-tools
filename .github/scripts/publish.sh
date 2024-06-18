#!/bin/sh

case $BRANCH_NAME in
  develop)
    pnpm changeset publish --tag nightly
  ;;
  *)
    pnpm changeset publish
  ;;
esac

echo "$VSCE_PAT" > ~/.vsce
pnpm --filter=./packages/vscode run pack
pnpm --filter=./packages/vscode publish:ovsx
pnpm --filter=./packages/vscode publish:vsce

