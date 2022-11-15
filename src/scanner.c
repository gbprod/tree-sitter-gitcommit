#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType { TRAILER_TOKEN, COMMENT_TITLE, CONVENTIONNAL_PREFIX };

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
  if (valid_symbols[TRAILER_TOKEN]) {
    if (!iswalpha(lexer->lookahead)) {
      return false;
    }
    lexer->advance(lexer, false);

    while (iswalpha(lexer->lookahead) || lexer->lookahead == '-') {
      lexer->advance(lexer, false);
    }

    while (lexer->lookahead == ' ') {
      lexer->advance(lexer, false);
    }

    if (lexer->lookahead != ':' && lexer->lookahead != 0xff1a) {
      return false;
    }

    lexer->advance(lexer, false);
    if (lexer->lookahead != ' ') {
      return false;
    }

    lexer->mark_end(lexer);
    lexer->result_symbol = TRAILER_TOKEN;

    return true;
  }

  if (valid_symbols[COMMENT_TITLE]) {
    while (lexer->lookahead != '\n' && lexer->lookahead != '\r' &&
           lexer->lookahead != ':' && lexer->lookahead != 0xff1a) {
      lexer->advance(lexer, false);
    }

    if (lexer->lookahead != ':' && lexer->lookahead != 0xff1a) {
      return false;
    }
    lexer->advance(lexer, false);

    while (lexer->lookahead == ' ') {
      lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);

    lexer->result_symbol = COMMENT_TITLE;

    return lexer->lookahead == '\n' || lexer->lookahead == '\r';
  }

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

  return false;
}
