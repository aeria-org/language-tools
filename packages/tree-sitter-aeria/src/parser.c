#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  sym_number = 2,
  sym_string = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  sym_array_identifier = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  sym_declaration_name = 10,
  anon_sym_ATminLength = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_ATmaxLength = 14,
  sym_property_str_type = 15,
  anon_sym_ATminimum = 16,
  anon_sym_ATmaximum = 17,
  anon_sym_ATexclusiveMinimum = 18,
  anon_sym_ATexclusiveMaximum = 19,
  anon_sym_int = 20,
  anon_sym_num = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_ATaccept = 24,
  sym_property_file_type = 25,
  anon_sym_ATindexes = 26,
  sym_properties_keyword = 27,
  sym_collection_keyword = 28,
  sym_program = 29,
  sym_comment = 30,
  sym_string_array = 31,
  sym_property_str_attribute = 32,
  sym_property_str = 33,
  sym_property_num_attribute = 34,
  sym_property_num_type = 35,
  sym_property_num = 36,
  sym_property_obj = 37,
  sym_property_file_attribute = 38,
  sym_property_file = 39,
  sym_property_ref_attribute = 40,
  sym_property_ref = 41,
  sym_property_column = 42,
  sym_properties_block = 43,
  sym_schema_properties = 44,
  sym_collection_block = 45,
  sym_declaration = 46,
  aux_sym_program_repeat1 = 47,
  aux_sym_string_array_repeat1 = 48,
  aux_sym_property_str_repeat1 = 49,
  aux_sym_property_num_repeat1 = 50,
  aux_sym_property_file_repeat1 = 51,
  aux_sym_property_ref_repeat1 = 52,
  aux_sym_properties_block_repeat1 = 53,
  aux_sym_schema_properties_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_array_identifier] = "array_identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_declaration_name] = "declaration_name",
  [anon_sym_ATminLength] = "@minLength",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ATmaxLength] = "@maxLength",
  [sym_property_str_type] = "property_str_type",
  [anon_sym_ATminimum] = "@minimum",
  [anon_sym_ATmaximum] = "@maximum",
  [anon_sym_ATexclusiveMinimum] = "@exclusiveMinimum",
  [anon_sym_ATexclusiveMaximum] = "@exclusiveMaximum",
  [anon_sym_int] = "int",
  [anon_sym_num] = "num",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATaccept] = "@accept",
  [sym_property_file_type] = "property_file_type",
  [anon_sym_ATindexes] = "@indexes",
  [sym_properties_keyword] = "properties_keyword",
  [sym_collection_keyword] = "collection_keyword",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_string_array] = "string_array",
  [sym_property_str_attribute] = "property_str_attribute",
  [sym_property_str] = "property_str",
  [sym_property_num_attribute] = "property_num_attribute",
  [sym_property_num_type] = "property_num_type",
  [sym_property_num] = "property_num",
  [sym_property_obj] = "property_obj",
  [sym_property_file_attribute] = "property_file_attribute",
  [sym_property_file] = "property_file",
  [sym_property_ref_attribute] = "property_ref_attribute",
  [sym_property_ref] = "property_ref",
  [sym_property_column] = "property_column",
  [sym_properties_block] = "properties_block",
  [sym_schema_properties] = "schema_properties",
  [sym_collection_block] = "collection_block",
  [sym_declaration] = "declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_property_str_repeat1] = "property_str_repeat1",
  [aux_sym_property_num_repeat1] = "property_num_repeat1",
  [aux_sym_property_file_repeat1] = "property_file_repeat1",
  [aux_sym_property_ref_repeat1] = "property_ref_repeat1",
  [aux_sym_properties_block_repeat1] = "properties_block_repeat1",
  [aux_sym_schema_properties_repeat1] = "schema_properties_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_array_identifier] = sym_array_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_declaration_name] = sym_declaration_name,
  [anon_sym_ATminLength] = anon_sym_ATminLength,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ATmaxLength] = anon_sym_ATmaxLength,
  [sym_property_str_type] = sym_property_str_type,
  [anon_sym_ATminimum] = anon_sym_ATminimum,
  [anon_sym_ATmaximum] = anon_sym_ATmaximum,
  [anon_sym_ATexclusiveMinimum] = anon_sym_ATexclusiveMinimum,
  [anon_sym_ATexclusiveMaximum] = anon_sym_ATexclusiveMaximum,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_num] = anon_sym_num,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATaccept] = anon_sym_ATaccept,
  [sym_property_file_type] = sym_property_file_type,
  [anon_sym_ATindexes] = anon_sym_ATindexes,
  [sym_properties_keyword] = sym_properties_keyword,
  [sym_collection_keyword] = sym_collection_keyword,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_string_array] = sym_string_array,
  [sym_property_str_attribute] = sym_property_str_attribute,
  [sym_property_str] = sym_property_str,
  [sym_property_num_attribute] = sym_property_num_attribute,
  [sym_property_num_type] = sym_property_num_type,
  [sym_property_num] = sym_property_num,
  [sym_property_obj] = sym_property_obj,
  [sym_property_file_attribute] = sym_property_file_attribute,
  [sym_property_file] = sym_property_file,
  [sym_property_ref_attribute] = sym_property_ref_attribute,
  [sym_property_ref] = sym_property_ref,
  [sym_property_column] = sym_property_column,
  [sym_properties_block] = sym_properties_block,
  [sym_schema_properties] = sym_schema_properties,
  [sym_collection_block] = sym_collection_block,
  [sym_declaration] = sym_declaration,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_property_str_repeat1] = aux_sym_property_str_repeat1,
  [aux_sym_property_num_repeat1] = aux_sym_property_num_repeat1,
  [aux_sym_property_file_repeat1] = aux_sym_property_file_repeat1,
  [aux_sym_property_ref_repeat1] = aux_sym_property_ref_repeat1,
  [aux_sym_properties_block_repeat1] = aux_sym_properties_block_repeat1,
  [aux_sym_schema_properties_repeat1] = aux_sym_schema_properties_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [sym_array_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATminLength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmaxLength] = {
    .visible = true,
    .named = false,
  },
  [sym_property_str_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATminimum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmaximum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATexclusiveMinimum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATexclusiveMaximum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_num] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATaccept] = {
    .visible = true,
    .named = false,
  },
  [sym_property_file_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATindexes] = {
    .visible = true,
    .named = false,
  },
  [sym_properties_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_property_str_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_property_str] = {
    .visible = true,
    .named = true,
  },
  [sym_property_num_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_property_num_type] = {
    .visible = true,
    .named = true,
  },
  [sym_property_num] = {
    .visible = true,
    .named = true,
  },
  [sym_property_obj] = {
    .visible = true,
    .named = true,
  },
  [sym_property_file_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_property_file] = {
    .visible = true,
    .named = true,
  },
  [sym_property_ref_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_property_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_property_column] = {
    .visible = true,
    .named = true,
  },
  [sym_properties_block] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_block] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_str_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_num_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_ref_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_properties_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_properties_repeat1] = {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_type, 0},
  [3] =
    {field_name, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      ADVANCE_MAP(
        '"', 98,
        '(', 116,
        ')', 117,
        ',', 107,
        '-', 4,
        '@', 9,
        'F', 34,
        '[', 106,
        ']', 108,
        'c', 64,
        'f', 11,
        'i', 59,
        'n', 84,
        'p', 69,
        's', 82,
        't', 70,
        '{', 129,
        '}', 130,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '}') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == '{') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == 'L') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == 'M') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 93:
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 94:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 95:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 96:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_array_identifier);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_declaration_name);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_declaration_name);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_declaration_name);
      if (lookahead == 'm') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_declaration_name);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_declaration_name);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_declaration_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATminLength);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ATmaxLength);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_property_str_type);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_property_str_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ATminimum);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ATmaximum);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ATexclusiveMinimum);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ATexclusiveMaximum);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_num);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATaccept);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_property_file_type);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_property_file_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ATindexes);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_properties_keyword);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_collection_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_ATminLength] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ATmaxLength] = ACTIONS(1),
    [sym_property_str_type] = ACTIONS(1),
    [anon_sym_ATminimum] = ACTIONS(1),
    [anon_sym_ATmaximum] = ACTIONS(1),
    [anon_sym_ATexclusiveMinimum] = ACTIONS(1),
    [anon_sym_ATexclusiveMaximum] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_num] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATaccept] = ACTIONS(1),
    [sym_property_file_type] = ACTIONS(1),
    [anon_sym_ATindexes] = ACTIONS(1),
    [sym_properties_keyword] = ACTIONS(1),
    [sym_collection_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(63),
    [sym_comment] = STATE(1),
    [sym_declaration] = STATE(51),
    [aux_sym_program_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_collection_keyword] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      sym_array_identifier,
    ACTIONS(11), 1,
      sym_declaration_name,
    ACTIONS(13), 1,
      sym_property_str_type,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      sym_property_file_type,
    STATE(2), 1,
      sym_comment,
    STATE(6), 1,
      sym_property_num_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_num,
    STATE(41), 5,
      sym_property_str,
      sym_property_num,
      sym_property_obj,
      sym_property_file,
      sym_property_ref,
  [36] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_declaration_name,
    ACTIONS(13), 1,
      sym_property_str_type,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      sym_property_file_type,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_property_num_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_num,
    STATE(43), 5,
      sym_property_str,
      sym_property_num,
      sym_property_obj,
      sym_property_file,
      sym_property_ref,
  [69] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_property_num_attribute,
    ACTIONS(21), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym_comment,
      aux_sym_property_num_repeat1,
    ACTIONS(23), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [90] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(4), 1,
      aux_sym_property_num_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(12), 1,
      sym_property_num_attribute,
    ACTIONS(26), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
    ACTIONS(28), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [113] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(5), 1,
      aux_sym_property_num_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(12), 1,
      sym_property_num_attribute,
    ACTIONS(30), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
    ACTIONS(28), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [136] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_property_str_repeat1,
    STATE(20), 1,
      sym_property_str_attribute,
    ACTIONS(32), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
    ACTIONS(34), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
  [157] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(36), 6,
      sym_declaration_name,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [172] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(38), 6,
      sym_declaration_name,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [187] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      aux_sym_property_str_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(20), 1,
      sym_property_str_attribute,
    ACTIONS(34), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
    ACTIONS(40), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [208] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_property_str_attribute,
    ACTIONS(42), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
    ACTIONS(44), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
    STATE(11), 2,
      sym_comment,
      aux_sym_property_str_repeat1,
  [227] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(47), 6,
      sym_declaration_name,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [242] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      anon_sym_ATaccept,
    STATE(13), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_property_file_repeat1,
    STATE(36), 1,
      sym_property_file_attribute,
    ACTIONS(49), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [262] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      anon_sym_ATindexes,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_property_ref_repeat1,
    STATE(34), 1,
      sym_property_ref_attribute,
    ACTIONS(53), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [282] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(59), 1,
      anon_sym_ATindexes,
    STATE(34), 1,
      sym_property_ref_attribute,
    ACTIONS(57), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_comment,
      aux_sym_property_ref_repeat1,
  [300] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      anon_sym_ATaccept,
    STATE(13), 1,
      aux_sym_property_file_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(36), 1,
      sym_property_file_attribute,
    ACTIONS(62), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [320] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      anon_sym_ATindexes,
    STATE(14), 1,
      aux_sym_property_ref_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(34), 1,
      sym_property_ref_attribute,
    ACTIONS(64), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [340] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      anon_sym_ATaccept,
    STATE(36), 1,
      sym_property_file_attribute,
    ACTIONS(66), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_comment,
      aux_sym_property_file_repeat1,
  [358] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      sym_declaration_name,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_properties_block_repeat1,
    STATE(39), 1,
      sym_property_column,
  [377] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(75), 4,
      sym_declaration_name,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
      anon_sym_RBRACE,
  [390] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(77), 4,
      sym_declaration_name,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
      anon_sym_RBRACE,
  [403] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(79), 1,
      sym_declaration_name,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_property_column,
    STATE(22), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [420] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      sym_declaration_name,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_properties_block_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(39), 1,
      sym_property_column,
  [439] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_collection_keyword,
    STATE(51), 1,
      sym_declaration,
    STATE(24), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [456] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_collection_keyword,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_program_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(51), 1,
      sym_declaration,
  [475] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym_properties_keyword,
    STATE(26), 2,
      sym_comment,
      aux_sym_schema_properties_repeat1,
  [489] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_string_array_repeat1,
  [505] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(28), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [519] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      sym_properties_keyword,
    STATE(29), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_schema_properties_repeat1,
    STATE(55), 1,
      sym_schema_properties,
  [535] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_string_array_repeat1,
    STATE(30), 1,
      sym_comment,
  [551] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(111), 3,
      sym_declaration_name,
      anon_sym_RBRACE,
      anon_sym_ATaccept,
  [563] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(113), 3,
      sym_declaration_name,
      anon_sym_RBRACE,
      anon_sym_ATindexes,
  [575] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      sym_properties_keyword,
    STATE(33), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_schema_properties_repeat1,
    STATE(62), 1,
      sym_schema_properties,
  [591] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(115), 3,
      sym_declaration_name,
      anon_sym_RBRACE,
      anon_sym_ATindexes,
  [603] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      sym_properties_keyword,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_schema_properties_repeat1,
    STATE(35), 1,
      sym_comment,
  [619] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(119), 3,
      sym_declaration_name,
      anon_sym_RBRACE,
      anon_sym_ATaccept,
  [631] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_comment,
    STATE(47), 1,
      sym_collection_block,
  [644] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      sym_properties_keyword,
  [655] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(123), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [666] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [677] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [688] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      sym_properties_keyword,
  [699] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [710] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_RBRACE,
      sym_properties_keyword,
  [721] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_properties_block,
    STATE(45), 1,
      sym_comment,
  [734] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_comment,
    STATE(56), 1,
      sym_string_array,
  [747] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [758] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(139), 1,
      sym_string,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      sym_comment,
  [771] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [782] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(145), 2,
      sym_declaration_name,
      anon_sym_RBRACE,
  [793] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [804] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      sym_number,
    STATE(52), 1,
      sym_comment,
  [814] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_comment,
  [824] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(153), 1,
      sym_number,
    STATE(54), 1,
      sym_comment,
  [834] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
  [844] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_comment,
  [854] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_comment,
  [864] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_comment,
  [874] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_comment,
  [884] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(165), 1,
      sym_number,
    STATE(60), 1,
      sym_comment,
  [894] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_comment,
  [904] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_comment,
  [914] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_comment,
  [924] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_comment,
  [934] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(175), 1,
      sym_declaration_name,
    STATE(65), 1,
      sym_comment,
  [944] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(177), 1,
      sym_string,
    STATE(66), 1,
      sym_comment,
  [954] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_comment,
  [964] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_comment,
  [974] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_comment,
  [984] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_comment,
  [994] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 227,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 262,
  [SMALL_STATE(15)] = 282,
  [SMALL_STATE(16)] = 300,
  [SMALL_STATE(17)] = 320,
  [SMALL_STATE(18)] = 340,
  [SMALL_STATE(19)] = 358,
  [SMALL_STATE(20)] = 377,
  [SMALL_STATE(21)] = 390,
  [SMALL_STATE(22)] = 403,
  [SMALL_STATE(23)] = 420,
  [SMALL_STATE(24)] = 439,
  [SMALL_STATE(25)] = 456,
  [SMALL_STATE(26)] = 475,
  [SMALL_STATE(27)] = 489,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 519,
  [SMALL_STATE(30)] = 535,
  [SMALL_STATE(31)] = 551,
  [SMALL_STATE(32)] = 563,
  [SMALL_STATE(33)] = 575,
  [SMALL_STATE(34)] = 591,
  [SMALL_STATE(35)] = 603,
  [SMALL_STATE(36)] = 619,
  [SMALL_STATE(37)] = 631,
  [SMALL_STATE(38)] = 644,
  [SMALL_STATE(39)] = 655,
  [SMALL_STATE(40)] = 666,
  [SMALL_STATE(41)] = 677,
  [SMALL_STATE(42)] = 688,
  [SMALL_STATE(43)] = 699,
  [SMALL_STATE(44)] = 710,
  [SMALL_STATE(45)] = 721,
  [SMALL_STATE(46)] = 734,
  [SMALL_STATE(47)] = 747,
  [SMALL_STATE(48)] = 758,
  [SMALL_STATE(49)] = 771,
  [SMALL_STATE(50)] = 782,
  [SMALL_STATE(51)] = 793,
  [SMALL_STATE(52)] = 804,
  [SMALL_STATE(53)] = 814,
  [SMALL_STATE(54)] = 824,
  [SMALL_STATE(55)] = 834,
  [SMALL_STATE(56)] = 844,
  [SMALL_STATE(57)] = 854,
  [SMALL_STATE(58)] = 864,
  [SMALL_STATE(59)] = 874,
  [SMALL_STATE(60)] = 884,
  [SMALL_STATE(61)] = 894,
  [SMALL_STATE(62)] = 904,
  [SMALL_STATE(63)] = 914,
  [SMALL_STATE(64)] = 924,
  [SMALL_STATE(65)] = 934,
  [SMALL_STATE(66)] = 944,
  [SMALL_STATE(67)] = 954,
  [SMALL_STATE(68)] = 964,
  [SMALL_STATE(69)] = 974,
  [SMALL_STATE(70)] = 984,
  [SMALL_STATE(71)] = 994,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num, 2, 0, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num, 1, 0, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str, 2, 0, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num_attribute, 4, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num_type, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str, 1, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file, 2, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref, 2, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file, 1, 0, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref, 1, 0, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str_attribute, 4, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file_attribute, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref_attribute, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_properties, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_column, 2, 0, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_column, 3, 0, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_block, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_obj, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_aeria(void) {
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
