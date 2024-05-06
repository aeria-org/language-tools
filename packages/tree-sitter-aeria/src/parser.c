#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
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
  sym_property_bool_type = 23,
  anon_sym_AToptions = 24,
  sym_property_enum_type = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_ATaccept = 28,
  sym_property_file_type = 29,
  anon_sym_ATindexes = 30,
  anon_sym_EQ_EQ = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_in = 35,
  anon_sym_GT = 36,
  anon_sym_LT = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_ATcondition = 40,
  sym_properties_keyword = 41,
  sym_required_keyword = 42,
  sym_writable_keyword = 43,
  sym_immutable_keyword = 44,
  sym_functions_keyword = 45,
  anon_sym_get = 46,
  anon_sym_getAll = 47,
  anon_sym_insert = 48,
  anon_sym_remove = 49,
  anon_sym_removeAll = 50,
  anon_sym_removeFile = 51,
  anon_sym_upload = 52,
  sym_collection_keyword = 53,
  sym_program = 54,
  sym_comment = 55,
  sym_boolean = 56,
  sym_string_array = 57,
  sym_property_str_attribute = 58,
  sym_property_str = 59,
  sym_property_num_attribute = 60,
  sym_property_num_type = 61,
  sym_property_num = 62,
  sym_property_bool = 63,
  sym_property_enum_attribute = 64,
  sym_property_enum = 65,
  sym_property_obj = 66,
  sym_property_file_attribute = 67,
  sym_property_file = 68,
  sym_property_ref_attribute = 69,
  sym_property_ref = 70,
  sym_binary_operator = 71,
  sym_logical_concatenator_operator = 72,
  sym_binary_operation = 73,
  sym_condition_expression = 74,
  sym_condition = 75,
  sym_property_column = 76,
  sym_properties_block = 77,
  sym_toplevel_required_block = 78,
  sym_required_block = 79,
  sym_writable_block = 80,
  sym_immutable_block = 81,
  sym_schema_properties = 82,
  sym_builtin_function = 83,
  sym_functions_block = 84,
  sym_collection_block = 85,
  sym_declaration = 86,
  aux_sym_program_repeat1 = 87,
  aux_sym_string_array_repeat1 = 88,
  aux_sym_property_str_repeat1 = 89,
  aux_sym_property_num_repeat1 = 90,
  aux_sym_property_enum_repeat1 = 91,
  aux_sym_property_file_repeat1 = 92,
  aux_sym_property_ref_repeat1 = 93,
  aux_sym_properties_block_repeat1 = 94,
  aux_sym_toplevel_required_block_repeat1 = 95,
  aux_sym_required_block_repeat1 = 96,
  aux_sym_schema_properties_repeat1 = 97,
  aux_sym_functions_block_repeat1 = 98,
  aux_sym_collection_block_repeat1 = 99,
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
  [sym_property_bool_type] = "property_bool_type",
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
  [sym_property_bool] = "property_bool",
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
  [sym_property_bool_type] = sym_property_bool_type,
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
  [sym_property_bool] = sym_property_bool,
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
  [sym_property_bool_type] = {
    .visible = true,
    .named = true,
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
  [sym_property_bool] = {
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
  [26] = 21,
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
  [76] = 13,
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
  [95] = 21,
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
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(181);
      ADVANCE_MAP(
        '!', 10,
        '"', 180,
        '&', 3,
        '(', 250,
        ')', 251,
        ',', 189,
        '-', 9,
        '<', 275,
        '=', 11,
        '>', 274,
        '@', 16,
        'F', 60,
        '[', 188,
        ']', 190,
        'b', 119,
        'c', 115,
        'e', 111,
        'f', 19,
        'g', 45,
        'i', 86,
        'n', 161,
        'p', 136,
        'r', 34,
        's', 154,
        't', 133,
        'u', 128,
        'w', 131,
        '{', 263,
        '|', 177,
        '}', 264,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(276);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '}') ADVANCE(264);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '-', 9,
        'F', 60,
        '[', 15,
        'b', 119,
        'e', 111,
        'i', 110,
        'n', 161,
        's', 154,
        '{', 263,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '}') ADVANCE(264);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == '}') ADVANCE(264);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '}') ADVANCE(264);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(268);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(187);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(259);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'q') ADVANCE(164);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 171:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 172:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 173:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 174:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 177:
      if (lookahead == '|') ADVANCE(277);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_array_identifier);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'q') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_capitalized_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ATminLength);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ATmaxLength);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_property_str_type);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ATminimum);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ATmaximum);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ATexclusiveMinimum);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ATexclusiveMaximum);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_property_bool_type);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_AToptions);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_property_enum_type);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_ATaccept);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_property_file_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_ATindexes);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(271);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_ATcondition);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_properties_keyword);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_properties_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_required_keyword);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_required_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_writable_keyword);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_writable_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_immutable_keyword);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_immutable_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_functions_keyword);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_functions_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'A') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_getAll);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_getAll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_insert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == 'A') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'F') ADVANCE(68);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_removeAll);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_removeAll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_removeFile);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_removeFile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_upload);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_upload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 303:
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
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
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
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
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
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
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
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
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 1},
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
  [129] = {.lex_state = 0},
  [130] = {(TSStateId)(-1)},
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
    [sym_property_bool_type] = ACTIONS(1),
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
    [sym_program] = STATE(129),
    [sym_comment] = STATE(1),
    [sym_declaration] = STATE(93),
    [aux_sym_program_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_collection_keyword] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      sym_array_identifier,
    ACTIONS(11), 1,
      sym_capitalized_word,
    ACTIONS(13), 1,
      sym_property_str_type,
    ACTIONS(17), 1,
      sym_property_bool_type,
    ACTIONS(19), 1,
      sym_property_enum_type,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_property_file_type,
    STATE(2), 1,
      sym_comment,
    STATE(10), 1,
      sym_property_num_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_num,
    STATE(91), 7,
      sym_property_str,
      sym_property_num,
      sym_property_bool,
      sym_property_enum,
      sym_property_obj,
      sym_property_file,
      sym_property_ref,
  [44] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym_capitalized_word,
    ACTIONS(13), 1,
      sym_property_str_type,
    ACTIONS(17), 1,
      sym_property_bool_type,
    ACTIONS(19), 1,
      sym_property_enum_type,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_property_file_type,
    STATE(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_property_num_type,
    ACTIONS(15), 2,
      anon_sym_int,
      anon_sym_num,
    STATE(99), 7,
      sym_property_str,
      sym_property_num,
      sym_property_bool,
      sym_property_enum,
      sym_property_obj,
      sym_property_file,
      sym_property_ref,
  [85] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      sym_word,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_builtin_function,
    STATE(4), 2,
      sym_comment,
      aux_sym_functions_block_repeat1,
    ACTIONS(30), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [111] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      sym_word,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_functions_block_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      sym_builtin_function,
    ACTIONS(37), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [139] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      sym_word,
    STATE(5), 1,
      aux_sym_functions_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      sym_builtin_function,
    ACTIONS(37), 7,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [164] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
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
  [184] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_comment,
    ACTIONS(43), 8,
      sym_word,
      anon_sym_get,
      anon_sym_getAll,
      anon_sym_insert,
      anon_sym_remove,
      anon_sym_removeAll,
      anon_sym_removeFile,
      anon_sym_upload,
  [204] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(47), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [222] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_property_num_repeat1,
    STATE(28), 1,
      sym_property_num_attribute,
    ACTIONS(49), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(51), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [245] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    STATE(43), 1,
      sym_binary_operator,
    ACTIONS(55), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [266] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_property_num_attribute,
    ACTIONS(57), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_comment,
      aux_sym_property_num_repeat1,
    ACTIONS(59), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [287] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      sym_word,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
    ACTIONS(67), 5,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [308] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      sym_word,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_required_block_repeat1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(73), 5,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [331] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      aux_sym_property_num_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(28), 1,
      sym_property_num_attribute,
    ACTIONS(75), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(51), 4,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
  [354] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym_properties_keyword,
    ACTIONS(82), 1,
      sym_required_keyword,
    ACTIONS(85), 1,
      sym_writable_keyword,
    ACTIONS(88), 1,
      sym_immutable_keyword,
    ACTIONS(91), 1,
      sym_functions_keyword,
    STATE(16), 2,
      sym_comment,
      aux_sym_collection_block_repeat1,
  [380] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      sym_word,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_required_block_repeat1,
    ACTIONS(98), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [402] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym_word,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_required_block_repeat1,
    ACTIONS(73), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [424] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      sym_word,
    STATE(19), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
    ACTIONS(67), 4,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [444] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym_properties_keyword,
    ACTIONS(107), 1,
      sym_required_keyword,
    ACTIONS(109), 1,
      sym_writable_keyword,
    ACTIONS(111), 1,
      sym_immutable_keyword,
    ACTIONS(113), 1,
      sym_functions_keyword,
    STATE(16), 1,
      aux_sym_collection_block_repeat1,
    STATE(20), 1,
      sym_comment,
  [472] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_comment,
    ACTIONS(115), 6,
      sym_word,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [490] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_properties_keyword,
    ACTIONS(124), 1,
      sym_required_keyword,
    ACTIONS(127), 1,
      sym_writable_keyword,
    ACTIONS(130), 1,
      sym_immutable_keyword,
    STATE(22), 2,
      sym_comment,
      aux_sym_schema_properties_repeat1,
  [513] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(133), 1,
      sym_properties_keyword,
    ACTIONS(135), 1,
      sym_required_keyword,
    ACTIONS(137), 1,
      sym_writable_keyword,
    ACTIONS(139), 1,
      sym_immutable_keyword,
    STATE(23), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_schema_properties_repeat1,
    STATE(108), 1,
      sym_schema_properties,
  [538] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_property_str_attribute,
    ACTIONS(141), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(143), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
    STATE(24), 2,
      sym_comment,
      aux_sym_property_str_repeat1,
  [557] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(77), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [572] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_comment,
    ACTIONS(115), 5,
      sym_word,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [589] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(146), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [604] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(148), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [619] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(150), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [634] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(152), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [649] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [664] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(133), 1,
      sym_properties_keyword,
    ACTIONS(135), 1,
      sym_required_keyword,
    ACTIONS(137), 1,
      sym_writable_keyword,
    ACTIONS(139), 1,
      sym_immutable_keyword,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_schema_properties_repeat1,
    STATE(32), 1,
      sym_comment,
  [689] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(158), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [704] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(160), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [719] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(162), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [734] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(164), 6,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
      sym_functions_keyword,
  [749] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      aux_sym_property_str_repeat1,
    STATE(37), 1,
      sym_comment,
    STATE(56), 1,
      sym_property_str_attribute,
    ACTIONS(166), 2,
      sym_word,
      anon_sym_RBRACE,
    ACTIONS(168), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
  [770] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(170), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [785] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(105), 1,
      sym_properties_keyword,
    ACTIONS(107), 1,
      sym_required_keyword,
    ACTIONS(109), 1,
      sym_writable_keyword,
    ACTIONS(111), 1,
      sym_immutable_keyword,
    ACTIONS(113), 1,
      sym_functions_keyword,
    STATE(20), 1,
      aux_sym_collection_block_repeat1,
    STATE(39), 1,
      sym_comment,
  [810] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      aux_sym_property_str_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(56), 1,
      sym_property_str_attribute,
    ACTIONS(168), 2,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
    ACTIONS(172), 2,
      sym_word,
      anon_sym_RBRACE,
  [831] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(174), 6,
      sym_word,
      anon_sym_ATminimum,
      anon_sym_ATmaximum,
      anon_sym_ATexclusiveMinimum,
      anon_sym_ATexclusiveMaximum,
      anon_sym_RBRACE,
  [846] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(178), 1,
      anon_sym_ATindexes,
    STATE(42), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_property_ref_repeat1,
    STATE(66), 1,
      sym_property_ref_attribute,
    ACTIONS(176), 2,
      sym_word,
      anon_sym_RBRACE,
  [866] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    STATE(78), 1,
      sym_boolean,
    ACTIONS(180), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(182), 2,
      anon_sym_true,
      anon_sym_false,
  [884] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(186), 1,
      anon_sym_ATaccept,
    STATE(77), 1,
      sym_property_file_attribute,
    ACTIONS(184), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym_comment,
      aux_sym_property_file_repeat1,
  [902] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(191), 1,
      anon_sym_AToptions,
    STATE(45), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_property_enum_repeat1,
    STATE(69), 1,
      sym_property_enum_attribute,
    ACTIONS(189), 2,
      sym_word,
      anon_sym_RBRACE,
  [922] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(191), 1,
      anon_sym_AToptions,
    STATE(45), 1,
      aux_sym_property_enum_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(69), 1,
      sym_property_enum_attribute,
    ACTIONS(193), 2,
      sym_word,
      anon_sym_RBRACE,
  [942] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      anon_sym_AToptions,
    STATE(69), 1,
      sym_property_enum_attribute,
    ACTIONS(195), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_comment,
      aux_sym_property_enum_repeat1,
  [960] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_ATaccept,
    STATE(48), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_property_file_repeat1,
    STATE(77), 1,
      sym_property_file_attribute,
    ACTIONS(200), 2,
      sym_word,
      anon_sym_RBRACE,
  [980] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(178), 1,
      anon_sym_ATindexes,
    STATE(49), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_property_ref_repeat1,
    STATE(66), 1,
      sym_property_ref_attribute,
    ACTIONS(204), 2,
      sym_word,
      anon_sym_RBRACE,
  [1000] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_immutable_block,
    STATE(27), 1,
      sym_boolean,
    STATE(50), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_true,
      anon_sym_false,
  [1020] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(119), 5,
      anon_sym_RBRACE,
      sym_properties_keyword,
      sym_required_keyword,
      sym_writable_keyword,
      sym_immutable_keyword,
  [1034] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_boolean,
    STATE(51), 1,
      sym_immutable_block,
    STATE(52), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_true,
      anon_sym_false,
  [1054] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_ATaccept,
    STATE(44), 1,
      aux_sym_property_file_repeat1,
    STATE(53), 1,
      sym_comment,
    STATE(77), 1,
      sym_property_file_attribute,
    ACTIONS(208), 2,
      sym_word,
      anon_sym_RBRACE,
  [1074] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(212), 1,
      anon_sym_ATindexes,
    STATE(66), 1,
      sym_property_ref_attribute,
    ACTIONS(210), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(54), 2,
      sym_comment,
      aux_sym_property_ref_repeat1,
  [1092] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(215), 1,
      sym_word,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_properties_block_repeat1,
    STATE(98), 1,
      sym_property_column,
  [1111] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(219), 4,
      sym_word,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
      anon_sym_RBRACE,
  [1124] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(221), 1,
      sym_word,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_property_column,
    STATE(57), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [1141] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(215), 1,
      sym_word,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_properties_block_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(98), 1,
      sym_property_column,
  [1160] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym_collection_keyword,
    STATE(93), 1,
      sym_declaration,
    STATE(59), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [1177] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_comment,
    STATE(87), 1,
      sym_logical_concatenator_operator,
    ACTIONS(235), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1194] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(239), 1,
      anon_sym_ATcondition,
    STATE(61), 1,
      sym_comment,
    STATE(88), 1,
      sym_condition,
    ACTIONS(237), 2,
      sym_word,
      anon_sym_RBRACE,
  [1211] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(241), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_quoted_string,
  [1224] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(243), 4,
      sym_word,
      anon_sym_ATminLength,
      anon_sym_ATmaxLength,
      anon_sym_RBRACE,
  [1237] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      sym_collection_keyword,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym_program_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(93), 1,
      sym_declaration,
  [1256] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(247), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATindexes,
  [1268] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(249), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATindexes,
  [1280] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(251), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATaccept,
  [1292] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(253), 3,
      sym_word,
      anon_sym_AToptions,
      anon_sym_RBRACE,
  [1304] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(255), 3,
      sym_word,
      anon_sym_AToptions,
      anon_sym_RBRACE,
  [1316] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      sym_word,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_toplevel_required_block_repeat1,
  [1332] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      sym_word,
    STATE(17), 1,
      aux_sym_required_block_repeat1,
    STATE(51), 1,
      sym_required_block,
    STATE(71), 1,
      sym_comment,
  [1348] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_required_block_repeat1,
    STATE(51), 1,
      sym_writable_block,
    STATE(72), 1,
      sym_comment,
  [1364] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      sym_word,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_required_block_repeat1,
  [1380] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_string_array_repeat1,
  [1396] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      sym_word,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_toplevel_required_block_repeat1,
  [1412] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      sym_word,
    STATE(76), 2,
      sym_comment,
      aux_sym_required_block_repeat1,
  [1426] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(276), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATaccept,
  [1438] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1450] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_string_array_repeat1,
  [1466] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      sym_word,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_comment,
      aux_sym_toplevel_required_block_repeat1,
  [1480] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(287), 1,
      sym_quoted_string,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_comment,
    STATE(110), 1,
      sym_string_array,
  [1496] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      sym_word,
    STATE(60), 1,
      sym_binary_operation,
    STATE(82), 1,
      sym_comment,
    STATE(125), 1,
      sym_condition_expression,
  [1512] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      sym_word,
    STATE(14), 1,
      aux_sym_required_block_repeat1,
    STATE(25), 1,
      sym_writable_block,
    STATE(83), 1,
      sym_comment,
  [1528] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      sym_word,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_required_block_repeat1,
    STATE(84), 1,
      sym_comment,
  [1544] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(85), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [1558] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(302), 2,
      sym_word,
      anon_sym_RBRACE,
  [1569] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      sym_word,
    STATE(87), 1,
      sym_comment,
    STATE(107), 1,
      sym_binary_operation,
  [1582] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(285), 2,
      sym_word,
      anon_sym_RBRACE,
  [1593] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_comment,
    STATE(114), 1,
      sym_string_array,
  [1606] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_functions_block,
    STATE(90), 1,
      sym_comment,
  [1619] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(306), 2,
      sym_word,
      anon_sym_RBRACE,
  [1630] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_toplevel_required_block,
    STATE(92), 1,
      sym_comment,
  [1643] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym_comment,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1654] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_properties_block,
    STATE(94), 1,
      sym_comment,
  [1667] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(117), 2,
      sym_word,
      anon_sym_RBRACE,
  [1678] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1689] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym_collection_keyword,
  [1700] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(318), 2,
      sym_word,
      anon_sym_RBRACE,
  [1711] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(99), 1,
      sym_comment,
    ACTIONS(320), 2,
      sym_word,
      anon_sym_RBRACE,
  [1722] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(322), 1,
      sym_quoted_string,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym_comment,
  [1735] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1746] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(102), 1,
      sym_comment,
    ACTIONS(326), 2,
      sym_word,
      anon_sym_RBRACE,
  [1757] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_properties_block,
    STATE(103), 1,
      sym_comment,
  [1770] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(328), 2,
      sym_word,
      anon_sym_RBRACE,
  [1781] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_comment,
    STATE(119), 1,
      sym_string_array,
  [1794] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_collection_block,
    STATE(106), 1,
      sym_comment,
  [1807] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_comment,
  [1817] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_comment,
  [1827] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [1837] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_comment,
  [1847] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_comment,
  [1857] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
  [1867] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_comment,
  [1877] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_comment,
  [1887] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [1897] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_comment,
  [1907] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(352), 1,
      sym_word,
    STATE(117), 1,
      sym_comment,
  [1917] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      sym_capitalized_word,
    STATE(118), 1,
      sym_comment,
  [1927] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [1937] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      sym_quoted_string,
    STATE(120), 1,
      sym_comment,
  [1947] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [1957] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_comment,
  [1967] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_comment,
  [1977] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
  [1987] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
  [1997] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(370), 1,
      sym_number,
    STATE(126), 1,
      sym_comment,
  [2007] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_comment,
  [2017] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(374), 1,
      sym_number,
    STATE(128), 1,
      sym_comment,
  [2027] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_comment,
  [2037] = 1,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 164,
  [SMALL_STATE(8)] = 184,
  [SMALL_STATE(9)] = 204,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 245,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 331,
  [SMALL_STATE(16)] = 354,
  [SMALL_STATE(17)] = 380,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 424,
  [SMALL_STATE(20)] = 444,
  [SMALL_STATE(21)] = 472,
  [SMALL_STATE(22)] = 490,
  [SMALL_STATE(23)] = 513,
  [SMALL_STATE(24)] = 538,
  [SMALL_STATE(25)] = 557,
  [SMALL_STATE(26)] = 572,
  [SMALL_STATE(27)] = 589,
  [SMALL_STATE(28)] = 604,
  [SMALL_STATE(29)] = 619,
  [SMALL_STATE(30)] = 634,
  [SMALL_STATE(31)] = 649,
  [SMALL_STATE(32)] = 664,
  [SMALL_STATE(33)] = 689,
  [SMALL_STATE(34)] = 704,
  [SMALL_STATE(35)] = 719,
  [SMALL_STATE(36)] = 734,
  [SMALL_STATE(37)] = 749,
  [SMALL_STATE(38)] = 770,
  [SMALL_STATE(39)] = 785,
  [SMALL_STATE(40)] = 810,
  [SMALL_STATE(41)] = 831,
  [SMALL_STATE(42)] = 846,
  [SMALL_STATE(43)] = 866,
  [SMALL_STATE(44)] = 884,
  [SMALL_STATE(45)] = 902,
  [SMALL_STATE(46)] = 922,
  [SMALL_STATE(47)] = 942,
  [SMALL_STATE(48)] = 960,
  [SMALL_STATE(49)] = 980,
  [SMALL_STATE(50)] = 1000,
  [SMALL_STATE(51)] = 1020,
  [SMALL_STATE(52)] = 1034,
  [SMALL_STATE(53)] = 1054,
  [SMALL_STATE(54)] = 1074,
  [SMALL_STATE(55)] = 1092,
  [SMALL_STATE(56)] = 1111,
  [SMALL_STATE(57)] = 1124,
  [SMALL_STATE(58)] = 1141,
  [SMALL_STATE(59)] = 1160,
  [SMALL_STATE(60)] = 1177,
  [SMALL_STATE(61)] = 1194,
  [SMALL_STATE(62)] = 1211,
  [SMALL_STATE(63)] = 1224,
  [SMALL_STATE(64)] = 1237,
  [SMALL_STATE(65)] = 1256,
  [SMALL_STATE(66)] = 1268,
  [SMALL_STATE(67)] = 1280,
  [SMALL_STATE(68)] = 1292,
  [SMALL_STATE(69)] = 1304,
  [SMALL_STATE(70)] = 1316,
  [SMALL_STATE(71)] = 1332,
  [SMALL_STATE(72)] = 1348,
  [SMALL_STATE(73)] = 1364,
  [SMALL_STATE(74)] = 1380,
  [SMALL_STATE(75)] = 1396,
  [SMALL_STATE(76)] = 1412,
  [SMALL_STATE(77)] = 1426,
  [SMALL_STATE(78)] = 1438,
  [SMALL_STATE(79)] = 1450,
  [SMALL_STATE(80)] = 1466,
  [SMALL_STATE(81)] = 1480,
  [SMALL_STATE(82)] = 1496,
  [SMALL_STATE(83)] = 1512,
  [SMALL_STATE(84)] = 1528,
  [SMALL_STATE(85)] = 1544,
  [SMALL_STATE(86)] = 1558,
  [SMALL_STATE(87)] = 1569,
  [SMALL_STATE(88)] = 1582,
  [SMALL_STATE(89)] = 1593,
  [SMALL_STATE(90)] = 1606,
  [SMALL_STATE(91)] = 1619,
  [SMALL_STATE(92)] = 1630,
  [SMALL_STATE(93)] = 1643,
  [SMALL_STATE(94)] = 1654,
  [SMALL_STATE(95)] = 1667,
  [SMALL_STATE(96)] = 1678,
  [SMALL_STATE(97)] = 1689,
  [SMALL_STATE(98)] = 1700,
  [SMALL_STATE(99)] = 1711,
  [SMALL_STATE(100)] = 1722,
  [SMALL_STATE(101)] = 1735,
  [SMALL_STATE(102)] = 1746,
  [SMALL_STATE(103)] = 1757,
  [SMALL_STATE(104)] = 1770,
  [SMALL_STATE(105)] = 1781,
  [SMALL_STATE(106)] = 1794,
  [SMALL_STATE(107)] = 1807,
  [SMALL_STATE(108)] = 1817,
  [SMALL_STATE(109)] = 1827,
  [SMALL_STATE(110)] = 1837,
  [SMALL_STATE(111)] = 1847,
  [SMALL_STATE(112)] = 1857,
  [SMALL_STATE(113)] = 1867,
  [SMALL_STATE(114)] = 1877,
  [SMALL_STATE(115)] = 1887,
  [SMALL_STATE(116)] = 1897,
  [SMALL_STATE(117)] = 1907,
  [SMALL_STATE(118)] = 1917,
  [SMALL_STATE(119)] = 1927,
  [SMALL_STATE(120)] = 1937,
  [SMALL_STATE(121)] = 1947,
  [SMALL_STATE(122)] = 1957,
  [SMALL_STATE(123)] = 1967,
  [SMALL_STATE(124)] = 1977,
  [SMALL_STATE(125)] = 1987,
  [SMALL_STATE(126)] = 1997,
  [SMALL_STATE(127)] = 2007,
  [SMALL_STATE(128)] = 2017,
  [SMALL_STATE(129)] = 2027,
  [SMALL_STATE(130)] = 2037,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num, 1, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_writable_block, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_writable_block, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num, 2, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_block, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_required_block, 1, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_required_block_repeat1, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_num_repeat1, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_required_block, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_properties, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_required_block, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immutable_block, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str, 2, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num_type, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str, 1, 0, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_num_attribute, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref, 1, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_enum, 2, 0, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_enum, 1, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_enum_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file, 1, 0, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref, 2, 0, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file, 2, 0, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_str_repeat1, 1, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_str_attribute, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_ref_attribute, 4, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_ref_repeat1, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_file_attribute, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_enum_attribute, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_enum_repeat1, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_file_repeat1, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_required_block_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_obj, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_column, 2, 0, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_block, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_column, 3, 0, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_bool, 1, 0, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_concatenator_operator, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [376] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
