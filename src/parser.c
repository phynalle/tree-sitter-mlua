#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_script = 1,
  anon_sym_extends = 2,
  aux_sym_identifier_token1 = 3,
  anon_sym_AT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_static = 8,
  anon_sym_property = 9,
  anon_sym_EQ = 10,
  anon_sym_constructor = 11,
  anon_sym_method = 12,
  anon_sym_end = 13,
  anon_sym_if = 14,
  anon_sym_function = 15,
  anon_sym_do = 16,
  sym__lua_any_token = 17,
  sym__single_quote_string_literal = 18,
  sym__double_quote_string_literal = 19,
  sym_number_literal = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  sym_nil_literal = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  sym_source_file = 26,
  sym_identifier = 27,
  sym_type_identifier = 28,
  sym_annotation = 29,
  sym_annotation_arguments = 30,
  sym_property = 31,
  sym_property_value = 32,
  sym_constructor = 33,
  sym_method = 34,
  sym_code_block = 35,
  sym_code = 36,
  sym_block_end = 37,
  sym__lua_nested_structure = 38,
  sym_parameters = 39,
  sym_parameter = 40,
  sym__expression = 41,
  sym__literal = 42,
  sym_string_literal = 43,
  sym_boolean_literal = 44,
  sym_table_literal = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_annotation_arguments_repeat1 = 47,
  aux_sym_code_repeat1 = 48,
  aux_sym_parameters_repeat1 = 49,
  aux_sym_table_literal_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_script] = "script",
  [anon_sym_extends] = "extends",
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
  [anon_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_function] = "function",
  [anon_sym_do] = "do",
  [sym__lua_any_token] = "_lua_any_token",
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
  [sym_code_block] = "code_block",
  [sym_code] = "code",
  [sym_block_end] = "block_end",
  [sym__lua_nested_structure] = "_lua_nested_structure",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_table_literal] = "table_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_annotation_arguments_repeat1] = "annotation_arguments_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_table_literal_repeat1] = "table_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_extends] = anon_sym_extends,
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
  [anon_sym_end] = anon_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_do] = anon_sym_do,
  [sym__lua_any_token] = sym__lua_any_token,
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
  [sym_code_block] = sym_code_block,
  [sym_code] = sym_code,
  [sym_block_end] = sym_block_end,
  [sym__lua_nested_structure] = sym__lua_nested_structure,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_table_literal] = sym_table_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_annotation_arguments_repeat1] = aux_sym_annotation_arguments_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
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
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [sym__lua_any_token] = {
    .visible = false,
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
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym__lua_nested_structure] = {
    .visible = false,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
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
  [aux_sym_code_repeat1] = {
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
  field_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_type, 0},
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
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(61);
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        '(', 75,
        ')', 77,
        ',', 76,
        '=', 80,
        '@', 74,
        'c', 33,
        'd', 34,
        'e', 28,
        'f', 6,
        'i', 20,
        'm', 17,
        'n', 22,
        'p', 45,
        's', 9,
        't', 41,
        '{', 102,
        '}', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        ',', 76,
        'f', 64,
        'n', 67,
        't', 70,
        '{', 102,
        '}', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__lua_any_token);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__lua_any_token);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__lua_any_token);
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__lua_any_token);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__lua_any_token);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__lua_any_token);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__single_quote_string_literal);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__double_quote_string_literal);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_nil_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
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
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
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
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
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
    [sym_source_file] = STATE(114),
    [sym_annotation] = STATE(113),
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
    STATE(72), 6,
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
    STATE(92), 6,
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
    STATE(92), 6,
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
    STATE(42), 6,
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
    STATE(92), 6,
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
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_static,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
      anon_sym_RBRACE,
  [173] = 10,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_extends,
    ACTIONS(39), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_constructor,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_annotation,
    STATE(105), 1,
      sym_block_end,
    STATE(14), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [207] = 10,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_constructor,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_end,
    ACTIONS(49), 1,
      anon_sym_extends,
    STATE(67), 1,
      sym_annotation,
    STATE(107), 1,
      sym_block_end,
    STATE(15), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [241] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_constructor,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_annotation,
    STATE(111), 1,
      sym_block_end,
    STATE(16), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [272] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_constructor,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_annotation,
    STATE(110), 1,
      sym_block_end,
    STATE(13), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [303] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_constructor,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_annotation,
    STATE(112), 1,
      sym_block_end,
    STATE(10), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [334] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_constructor,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_annotation,
    STATE(112), 1,
      sym_block_end,
    STATE(16), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [365] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_constructor,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_annotation,
    STATE(107), 1,
      sym_block_end,
    STATE(16), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [396] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_constructor,
    ACTIONS(45), 1,
      anon_sym_method,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_annotation,
    STATE(110), 1,
      sym_block_end,
    STATE(16), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [427] = 8,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      anon_sym_static,
    ACTIONS(57), 1,
      anon_sym_property,
    ACTIONS(60), 1,
      anon_sym_constructor,
    ACTIONS(63), 1,
      anon_sym_method,
    ACTIONS(66), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_annotation,
    STATE(16), 4,
      sym_property,
      sym_constructor,
      sym_method,
      aux_sym_source_file_repeat1,
  [455] = 7,
    ACTIONS(68), 1,
      anon_sym_end,
    ACTIONS(72), 1,
      sym__lua_any_token,
    STATE(40), 1,
      sym_block_end,
    STATE(41), 1,
      sym_code_block,
    STATE(79), 1,
      sym_code,
    STATE(33), 2,
      sym__lua_nested_structure,
      aux_sym_code_repeat1,
    ACTIONS(70), 3,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
  [480] = 7,
    ACTIONS(68), 1,
      anon_sym_end,
    ACTIONS(72), 1,
      sym__lua_any_token,
    STATE(40), 1,
      sym_block_end,
    STATE(44), 1,
      sym_code_block,
    STATE(79), 1,
      sym_code,
    STATE(33), 2,
      sym__lua_nested_structure,
      aux_sym_code_repeat1,
    ACTIONS(70), 3,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
  [505] = 7,
    ACTIONS(68), 1,
      anon_sym_end,
    ACTIONS(72), 1,
      sym__lua_any_token,
    STATE(37), 1,
      sym_code_block,
    STATE(40), 1,
      sym_block_end,
    STATE(79), 1,
      sym_code,
    STATE(33), 2,
      sym__lua_nested_structure,
      aux_sym_code_repeat1,
    ACTIONS(70), 3,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
  [530] = 7,
    ACTIONS(68), 1,
      anon_sym_end,
    ACTIONS(72), 1,
      sym__lua_any_token,
    STATE(35), 1,
      sym_code_block,
    STATE(40), 1,
      sym_block_end,
    STATE(79), 1,
      sym_code,
    STATE(33), 2,
      sym__lua_nested_structure,
      aux_sym_code_repeat1,
    ACTIONS(70), 3,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
  [555] = 1,
    ACTIONS(74), 9,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
      anon_sym_RBRACE,
  [567] = 3,
    ACTIONS(78), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_property_value,
    ACTIONS(76), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [582] = 1,
    ACTIONS(80), 8,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
      anon_sym_RBRACE,
  [593] = 3,
    ACTIONS(78), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_property_value,
    ACTIONS(82), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [608] = 3,
    ACTIONS(78), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_property_value,
    ACTIONS(84), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [623] = 1,
    ACTIONS(86), 8,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
      anon_sym_RBRACE,
  [634] = 1,
    ACTIONS(88), 8,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
      anon_sym_RBRACE,
  [645] = 1,
    ACTIONS(90), 8,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
      anon_sym_RBRACE,
  [656] = 1,
    ACTIONS(92), 8,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
      anon_sym_RBRACE,
  [667] = 1,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [677] = 4,
    ACTIONS(96), 1,
      anon_sym_end,
    ACTIONS(98), 1,
      sym__lua_any_token,
    STATE(32), 2,
      sym__lua_nested_structure,
      aux_sym_code_repeat1,
    ACTIONS(70), 3,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
  [693] = 4,
    ACTIONS(100), 1,
      anon_sym_end,
    ACTIONS(105), 1,
      sym__lua_any_token,
    STATE(32), 2,
      sym__lua_nested_structure,
      aux_sym_code_repeat1,
    ACTIONS(102), 3,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
  [709] = 4,
    ACTIONS(98), 1,
      sym__lua_any_token,
    ACTIONS(108), 1,
      anon_sym_end,
    STATE(32), 2,
      sym__lua_nested_structure,
      aux_sym_code_repeat1,
    ACTIONS(70), 3,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
  [725] = 4,
    ACTIONS(110), 1,
      anon_sym_end,
    ACTIONS(112), 1,
      sym__lua_any_token,
    STATE(31), 2,
      sym__lua_nested_structure,
      aux_sym_code_repeat1,
    ACTIONS(70), 3,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
  [741] = 1,
    ACTIONS(114), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [750] = 1,
    ACTIONS(84), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [759] = 1,
    ACTIONS(116), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [768] = 3,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_annotation_arguments,
    ACTIONS(118), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [781] = 1,
    ACTIONS(122), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [790] = 1,
    ACTIONS(124), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [799] = 1,
    ACTIONS(126), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [808] = 1,
    ACTIONS(128), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [817] = 1,
    ACTIONS(130), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [826] = 1,
    ACTIONS(132), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [835] = 1,
    ACTIONS(76), 6,
      anon_sym_AT,
      anon_sym_static,
      anon_sym_property,
      anon_sym_constructor,
      anon_sym_method,
      anon_sym_end,
  [844] = 1,
    ACTIONS(134), 5,
      anon_sym_end,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
      sym__lua_any_token,
  [852] = 1,
    ACTIONS(136), 5,
      anon_sym_end,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
      sym__lua_any_token,
  [860] = 1,
    ACTIONS(138), 5,
      anon_sym_end,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
      sym__lua_any_token,
  [868] = 5,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_parameter,
    STATE(102), 1,
      sym_type_identifier,
  [884] = 1,
    ACTIONS(146), 5,
      anon_sym_end,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
      sym__lua_any_token,
  [892] = 4,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_string_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [906] = 1,
    ACTIONS(152), 5,
      anon_sym_end,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
      sym__lua_any_token,
  [914] = 1,
    ACTIONS(154), 5,
      anon_sym_end,
      anon_sym_if,
      anon_sym_function,
      anon_sym_do,
      sym__lua_any_token,
  [922] = 1,
    ACTIONS(156), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [929] = 4,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_parameter,
    STATE(102), 1,
      sym_type_identifier,
  [942] = 3,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_string_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [953] = 1,
    ACTIONS(162), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [960] = 1,
    ACTIONS(164), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [967] = 1,
    ACTIONS(166), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [974] = 3,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_string_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [985] = 4,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_parameter,
    STATE(102), 1,
      sym_type_identifier,
  [998] = 1,
    ACTIONS(172), 4,
      anon_sym_script,
      anon_sym_static,
      anon_sym_property,
      anon_sym_method,
  [1005] = 3,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(98), 1,
      sym_parameter,
    STATE(102), 1,
      sym_type_identifier,
  [1015] = 3,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_annotation_arguments_repeat1,
  [1025] = 3,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_parameters_repeat1,
  [1035] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_parameters_repeat1,
  [1045] = 3,
    ACTIONS(182), 1,
      anon_sym_static,
    ACTIONS(184), 1,
      anon_sym_property,
    ACTIONS(186), 1,
      anon_sym_method,
  [1055] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_table_literal_repeat1,
  [1065] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_annotation_arguments_repeat1,
  [1075] = 2,
    STATE(81), 1,
      sym_string_literal,
    ACTIONS(11), 2,
      sym__single_quote_string_literal,
      sym__double_quote_string_literal,
  [1083] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_annotation_arguments_repeat1,
  [1093] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_table_literal_repeat1,
  [1103] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_table_literal_repeat1,
  [1113] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameters_repeat1,
  [1123] = 2,
    ACTIONS(213), 1,
      anon_sym_property,
    ACTIONS(215), 1,
      anon_sym_method,
  [1130] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(99), 1,
      sym_type_identifier,
  [1137] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
  [1144] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(89), 1,
      sym_identifier,
  [1151] = 2,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(43), 1,
      sym_block_end,
  [1158] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1163] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1168] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      sym_identifier,
  [1175] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(38), 1,
      sym_identifier,
  [1182] = 2,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parameters,
  [1189] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_identifier,
  [1196] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(78), 1,
      sym_type_identifier,
  [1203] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(77), 1,
      sym_type_identifier,
  [1210] = 2,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parameters,
  [1217] = 2,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_parameters,
  [1224] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(84), 1,
      sym_identifier,
  [1231] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(22), 1,
      sym_identifier,
  [1238] = 1,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1243] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_identifier,
  [1250] = 2,
    ACTIONS(184), 1,
      anon_sym_property,
    ACTIONS(186), 1,
      anon_sym_method,
  [1257] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(12), 1,
      sym_identifier,
  [1264] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym_type_identifier,
  [1271] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(100), 1,
      sym_identifier,
  [1278] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1283] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(88), 1,
      sym_identifier,
  [1290] = 2,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_parameters,
  [1297] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      sym_identifier,
  [1304] = 2,
    ACTIONS(217), 1,
      aux_sym_identifier_token1,
    STATE(80), 1,
      sym_identifier,
  [1311] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(90), 1,
      sym_type_identifier,
  [1318] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(91), 1,
      sym_type_identifier,
  [1325] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1329] = 1,
    ACTIONS(225), 1,
      aux_sym_identifier_token1,
  [1333] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [1337] = 1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
  [1341] = 1,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
  [1345] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [1349] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1353] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1357] = 1,
    ACTIONS(235), 1,
      anon_sym_script,
  [1361] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [1365] = 1,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 303,
  [SMALL_STATE(13)] = 334,
  [SMALL_STATE(14)] = 365,
  [SMALL_STATE(15)] = 396,
  [SMALL_STATE(16)] = 427,
  [SMALL_STATE(17)] = 455,
  [SMALL_STATE(18)] = 480,
  [SMALL_STATE(19)] = 505,
  [SMALL_STATE(20)] = 530,
  [SMALL_STATE(21)] = 555,
  [SMALL_STATE(22)] = 567,
  [SMALL_STATE(23)] = 582,
  [SMALL_STATE(24)] = 593,
  [SMALL_STATE(25)] = 608,
  [SMALL_STATE(26)] = 623,
  [SMALL_STATE(27)] = 634,
  [SMALL_STATE(28)] = 645,
  [SMALL_STATE(29)] = 656,
  [SMALL_STATE(30)] = 667,
  [SMALL_STATE(31)] = 677,
  [SMALL_STATE(32)] = 693,
  [SMALL_STATE(33)] = 709,
  [SMALL_STATE(34)] = 725,
  [SMALL_STATE(35)] = 741,
  [SMALL_STATE(36)] = 750,
  [SMALL_STATE(37)] = 759,
  [SMALL_STATE(38)] = 768,
  [SMALL_STATE(39)] = 781,
  [SMALL_STATE(40)] = 790,
  [SMALL_STATE(41)] = 799,
  [SMALL_STATE(42)] = 808,
  [SMALL_STATE(43)] = 817,
  [SMALL_STATE(44)] = 826,
  [SMALL_STATE(45)] = 835,
  [SMALL_STATE(46)] = 844,
  [SMALL_STATE(47)] = 852,
  [SMALL_STATE(48)] = 860,
  [SMALL_STATE(49)] = 868,
  [SMALL_STATE(50)] = 884,
  [SMALL_STATE(51)] = 892,
  [SMALL_STATE(52)] = 906,
  [SMALL_STATE(53)] = 914,
  [SMALL_STATE(54)] = 922,
  [SMALL_STATE(55)] = 929,
  [SMALL_STATE(56)] = 942,
  [SMALL_STATE(57)] = 953,
  [SMALL_STATE(58)] = 960,
  [SMALL_STATE(59)] = 967,
  [SMALL_STATE(60)] = 974,
  [SMALL_STATE(61)] = 985,
  [SMALL_STATE(62)] = 998,
  [SMALL_STATE(63)] = 1005,
  [SMALL_STATE(64)] = 1015,
  [SMALL_STATE(65)] = 1025,
  [SMALL_STATE(66)] = 1035,
  [SMALL_STATE(67)] = 1045,
  [SMALL_STATE(68)] = 1055,
  [SMALL_STATE(69)] = 1065,
  [SMALL_STATE(70)] = 1075,
  [SMALL_STATE(71)] = 1083,
  [SMALL_STATE(72)] = 1093,
  [SMALL_STATE(73)] = 1103,
  [SMALL_STATE(74)] = 1113,
  [SMALL_STATE(75)] = 1123,
  [SMALL_STATE(76)] = 1130,
  [SMALL_STATE(77)] = 1137,
  [SMALL_STATE(78)] = 1144,
  [SMALL_STATE(79)] = 1151,
  [SMALL_STATE(80)] = 1158,
  [SMALL_STATE(81)] = 1163,
  [SMALL_STATE(82)] = 1168,
  [SMALL_STATE(83)] = 1175,
  [SMALL_STATE(84)] = 1182,
  [SMALL_STATE(85)] = 1189,
  [SMALL_STATE(86)] = 1196,
  [SMALL_STATE(87)] = 1203,
  [SMALL_STATE(88)] = 1210,
  [SMALL_STATE(89)] = 1217,
  [SMALL_STATE(90)] = 1224,
  [SMALL_STATE(91)] = 1231,
  [SMALL_STATE(92)] = 1238,
  [SMALL_STATE(93)] = 1243,
  [SMALL_STATE(94)] = 1250,
  [SMALL_STATE(95)] = 1257,
  [SMALL_STATE(96)] = 1264,
  [SMALL_STATE(97)] = 1271,
  [SMALL_STATE(98)] = 1278,
  [SMALL_STATE(99)] = 1283,
  [SMALL_STATE(100)] = 1290,
  [SMALL_STATE(101)] = 1297,
  [SMALL_STATE(102)] = 1304,
  [SMALL_STATE(103)] = 1311,
  [SMALL_STATE(104)] = 1318,
  [SMALL_STATE(105)] = 1325,
  [SMALL_STATE(106)] = 1329,
  [SMALL_STATE(107)] = 1333,
  [SMALL_STATE(108)] = 1337,
  [SMALL_STATE(109)] = 1341,
  [SMALL_STATE(110)] = 1345,
  [SMALL_STATE(111)] = 1349,
  [SMALL_STATE(112)] = 1353,
  [SMALL_STATE(113)] = 1357,
  [SMALL_STATE(114)] = 1361,
  [SMALL_STATE(115)] = 1365,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 7, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_nested_structure, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 5, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lua_nested_structure, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, 0, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 7, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
