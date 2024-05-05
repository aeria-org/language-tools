#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_capitalized_word = 11,
  anon_sym_ATminLength = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_ATmaxLength = 15,
  sym_property_str_type = 16,
  anon_sym_ATminimum = 17,
  anon_sym_ATmaximum = 18,
  anon_sym_ATexclusiveMinimum = 19,
  anon_sym_ATexclusiveMaximum = 20,
  anon_sym_int = 21,
  anon_sym_num = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_ATaccept = 25,
  sym_property_file_type = 26,
  anon_sym_ATindexes = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_in = 32,
  anon_sym_GT = 33,
  anon_sym_LT = 34,
  anon_sym_AMP_AMP = 35,
  anon_sym_PIPE_PIPE = 36,
  anon_sym_ATcondition = 37,
  sym_properties_keyword = 38,
  sym_required_keyword = 39,
  sym_writable_keyword = 40,
  sym_immutable_keyword = 41,
  sym_functions_keyword = 42,
  anon_sym_get = 43,
  anon_sym_getAll = 44,
  anon_sym_insert = 45,
  anon_sym_remove = 46,
  anon_sym_removeAll = 47,
  anon_sym_removeFile = 48,
  anon_sym_upload = 49,
  sym_collection_keyword = 50,
  sym_program = 51,
  sym_comment = 52,
  sym_boolean = 53,
  sym_string_array = 54,
  sym_property_str_attribute = 55,
  sym_property_str = 56,
  sym_property_num_attribute = 57,
  sym_property_num_type = 58,
  sym_property_num = 59,
  sym_property_obj = 60,
  sym_property_file_attribute = 61,
  sym_property_file = 62,
  sym_property_ref_attribute = 63,
  sym_property_ref = 64,
  sym_binary_operator = 65,
  sym_logical_concatenator_operator = 66,
  sym_binary_operation = 67,
  sym_condition_expression = 68,
  sym_condition = 69,
  sym_property_column = 70,
  sym_properties_block = 71,
  sym_toplevel_required_block = 72,
  sym_required_block = 73,
  sym_writable_block = 74,
  sym_immutable_block = 75,
  sym_schema_properties = 76,
  sym_builtin_function = 77,
  sym_functions_block = 78,
  sym_collection_block = 79,
  sym_declaration = 80,
  aux_sym_program_repeat1 = 81,
  aux_sym_string_array_repeat1 = 82,
  aux_sym_property_str_repeat1 = 83,
  aux_sym_property_num_repeat1 = 84,
  aux_sym_property_file_repeat1 = 85,
  aux_sym_property_ref_repeat1 = 86,
  aux_sym_properties_block_repeat1 = 87,
  aux_sym_toplevel_required_block_repeat1 = 88,
  aux_sym_required_block_repeat1 = 89,
  aux_sym_schema_properties_repeat1 = 90,
  aux_sym_functions_block_repeat1 = 91,
  aux_sym_collection_block_repeat1 = 92,
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
  [sym_capitalized_word] = "capitalized_word",
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
  [sym_properties_keyword] = "properties_keyword",
  [sym_required_keyword] = "required_keyword",
  [sym_writable_keyword] = "writable_keyword",
  [sym_immutable_keyword] = "immutable_keyword",
  [sym_functions_keyword] = "functions_keyword",
  [anon_sym_get] = "get",
  [anon_sym_getAll] = "getAll",
  [anon_sym_insert] = "insert",
  [anon_sym_remove] = "remove",
  [anon_sym_removeAll] = "removeAll",
  [anon_sym_removeFile] = "removeFile",
  [anon_sym_upload] = "upload",
  [sym_collection_keyword] = "collection_keyword",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
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
  [sym_binary_operator] = "binary_operator",
  [sym_logical_concatenator_operator] = "logical_concatenator_operator",
  [sym_binary_operation] = "binary_operation",
  [sym_condition_expression] = "condition_expression",
  [sym_condition] = "condition",
  [sym_property_column] = "property_column",
  [sym_properties_block] = "properties_block",
  [sym_toplevel_required_block] = "toplevel_required_block",
  [sym_required_block] = "required_block",
  [sym_writable_block] = "writable_block",
  [sym_immutable_block] = "immutable_block",
  [sym_schema_properties] = "schema_properties",
  [sym_builtin_function] = "builtin_function",
  [sym_functions_block] = "functions_block",
  [sym_collection_block] = "collection_block",
  [sym_declaration] = "declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_property_str_repeat1] = "property_str_repeat1",
  [aux_sym_property_num_repeat1] = "property_num_repeat1",
  [aux_sym_property_file_repeat1] = "property_file_repeat1",
  [aux_sym_property_ref_repeat1] = "property_ref_repeat1",
  [aux_sym_properties_block_repeat1] = "properties_block_repeat1",
  [aux_sym_toplevel_required_block_repeat1] = "toplevel_required_block_repeat1",
  [aux_sym_required_block_repeat1] = "required_block_repeat1",
  [aux_sym_schema_properties_repeat1] = "schema_properties_repeat1",
  [aux_sym_functions_block_repeat1] = "functions_block_repeat1",
  [aux_sym_collection_block_repeat1] = "collection_block_repeat1",
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
  [sym_capitalized_word] = sym_capitalized_word,
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
  [sym_properties_keyword] = sym_properties_keyword,
  [sym_required_keyword] = sym_required_keyword,
  [sym_writable_keyword] = sym_writable_keyword,
  [sym_immutable_keyword] = sym_immutable_keyword,
  [sym_functions_keyword] = sym_functions_keyword,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_getAll] = anon_sym_getAll,
  [anon_sym_insert] = anon_sym_insert,
  [anon_sym_remove] = anon_sym_remove,
  [anon_sym_removeAll] = anon_sym_removeAll,
  [anon_sym_removeFile] = anon_sym_removeFile,
  [anon_sym_upload] = anon_sym_upload,
  [sym_collection_keyword] = sym_collection_keyword,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
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
  [sym_binary_operator] = sym_binary_operator,
  [sym_logical_concatenator_operator] = sym_logical_concatenator_operator,
  [sym_binary_operation] = sym_binary_operation,
  [sym_condition_expression] = sym_condition_expression,
  [sym_condition] = sym_condition,
  [sym_property_column] = sym_property_column,
  [sym_properties_block] = sym_properties_block,
  [sym_toplevel_required_block] = sym_toplevel_required_block,
  [sym_required_block] = sym_required_block,
  [sym_writable_block] = sym_writable_block,
  [sym_immutable_block] = sym_immutable_block,
  [sym_schema_properties] = sym_schema_properties,
  [sym_builtin_function] = sym_builtin_function,
  [sym_functions_block] = sym_functions_block,
  [sym_collection_block] = sym_collection_block,
  [sym_declaration] = sym_declaration,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_property_str_repeat1] = aux_sym_property_str_repeat1,
  [aux_sym_property_num_repeat1] = aux_sym_property_num_repeat1,
  [aux_sym_property_file_repeat1] = aux_sym_property_file_repeat1,
  [aux_sym_property_ref_repeat1] = aux_sym_property_ref_repeat1,
  [aux_sym_properties_block_repeat1] = aux_sym_properties_block_repeat1,
  [aux_sym_toplevel_required_block_repeat1] = aux_sym_toplevel_required_block_repeat1,
  [aux_sym_required_block_repeat1] = aux_sym_required_block_repeat1,
  [aux_sym_schema_properties_repeat1] = aux_sym_schema_properties_repeat1,
  [aux_sym_functions_block_repeat1] = aux_sym_functions_block_repeat1,
  [aux_sym_collection_block_repeat1] = aux_sym_collection_block_repeat1,
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
  [sym_capitalized_word] = {
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
  [sym_properties_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_required_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_writable_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_immutable_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_functions_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getAll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_removeAll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_removeFile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upload] = {
    .visible = true,
    .named = false,
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
  [sym_boolean] = {
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
  [sym_property_column] = {
    .visible = true,
    .named = true,
  },
  [sym_properties_block] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel_required_block] = {
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
  [sym_builtin_function] = {
    .visible = true,
    .named = true,
  },
  [sym_functions_block] = {
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
  [aux_sym_toplevel_required_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_required_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functions_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_block_repeat1] = {
    .visible = false,
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_type, 0},
  [3] =
    {field_name, 0},
  [4] =
    {field_property_name, 0},
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
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 14,
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
  [32] = 21,
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
  [74] = 14,
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
  [88] = 21,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(169);
      ADVANCE_MAP(
        '!', 10,
        '"', 168,
        '&', 3,
        '(', 238,
        ')', 239,
        ',', 177,
        '-', 9,
        '<', 260,
        '=', 11,
        '>', 259,
        '@', 16,
        'F', 60,
        '[', 176,
        ']', 178,
        'c', 110,
        'f', 19,
        'g', 45,
        'i', 84,
        'n', 150,
        'p', 126,
        'r', 34,
        's', 144,
        't', 124,
        'u', 119,
        'w', 122,
        '{', 248,
        '|', 165,
        '}', 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '<') ADVANCE(260);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(261);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '}') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '{') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '}') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '}') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '}') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(175);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(151);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 159:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 160:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 161:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 162:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 163:
      if (lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 165:
      if (lookahead == '|') ADVANCE(262);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_array_identifier);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'q') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_ATminLength);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_ATmaxLength);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_property_str_type);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_ATminimum);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_ATmaximum);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_ATexclusiveMinimum);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_ATexclusiveMaximum);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ATaccept);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_property_file_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ATindexes);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ATcondition);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_properties_keyword);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_properties_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_required_keyword);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_required_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_writable_keyword);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_writable_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_immutable_keyword);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_immutable_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_functions_keyword);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_functions_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'A') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_getAll);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_getAll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_insert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == 'A') ADVANCE(205);
      if (lookahead == 'F') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(69);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_removeAll);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_removeAll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_removeFile);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_removeFile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_upload);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_upload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_collection_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {(TSStateId)(-1)},
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
    [sym_capitalized_word] = ACTIONS(1),
    [anon_sym_ATminLength] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ATmaxLength] = ACTIONS(1),
    [sym_property_str_type] = ACTIONS(1),
    [anon_sym_ATminimum] = ACTIONS(1),
    [anon_sym_ATmaximum] = ACTIONS(1),
    [anon_sym_ATexclusiveMinimum] = ACTIONS(1),
    [anon_sym_ATexclusiveMaximum] = ACTIONS(1),
    [anon_sym_num] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATaccept] = ACTIONS(1),
    [sym_property_file_type] = ACTIONS(1),
    [anon_sym_ATindexes] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_ATcondition] = ACTIONS(1),
    [sym_properties_keyword] = ACTIONS(1),
    [sym_required_keyword] = ACTIONS(1),
    [sym_writable_keyword] = ACTIONS(1),
    [sym_immutable_keyword] = ACTIONS(1),
    [sym_functions_keyword] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_getAll] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_remove] = ACTIONS(1),
    [anon_sym_removeAll] = ACTIONS(1),
    [anon_sym_removeFile] = ACTIONS(1),
    [anon_sym_upload] = ACTIONS(1),
    [sym_collection_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(120),
    [sym_comment] = STATE(1),
    [sym_declaration] = STATE(83),
    [aux_sym_program_repeat1] = STATE(60),
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
      sym_capitalized_word,
    ACTIONS(13), 1,
      sym_property_str_type,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      sym_property_file_type,
    STATE(2), 1,
      sym_comment,
    STATE(11), 1,
      sym_property_num_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_num,
    STATE(87), 5,
      sym_property_str,
      sym_property_num,
      sym_property_obj,
      sym_property_file,
      sym_property_ref,
  [36] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_capitalized_word,
    ACTIONS(13), 1,
      sym_property_str_type,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      sym_property_file_type,
    STATE(3), 1,
      sym_comment,
    STATE(11), 1,
      sym_property_num_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_num,
    STATE(95), 5,
      sym_property_str,
      sym_property_num,
      sym_property_obj,
      sym_property_file,
      sym_property_ref,
  [69] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym_word,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_functions_block_repeat1,
    STATE(8), 1,
      sym_builtin_function,
    ACTIONS(25), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [97] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      sym_word,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_builtin_function,
    STATE(5), 2,
      sym_comment,
      aux_sym_functions_block_repeat1,
    ACTIONS(32), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [123] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym_word,
    STATE(4), 1,
      aux_sym_functions_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      sym_builtin_function,
    ACTIONS(25), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [148] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    ACTIONS(35), 8,
      sym_word,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [168] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_comment,
    ACTIONS(39), 8,
      sym_word,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [188] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(43), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [206] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_property_num_repeat1,
    STATE(36), 1,
      sym_property_num_attribute,
    ACTIONS(45), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(47), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [229] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      aux_sym_property_num_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(36), 1,
      sym_property_num_attribute,
    ACTIONS(49), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(47), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [252] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    STATE(43), 1,
      sym_binary_operator,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [273] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_property_num_attribute,
    ACTIONS(55), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_comment,
      aux_sym_property_num_repeat1,
    ACTIONS(57), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [294] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      sym_word,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
    ACTIONS(65), 5,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [315] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(67), 1,
      sym_word,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_required_block_repeat1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(71), 5,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [338] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym_properties_keyword,
    ACTIONS(78), 1,
      sym_required_keyword,
    ACTIONS(81), 1,
      sym_writable_keyword,
    ACTIONS(84), 1,
      sym_immutable_keyword,
    ACTIONS(87), 1,
      sym_functions_keyword,
    STATE(16), 2,
      sym_comment,
      aux_sym_collection_block_repeat1,
  [364] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      sym_word,
    STATE(17), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_required_block_repeat1,
    ACTIONS(71), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [386] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(90), 1,
      sym_word,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_required_block_repeat1,
    ACTIONS(94), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [408] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      sym_properties_keyword,
    ACTIONS(100), 1,
      sym_required_keyword,
    ACTIONS(102), 1,
      sym_writable_keyword,
    ACTIONS(104), 1,
      sym_immutable_keyword,
    ACTIONS(106), 1,
      sym_functions_keyword,
    STATE(16), 1,
      aux_sym_collection_block_repeat1,
    STATE(19), 1,
      sym_comment,
  [436] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      sym_word,
    STATE(20), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
    ACTIONS(65), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [456] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_comment,
    ACTIONS(111), 6,
      sym_word,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [474] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [489] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(98), 1,
      sym_properties_keyword,
    ACTIONS(100), 1,
      sym_required_keyword,
    ACTIONS(102), 1,
      sym_writable_keyword,
    ACTIONS(104), 1,
      sym_immutable_keyword,
    ACTIONS(106), 1,
      sym_functions_keyword,
    STATE(19), 1,
      aux_sym_collection_block_repeat1,
    STATE(23), 1,
      sym_comment,
  [514] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(117), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [529] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(119), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [544] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(121), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [559] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(123), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [574] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_property_str_attribute,
    ACTIONS(125), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(127), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
    STATE(28), 2,
      sym_comment,
      aux_sym_property_str_repeat1,
  [593] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(130), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [608] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym_properties_keyword,
    ACTIONS(136), 1,
      sym_required_keyword,
    ACTIONS(138), 1,
      sym_writable_keyword,
    ACTIONS(140), 1,
      sym_immutable_keyword,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_schema_properties_repeat1,
  [633] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      sym_properties_keyword,
    ACTIONS(147), 1,
      sym_required_keyword,
    ACTIONS(150), 1,
      sym_writable_keyword,
    ACTIONS(153), 1,
      sym_immutable_keyword,
    STATE(31), 2,
      sym_comment,
      aux_sym_schema_properties_repeat1,
  [656] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(111), 5,
      sym_word,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [673] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(156), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [688] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      aux_sym_property_str_repeat1,
    STATE(34), 1,
      sym_comment,
    STATE(61), 1,
      sym_property_str_attribute,
    ACTIONS(158), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(160), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
  [709] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      sym_properties_keyword,
    ACTIONS(136), 1,
      sym_required_keyword,
    ACTIONS(138), 1,
      sym_writable_keyword,
    ACTIONS(140), 1,
      sym_immutable_keyword,
    STATE(30), 1,
      aux_sym_schema_properties_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(105), 1,
      sym_schema_properties,
  [734] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(162), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [749] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(73), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [764] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(164), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [779] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      aux_sym_property_str_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(61), 1,
      sym_property_str_attribute,
    ACTIONS(160), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
    ACTIONS(166), 2,
      sym_word,
      anon_sym_RBRACE,
  [800] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(168), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [815] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(170), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [830] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_boolean,
    STATE(37), 1,
      sym_immutable_block,
    STATE(42), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym_true,
      anon_sym_false,
  [850] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    STATE(64), 1,
      sym_boolean,
    ACTIONS(172), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(176), 2,
      sym_number,
      sym_quoted_string,
  [868] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      anon_sym_ATindexes,
    STATE(44), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_property_ref_repeat1,
    STATE(63), 1,
      sym_property_ref_attribute,
    ACTIONS(178), 2,
      sym_word,
      anon_sym_RBRACE,
  [888] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(184), 1,
      anon_sym_ATaccept,
    STATE(72), 1,
      sym_property_file_attribute,
    ACTIONS(182), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym_comment,
      aux_sym_property_file_repeat1,
  [906] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_ATaccept,
    STATE(46), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_property_file_repeat1,
    STATE(72), 1,
      sym_property_file_attribute,
    ACTIONS(187), 2,
      sym_word,
      anon_sym_RBRACE,
  [926] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      anon_sym_ATindexes,
    STATE(47), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_property_ref_repeat1,
    STATE(63), 1,
      sym_property_ref_attribute,
    ACTIONS(191), 2,
      sym_word,
      anon_sym_RBRACE,
  [946] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_boolean,
    STATE(48), 1,
      sym_comment,
    STATE(49), 1,
      sym_immutable_block,
    ACTIONS(172), 2,
      anon_sym_true,
      anon_sym_false,
  [966] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(142), 5,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [980] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_ATaccept,
    STATE(45), 1,
      aux_sym_property_file_repeat1,
    STATE(50), 1,
      sym_comment,
    STATE(72), 1,
      sym_property_file_attribute,
    ACTIONS(193), 2,
      sym_word,
      anon_sym_RBRACE,
  [1000] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      anon_sym_ATindexes,
    STATE(63), 1,
      sym_property_ref_attribute,
    ACTIONS(195), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_comment,
      aux_sym_property_ref_repeat1,
  [1018] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      sym_word,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_properties_block_repeat1,
    STATE(98), 1,
      sym_property_column,
  [1037] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      sym_collection_keyword,
    STATE(83), 1,
      sym_declaration,
    STATE(53), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [1054] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      sym_word,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_properties_block_repeat1,
    STATE(54), 1,
      sym_comment,
    STATE(98), 1,
      sym_property_column,
  [1073] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      sym_word,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_property_column,
    STATE(55), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [1090] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_comment,
    STATE(82), 1,
      sym_logical_concatenator_operator,
    ACTIONS(218), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1107] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(220), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_quoted_string,
  [1120] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(224), 1,
      anon_sym_ATcondition,
    STATE(58), 1,
      sym_comment,
    STATE(91), 1,
      sym_condition,
    ACTIONS(222), 2,
      sym_word,
      anon_sym_RBRACE,
  [1137] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(226), 4,
      sym_word,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
      anon_sym_RBRACE,
  [1150] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_collection_keyword,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym_program_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(83), 1,
      sym_declaration,
  [1169] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(230), 4,
      sym_word,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
      anon_sym_RBRACE,
  [1182] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(232), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATaccept,
  [1194] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(234), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATindexes,
  [1206] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1218] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(238), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATindexes,
  [1230] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_required_block_repeat1,
    STATE(49), 1,
      sym_required_block,
    STATE(66), 1,
      sym_comment,
  [1246] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      sym_word,
    STATE(17), 1,
      aux_sym_required_block_repeat1,
    STATE(49), 1,
      sym_writable_block,
    STATE(67), 1,
      sym_comment,
  [1262] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(242), 1,
      sym_word,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_toplevel_required_block_repeat1,
  [1278] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_string_array_repeat1,
  [1294] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(250), 1,
      sym_word,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(70), 2,
      sym_comment,
      aux_sym_toplevel_required_block_repeat1,
  [1308] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_string_array_repeat1,
  [1324] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(257), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATaccept,
  [1336] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(73), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [1350] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 1,
      sym_word,
    STATE(74), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
  [1364] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      sym_word,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_required_block_repeat1,
    STATE(75), 1,
      sym_comment,
  [1380] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      sym_word,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_required_block_repeat1,
    STATE(76), 1,
      sym_comment,
  [1396] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      sym_word,
    STATE(56), 1,
      sym_binary_operation,
    STATE(77), 1,
      sym_comment,
    STATE(100), 1,
      sym_condition_expression,
  [1412] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(275), 1,
      sym_quoted_string,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_comment,
    STATE(113), 1,
      sym_string_array,
  [1428] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(242), 1,
      sym_word,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_toplevel_required_block_repeat1,
    STATE(79), 1,
      sym_comment,
  [1444] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_required_block_repeat1,
    STATE(37), 1,
      sym_writable_block,
    STATE(80), 1,
      sym_comment,
  [1460] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_properties_block,
    STATE(81), 1,
      sym_comment,
  [1473] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      sym_word,
    STATE(82), 1,
      sym_comment,
    STATE(110), 1,
      sym_binary_operation,
  [1486] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1497] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_functions_block,
    STATE(84), 1,
      sym_comment,
  [1510] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym_comment,
    ACTIONS(289), 2,
      sym_word,
      anon_sym_RBRACE,
  [1521] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_toplevel_required_block,
    STATE(86), 1,
      sym_comment,
  [1534] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(293), 2,
      sym_word,
      anon_sym_RBRACE,
  [1545] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(113), 2,
      sym_word,
      anon_sym_RBRACE,
  [1556] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1567] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1578] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym_word,
      anon_sym_RBRACE,
  [1589] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_comment,
    STATE(116), 1,
      sym_string_array,
  [1602] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      sym_quoted_string,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      sym_comment,
  [1615] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1626] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(303), 2,
      sym_word,
      anon_sym_RBRACE,
  [1637] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_properties_block,
    STATE(96), 1,
      sym_comment,
  [1650] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(305), 2,
      sym_word,
      anon_sym_RBRACE,
  [1661] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(307), 2,
      sym_word,
      anon_sym_RBRACE,
  [1672] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_collection_block,
    STATE(99), 1,
      sym_comment,
  [1685] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
  [1695] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      sym_quoted_string,
    STATE(101), 1,
      sym_comment,
  [1705] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(315), 1,
      sym_word,
    STATE(102), 1,
      sym_comment,
  [1715] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_comment,
  [1725] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_comment,
  [1735] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_comment,
  [1745] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_comment,
  [1755] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(325), 1,
      sym_capitalized_word,
    STATE(107), 1,
      sym_comment,
  [1765] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_comment,
  [1775] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_comment,
  [1785] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_comment,
  [1795] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      sym_number,
    STATE(111), 1,
      sym_comment,
  [1805] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
  [1815] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
  [1825] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_comment,
  [1835] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [1845] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
  [1855] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_comment,
  [1865] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      sym_number,
    STATE(118), 1,
      sym_comment,
  [1875] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_comment,
  [1885] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym_comment,
  [1895] = 1,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 229,
  [SMALL_STATE(12)] = 252,
  [SMALL_STATE(13)] = 273,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 315,
  [SMALL_STATE(16)] = 338,
  [SMALL_STATE(17)] = 364,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 408,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 456,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 514,
  [SMALL_STATE(25)] = 529,
  [SMALL_STATE(26)] = 544,
  [SMALL_STATE(27)] = 559,
  [SMALL_STATE(28)] = 574,
  [SMALL_STATE(29)] = 593,
  [SMALL_STATE(30)] = 608,
  [SMALL_STATE(31)] = 633,
  [SMALL_STATE(32)] = 656,
  [SMALL_STATE(33)] = 673,
  [SMALL_STATE(34)] = 688,
  [SMALL_STATE(35)] = 709,
  [SMALL_STATE(36)] = 734,
  [SMALL_STATE(37)] = 749,
  [SMALL_STATE(38)] = 764,
  [SMALL_STATE(39)] = 779,
  [SMALL_STATE(40)] = 800,
  [SMALL_STATE(41)] = 815,
  [SMALL_STATE(42)] = 830,
  [SMALL_STATE(43)] = 850,
  [SMALL_STATE(44)] = 868,
  [SMALL_STATE(45)] = 888,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 926,
  [SMALL_STATE(48)] = 946,
  [SMALL_STATE(49)] = 966,
  [SMALL_STATE(50)] = 980,
  [SMALL_STATE(51)] = 1000,
  [SMALL_STATE(52)] = 1018,
  [SMALL_STATE(53)] = 1037,
  [SMALL_STATE(54)] = 1054,
  [SMALL_STATE(55)] = 1073,
  [SMALL_STATE(56)] = 1090,
  [SMALL_STATE(57)] = 1107,
  [SMALL_STATE(58)] = 1120,
  [SMALL_STATE(59)] = 1137,
  [SMALL_STATE(60)] = 1150,
  [SMALL_STATE(61)] = 1169,
  [SMALL_STATE(62)] = 1182,
  [SMALL_STATE(63)] = 1194,
  [SMALL_STATE(64)] = 1206,
  [SMALL_STATE(65)] = 1218,
  [SMALL_STATE(66)] = 1230,
  [SMALL_STATE(67)] = 1246,
  [SMALL_STATE(68)] = 1262,
  [SMALL_STATE(69)] = 1278,
  [SMALL_STATE(70)] = 1294,
  [SMALL_STATE(71)] = 1308,
  [SMALL_STATE(72)] = 1324,
  [SMALL_STATE(73)] = 1336,
  [SMALL_STATE(74)] = 1350,
  [SMALL_STATE(75)] = 1364,
  [SMALL_STATE(76)] = 1380,
  [SMALL_STATE(77)] = 1396,
  [SMALL_STATE(78)] = 1412,
  [SMALL_STATE(79)] = 1428,
  [SMALL_STATE(80)] = 1444,
  [SMALL_STATE(81)] = 1460,
  [SMALL_STATE(82)] = 1473,
  [SMALL_STATE(83)] = 1486,
  [SMALL_STATE(84)] = 1497,
  [SMALL_STATE(85)] = 1510,
  [SMALL_STATE(86)] = 1521,
  [SMALL_STATE(87)] = 1534,
  [SMALL_STATE(88)] = 1545,
  [SMALL_STATE(89)] = 1556,
  [SMALL_STATE(90)] = 1567,
  [SMALL_STATE(91)] = 1578,
  [SMALL_STATE(92)] = 1589,
  [SMALL_STATE(93)] = 1602,
  [SMALL_STATE(94)] = 1615,
  [SMALL_STATE(95)] = 1626,
  [SMALL_STATE(96)] = 1637,
  [SMALL_STATE(97)] = 1650,
  [SMALL_STATE(98)] = 1661,
  [SMALL_STATE(99)] = 1672,
  [SMALL_STATE(100)] = 1685,
  [SMALL_STATE(101)] = 1695,
  [SMALL_STATE(102)] = 1705,
  [SMALL_STATE(103)] = 1715,
  [SMALL_STATE(104)] = 1725,
  [SMALL_STATE(105)] = 1735,
  [SMALL_STATE(106)] = 1745,
  [SMALL_STATE(107)] = 1755,
  [SMALL_STATE(108)] = 1765,
  [SMALL_STATE(109)] = 1775,
  [SMALL_STATE(110)] = 1785,
  [SMALL_STATE(111)] = 1795,
  [SMALL_STATE(112)] = 1805,
  [SMALL_STATE(113)] = 1815,
  [SMALL_STATE(114)] = 1825,
  [SMALL_STATE(115)] = 1835,
  [SMALL_STATE(116)] = 1845,
  [SMALL_STATE(117)] = 1855,
  [SMALL_STATE(118)] = 1865,
  [SMALL_STATE(119)] = 1875,
  [SMALL_STATE(120)] = 1885,
  [SMALL_STATE(121)] = 1895,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num, 2, 0, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num, 1, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writable_block, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_writable_block, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_block, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_required_block, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_properties, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_required_block, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str, 2, 0, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num_type, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str, 1, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num_attribute, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_required_block, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref, 1, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file, 1, 0, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref, 2, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file, 2, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str_attribute, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file_attribute, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref_attribute, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 1, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_obj, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_column, 2, 0, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_block, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_column, 3, 0, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_concatenator_operator, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [351] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
