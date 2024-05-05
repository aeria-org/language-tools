#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  anon_sym_AToptions = 23,
  sym_property_enum_type = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_ATaccept = 27,
  sym_property_file_type = 28,
  anon_sym_ATindexes = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_in = 34,
  anon_sym_GT = 35,
  anon_sym_LT = 36,
  anon_sym_AMP_AMP = 37,
  anon_sym_PIPE_PIPE = 38,
  anon_sym_ATcondition = 39,
  sym_properties_keyword = 40,
  sym_required_keyword = 41,
  sym_writable_keyword = 42,
  sym_immutable_keyword = 43,
  sym_functions_keyword = 44,
  anon_sym_get = 45,
  anon_sym_getAll = 46,
  anon_sym_insert = 47,
  anon_sym_remove = 48,
  anon_sym_removeAll = 49,
  anon_sym_removeFile = 50,
  anon_sym_upload = 51,
  sym_collection_keyword = 52,
  sym_program = 53,
  sym_comment = 54,
  sym_boolean = 55,
  sym_string_array = 56,
  sym_property_str_attribute = 57,
  sym_property_str = 58,
  sym_property_num_attribute = 59,
  sym_property_num_type = 60,
  sym_property_num = 61,
  sym_property_enum_attribute = 62,
  sym_property_enum = 63,
  sym_property_obj = 64,
  sym_property_file_attribute = 65,
  sym_property_file = 66,
  sym_property_ref_attribute = 67,
  sym_property_ref = 68,
  sym_binary_operator = 69,
  sym_logical_concatenator_operator = 70,
  sym_binary_operation = 71,
  sym_condition_expression = 72,
  sym_condition = 73,
  sym_property_column = 74,
  sym_properties_block = 75,
  sym_toplevel_required_block = 76,
  sym_required_block = 77,
  sym_writable_block = 78,
  sym_immutable_block = 79,
  sym_schema_properties = 80,
  sym_builtin_function = 81,
  sym_functions_block = 82,
  sym_collection_block = 83,
  sym_declaration = 84,
  aux_sym_program_repeat1 = 85,
  aux_sym_string_array_repeat1 = 86,
  aux_sym_property_str_repeat1 = 87,
  aux_sym_property_num_repeat1 = 88,
  aux_sym_property_enum_repeat1 = 89,
  aux_sym_property_file_repeat1 = 90,
  aux_sym_property_ref_repeat1 = 91,
  aux_sym_properties_block_repeat1 = 92,
  aux_sym_toplevel_required_block_repeat1 = 93,
  aux_sym_required_block_repeat1 = 94,
  aux_sym_schema_properties_repeat1 = 95,
  aux_sym_functions_block_repeat1 = 96,
  aux_sym_collection_block_repeat1 = 97,
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
  [anon_sym_AToptions] = "@options",
  [sym_property_enum_type] = "property_enum_type",
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
  [sym_property_enum_attribute] = "property_enum_attribute",
  [sym_property_enum] = "property_enum",
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
  [aux_sym_property_enum_repeat1] = "property_enum_repeat1",
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
  [anon_sym_AToptions] = anon_sym_AToptions,
  [sym_property_enum_type] = sym_property_enum_type,
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
  [sym_property_enum_attribute] = sym_property_enum_attribute,
  [sym_property_enum] = sym_property_enum,
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
  [aux_sym_property_enum_repeat1] = aux_sym_property_enum_repeat1,
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
  [anon_sym_AToptions] = {
    .visible = true,
    .named = false,
  },
  [sym_property_enum_type] = {
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
  [sym_property_enum_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_property_enum] = {
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
  [aux_sym_property_enum_repeat1] = {
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
  [17] = 17,
  [18] = 14,
  [19] = 13,
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
  [31] = 21,
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
  [77] = 13,
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
  [96] = 21,
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
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(178);
      ADVANCE_MAP(
        '!', 10,
        '"', 177,
        '&', 3,
        '(', 247,
        ')', 248,
        ',', 186,
        '-', 9,
        '<', 271,
        '=', 11,
        '>', 270,
        '@', 16,
        'F', 60,
        '[', 185,
        ']', 187,
        'c', 114,
        'e', 110,
        'f', 19,
        'g', 45,
        'i', 85,
        'n', 158,
        'p', 132,
        'r', 34,
        's', 151,
        't', 130,
        'u', 125,
        'w', 128,
        '{', 259,
        '|', 174,
        '}', 260,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(272);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '}') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '-', 9,
        'F', 60,
        '[', 15,
        'e', 110,
        'i', 109,
        'n', 158,
        's', 151,
        '{', 259,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(131);
      if (lookahead == '}') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == '}') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(131);
      if (lookahead == '}') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(264);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(184);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(251);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'q') ADVANCE(161);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 168:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 169:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 170:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 171:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 172:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 173:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 174:
      if (lookahead == '|') ADVANCE(273);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 177:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_array_identifier);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'q') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_ATminLength);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ATmaxLength);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_property_str_type);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_ATminimum);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ATmaximum);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_ATexclusiveMinimum);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ATexclusiveMaximum);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_AToptions);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_property_enum_type);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_ATaccept);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_property_file_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ATindexes);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_ATcondition);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_properties_keyword);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_properties_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_required_keyword);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_required_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_writable_keyword);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_writable_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_immutable_keyword);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_immutable_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_functions_keyword);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_functions_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'A') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_getAll);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_getAll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_insert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'F') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(68);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_removeAll);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_removeAll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_removeFile);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_removeFile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_upload);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_upload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 299:
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {(TSStateId)(-1)},
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
    [anon_sym_AToptions] = ACTIONS(1),
    [sym_property_enum_type] = ACTIONS(1),
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
    [sym_program] = STATE(128),
    [sym_comment] = STATE(1),
    [sym_declaration] = STATE(94),
    [aux_sym_program_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_collection_keyword] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      sym_array_identifier,
    ACTIONS(11), 1,
      sym_capitalized_word,
    ACTIONS(13), 1,
      sym_property_str_type,
    ACTIONS(17), 1,
      sym_property_enum_type,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_property_file_type,
    STATE(2), 1,
      sym_comment,
    STATE(10), 1,
      sym_property_num_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_num,
    STATE(102), 6,
      sym_property_str,
      sym_property_num,
      sym_property_enum,
      sym_property_obj,
      sym_property_file,
      sym_property_ref,
  [40] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_capitalized_word,
    ACTIONS(13), 1,
      sym_property_str_type,
    ACTIONS(17), 1,
      sym_property_enum_type,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_property_file_type,
    STATE(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_property_num_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_num,
    STATE(98), 6,
      sym_property_str,
      sym_property_num,
      sym_property_enum,
      sym_property_obj,
      sym_property_file,
      sym_property_ref,
  [77] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      sym_word,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_builtin_function,
    STATE(4), 2,
      sym_comment,
      aux_sym_functions_block_repeat1,
    ACTIONS(28), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [103] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      sym_word,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_functions_block_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      sym_builtin_function,
    ACTIONS(35), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [131] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      sym_word,
    STATE(5), 1,
      aux_sym_functions_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      sym_builtin_function,
    ACTIONS(35), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [156] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    ACTIONS(37), 8,
      sym_word,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [176] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_comment,
    ACTIONS(41), 8,
      sym_word,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [196] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(45), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [214] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_property_num_repeat1,
    STATE(28), 1,
      sym_property_num_attribute,
    ACTIONS(47), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(49), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [237] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
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
  [258] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_property_num_attribute,
    ACTIONS(55), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_comment,
      aux_sym_property_num_repeat1,
    ACTIONS(57), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [279] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      sym_word,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
    ACTIONS(65), 5,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [300] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(67), 1,
      sym_word,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_required_block_repeat1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(71), 5,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [323] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      aux_sym_property_num_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(28), 1,
      sym_property_num_attribute,
    ACTIONS(73), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(49), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [346] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym_properties_keyword,
    ACTIONS(80), 1,
      sym_required_keyword,
    ACTIONS(83), 1,
      sym_writable_keyword,
    ACTIONS(86), 1,
      sym_immutable_keyword,
    ACTIONS(89), 1,
      sym_functions_keyword,
    STATE(16), 2,
      sym_comment,
      aux_sym_collection_block_repeat1,
  [372] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_word,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_required_block_repeat1,
    ACTIONS(96), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [394] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      sym_word,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_required_block_repeat1,
    ACTIONS(71), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [416] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      sym_word,
    STATE(19), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
    ACTIONS(65), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [436] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym_properties_keyword,
    ACTIONS(105), 1,
      sym_required_keyword,
    ACTIONS(107), 1,
      sym_writable_keyword,
    ACTIONS(109), 1,
      sym_immutable_keyword,
    ACTIONS(111), 1,
      sym_functions_keyword,
    STATE(16), 1,
      aux_sym_collection_block_repeat1,
    STATE(20), 1,
      sym_comment,
  [464] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_comment,
    ACTIONS(113), 6,
      sym_word,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [482] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym_properties_keyword,
    ACTIONS(122), 1,
      sym_required_keyword,
    ACTIONS(125), 1,
      sym_writable_keyword,
    ACTIONS(128), 1,
      sym_immutable_keyword,
    STATE(22), 2,
      sym_comment,
      aux_sym_schema_properties_repeat1,
  [505] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(131), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [520] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_property_str_attribute,
    ACTIONS(133), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(135), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
    STATE(24), 2,
      sym_comment,
      aux_sym_property_str_repeat1,
  [539] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(75), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [554] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [569] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [584] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(142), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [599] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      aux_sym_property_str_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(56), 1,
      sym_property_str_attribute,
    ACTIONS(144), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(146), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
  [620] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(148), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [635] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(113), 5,
      sym_word,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [652] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      sym_properties_keyword,
    ACTIONS(154), 1,
      sym_required_keyword,
    ACTIONS(156), 1,
      sym_writable_keyword,
    ACTIONS(158), 1,
      sym_immutable_keyword,
    STATE(22), 1,
      aux_sym_schema_properties_repeat1,
    STATE(32), 1,
      sym_comment,
  [677] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(160), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [692] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(162), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [707] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(164), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [722] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(166), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [737] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(168), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [752] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      sym_properties_keyword,
    ACTIONS(154), 1,
      sym_required_keyword,
    ACTIONS(156), 1,
      sym_writable_keyword,
    ACTIONS(158), 1,
      sym_immutable_keyword,
    STATE(32), 1,
      aux_sym_schema_properties_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(113), 1,
      sym_schema_properties,
  [777] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      sym_properties_keyword,
    ACTIONS(105), 1,
      sym_required_keyword,
    ACTIONS(107), 1,
      sym_writable_keyword,
    ACTIONS(109), 1,
      sym_immutable_keyword,
    ACTIONS(111), 1,
      sym_functions_keyword,
    STATE(20), 1,
      aux_sym_collection_block_repeat1,
    STATE(39), 1,
      sym_comment,
  [802] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(170), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [817] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      aux_sym_property_str_repeat1,
    STATE(41), 1,
      sym_comment,
    STATE(56), 1,
      sym_property_str_attribute,
    ACTIONS(146), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
    ACTIONS(172), 2,
      sym_word,
      anon_sym_RBRACE,
  [838] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(176), 1,
      anon_sym_ATaccept,
    STATE(42), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_property_file_repeat1,
    STATE(76), 1,
      sym_property_file_attribute,
    ACTIONS(174), 2,
      sym_word,
      anon_sym_RBRACE,
  [858] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    STATE(78), 1,
      sym_boolean,
    ACTIONS(178), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(180), 2,
      anon_sym_true,
      anon_sym_false,
  [876] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(184), 1,
      anon_sym_ATindexes,
    STATE(44), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_property_ref_repeat1,
    STATE(65), 1,
      sym_property_ref_attribute,
    ACTIONS(182), 2,
      sym_word,
      anon_sym_RBRACE,
  [896] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(188), 1,
      anon_sym_AToptions,
    STATE(45), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_property_enum_repeat1,
    STATE(68), 1,
      sym_property_enum_attribute,
    ACTIONS(186), 2,
      sym_word,
      anon_sym_RBRACE,
  [916] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      anon_sym_ATindexes,
    STATE(65), 1,
      sym_property_ref_attribute,
    ACTIONS(190), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_comment,
      aux_sym_property_ref_repeat1,
  [934] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(176), 1,
      anon_sym_ATaccept,
    STATE(42), 1,
      aux_sym_property_file_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(76), 1,
      sym_property_file_attribute,
    ACTIONS(195), 2,
      sym_word,
      anon_sym_RBRACE,
  [954] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(199), 1,
      anon_sym_ATaccept,
    STATE(76), 1,
      sym_property_file_attribute,
    ACTIONS(197), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(48), 2,
      sym_comment,
      aux_sym_property_file_repeat1,
  [972] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_immutable_block,
    STATE(27), 1,
      sym_boolean,
    STATE(49), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_true,
      anon_sym_false,
  [992] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(188), 1,
      anon_sym_AToptions,
    STATE(50), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_property_enum_repeat1,
    STATE(68), 1,
      sym_property_enum_attribute,
    ACTIONS(204), 2,
      sym_word,
      anon_sym_RBRACE,
  [1012] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(117), 5,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [1026] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_boolean,
    STATE(51), 1,
      sym_immutable_block,
    STATE(52), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_true,
      anon_sym_false,
  [1046] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_AToptions,
    STATE(68), 1,
      sym_property_enum_attribute,
    ACTIONS(206), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(53), 2,
      sym_comment,
      aux_sym_property_enum_repeat1,
  [1064] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(184), 1,
      anon_sym_ATindexes,
    STATE(46), 1,
      aux_sym_property_ref_repeat1,
    STATE(54), 1,
      sym_comment,
    STATE(65), 1,
      sym_property_ref_attribute,
    ACTIONS(211), 2,
      sym_word,
      anon_sym_RBRACE,
  [1084] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      sym_word,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_properties_block_repeat1,
    STATE(105), 1,
      sym_property_column,
  [1103] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(217), 4,
      sym_word,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
      anon_sym_RBRACE,
  [1116] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(219), 1,
      sym_word,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_property_column,
    STATE(57), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [1133] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      sym_word,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_properties_block_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(105), 1,
      sym_property_column,
  [1152] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      sym_collection_keyword,
    STATE(94), 1,
      sym_declaration,
    STATE(59), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [1169] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_comment,
    STATE(103), 1,
      sym_logical_concatenator_operator,
    ACTIONS(233), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1186] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(235), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_quoted_string,
  [1199] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(239), 1,
      anon_sym_ATcondition,
    STATE(62), 1,
      sym_comment,
    STATE(88), 1,
      sym_condition,
    ACTIONS(237), 2,
      sym_word,
      anon_sym_RBRACE,
  [1216] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(241), 4,
      sym_word,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
      anon_sym_RBRACE,
  [1229] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_collection_keyword,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym_program_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(94), 1,
      sym_declaration,
  [1248] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(245), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATindexes,
  [1260] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      sym_word,
    STATE(14), 1,
      aux_sym_required_block_repeat1,
    STATE(25), 1,
      sym_writable_block,
    STATE(66), 1,
      sym_comment,
  [1276] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(249), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATaccept,
  [1288] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(251), 3,
      sym_word,
      anon_sym_AToptions,
      anon_sym_RBRACE,
  [1300] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(253), 3,
      sym_word,
      anon_sym_AToptions,
      anon_sym_RBRACE,
  [1312] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(255), 1,
      sym_word,
    STATE(17), 1,
      aux_sym_required_block_repeat1,
    STATE(51), 1,
      sym_required_block,
    STATE(70), 1,
      sym_comment,
  [1328] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(255), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_required_block_repeat1,
    STATE(51), 1,
      sym_writable_block,
    STATE(71), 1,
      sym_comment,
  [1344] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      sym_word,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_required_block_repeat1,
  [1360] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(261), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATindexes,
  [1372] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      sym_word,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_toplevel_required_block_repeat1,
  [1388] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_string_array_repeat1,
  [1404] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(271), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATaccept,
  [1416] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      sym_word,
    STATE(77), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
  [1430] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1442] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_string_array_repeat1,
  [1458] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      sym_word,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_comment,
      aux_sym_toplevel_required_block_repeat1,
  [1472] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(285), 1,
      sym_word,
    STATE(60), 1,
      sym_binary_operation,
    STATE(81), 1,
      sym_comment,
    STATE(125), 1,
      sym_condition_expression,
  [1488] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(82), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [1502] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      sym_word,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_required_block_repeat1,
    STATE(83), 1,
      sym_comment,
  [1518] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(294), 1,
      sym_quoted_string,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_comment,
    STATE(109), 1,
      sym_string_array,
  [1534] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      sym_word,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_toplevel_required_block_repeat1,
    STATE(85), 1,
      sym_comment,
  [1550] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(300), 2,
      sym_word,
      anon_sym_RBRACE,
  [1561] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_comment,
    STATE(95), 1,
      sym_collection_block,
  [1574] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_word,
      anon_sym_RBRACE,
  [1585] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_comment,
    STATE(114), 1,
      sym_string_array,
  [1598] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_functions_block,
    STATE(90), 1,
      sym_comment,
  [1611] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(306), 2,
      sym_word,
      anon_sym_RBRACE,
  [1622] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_toplevel_required_block,
    STATE(92), 1,
      sym_comment,
  [1635] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_properties_block,
    STATE(93), 1,
      sym_comment,
  [1648] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1659] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1670] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(115), 2,
      sym_word,
      anon_sym_RBRACE,
  [1681] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1692] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(318), 2,
      sym_word,
      anon_sym_RBRACE,
  [1703] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(320), 1,
      sym_quoted_string,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym_comment,
  [1716] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1727] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_properties_block,
    STATE(101), 1,
      sym_comment,
  [1740] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(102), 1,
      sym_comment,
    ACTIONS(324), 2,
      sym_word,
      anon_sym_RBRACE,
  [1751] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(285), 1,
      sym_word,
    STATE(103), 1,
      sym_comment,
    STATE(118), 1,
      sym_binary_operation,
  [1764] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_comment,
    STATE(124), 1,
      sym_string_array,
  [1777] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(105), 1,
      sym_comment,
    ACTIONS(326), 2,
      sym_word,
      anon_sym_RBRACE,
  [1788] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(328), 1,
      sym_word,
    STATE(106), 1,
      sym_comment,
  [1798] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_comment,
  [1808] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      sym_number,
    STATE(108), 1,
      sym_comment,
  [1818] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [1828] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
  [1838] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
  [1848] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_comment,
  [1858] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_comment,
  [1868] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_comment,
  [1878] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      sym_capitalized_word,
    STATE(115), 1,
      sym_comment,
  [1888] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_comment,
  [1898] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
  [1908] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_comment,
  [1918] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      sym_quoted_string,
    STATE(119), 1,
      sym_comment,
  [1928] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
  [1938] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_comment,
  [1948] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
  [1958] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_comment,
  [1968] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
  [1978] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [1988] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_comment,
  [1998] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(370), 1,
      sym_number,
    STATE(127), 1,
      sym_comment,
  [2008] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_comment,
  [2018] = 1,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 279,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 394,
  [SMALL_STATE(19)] = 416,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 464,
  [SMALL_STATE(22)] = 482,
  [SMALL_STATE(23)] = 505,
  [SMALL_STATE(24)] = 520,
  [SMALL_STATE(25)] = 539,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 569,
  [SMALL_STATE(28)] = 584,
  [SMALL_STATE(29)] = 599,
  [SMALL_STATE(30)] = 620,
  [SMALL_STATE(31)] = 635,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 677,
  [SMALL_STATE(34)] = 692,
  [SMALL_STATE(35)] = 707,
  [SMALL_STATE(36)] = 722,
  [SMALL_STATE(37)] = 737,
  [SMALL_STATE(38)] = 752,
  [SMALL_STATE(39)] = 777,
  [SMALL_STATE(40)] = 802,
  [SMALL_STATE(41)] = 817,
  [SMALL_STATE(42)] = 838,
  [SMALL_STATE(43)] = 858,
  [SMALL_STATE(44)] = 876,
  [SMALL_STATE(45)] = 896,
  [SMALL_STATE(46)] = 916,
  [SMALL_STATE(47)] = 934,
  [SMALL_STATE(48)] = 954,
  [SMALL_STATE(49)] = 972,
  [SMALL_STATE(50)] = 992,
  [SMALL_STATE(51)] = 1012,
  [SMALL_STATE(52)] = 1026,
  [SMALL_STATE(53)] = 1046,
  [SMALL_STATE(54)] = 1064,
  [SMALL_STATE(55)] = 1084,
  [SMALL_STATE(56)] = 1103,
  [SMALL_STATE(57)] = 1116,
  [SMALL_STATE(58)] = 1133,
  [SMALL_STATE(59)] = 1152,
  [SMALL_STATE(60)] = 1169,
  [SMALL_STATE(61)] = 1186,
  [SMALL_STATE(62)] = 1199,
  [SMALL_STATE(63)] = 1216,
  [SMALL_STATE(64)] = 1229,
  [SMALL_STATE(65)] = 1248,
  [SMALL_STATE(66)] = 1260,
  [SMALL_STATE(67)] = 1276,
  [SMALL_STATE(68)] = 1288,
  [SMALL_STATE(69)] = 1300,
  [SMALL_STATE(70)] = 1312,
  [SMALL_STATE(71)] = 1328,
  [SMALL_STATE(72)] = 1344,
  [SMALL_STATE(73)] = 1360,
  [SMALL_STATE(74)] = 1372,
  [SMALL_STATE(75)] = 1388,
  [SMALL_STATE(76)] = 1404,
  [SMALL_STATE(77)] = 1416,
  [SMALL_STATE(78)] = 1430,
  [SMALL_STATE(79)] = 1442,
  [SMALL_STATE(80)] = 1458,
  [SMALL_STATE(81)] = 1472,
  [SMALL_STATE(82)] = 1488,
  [SMALL_STATE(83)] = 1502,
  [SMALL_STATE(84)] = 1518,
  [SMALL_STATE(85)] = 1534,
  [SMALL_STATE(86)] = 1550,
  [SMALL_STATE(87)] = 1561,
  [SMALL_STATE(88)] = 1574,
  [SMALL_STATE(89)] = 1585,
  [SMALL_STATE(90)] = 1598,
  [SMALL_STATE(91)] = 1611,
  [SMALL_STATE(92)] = 1622,
  [SMALL_STATE(93)] = 1635,
  [SMALL_STATE(94)] = 1648,
  [SMALL_STATE(95)] = 1659,
  [SMALL_STATE(96)] = 1670,
  [SMALL_STATE(97)] = 1681,
  [SMALL_STATE(98)] = 1692,
  [SMALL_STATE(99)] = 1703,
  [SMALL_STATE(100)] = 1716,
  [SMALL_STATE(101)] = 1727,
  [SMALL_STATE(102)] = 1740,
  [SMALL_STATE(103)] = 1751,
  [SMALL_STATE(104)] = 1764,
  [SMALL_STATE(105)] = 1777,
  [SMALL_STATE(106)] = 1788,
  [SMALL_STATE(107)] = 1798,
  [SMALL_STATE(108)] = 1808,
  [SMALL_STATE(109)] = 1818,
  [SMALL_STATE(110)] = 1828,
  [SMALL_STATE(111)] = 1838,
  [SMALL_STATE(112)] = 1848,
  [SMALL_STATE(113)] = 1858,
  [SMALL_STATE(114)] = 1868,
  [SMALL_STATE(115)] = 1878,
  [SMALL_STATE(116)] = 1888,
  [SMALL_STATE(117)] = 1898,
  [SMALL_STATE(118)] = 1908,
  [SMALL_STATE(119)] = 1918,
  [SMALL_STATE(120)] = 1928,
  [SMALL_STATE(121)] = 1938,
  [SMALL_STATE(122)] = 1948,
  [SMALL_STATE(123)] = 1958,
  [SMALL_STATE(124)] = 1968,
  [SMALL_STATE(125)] = 1978,
  [SMALL_STATE(126)] = 1988,
  [SMALL_STATE(127)] = 1998,
  [SMALL_STATE(128)] = 2008,
  [SMALL_STATE(129)] = 2018,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num, 1, 0, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writable_block, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_writable_block, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num, 2, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_block, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_required_block, 1, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num_type, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_required_block, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str, 2, 0, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_properties, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_required_block, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num_attribute, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str, 1, 0, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file, 2, 0, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref, 1, 0, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_enum, 1, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file, 1, 0, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_enum, 2, 0, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_enum_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref, 2, 0, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 1, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str_attribute, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file_attribute, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_enum_repeat1, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_enum_attribute, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref_attribute, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 1, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_obj, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_block, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_column, 3, 0, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_column, 2, 0, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_concatenator_operator, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [372] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
