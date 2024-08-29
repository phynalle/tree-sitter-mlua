#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_script = 1,
  anon_sym_extends = 2,
  anon_sym_end = 3,
  aux_sym_identifier_token1 = 4,
  anon_sym_AT = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_static = 9,
  anon_sym_property = 10,
  anon_sym_EQ = 11,
  anon_sym_constructor = 12,
  anon_sym_method = 13,
  sym_code = 14,
  sym__single_quote_string_literal = 15,
  sym__double_quote_string_literal = 16,
  sym_number_literal = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  sym_nil_literal = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  sym_source_file = 23,
  sym_identifier = 24,
  sym_type_identifier = 25,
  sym_annotation = 26,
  sym_annotation_arguments = 27,
  sym_property = 28,
  sym_property_value = 29,
  sym_constructor = 30,
  sym_method = 31,
  sym_parameters = 32,
  sym_block = 33,
  sym__expression = 34,
  sym__literal = 35,
  sym_string_literal = 36,
  sym_boolean_literal = 37,
  sym_table_literal = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_annotation_arguments_repeat1 = 40,
  aux_sym_parameters_repeat1 = 41,
  aux_sym_table_literal_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_script] = "script",
  [anon_sym_extends] = "extends",
  [anon_sym_end] = "end",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_static] = "static",
  [anon_sym_property] = "property",
  [anon_sym_EQ] = "=",
  [anon_sym_constructor] = "constructor",
  [anon_sym_method] = "method",
  [sym_code] = "code",
  [sym__single_quote_string_literal] = "_single_quote_string_literal",
  [sym__double_quote_string_literal] = "_double_quote_string_literal",
  [sym_number_literal] = "number_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_nil_literal] = "nil_literal",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym_identifier] = "identifier",
  [sym_type_identifier] = "type_identifier",
  [sym_annotation] = "annotation",
  [sym_annotation_arguments] = "annotation_arguments",
  [sym_property] = "property",
  [sym_property_value] = "property_value",
  [sym_constructor] = "constructor",
  [sym_method] = "method",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_table_literal] = "table_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_annotation_arguments_repeat1] = "annotation_arguments_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_table_literal_repeat1] = "table_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_method] = anon_sym_method,
  [sym_code] = sym_code,
  [sym__single_quote_string_literal] = sym__single_quote_string_literal,
  [sym__double_quote_string_literal] = sym__double_quote_string_literal,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_nil_literal] = sym_nil_literal,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym_identifier] = sym_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [sym_annotation] = sym_annotation,
  [sym_annotation_arguments] = sym_annotation_arguments,
  [sym_property] = sym_property,
  [sym_property_value] = sym_property_value,
  [sym_constructor] = sym_constructor,
  [sym_method] = sym_method,
  [sym_parameters] = sym_parameters,
  [sym_block] = sym_block,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_table_literal] = sym_table_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_annotation_arguments_repeat1] = aux_sym_annotation_arguments_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_table_literal_repeat1] = aux_sym_table_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym__single_quote_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quote_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_value] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_table_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        '(', 69,
        ')', 71,
        ',', 70,
        '=', 74,
        '@', 68,
        'c', 28,
        'e', 25,
        'f', 6,
        'm', 17,
        'n', 21,
        'p', 36,
        's', 9,
        't', 34,
        '{', 90,
        '}', 91,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'e') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        ',', 70,
        'f', 58,
        'n', 61,
        't', 64,
        '{', 90,
        '}', 91,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 52:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__single_quote_string_literal);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__double_quote_string_literal);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_nil_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [sym__single_quote_string_literal] = ACTIONS(1),
    [sym__double_quote_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_nil_literal] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(108),
    [sym_annotation] = STATE(103),
    [anon_sym_script] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_COMMA,
    ACTIONS(13), 1,
      sym_number_literal,
    ACTIONS(17), 1,
      sym_nil_literal,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 6,
      sym_identifier,
      sym__expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_table_literal,
  [35] = 8,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_number_literal,
    ACTIONS(25), 1,
      sym_nil_literal,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 6,
      sym_identifier,
      sym__expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_table_literal,
  [67] = 8,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_number_literal,
    ACTIONS(25), 1,
      sym_nil_literal,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 6,
      sym_identifier,
      sym__expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_table_literal,
  [99] = 7,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_number_literal,
    ACTIONS(25), 1,
      sym_nil_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 6,
      sym_identifier,
      sym__expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_table_literal,
  [128] = 7,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_number_literal,
    ACTIONS(33), 1,
      sym_nil_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 6,
      sym_identifier,
      sym__expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_table_literal,
  [157] = 1,
    ACTIONS(35), 13,
      anon_sym_script,
      anon_sym_extends,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_static,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_RBRACE,
  [173] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_extends,
    ACTIONS(39), 1,
      anon_sym_end,
    ACTIONS(41), 1,
      anon_sym_static,
    ACTIONS(43), 1,
      anon_sym_property,
    ACTIONS(45), 1,
      anon_sym_constructor,
    ACTIONS(47), 1,
      anon_sym_method,
    STATE(58), 1,
      sym_annotation,
    STATE(12), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [204] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_static,
    ACTIONS(43), 1,
      anon_sym_property,
    ACTIONS(45), 1,
      anon_sym_constructor,
    ACTIONS(47), 1,
      anon_sym_method,
    ACTIONS(49), 1,
      anon_sym_extends,
    ACTIONS(51), 1,
      anon_sym_end,
    STATE(58), 1,
      sym_annotation,
    STATE(16), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [235] = 8,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_static,
    ACTIONS(43), 1,
      anon_sym_property,
    ACTIONS(45), 1,
      anon_sym_constructor,
    ACTIONS(47), 1,
      anon_sym_method,
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(58), 1,
      sym_annotation,
    STATE(14), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [263] = 8,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_static,
    ACTIONS(43), 1,
      anon_sym_property,
    ACTIONS(45), 1,
      anon_sym_constructor,
    ACTIONS(47), 1,
      anon_sym_method,
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(58), 1,
      sym_annotation,
    STATE(13), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [291] = 8,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_static,
    ACTIONS(43), 1,
      anon_sym_property,
    ACTIONS(45), 1,
      anon_sym_constructor,
    ACTIONS(47), 1,
      anon_sym_method,
    ACTIONS(55), 1,
      anon_sym_end,
    STATE(58), 1,
      sym_annotation,
    STATE(13), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [319] = 8,
    ACTIONS(57), 1,
      anon_sym_end,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      anon_sym_static,
    ACTIONS(65), 1,
      anon_sym_property,
    ACTIONS(68), 1,
      anon_sym_constructor,
    ACTIONS(71), 1,
      anon_sym_method,
    STATE(58), 1,
      sym_annotation,
    STATE(13), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [347] = 8,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_static,
    ACTIONS(43), 1,
      anon_sym_property,
    ACTIONS(45), 1,
      anon_sym_constructor,
    ACTIONS(47), 1,
      anon_sym_method,
    ACTIONS(74), 1,
      anon_sym_end,
    STATE(58), 1,
      sym_annotation,
    STATE(13), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [375] = 8,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_static,
    ACTIONS(43), 1,
      anon_sym_property,
    ACTIONS(45), 1,
      anon_sym_constructor,
    ACTIONS(47), 1,
      anon_sym_method,
    ACTIONS(55), 1,
      anon_sym_end,
    STATE(58), 1,
      sym_annotation,
    STATE(11), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [403] = 8,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_end,
    ACTIONS(41), 1,
      anon_sym_static,
    ACTIONS(43), 1,
      anon_sym_property,
    ACTIONS(45), 1,
      anon_sym_constructor,
    ACTIONS(47), 1,
      anon_sym_method,
    STATE(58), 1,
      sym_annotation,
    STATE(13), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [431] = 1,
    ACTIONS(76), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_RBRACE,
  [443] = 1,
    ACTIONS(78), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_RBRACE,
  [454] = 1,
    ACTIONS(80), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_RBRACE,
  [465] = 1,
    ACTIONS(82), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_RBRACE,
  [476] = 3,
    ACTIONS(86), 1,
      anon_sym_EQ,
    STATE(35), 1,
      sym_property_value,
    ACTIONS(84), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [491] = 3,
    ACTIONS(86), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_property_value,
    ACTIONS(88), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [506] = 3,
    ACTIONS(86), 1,
      anon_sym_EQ,
    STATE(29), 1,
      sym_property_value,
    ACTIONS(90), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [521] = 1,
    ACTIONS(92), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_RBRACE,
  [532] = 1,
    ACTIONS(94), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_RBRACE,
  [543] = 1,
    ACTIONS(96), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [552] = 1,
    ACTIONS(98), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [561] = 1,
    ACTIONS(100), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [570] = 1,
    ACTIONS(88), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [579] = 1,
    ACTIONS(102), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [588] = 1,
    ACTIONS(104), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [597] = 1,
    ACTIONS(106), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [606] = 1,
    ACTIONS(108), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [615] = 1,
    ACTIONS(110), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [624] = 1,
    ACTIONS(90), 6,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
  [633] = 3,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_annotation_arguments,
    ACTIONS(112), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [646] = 4,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_string_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [660] = 3,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_string_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [671] = 1,
    ACTIONS(122), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [678] = 1,
    ACTIONS(124), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [685] = 1,
    ACTIONS(126), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [692] = 1,
    ACTIONS(128), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [699] = 3,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_string_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [710] = 4,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_type_identifier,
  [723] = 1,
    ACTIONS(138), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [730] = 2,
    STATE(69), 1,
      sym_string_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [738] = 3,
    ACTIONS(140), 1,
      anon_sym_end,
    ACTIONS(142), 1,
      sym_code,
    STATE(30), 1,
      sym_block,
  [748] = 3,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_table_literal_repeat1,
  [758] = 3,
    ACTIONS(140), 1,
      anon_sym_end,
    ACTIONS(142), 1,
      sym_code,
    STATE(32), 1,
      sym_block,
  [768] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_parameters_repeat1,
  [778] = 3,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_type_identifier,
  [788] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_table_literal_repeat1,
  [798] = 3,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_annotation_arguments_repeat1,
  [808] = 3,
    ACTIONS(140), 1,
      anon_sym_end,
    ACTIONS(142), 1,
      sym_code,
    STATE(33), 1,
      sym_block,
  [818] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_parameters_repeat1,
  [828] = 3,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_type_identifier,
  [838] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_table_literal_repeat1,
  [848] = 3,
    ACTIONS(168), 1,
      anon_sym_static,
    ACTIONS(170), 1,
      anon_sym_property,
    ACTIONS(172), 1,
      anon_sym_method,
  [858] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_parameters_repeat1,
  [868] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_annotation_arguments_repeat1,
  [878] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_annotation_arguments_repeat1,
  [888] = 3,
    ACTIONS(140), 1,
      anon_sym_end,
    ACTIONS(142), 1,
      sym_code,
    STATE(34), 1,
      sym_block,
  [898] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
  [905] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(74), 1,
      sym_identifier,
  [912] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(36), 1,
      sym_identifier,
  [919] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(22), 1,
      sym_identifier,
  [926] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(80), 1,
      sym_identifier,
  [933] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      sym_identifier,
  [940] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [945] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(97), 1,
      sym_type_identifier,
  [952] = 1,
    ACTIONS(189), 2,
      anon_sym_end,
      sym_code,
  [957] = 2,
    ACTIONS(191), 1,
      anon_sym_property,
    ACTIONS(193), 1,
      anon_sym_method,
  [964] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(83), 1,
      sym_identifier,
  [971] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_parameters,
  [978] = 1,
    ACTIONS(197), 2,
      anon_sym_end,
      sym_code,
  [983] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(92), 1,
      sym_identifier,
  [990] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym_identifier,
  [997] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1002] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(76), 1,
      sym_type_identifier,
  [1009] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_parameters,
  [1016] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(77), 1,
      sym_type_identifier,
  [1023] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_identifier,
  [1030] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_parameters,
  [1037] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(73), 1,
      sym_type_identifier,
  [1044] = 1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1049] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      sym_identifier,
  [1056] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(59), 1,
      sym_identifier,
  [1063] = 1,
    ACTIONS(201), 2,
      anon_sym_end,
      sym_code,
  [1068] = 1,
    ACTIONS(203), 2,
      anon_sym_end,
      sym_code,
  [1073] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_identifier,
  [1080] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(63), 1,
      sym_type_identifier,
  [1087] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_parameters,
  [1094] = 2,
    ACTIONS(170), 1,
      anon_sym_property,
    ACTIONS(172), 1,
      anon_sym_method,
  [1101] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_type_identifier,
  [1108] = 2,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(67), 1,
      sym_type_identifier,
  [1115] = 1,
    ACTIONS(205), 2,
      anon_sym_end,
      sym_code,
  [1120] = 2,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
    STATE(78), 1,
      sym_identifier,
  [1127] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [1131] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [1135] = 1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
  [1139] = 1,
    ACTIONS(213), 1,
      anon_sym_end,
  [1143] = 1,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
  [1147] = 1,
    ACTIONS(215), 1,
      anon_sym_script,
  [1151] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [1155] = 1,
    ACTIONS(219), 1,
      aux_sym_identifier_token1,
  [1159] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [1163] = 1,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
  [1167] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1171] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 204,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 263,
  [SMALL_STATE(12)] = 291,
  [SMALL_STATE(13)] = 319,
  [SMALL_STATE(14)] = 347,
  [SMALL_STATE(15)] = 375,
  [SMALL_STATE(16)] = 403,
  [SMALL_STATE(17)] = 431,
  [SMALL_STATE(18)] = 443,
  [SMALL_STATE(19)] = 454,
  [SMALL_STATE(20)] = 465,
  [SMALL_STATE(21)] = 476,
  [SMALL_STATE(22)] = 491,
  [SMALL_STATE(23)] = 506,
  [SMALL_STATE(24)] = 521,
  [SMALL_STATE(25)] = 532,
  [SMALL_STATE(26)] = 543,
  [SMALL_STATE(27)] = 552,
  [SMALL_STATE(28)] = 561,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 579,
  [SMALL_STATE(31)] = 588,
  [SMALL_STATE(32)] = 597,
  [SMALL_STATE(33)] = 606,
  [SMALL_STATE(34)] = 615,
  [SMALL_STATE(35)] = 624,
  [SMALL_STATE(36)] = 633,
  [SMALL_STATE(37)] = 646,
  [SMALL_STATE(38)] = 660,
  [SMALL_STATE(39)] = 671,
  [SMALL_STATE(40)] = 678,
  [SMALL_STATE(41)] = 685,
  [SMALL_STATE(42)] = 692,
  [SMALL_STATE(43)] = 699,
  [SMALL_STATE(44)] = 710,
  [SMALL_STATE(45)] = 723,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 738,
  [SMALL_STATE(48)] = 748,
  [SMALL_STATE(49)] = 758,
  [SMALL_STATE(50)] = 768,
  [SMALL_STATE(51)] = 778,
  [SMALL_STATE(52)] = 788,
  [SMALL_STATE(53)] = 798,
  [SMALL_STATE(54)] = 808,
  [SMALL_STATE(55)] = 818,
  [SMALL_STATE(56)] = 828,
  [SMALL_STATE(57)] = 838,
  [SMALL_STATE(58)] = 848,
  [SMALL_STATE(59)] = 858,
  [SMALL_STATE(60)] = 868,
  [SMALL_STATE(61)] = 878,
  [SMALL_STATE(62)] = 888,
  [SMALL_STATE(63)] = 898,
  [SMALL_STATE(64)] = 905,
  [SMALL_STATE(65)] = 912,
  [SMALL_STATE(66)] = 919,
  [SMALL_STATE(67)] = 926,
  [SMALL_STATE(68)] = 933,
  [SMALL_STATE(69)] = 940,
  [SMALL_STATE(70)] = 945,
  [SMALL_STATE(71)] = 952,
  [SMALL_STATE(72)] = 957,
  [SMALL_STATE(73)] = 964,
  [SMALL_STATE(74)] = 971,
  [SMALL_STATE(75)] = 978,
  [SMALL_STATE(76)] = 983,
  [SMALL_STATE(77)] = 990,
  [SMALL_STATE(78)] = 997,
  [SMALL_STATE(79)] = 1002,
  [SMALL_STATE(80)] = 1009,
  [SMALL_STATE(81)] = 1016,
  [SMALL_STATE(82)] = 1023,
  [SMALL_STATE(83)] = 1030,
  [SMALL_STATE(84)] = 1037,
  [SMALL_STATE(85)] = 1044,
  [SMALL_STATE(86)] = 1049,
  [SMALL_STATE(87)] = 1056,
  [SMALL_STATE(88)] = 1063,
  [SMALL_STATE(89)] = 1068,
  [SMALL_STATE(90)] = 1073,
  [SMALL_STATE(91)] = 1080,
  [SMALL_STATE(92)] = 1087,
  [SMALL_STATE(93)] = 1094,
  [SMALL_STATE(94)] = 1101,
  [SMALL_STATE(95)] = 1108,
  [SMALL_STATE(96)] = 1115,
  [SMALL_STATE(97)] = 1120,
  [SMALL_STATE(98)] = 1127,
  [SMALL_STATE(99)] = 1131,
  [SMALL_STATE(100)] = 1135,
  [SMALL_STATE(101)] = 1139,
  [SMALL_STATE(102)] = 1143,
  [SMALL_STATE(103)] = 1147,
  [SMALL_STATE(104)] = 1151,
  [SMALL_STATE(105)] = 1155,
  [SMALL_STATE(106)] = 1159,
  [SMALL_STATE(107)] = 1163,
  [SMALL_STATE(108)] = 1167,
  [SMALL_STATE(109)] = 1171,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal, 5, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 7, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, 0, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 6, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 5, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 7, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mlua(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
