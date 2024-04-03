#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType { CONVENTIONAL_PREFIX, CONVENTIONAL_SUBJECT, TRAILER_VALUE };

void *tree_sitter_gitcommit_external_scanner_create() { return NULL; }

void tree_sitter_gitcommit_external_scanner_destroy(void *p) {}

void tree_sitter_gitcommit_external_scanner_reset(void *p) {}

unsigned tree_sitter_gitcommit_external_scanner_serialize(void *p,
                                                          char *buffer) {
  return 0;
}

void tree_sitter_gitcommit_external_scanner_deserialize(void *p, const char *b,
                                                        unsigned n) {}

bool tree_sitter_gitcommit_external_scanner_scan(void *payload, TSLexer *lexer,
                                                 const bool *valid_symbols) {
  if (valid_symbols[CONVENTIONAL_PREFIX]) {
    lexer->result_symbol = CONVENTIONAL_PREFIX;
    if (iswcntrl(lexer->lookahead) || iswspace(lexer->lookahead) ||
        lexer->lookahead == ':' || lexer->lookahead == '!' ||
        lexer->lookahead == '\0') {
      return false;
    }
    lexer->advance(lexer, false);

    while (!iswcntrl(lexer->lookahead) && !iswspace(lexer->lookahead) &&
           lexer->lookahead != ':' && lexer->lookahead != '!' &&
           lexer->lookahead != '(' && lexer->lookahead != ')' &&
           lexer->lookahead != '\0') {
      lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);

    if (lexer->lookahead == '(') {
      lexer->advance(lexer, false);

      if (lexer->lookahead == ')') {
        return false;
      }

      while (!iswcntrl(lexer->lookahead) && lexer->lookahead != '(' &&
             lexer->lookahead != ')' && lexer->lookahead != '\0') {
        lexer->advance(lexer, false);
      }

      if (lexer->lookahead != ')') {
        return false;
      }
      lexer->advance(lexer, false);
    }

    if (lexer->lookahead == '!') {
      lexer->advance(lexer, false);
    }

    return lexer->lookahead == ':' || lexer->lookahead == 0xff1a;
  }

  if (valid_symbols[CONVENTIONAL_SUBJECT]) {
    lexer->result_symbol = CONVENTIONAL_SUBJECT;

    if (lexer->lookahead == '\n' || lexer->lookahead == '\r' ||
        lexer->lookahead == '\0') {
      return false;
    }

    while (lexer->lookahead != '\n' && lexer->lookahead != '\r' &&
           lexer->lookahead != '\0' && 50 > lexer->get_column(lexer)) {
      lexer->advance(lexer, false);
    }

    return true;
  }

  if (valid_symbols[TRAILER_VALUE]) {
    lexer->result_symbol = TRAILER_VALUE;

    if (lexer->lookahead == '\n' || lexer->lookahead == '\r' ||
        lexer->lookahead == '\0') {
      return false;
    }

    while (lexer->lookahead != '\n' && lexer->lookahead != '\r' &&
           lexer->lookahead != '\0' && 72 > lexer->get_column(lexer)) {
      lexer->advance(lexer, false);
    }

    return true;
  }

  return false;
}
