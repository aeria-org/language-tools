#!/bin/sh

case $BRANCH_NAME in
  develop)
    pnpm changeset publish --tag nightly
  ;;
  *)
    pnpm changeset publish
  ;;
esac

echo ${VSCE_PAT:0:10}
echo ${OVSX_PAT:0:10}

echo "$VSCE_PAT" > ~/.vsce
pnpm --filter=./packages/vscode run pack
pnpm --filter=./packages/vscode publish:ovsx
pnpm --filter=./packages/vscode publish:vsce

