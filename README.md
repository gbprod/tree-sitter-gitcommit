# tree-sitter-gitcommit

**This grammar is under development**

`gitcommit` grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

Support [Conventionnal commit](https://www.conventionalcommits.org) specifications.

[![Build/test](https://github.com/gbprod/tree-sitter-gitcommit/actions/workflows/ci.yml/badge.svg)](https://github.com/gbprod/tree-sitter-gitcommit/actions/workflows/ci.yml)

## Installation

### Neovim

As this grammar is not (yet) available throught [`nvim-treesitter`](https://github.com/nvim-treesitter/nvim-treesitter),
you must install it manualy.

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.gitcommit = {
    install_info = {
        url = "https://github.com/gbprod/tree-sitter-gitcommit",
        files = { "src/parser.c", "src/scanner.c" },
        branch = "main",
    },
    filetype = "gitcommit",
    maintainers = {  "@gbprod" },
}
```

Then we need some queries for nvim-treesitter:

Edit file `~/.config/nvim/after/queries/gitcommit/highlights.scm` or execute `:TSEditQueryUserAfter highlights gitcommit`
and copy the content of [`queries/highlights.scm`](https://github.com/gbprod/tree-sitter-gitcommit/blob/main/queries/highlights.scm).

Edit file `~/.config/nvim/after/queries/gitcommit/injections.scm` or execute `:TSEditQueryUserAfter injections gitcommit` with the content:

```scheme
(diff) @diff
(rebase_command) @git_rebase
```

Now we can install the `gitcommit` parser via nvim-treesitter.

```vim
:TSInstall gitcommit
```

## Credits

- [https://github.com/gbprod/tree-sitter-git-commit](https://github.com/gbprod/tree-sitter-git-commit) good parser but only works in english.
