# tree-sitter-gitcommit

[![Build/test](https://github.com/gbprod/tree-sitter-gitcommit/actions/workflows/ci.yml/badge.svg)](https://github.com/gbprod/tree-sitter-gitcommit/actions/workflows/ci.yml)

`gitcommit` grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Features

- Support for [Conventional Commits](https://www.conventionalcommits.org) specifications.
- Support for different locales / languages. See [Supported locales](#supported-locales) for a full list.

## Supported locales

We aim to support all the [locales supported by git](https://github.com/git/git/tree/master/po).
The currently supported locales are listed below:

- `en`: English
- `bg`: Bulgarian
- `ca`: Catalan
- `de`: German
- `el`: Greek
- `es`: Spanish
- `fr`: French
- `id`: Indonesian (Bahasa)
- `it`: Italian
- `ko`: Korean
- `pl`: Polish
- `pt_PT`: Portugal Portugese
- `ru`: Russian
- `sv`: Swedish
- `tr`: Turkish
- `vi`: Vietnamese
- `zh_CN`: Chinese (Simplified)
- `zh_TW`: Taiwanese Mandarin

## Note about injected languages

This parser _only_ parse git commit subject, message and generated comments, it doesn't handle diff and git rebase informations that could be included.
To handle that, you must have `diff` and `git_rebase` tree-sitter grammars installed and add injection queries.

If you're using Neovim and [`nvim-treesitter`](https://github.com/nvim-treesitter/nvim-treesitter), you just have to be sure that `diff` and `git_rebase` are installed (using `TSInstall diff git_rebase` for example).

## Credits

- [https://github.com/the-mikedavis/tree-sitter-git-commit](https://github.com/the-mikedavis/tree-sitter-git-commit) Good parser but [only works in English](https://github.com/the-mikedavis/tree-sitter-git-commit/issues/4).
