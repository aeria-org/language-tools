local runtimepath = vim.api.nvim_list_runtime_paths()[1]
local queriespath = runtimepath .. '/queries/aeria'
local pluginpath = debug.getinfo(1).source:sub(2, -15)
local pluginqueriespath = pluginpath .. '/../tree-sitter-aeria/queries'
local aeriaSettings = vim.api.nvim_create_augroup('Aeria Settings', { clear = true })

vim.filetype.add({
    extension = {
      aeria = 'aeria'
    }
})

vim.treesitter.language.add('aeria', {
    path = '/home/mega/aeria-language-tools/packages/tree-sitter-aeria/aeria.so',
    filetype = 'aeria'
})

if vim.fn.isdirectory(queriespath) == 0 then
  vim.fn.mkdir(queriespath, 'p')

  for k, v in pairs(vim.fn.readdir(pluginqueriespath)) do
    vim.cmd.edit(pluginqueriespath .. '/' .. v)
    vim.cmd.write(queriespath .. '/' .. v)
  end
end

vim.api.nvim_create_autocmd({
    'BufNewFile',
    'BufRead',
  },
  {
  pattern = { '*.aeria' },
  callback = function()
    vim.treesitter.start()
  end,
  group = aeriaSettings
})

