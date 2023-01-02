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

## Credits

- [https://github.com/the-mikedavis/tree-sitter-git-commit](https://github.com/the-mikedavis/tree-sitter-git-commit) Good parser but [only works in English](https://github.com/the-mikedavis/tree-sitter-git-commit/issues/4).
