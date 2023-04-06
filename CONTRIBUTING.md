# How to contribute to tree-sitter-gitcommit

#### **Did you find a bug or have an idea to improve the parser?**

- **Ensure the bug or idea was not already reported** by searching on GitHub under [Issues](https://github.com/gbprod/tree-sitter-gitcommit/issues).

- If you're unable to find an open issue addressing the problem, [open a new one](https://github.com/gbprod/tree-sitter-gitcommit/issues/new).

#### **Did you write a patch that fixes a bug or improve the parser?**

- Open a new GitHub pull request with code changes.

- Ensure the PR description clearly describes the problem and solution. Include the relevant issue number if applicable.

- Be sure to write a relevant test case.

- Ensure that you follow conventions :
  - Use [Conventional commit](https://www.conventionalcommits.org/en/v1.0.0/) specification for your commit message ;
  - Format js code with prettier using [this configuration](https://github.com/gbprod/tree-sitter-gitcommit/blob/main/.prettierrc) ;
  - Be sure to rebuild the parser before creating the Pull request.

## Getting Started

### Requirements

Refer to the [tree-sitter
documentation](https://tree-sitter.github.io/tree-sitter/creating-parsers#dependencies)
for more details and specifics.

## Getting Started

To get started with contributing to the grammar you'll first need to install the
project's dependencies:

```sh
npm install
```

The general flow will often start with adding a test case to `./corpus`. You can
find details on how testing works with tree-sitter
[here](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test).

Once you've added your test case you'll want to then make the required changes
to `grammar.js`, regenerate and recompile the parser, and run the tests:

```sh
npm run build
npm run test
```

Then adjust as necessary. Note that depending on your change you may also have
to touch the `/src/scanner.c` file if you need more advanced features like
look-ahead.
