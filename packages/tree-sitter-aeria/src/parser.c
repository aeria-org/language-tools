#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 1
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  sym_number = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  sym_quoted_string = 5,
  sym_array_identifier = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  sym_word = 10,
  anon_sym_AT = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_in = 18,
  anon_sym_GT = 19,
  anon_sym_LT = 20,
  anon_sym_AMP_AMP = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_ATcondition = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_properties = 26,
  anon_sym_writable = 27,
  anon_sym_required = 28,
  anon_sym_immutable = 29,
  anon_sym_str = 30,
  anon_sym_num = 31,
  anon_sym_int = 32,
  anon_sym_bool = 33,
  anon_sym_enum = 34,
  anon_sym_const = 35,
  anon_sym_icon = 36,
  anon_sym_form = 37,
  anon_sym_filters = 38,
  anon_sym_indexes = 39,
  anon_sym_presets = 40,
  anon_sym_table = 41,
  anon_sym_tableMeta = 42,
  anon_sym_functions = 43,
  anon_sym_QMARK = 44,
  anon_sym_collection = 45,
  sym_program = 46,
  sym_comment = 47,
  sym_boolean = 48,
  sym_array = 49,
  sym_collection_name = 50,
  sym_attribute = 51,
  sym_binary_operator = 52,
  sym_logical_concatenator_operator = 53,
  sym_binary_operation = 54,
  sym_condition_expression = 55,
  sym_condition = 56,
  sym_required_block = 57,
  sym_writable_block = 58,
  sym_immutable_block = 59,
  sym_schema_properties = 60,
  sym_properties_column_type = 61,
  sym_properties_column = 62,
  sym_properties_block = 63,
  sym_collection_icon = 64,
  sym_collection_keyed_list = 65,
  sym_collection_functions = 66,
  sym_collection = 67,
  sym_declaration = 68,
  aux_sym_program_repeat1 = 69,
  aux_sym_array_repeat1 = 70,
  aux_sym_required_block_repeat1 = 71,
  aux_sym_writable_block_repeat1 = 72,
  aux_sym_schema_properties_repeat1 = 73,
  aux_sym_properties_column_repeat1 = 74,
  aux_sym_properties_block_repeat1 = 75,
  aux_sym_collection_keyed_list_repeat1 = 76,
  aux_sym_collection_functions_repeat1 = 77,
  aux_sym_collection_repeat1 = 78,
  anon_alias_sym_collection_name = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_quoted_string] = "quoted_string",
  [sym_array_identifier] = "array_identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_word] = "word",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_in] = "in",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_ATcondition] = "@condition",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_properties] = "properties",
  [anon_sym_writable] = "writable",
  [anon_sym_required] = "required",
  [anon_sym_immutable] = "immutable",
  [anon_sym_str] = "str",
  [anon_sym_num] = "num",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_enum] = "enum",
  [anon_sym_const] = "const",
  [anon_sym_icon] = "icon",
  [anon_sym_form] = "form",
  [anon_sym_filters] = "filters",
  [anon_sym_indexes] = "indexes",
  [anon_sym_presets] = "presets",
  [anon_sym_table] = "table",
  [anon_sym_tableMeta] = "tableMeta",
  [anon_sym_functions] = "functions",
  [anon_sym_QMARK] = "\?",
  [anon_sym_collection] = "collection",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [sym_array] = "array",
  [sym_collection_name] = "collection_name",
  [sym_attribute] = "attribute",
  [sym_binary_operator] = "binary_operator",
  [sym_logical_concatenator_operator] = "logical_concatenator_operator",
  [sym_binary_operation] = "binary_operation",
  [sym_condition_expression] = "condition_expression",
  [sym_condition] = "condition",
  [sym_required_block] = "required_block",
  [sym_writable_block] = "writable_block",
  [sym_immutable_block] = "immutable_block",
  [sym_schema_properties] = "schema_properties",
  [sym_properties_column_type] = "properties_column_type",
  [sym_properties_column] = "properties_column",
  [sym_properties_block] = "properties_block",
  [sym_collection_icon] = "collection_icon",
  [sym_collection_keyed_list] = "collection_keyed_list",
  [sym_collection_functions] = "collection_functions",
  [sym_collection] = "collection",
  [sym_declaration] = "declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_required_block_repeat1] = "required_block_repeat1",
  [aux_sym_writable_block_repeat1] = "writable_block_repeat1",
  [aux_sym_schema_properties_repeat1] = "schema_properties_repeat1",
  [aux_sym_properties_column_repeat1] = "properties_column_repeat1",
  [aux_sym_properties_block_repeat1] = "properties_block_repeat1",
  [aux_sym_collection_keyed_list_repeat1] = "collection_keyed_list_repeat1",
  [aux_sym_collection_functions_repeat1] = "collection_functions_repeat1",
  [aux_sym_collection_repeat1] = "collection_repeat1",
  [anon_alias_sym_collection_name] = "collection_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_quoted_string] = sym_quoted_string,
  [sym_array_identifier] = sym_array_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_word] = sym_word,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_ATcondition] = anon_sym_ATcondition,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_properties] = anon_sym_properties,
  [anon_sym_writable] = anon_sym_writable,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_immutable] = anon_sym_immutable,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_num] = anon_sym_num,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_form] = anon_sym_form,
  [anon_sym_filters] = anon_sym_filters,
  [anon_sym_indexes] = anon_sym_indexes,
  [anon_sym_presets] = anon_sym_presets,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_tableMeta] = anon_sym_tableMeta,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_collection] = anon_sym_collection,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [sym_array] = sym_array,
  [sym_collection_name] = sym_collection_name,
  [sym_attribute] = sym_attribute,
  [sym_binary_operator] = sym_binary_operator,
  [sym_logical_concatenator_operator] = sym_logical_concatenator_operator,
  [sym_binary_operation] = sym_binary_operation,
  [sym_condition_expression] = sym_condition_expression,
  [sym_condition] = sym_condition,
  [sym_required_block] = sym_required_block,
  [sym_writable_block] = sym_writable_block,
  [sym_immutable_block] = sym_immutable_block,
  [sym_schema_properties] = sym_schema_properties,
  [sym_properties_column_type] = sym_properties_column_type,
  [sym_properties_column] = sym_properties_column,
  [sym_properties_block] = sym_properties_block,
  [sym_collection_icon] = sym_collection_icon,
  [sym_collection_keyed_list] = sym_collection_keyed_list,
  [sym_collection_functions] = sym_collection_functions,
  [sym_collection] = sym_collection,
  [sym_declaration] = sym_declaration,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_required_block_repeat1] = aux_sym_required_block_repeat1,
  [aux_sym_writable_block_repeat1] = aux_sym_writable_block_repeat1,
  [aux_sym_schema_properties_repeat1] = aux_sym_schema_properties_repeat1,
  [aux_sym_properties_column_repeat1] = aux_sym_properties_column_repeat1,
  [aux_sym_properties_block_repeat1] = aux_sym_properties_block_repeat1,
  [aux_sym_collection_keyed_list_repeat1] = aux_sym_collection_keyed_list_repeat1,
  [aux_sym_collection_functions_repeat1] = aux_sym_collection_functions_repeat1,
  [aux_sym_collection_repeat1] = aux_sym_collection_repeat1,
  [anon_alias_sym_collection_name] = anon_alias_sym_collection_name,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
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
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcondition] = {
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
  [anon_sym_properties] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_num] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_form] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_presets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tableMeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collection] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_concatenator_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_required_block] = {
    .visible = true,
    .named = true,
  },
  [sym_writable_block] = {
    .visible = true,
    .named = true,
  },
  [sym_immutable_block] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_properties_column_type] = {
    .visible = true,
    .named = true,
  },
  [sym_properties_column] = {
    .visible = true,
    .named = true,
  },
  [sym_properties_block] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_keyed_list] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_functions] = {
    .visible = true,
    .named = true,
  },
  [sym_collection] = {
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
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_required_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_writable_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_properties_column_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_properties_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_keyed_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_functions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_collection_name] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_property_name = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_property_name] = "property_name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_property_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_collection_name,
  },
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
  [65] = 18,
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
  [84] = 20,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '!', 11,
        '"', 129,
        '&', 3,
        '(', 180,
        ')', 181,
        ',', 139,
        '/', 10,
        '<', 189,
        '=', 12,
        '>', 188,
        '?', 222,
        '@', 179,
        '[', 138,
        ']', 140,
        'b', 82,
        'c', 79,
        'e', 78,
        'f', 14,
        'i', 23,
        'n', 121,
        'p', 91,
        'r', 31,
        's', 113,
        't', 16,
        'w', 92,
        '{', 193,
        '|', 127,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(190);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '?') ADVANCE(222);
      if (lookahead == '@') ADVANCE(179);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '}') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(179);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '}') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '}') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '/', 10,
        '[', 13,
        'b', 80,
        'c', 81,
        'e', 72,
        'i', 73,
        'n', 120,
        's', 110,
        '{', 193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '/', 10,
        'f', 48,
        'i', 24,
        'p', 91,
        'r', 31,
        't', 15,
        'w', 92,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '}') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(137);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'q') ADVANCE(122);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 127:
      if (lookahead == '|') ADVANCE(191);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 130:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '!', 11,
        '"', 129,
        '&', 3,
        '(', 180,
        ')', 181,
        ',', 139,
        '/', 10,
        '<', 189,
        '=', 12,
        '>', 188,
        '@', 179,
        '[', 138,
        ']', 140,
        'b', 82,
        'c', 79,
        'e', 78,
        'f', 14,
        'i', 23,
        'n', 121,
        'p', 91,
        'r', 31,
        's', 113,
        't', 16,
        'w', 92,
        '{', 193,
        '|', 127,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_array_identifier);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'q') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATcondition);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_properties);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_properties);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_writable);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_writable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_required);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_immutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_num);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_form);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_filters);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_indexes);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_presets);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_tableMeta);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_collection);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_properties] = ACTIONS(1),
    [anon_sym_writable] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_immutable] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_num] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_form] = ACTIONS(1),
    [anon_sym_filters] = ACTIONS(1),
    [anon_sym_indexes] = ACTIONS(1),
    [anon_sym_presets] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_tableMeta] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_collection] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(98),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(95),
    [sym_declaration] = STATE(90),
    [aux_sym_program_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_collection] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_properties,
    ACTIONS(15), 1,
      anon_sym_icon,
    ACTIONS(17), 1,
      anon_sym_table,
    ACTIONS(19), 1,
      anon_sym_functions,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_collection_repeat1,
    STATE(11), 3,
      sym_collection_icon,
      sym_collection_keyed_list,
      sym_collection_functions,
    ACTIONS(13), 8,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
  [40] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_properties,
    ACTIONS(29), 1,
      anon_sym_icon,
    ACTIONS(32), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_functions,
    STATE(3), 2,
      sym_comment,
      aux_sym_collection_repeat1,
    STATE(11), 3,
      sym_collection_icon,
      sym_collection_keyed_list,
      sym_collection_functions,
    ACTIONS(26), 8,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
  [78] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_properties,
    ACTIONS(15), 1,
      anon_sym_icon,
    ACTIONS(17), 1,
      anon_sym_table,
    ACTIONS(19), 1,
      anon_sym_functions,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_collection_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(11), 3,
      sym_collection_icon,
      sym_collection_keyed_list,
      sym_collection_functions,
    ACTIONS(13), 8,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
  [118] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(42), 1,
      anon_sym_table,
    STATE(5), 1,
      sym_comment,
    ACTIONS(40), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [142] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(46), 1,
      anon_sym_table,
    STATE(6), 1,
      sym_comment,
    ACTIONS(44), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [166] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 1,
      anon_sym_table,
    STATE(7), 1,
      sym_comment,
    ACTIONS(48), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [190] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      anon_sym_table,
    STATE(8), 1,
      sym_comment,
    ACTIONS(52), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [214] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(58), 1,
      anon_sym_table,
    STATE(9), 1,
      sym_comment,
    ACTIONS(56), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [238] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_table,
    STATE(10), 1,
      sym_comment,
    ACTIONS(21), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [262] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(64), 1,
      anon_sym_table,
    STATE(11), 1,
      sym_comment,
    ACTIONS(62), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [286] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      anon_sym_table,
    STATE(12), 1,
      sym_comment,
    ACTIONS(66), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [310] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(72), 1,
      anon_sym_table,
    STATE(13), 1,
      sym_comment,
    ACTIONS(70), 12,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
      anon_sym_icon,
      anon_sym_form,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
  [334] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(74), 1,
      sym_array_identifier,
    ACTIONS(76), 1,
      sym_word,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_comment,
    STATE(39), 2,
      sym_collection_name,
      sym_properties_column_type,
    ACTIONS(80), 6,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
  [362] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(76), 1,
      sym_word,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_comment,
    STATE(34), 2,
      sym_collection_name,
      sym_properties_column_type,
    ACTIONS(80), 6,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
  [387] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(84), 10,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [406] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    STATE(28), 1,
      sym_binary_operator,
    ACTIONS(88), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [427] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(90), 1,
      sym_word,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_comment,
      aux_sym_writable_block_repeat1,
    ACTIONS(95), 4,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [447] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      sym_word,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_writable_block_repeat1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(101), 4,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [469] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_comment,
    ACTIONS(103), 5,
      sym_word,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [486] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_QMARK,
    STATE(21), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(107), 2,
      sym_word,
      anon_sym_RBRACE,
  [509] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(113), 1,
      anon_sym_properties,
    ACTIONS(115), 1,
      anon_sym_writable,
    ACTIONS(117), 1,
      anon_sym_required,
    ACTIONS(119), 1,
      anon_sym_immutable,
    STATE(22), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_schema_properties_repeat1,
    STATE(111), 1,
      sym_schema_properties,
  [534] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_properties,
    ACTIONS(126), 1,
      anon_sym_writable,
    ACTIONS(129), 1,
      anon_sym_required,
    ACTIONS(132), 1,
      anon_sym_immutable,
    STATE(23), 2,
      sym_comment,
      aux_sym_schema_properties_repeat1,
  [557] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym_comment,
    STATE(77), 1,
      sym_boolean,
    ACTIONS(135), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
  [578] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(113), 1,
      anon_sym_properties,
    ACTIONS(115), 1,
      anon_sym_writable,
    ACTIONS(117), 1,
      anon_sym_required,
    ACTIONS(119), 1,
      anon_sym_immutable,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_schema_properties_repeat1,
    STATE(25), 1,
      sym_comment,
  [603] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(113), 1,
      anon_sym_properties,
    ACTIONS(115), 1,
      anon_sym_writable,
    ACTIONS(117), 1,
      anon_sym_required,
    ACTIONS(119), 1,
      anon_sym_immutable,
    STATE(25), 1,
      aux_sym_schema_properties_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(106), 1,
      sym_schema_properties,
  [628] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(143), 5,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [642] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    STATE(66), 1,
      sym_boolean,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      sym_number,
      sym_quoted_string,
  [660] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(147), 5,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [674] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(30), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(149), 2,
      sym_word,
      anon_sym_RBRACE,
  [694] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(151), 2,
      sym_word,
      anon_sym_RBRACE,
  [714] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(32), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(153), 2,
      sym_word,
      anon_sym_RBRACE,
  [734] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(155), 5,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [748] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(157), 2,
      sym_word,
      anon_sym_RBRACE,
  [768] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(121), 5,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [782] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(153), 2,
      sym_word,
      anon_sym_RBRACE,
  [802] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_collection,
    STATE(90), 1,
      sym_declaration,
    STATE(95), 1,
      sym_collection,
    STATE(37), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [822] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(38), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(151), 2,
      sym_word,
      anon_sym_RBRACE,
  [842] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(39), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(164), 2,
      sym_word,
      anon_sym_RBRACE,
  [862] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(40), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(166), 2,
      sym_word,
      anon_sym_RBRACE,
  [882] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_properties_column_repeat1,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(168), 2,
      sym_word,
      anon_sym_RBRACE,
  [902] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      anon_sym_AT,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(170), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym_comment,
      aux_sym_properties_column_repeat1,
  [920] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(42), 1,
      aux_sym_properties_column_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(157), 2,
      sym_word,
      anon_sym_RBRACE,
  [940] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(42), 1,
      aux_sym_properties_column_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(175), 2,
      sym_word,
      anon_sym_RBRACE,
  [960] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_collection,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_program_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(90), 1,
      sym_declaration,
    STATE(95), 1,
      sym_collection,
  [982] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(179), 5,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [996] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(41), 1,
      aux_sym_properties_column_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(181), 2,
      sym_word,
      anon_sym_RBRACE,
  [1016] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(42), 1,
      aux_sym_properties_column_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(181), 2,
      sym_word,
      anon_sym_RBRACE,
  [1036] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(183), 5,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_writable,
      anon_sym_required,
      anon_sym_immutable,
  [1050] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_boolean,
    STATE(35), 1,
      sym_immutable_block,
    STATE(50), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
  [1070] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    STATE(93), 1,
      sym_boolean,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 2,
      sym_number,
      sym_quoted_string,
  [1088] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_properties_block_repeat1,
    STATE(86), 1,
      sym_properties_column,
  [1107] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_comment,
    ACTIONS(193), 3,
      sym_word,
      anon_sym_AT,
      anon_sym_RBRACE,
  [1122] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(197), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_quoted_string,
  [1135] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_comment,
    STATE(88), 1,
      sym_logical_concatenator_operator,
    ACTIONS(201), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1152] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(203), 4,
      sym_word,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1165] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(205), 1,
      sym_word,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_properties_column,
    STATE(57), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [1182] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      sym_word,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_properties_block_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(86), 1,
      sym_properties_column,
  [1201] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_ATcondition,
    STATE(59), 1,
      sym_comment,
    STATE(82), 1,
      sym_condition,
    ACTIONS(212), 2,
      sym_word,
      anon_sym_RBRACE,
  [1218] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_array_repeat1,
  [1234] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(220), 1,
      sym_word,
    STATE(19), 1,
      aux_sym_writable_block_repeat1,
    STATE(35), 1,
      sym_writable_block,
    STATE(61), 1,
      sym_comment,
  [1250] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      sym_word,
    STATE(62), 2,
      sym_comment,
      aux_sym_collection_functions_repeat1,
  [1264] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_word,
    STATE(63), 2,
      sym_comment,
      aux_sym_collection_keyed_list_repeat1,
  [1278] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(228), 3,
      sym_word,
      anon_sym_AT,
      anon_sym_RBRACE,
  [1290] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      sym_word,
    STATE(65), 2,
      sym_comment,
      aux_sym_writable_block_repeat1,
  [1304] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1316] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(235), 3,
      sym_word,
      anon_sym_AT,
      anon_sym_RBRACE,
  [1328] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(237), 1,
      sym_word,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_collection_functions_repeat1,
    STATE(68), 1,
      sym_comment,
  [1344] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(241), 1,
      sym_word,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_collection_keyed_list_repeat1,
    STATE(69), 1,
      sym_comment,
  [1360] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(245), 1,
      sym_word,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_required_block_repeat1,
  [1376] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    STATE(71), 2,
      sym_comment,
      aux_sym_array_repeat1,
  [1390] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      sym_word,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_writable_block_repeat1,
  [1406] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(258), 1,
      sym_word,
    STATE(55), 1,
      sym_binary_operation,
    STATE(73), 1,
      sym_comment,
    STATE(99), 1,
      sym_condition_expression,
  [1422] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(237), 1,
      sym_word,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_collection_functions_repeat1,
    STATE(74), 1,
      sym_comment,
  [1438] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(241), 1,
      sym_word,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_collection_keyed_list_repeat1,
    STATE(75), 1,
      sym_comment,
  [1454] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(264), 1,
      sym_number,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_comment,
    STATE(110), 1,
      sym_array,
  [1470] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_array_repeat1,
    STATE(77), 1,
      sym_comment,
  [1486] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(270), 3,
      sym_word,
      anon_sym_AT,
      anon_sym_RBRACE,
  [1498] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(245), 1,
      sym_word,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_required_block_repeat1,
  [1514] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(274), 1,
      sym_word,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
  [1528] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      sym_word,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_writable_block_repeat1,
    STATE(81), 1,
      sym_comment,
  [1544] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(277), 2,
      sym_word,
      anon_sym_RBRACE,
  [1555] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_properties_block,
    STATE(83), 1,
      sym_comment,
  [1568] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(84), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym_word,
      anon_sym_RBRACE,
  [1579] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [1590] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(285), 2,
      sym_word,
      anon_sym_RBRACE,
  [1601] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym_word,
      anon_sym_RBRACE,
  [1612] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(258), 1,
      sym_word,
    STATE(88), 1,
      sym_comment,
    STATE(109), 1,
      sym_binary_operation,
  [1625] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(289), 1,
      sym_word,
    STATE(89), 1,
      sym_comment,
    STATE(108), 1,
      sym_collection_name,
  [1638] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [1649] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_required_block,
    STATE(91), 1,
      sym_comment,
  [1662] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [1673] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1684] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_properties_block,
    STATE(94), 1,
      sym_comment,
  [1697] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [1708] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_comment,
  [1718] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_comment,
  [1728] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(98), 1,
      sym_comment,
  [1738] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_comment,
  [1748] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
  [1758] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
  [1768] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      sym_quoted_string,
    STATE(102), 1,
      sym_comment,
  [1778] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_comment,
  [1788] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(315), 1,
      sym_word,
    STATE(104), 1,
      sym_comment,
  [1798] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(317), 1,
      sym_word,
    STATE(105), 1,
      sym_comment,
  [1808] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_comment,
  [1818] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_comment,
  [1828] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_comment,
  [1838] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [1848] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_comment,
  [1858] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_comment,
  [1868] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 262,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 310,
  [SMALL_STATE(14)] = 334,
  [SMALL_STATE(15)] = 362,
  [SMALL_STATE(16)] = 387,
  [SMALL_STATE(17)] = 406,
  [SMALL_STATE(18)] = 427,
  [SMALL_STATE(19)] = 447,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 486,
  [SMALL_STATE(22)] = 509,
  [SMALL_STATE(23)] = 534,
  [SMALL_STATE(24)] = 557,
  [SMALL_STATE(25)] = 578,
  [SMALL_STATE(26)] = 603,
  [SMALL_STATE(27)] = 628,
  [SMALL_STATE(28)] = 642,
  [SMALL_STATE(29)] = 660,
  [SMALL_STATE(30)] = 674,
  [SMALL_STATE(31)] = 694,
  [SMALL_STATE(32)] = 714,
  [SMALL_STATE(33)] = 734,
  [SMALL_STATE(34)] = 748,
  [SMALL_STATE(35)] = 768,
  [SMALL_STATE(36)] = 782,
  [SMALL_STATE(37)] = 802,
  [SMALL_STATE(38)] = 822,
  [SMALL_STATE(39)] = 842,
  [SMALL_STATE(40)] = 862,
  [SMALL_STATE(41)] = 882,
  [SMALL_STATE(42)] = 902,
  [SMALL_STATE(43)] = 920,
  [SMALL_STATE(44)] = 940,
  [SMALL_STATE(45)] = 960,
  [SMALL_STATE(46)] = 982,
  [SMALL_STATE(47)] = 996,
  [SMALL_STATE(48)] = 1016,
  [SMALL_STATE(49)] = 1036,
  [SMALL_STATE(50)] = 1050,
  [SMALL_STATE(51)] = 1070,
  [SMALL_STATE(52)] = 1088,
  [SMALL_STATE(53)] = 1107,
  [SMALL_STATE(54)] = 1122,
  [SMALL_STATE(55)] = 1135,
  [SMALL_STATE(56)] = 1152,
  [SMALL_STATE(57)] = 1165,
  [SMALL_STATE(58)] = 1182,
  [SMALL_STATE(59)] = 1201,
  [SMALL_STATE(60)] = 1218,
  [SMALL_STATE(61)] = 1234,
  [SMALL_STATE(62)] = 1250,
  [SMALL_STATE(63)] = 1264,
  [SMALL_STATE(64)] = 1278,
  [SMALL_STATE(65)] = 1290,
  [SMALL_STATE(66)] = 1304,
  [SMALL_STATE(67)] = 1316,
  [SMALL_STATE(68)] = 1328,
  [SMALL_STATE(69)] = 1344,
  [SMALL_STATE(70)] = 1360,
  [SMALL_STATE(71)] = 1376,
  [SMALL_STATE(72)] = 1390,
  [SMALL_STATE(73)] = 1406,
  [SMALL_STATE(74)] = 1422,
  [SMALL_STATE(75)] = 1438,
  [SMALL_STATE(76)] = 1454,
  [SMALL_STATE(77)] = 1470,
  [SMALL_STATE(78)] = 1486,
  [SMALL_STATE(79)] = 1498,
  [SMALL_STATE(80)] = 1514,
  [SMALL_STATE(81)] = 1528,
  [SMALL_STATE(82)] = 1544,
  [SMALL_STATE(83)] = 1555,
  [SMALL_STATE(84)] = 1568,
  [SMALL_STATE(85)] = 1579,
  [SMALL_STATE(86)] = 1590,
  [SMALL_STATE(87)] = 1601,
  [SMALL_STATE(88)] = 1612,
  [SMALL_STATE(89)] = 1625,
  [SMALL_STATE(90)] = 1638,
  [SMALL_STATE(91)] = 1649,
  [SMALL_STATE(92)] = 1662,
  [SMALL_STATE(93)] = 1673,
  [SMALL_STATE(94)] = 1684,
  [SMALL_STATE(95)] = 1697,
  [SMALL_STATE(96)] = 1708,
  [SMALL_STATE(97)] = 1718,
  [SMALL_STATE(98)] = 1728,
  [SMALL_STATE(99)] = 1738,
  [SMALL_STATE(100)] = 1748,
  [SMALL_STATE(101)] = 1758,
  [SMALL_STATE(102)] = 1768,
  [SMALL_STATE(103)] = 1778,
  [SMALL_STATE(104)] = 1788,
  [SMALL_STATE(105)] = 1798,
  [SMALL_STATE(106)] = 1808,
  [SMALL_STATE(107)] = 1818,
  [SMALL_STATE(108)] = 1828,
  [SMALL_STATE(109)] = 1838,
  [SMALL_STATE(110)] = 1848,
  [SMALL_STATE(111)] = 1858,
  [SMALL_STATE(112)] = 1868,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_keyed_list, 4, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_keyed_list, 4, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_functions, 4, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_functions, 4, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties_block, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties_block, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_icon, 2, 0, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_icon, 2, 0, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_functions, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_functions, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_keyed_list, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_keyed_list, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_writable_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_writable_block_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_writable_block_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writable_block, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_writable_block, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_writable_block_repeat1, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_writable_block_repeat1, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_properties, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_block, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 6, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_block, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_name, 1, 0, 1),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 1, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_writable_block_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column_type, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4, 0, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 5, 0, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_concatenator_operator, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
