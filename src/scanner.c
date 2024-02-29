#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  CONVENTIONNAL_PREFIX,
  CONVENTIONNAL_SUBJECT,
};

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
  if (valid_symbols[CONVENTIONNAL_PREFIX]) {
    lexer->result_symbol = CONVENTIONNAL_PREFIX;
    if (!iswalpha(lexer->lookahead)) {
      return false;
    }
    lexer->advance(lexer, false);

    while (iswalpha(lexer->lookahead)) {
      lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);

    if (lexer->lookahead == '(') {
      lexer->advance(lexer, false);

      if (lexer->lookahead == ')') {
        return false;
      }

      while (iswalpha(lexer->lookahead) || lexer->lookahead == '-' ||
             lexer->lookahead == '_') {
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

  if (valid_symbols[CONVENTIONNAL_SUBJECT]) {
    lexer->result_symbol = CONVENTIONNAL_SUBJECT;

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

  return false;
}
