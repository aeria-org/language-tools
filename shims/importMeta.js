/**
 * Used to patch the server bundle produced by esbuild.
 * Although this code is reported as invalid, it works fine.
 */
const importMeta = {
  url: `file://${process.cwd()}/node_modules`
}
export {
  importMeta as 'import.meta'
}
