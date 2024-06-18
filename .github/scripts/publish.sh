#!/bin/sh

case $BRANCH_NAME in
  develop)
    pnpm changeset publish --tag nightly
  ;;
  *)
    pnpm changeset publish
  ;;
esac

ext_name="Aeria.aeria-lang-vscode"

local_version="$(cat packages/vscode/package.json | jq -r '.version')"
ovsx_version="$(cd packages/vscode; npx ovsx get --metadata "$ext_name" | jq -r '.version')"
vsce_version="$(cd packages/vscode; npx vsce show --json "$ext_name" | jq -r '.versions[0].version')"

pnpm --filter=./packages/vscode run pack

if [ "$local_version" != "$ovsx_version" ]; then
  echo "Publishing to OpenVSIX because $local_version != $ovsx_version"
  pnpm --filter=./packages/vscode publish:ovsx
fi

if [ "$local_version" != "$vsce_version" ]; then
  echo "Publishing to Visual Studio Marketplace because $local_version != $vsce_version"
  pnpm --filter=./packages/vscode publish:vsce
fi

