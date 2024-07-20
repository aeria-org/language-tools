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
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 3
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  sym_word = 2,
  sym_number = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  sym_quoted_string = 6,
  sym_array_identifier = 7,
  anon_sym_LBRACK = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_in = 17,
  anon_sym_GT = 18,
  anon_sym_LT = 19,
  anon_sym_AMP_AMP = 20,
  anon_sym_PIPE_PIPE = 21,
  anon_sym_AT = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_ATcondition = 25,
  anon_sym_properties = 26,
  anon_sym_form = 27,
  anon_sym_immutable = 28,
  anon_sym_required = 29,
  anon_sym_writable = 30,
  anon_sym_str = 31,
  anon_sym_num = 32,
  anon_sym_int = 33,
  anon_sym_bool = 34,
  anon_sym_enum = 35,
  anon_sym_const = 36,
  anon_sym_filters = 37,
  anon_sym_indexes = 38,
  anon_sym_presets = 39,
  anon_sym_table = 40,
  anon_sym_tableMeta = 41,
  anon_sym_filtersPresets = 42,
  anon_sym_label = 43,
  anon_sym_layout = 44,
  anon_sym_name = 45,
  anon_sym_options = 46,
  anon_sym_title = 47,
  anon_sym_picture = 48,
  anon_sym_badge = 49,
  anon_sym_information = 50,
  anon_sym_active = 51,
  anon_sym_translateBadge = 52,
  anon_sym_search = 53,
  anon_sym_placeholder = 54,
  anon_sym_owned = 55,
  anon_sym_timestamps = 56,
  anon_sym_icon = 57,
  anon_sym_functions = 58,
  anon_sym_QMARK = 59,
  anon_sym_logging = 60,
  anon_sym_strategy = 61,
  anon_sym_rateLimiting = 62,
  anon_sym_security = 63,
  anon_sym_collection = 64,
  sym_program = 65,
  sym_comment = 66,
  sym_boolean = 67,
  sym_constant = 68,
  sym_array = 69,
  sym_dictionary = 70,
  sym_collection_name = 71,
  sym_variable_name = 72,
  sym_function_name = 73,
  sym_binary_operator = 74,
  sym_logical_concatenator_operator = 75,
  sym_binary_operation = 76,
  sym_condition_expression = 77,
  sym_attribute = 78,
  sym_condition = 79,
  sym_schema_properties = 80,
  sym_properties_column_type = 81,
  sym_properties_column = 82,
  sym_properties_block = 83,
  sym_collection_keyed_list = 84,
  sym_collection_filters_presets = 85,
  sym_collection_layout = 86,
  sym_collection_search = 87,
  sym_collection_modifiers = 88,
  sym_collection_functions = 89,
  sym_collection_security_logging = 90,
  sym_collection_security_rate_limiting = 91,
  sym_collection_security = 92,
  sym_collection = 93,
  sym_declaration = 94,
  aux_sym_program_repeat1 = 95,
  aux_sym_array_repeat1 = 96,
  aux_sym_dictionary_repeat1 = 97,
  aux_sym_schema_properties_repeat1 = 98,
  aux_sym_schema_properties_repeat2 = 99,
  aux_sym_schema_properties_repeat3 = 100,
  aux_sym_properties_column_repeat1 = 101,
  aux_sym_properties_block_repeat1 = 102,
  aux_sym_collection_keyed_list_repeat1 = 103,
  aux_sym_collection_filters_presets_repeat1 = 104,
  aux_sym_collection_filters_presets_repeat2 = 105,
  aux_sym_collection_layout_repeat1 = 106,
  aux_sym_collection_layout_repeat2 = 107,
  aux_sym_collection_search_repeat1 = 108,
  aux_sym_collection_search_repeat2 = 109,
  aux_sym_collection_functions_repeat1 = 110,
  aux_sym_collection_security_logging_repeat1 = 111,
  aux_sym_collection_security_repeat1 = 112,
  aux_sym_collection_security_repeat2 = 113,
  aux_sym_collection_security_repeat3 = 114,
  aux_sym_collection_repeat1 = 115,
  anon_alias_sym_collection_name = 116,
  anon_alias_sym_function_name = 117,
  anon_alias_sym_variable_name = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_word] = "word",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_quoted_string] = "quoted_string",
  [sym_array_identifier] = "array_identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_in] = "in",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ATcondition] = "@condition",
  [anon_sym_properties] = "properties",
  [anon_sym_form] = "form",
  [anon_sym_immutable] = "immutable",
  [anon_sym_required] = "required",
  [anon_sym_writable] = "writable",
  [anon_sym_str] = "str",
  [anon_sym_num] = "num",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_enum] = "enum",
  [anon_sym_const] = "const",
  [anon_sym_filters] = "filters",
  [anon_sym_indexes] = "indexes",
  [anon_sym_presets] = "presets",
  [anon_sym_table] = "table",
  [anon_sym_tableMeta] = "tableMeta",
  [anon_sym_filtersPresets] = "filtersPresets",
  [anon_sym_label] = "label",
  [anon_sym_layout] = "layout",
  [anon_sym_name] = "name",
  [anon_sym_options] = "options",
  [anon_sym_title] = "title",
  [anon_sym_picture] = "picture",
  [anon_sym_badge] = "badge",
  [anon_sym_information] = "information",
  [anon_sym_active] = "active",
  [anon_sym_translateBadge] = "translateBadge",
  [anon_sym_search] = "search",
  [anon_sym_placeholder] = "placeholder",
  [anon_sym_owned] = "owned",
  [anon_sym_timestamps] = "timestamps",
  [anon_sym_icon] = "icon",
  [anon_sym_functions] = "functions",
  [anon_sym_QMARK] = "\?",
  [anon_sym_logging] = "logging",
  [anon_sym_strategy] = "strategy",
  [anon_sym_rateLimiting] = "rateLimiting",
  [anon_sym_security] = "security",
  [anon_sym_collection] = "collection",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [sym_constant] = "constant",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_collection_name] = "collection_name",
  [sym_variable_name] = "variable_name",
  [sym_function_name] = "function_name",
  [sym_binary_operator] = "binary_operator",
  [sym_logical_concatenator_operator] = "logical_concatenator_operator",
  [sym_binary_operation] = "binary_operation",
  [sym_condition_expression] = "condition_expression",
  [sym_attribute] = "attribute",
  [sym_condition] = "condition",
  [sym_schema_properties] = "schema_properties",
  [sym_properties_column_type] = "properties_column_type",
  [sym_properties_column] = "properties_column",
  [sym_properties_block] = "properties_block",
  [sym_collection_keyed_list] = "collection_keyed_list",
  [sym_collection_filters_presets] = "collection_filters_presets",
  [sym_collection_layout] = "collection_layout",
  [sym_collection_search] = "collection_search",
  [sym_collection_modifiers] = "collection_modifiers",
  [sym_collection_functions] = "collection_functions",
  [sym_collection_security_logging] = "collection_security_logging",
  [sym_collection_security_rate_limiting] = "collection_security_rate_limiting",
  [sym_collection_security] = "collection_security",
  [sym_collection] = "collection",
  [sym_declaration] = "declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_schema_properties_repeat1] = "schema_properties_repeat1",
  [aux_sym_schema_properties_repeat2] = "schema_properties_repeat2",
  [aux_sym_schema_properties_repeat3] = "schema_properties_repeat3",
  [aux_sym_properties_column_repeat1] = "properties_column_repeat1",
  [aux_sym_properties_block_repeat1] = "properties_block_repeat1",
  [aux_sym_collection_keyed_list_repeat1] = "collection_keyed_list_repeat1",
  [aux_sym_collection_filters_presets_repeat1] = "collection_filters_presets_repeat1",
  [aux_sym_collection_filters_presets_repeat2] = "collection_filters_presets_repeat2",
  [aux_sym_collection_layout_repeat1] = "collection_layout_repeat1",
  [aux_sym_collection_layout_repeat2] = "collection_layout_repeat2",
  [aux_sym_collection_search_repeat1] = "collection_search_repeat1",
  [aux_sym_collection_search_repeat2] = "collection_search_repeat2",
  [aux_sym_collection_functions_repeat1] = "collection_functions_repeat1",
  [aux_sym_collection_security_logging_repeat1] = "collection_security_logging_repeat1",
  [aux_sym_collection_security_repeat1] = "collection_security_repeat1",
  [aux_sym_collection_security_repeat2] = "collection_security_repeat2",
  [aux_sym_collection_security_repeat3] = "collection_security_repeat3",
  [aux_sym_collection_repeat1] = "collection_repeat1",
  [anon_alias_sym_collection_name] = "collection_name",
  [anon_alias_sym_function_name] = "function_name",
  [anon_alias_sym_variable_name] = "variable_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_word] = sym_word,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_quoted_string] = sym_quoted_string,
  [sym_array_identifier] = sym_array_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ATcondition] = anon_sym_ATcondition,
  [anon_sym_properties] = anon_sym_properties,
  [anon_sym_form] = anon_sym_form,
  [anon_sym_immutable] = anon_sym_immutable,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_writable] = anon_sym_writable,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_num] = anon_sym_num,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_filters] = anon_sym_filters,
  [anon_sym_indexes] = anon_sym_indexes,
  [anon_sym_presets] = anon_sym_presets,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_tableMeta] = anon_sym_tableMeta,
  [anon_sym_filtersPresets] = anon_sym_filtersPresets,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_picture] = anon_sym_picture,
  [anon_sym_badge] = anon_sym_badge,
  [anon_sym_information] = anon_sym_information,
  [anon_sym_active] = anon_sym_active,
  [anon_sym_translateBadge] = anon_sym_translateBadge,
  [anon_sym_search] = anon_sym_search,
  [anon_sym_placeholder] = anon_sym_placeholder,
  [anon_sym_owned] = anon_sym_owned,
  [anon_sym_timestamps] = anon_sym_timestamps,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_logging] = anon_sym_logging,
  [anon_sym_strategy] = anon_sym_strategy,
  [anon_sym_rateLimiting] = anon_sym_rateLimiting,
  [anon_sym_security] = anon_sym_security,
  [anon_sym_collection] = anon_sym_collection,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [sym_constant] = sym_constant,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_collection_name] = sym_collection_name,
  [sym_variable_name] = sym_variable_name,
  [sym_function_name] = sym_function_name,
  [sym_binary_operator] = sym_binary_operator,
  [sym_logical_concatenator_operator] = sym_logical_concatenator_operator,
  [sym_binary_operation] = sym_binary_operation,
  [sym_condition_expression] = sym_condition_expression,
  [sym_attribute] = sym_attribute,
  [sym_condition] = sym_condition,
  [sym_schema_properties] = sym_schema_properties,
  [sym_properties_column_type] = sym_properties_column_type,
  [sym_properties_column] = sym_properties_column,
  [sym_properties_block] = sym_properties_block,
  [sym_collection_keyed_list] = sym_collection_keyed_list,
  [sym_collection_filters_presets] = sym_collection_filters_presets,
  [sym_collection_layout] = sym_collection_layout,
  [sym_collection_search] = sym_collection_search,
  [sym_collection_modifiers] = sym_collection_modifiers,
  [sym_collection_functions] = sym_collection_functions,
  [sym_collection_security_logging] = sym_collection_security_logging,
  [sym_collection_security_rate_limiting] = sym_collection_security_rate_limiting,
  [sym_collection_security] = sym_collection_security,
  [sym_collection] = sym_collection,
  [sym_declaration] = sym_declaration,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_schema_properties_repeat1] = aux_sym_schema_properties_repeat1,
  [aux_sym_schema_properties_repeat2] = aux_sym_schema_properties_repeat2,
  [aux_sym_schema_properties_repeat3] = aux_sym_schema_properties_repeat3,
  [aux_sym_properties_column_repeat1] = aux_sym_properties_column_repeat1,
  [aux_sym_properties_block_repeat1] = aux_sym_properties_block_repeat1,
  [aux_sym_collection_keyed_list_repeat1] = aux_sym_collection_keyed_list_repeat1,
  [aux_sym_collection_filters_presets_repeat1] = aux_sym_collection_filters_presets_repeat1,
  [aux_sym_collection_filters_presets_repeat2] = aux_sym_collection_filters_presets_repeat2,
  [aux_sym_collection_layout_repeat1] = aux_sym_collection_layout_repeat1,
  [aux_sym_collection_layout_repeat2] = aux_sym_collection_layout_repeat2,
  [aux_sym_collection_search_repeat1] = aux_sym_collection_search_repeat1,
  [aux_sym_collection_search_repeat2] = aux_sym_collection_search_repeat2,
  [aux_sym_collection_functions_repeat1] = aux_sym_collection_functions_repeat1,
  [aux_sym_collection_security_logging_repeat1] = aux_sym_collection_security_logging_repeat1,
  [aux_sym_collection_security_repeat1] = aux_sym_collection_security_repeat1,
  [aux_sym_collection_security_repeat2] = aux_sym_collection_security_repeat2,
  [aux_sym_collection_security_repeat3] = aux_sym_collection_security_repeat3,
  [aux_sym_collection_repeat1] = aux_sym_collection_repeat1,
  [anon_alias_sym_collection_name] = anon_alias_sym_collection_name,
  [anon_alias_sym_function_name] = anon_alias_sym_function_name,
  [anon_alias_sym_variable_name] = anon_alias_sym_variable_name,
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
  [sym_word] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_ATcondition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_properties] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_form] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writable] = {
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
  [anon_sym_filtersPresets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_picture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_badge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_information] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_translateBadge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_search] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_placeholder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_owned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
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
  [anon_sym_logging] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strategy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rateLimiting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security] = {
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
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
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
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
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
  [sym_collection_keyed_list] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_filters_presets] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_search] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_functions] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_security_logging] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_security_rate_limiting] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_security] = {
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
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_properties_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_properties_repeat3] = {
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
  [aux_sym_collection_filters_presets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_filters_presets_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_layout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_layout_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_search_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_search_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_functions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_security_logging_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_security_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_security_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_collection_security_repeat3] = {
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
  [anon_alias_sym_function_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_variable_name] = {
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
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_name, 0},
    {field_type, 1},
  [4] =
    {field_name, 0},
    {field_type, 2},
  [6] =
    {field_name, 0},
  [7] =
    {field_property_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_collection_name,
  },
  [3] = {
    [0] = anon_alias_sym_variable_name,
  },
  [4] = {
    [0] = anon_alias_sym_function_name,
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
  [34] = 27,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 27,
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
  [114] = 27,
  [115] = 115,
  [116] = 27,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 113,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 112,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 56,
  [152] = 78,
  [153] = 153,
  [154] = 2,
  [155] = 6,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(241);
      ADVANCE_MAP(
        '!', 11,
        '"', 239,
        '&', 5,
        '(', 282,
        ')', 283,
        ',', 267,
        '/', 10,
        '<', 278,
        '=', 12,
        '>', 277,
        '?', 323,
        '@', 281,
        '[', 266,
        ']', 268,
        'a', 42,
        'b', 17,
        'c', 155,
        'e', 139,
        'f', 18,
        'i', 44,
        'l', 19,
        'n', 26,
        'o', 171,
        'p', 109,
        'r', 25,
        's', 59,
        't', 20,
        'w', 173,
        '{', 269,
        '|', 237,
        '}', 270,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(278);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '&', 5,
        ')', 283,
        ',', 267,
        '/', 10,
        ']', 268,
        'a', 42,
        'b', 16,
        'f', 102,
        'i', 45,
        'l', 27,
        'o', 232,
        'p', 109,
        'r', 58,
        's', 60,
        't', 21,
        'w', 173,
        '|', 237,
        '}', 270,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(279);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 282,
        ')', 283,
        ',', 267,
        '/', 10,
        '?', 323,
        '@', 281,
        ']', 268,
        '{', 269,
        '}', 270,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 282,
        ')', 283,
        ',', 267,
        '/', 10,
        '@', 281,
        ']', 268,
        '{', 269,
        '}', 270,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        ',', 267,
        '/', 10,
        '[', 15,
        ']', 268,
        'b', 156,
        'c', 157,
        'e', 146,
        'i', 143,
        'n', 224,
        's', 204,
        '{', 269,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '}') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(242);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(272);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(271);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(265);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 172:
      if (lookahead == 'q') ADVANCE(226);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 231:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 232:
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 233:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 234:
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 235:
      if (lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 236:
      if (lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 237:
      if (lookahead == '|') ADVANCE(280);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 239:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(3);
      END_STATE();
    case 240:
      if (eof) ADVANCE(241);
      ADVANCE_MAP(
        '!', 11,
        '"', 239,
        '&', 5,
        '(', 282,
        ')', 283,
        ',', 267,
        '/', 10,
        '<', 278,
        '=', 12,
        '>', 277,
        '@', 281,
        '[', 266,
        ']', 268,
        'a', 42,
        'b', 17,
        'c', 155,
        'e', 139,
        'f', 18,
        'i', 44,
        'l', 19,
        'n', 26,
        'o', 171,
        'p', 109,
        'r', 25,
        's', 59,
        't', 20,
        'w', 173,
        '{', 269,
        '|', 237,
        '}', 270,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_array_identifier);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(273);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_ATcondition);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_properties);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_form);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_writable);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_num);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_filters);
      if (lookahead == 'P') ADVANCE(183);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_indexes);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_presets);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'M') ADVANCE(86);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_tableMeta);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_filtersPresets);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_badge);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_information);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_translateBadge);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_search);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_timestamps);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_logging);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_strategy);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_rateLimiting);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_collection);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {(TSStateId)(-1)},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_properties] = ACTIONS(1),
    [anon_sym_form] = ACTIONS(1),
    [anon_sym_immutable] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_writable] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_num] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_filters] = ACTIONS(1),
    [anon_sym_indexes] = ACTIONS(1),
    [anon_sym_presets] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_tableMeta] = ACTIONS(1),
    [anon_sym_filtersPresets] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [anon_sym_badge] = ACTIONS(1),
    [anon_sym_active] = ACTIONS(1),
    [anon_sym_translateBadge] = ACTIONS(1),
    [anon_sym_search] = ACTIONS(1),
    [anon_sym_placeholder] = ACTIONS(1),
    [anon_sym_owned] = ACTIONS(1),
    [anon_sym_timestamps] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_logging] = ACTIONS(1),
    [anon_sym_rateLimiting] = ACTIONS(1),
    [anon_sym_security] = ACTIONS(1),
    [anon_sym_collection] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(195),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(160),
    [sym_declaration] = STATE(166),
    [aux_sym_program_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_collection] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(2), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(9), 28,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
      anon_sym_translateBadge,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [41] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_properties,
    ACTIONS(24), 1,
      anon_sym_filtersPresets,
    ACTIONS(27), 1,
      anon_sym_layout,
    ACTIONS(30), 1,
      anon_sym_search,
    ACTIONS(36), 1,
      anon_sym_functions,
    ACTIONS(39), 1,
      anon_sym_security,
    ACTIONS(21), 2,
      anon_sym_filters,
      anon_sym_table,
    STATE(3), 2,
      sym_comment,
      aux_sym_collection_repeat1,
    ACTIONS(33), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    ACTIONS(18), 7,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
    STATE(21), 7,
      sym_collection_keyed_list,
      sym_collection_filters_presets,
      sym_collection_layout,
      sym_collection_search,
      sym_collection_modifiers,
      sym_collection_functions,
      sym_collection_security,
  [97] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_properties,
    ACTIONS(50), 1,
      anon_sym_filtersPresets,
    ACTIONS(52), 1,
      anon_sym_layout,
    ACTIONS(54), 1,
      anon_sym_search,
    ACTIONS(58), 1,
      anon_sym_functions,
    ACTIONS(60), 1,
      anon_sym_security,
    STATE(3), 1,
      aux_sym_collection_repeat1,
    STATE(4), 1,
      sym_comment,
    ACTIONS(48), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(56), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    ACTIONS(46), 7,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
    STATE(21), 7,
      sym_collection_keyed_list,
      sym_collection_filters_presets,
      sym_collection_layout,
      sym_collection_search,
      sym_collection_modifiers,
      sym_collection_functions,
      sym_collection_security,
  [155] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(44), 1,
      anon_sym_properties,
    ACTIONS(50), 1,
      anon_sym_filtersPresets,
    ACTIONS(52), 1,
      anon_sym_layout,
    ACTIONS(54), 1,
      anon_sym_search,
    ACTIONS(58), 1,
      anon_sym_functions,
    ACTIONS(60), 1,
      anon_sym_security,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_collection_repeat1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(48), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(56), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    ACTIONS(46), 7,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
    STATE(21), 7,
      sym_collection_keyed_list,
      sym_collection_filters_presets,
      sym_collection_layout,
      sym_collection_search,
      sym_collection_modifiers,
      sym_collection_functions,
      sym_collection_security,
  [213] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(66), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(64), 22,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [248] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(68), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [278] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(72), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [308] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(76), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [338] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(80), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [368] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(84), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [398] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(88), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [428] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(92), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [458] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(96), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [488] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(100), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [518] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(104), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [548] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(108), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [578] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(112), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [608] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(116), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [638] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(13), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [668] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(122), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [698] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(126), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [728] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(130), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_filtersPresets,
      anon_sym_layout,
      anon_sym_search,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
      anon_sym_functions,
      anon_sym_security,
  [758] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      sym_word,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_boolean,
    STATE(24), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 4,
      sym_constant,
      sym_array,
      sym_dictionary,
      sym_variable_name,
  [794] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      sym_word,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_comment,
    STATE(155), 1,
      sym_boolean,
    ACTIONS(148), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 4,
      sym_constant,
      sym_array,
      sym_dictionary,
      sym_variable_name,
  [827] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      sym_word,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_boolean,
    STATE(26), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(167), 4,
      sym_constant,
      sym_array,
      sym_dictionary,
      sym_variable_name,
  [860] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(156), 4,
      sym_array_identifier,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(154), 7,
      sym_word,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
  [882] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(158), 1,
      sym_word,
    ACTIONS(160), 1,
      sym_array_identifier,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_comment,
    STATE(65), 2,
      sym_collection_name,
      sym_properties_column_type,
    ACTIONS(164), 6,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
  [910] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(158), 1,
      sym_word,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_comment,
    STATE(68), 2,
      sym_collection_name,
      sym_properties_column_type,
    ACTIONS(164), 6,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
  [935] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_translateBadge,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_collection_layout_repeat1,
    ACTIONS(170), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [958] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    STATE(44), 1,
      sym_binary_operator,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [979] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      anon_sym_translateBadge,
    STATE(32), 2,
      sym_comment,
      aux_sym_collection_layout_repeat1,
    ACTIONS(180), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [1000] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_boolean,
    STATE(33), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(188), 2,
      sym_constant,
      sym_array,
  [1025] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(156), 7,
      anon_sym_RBRACE,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
      anon_sym_translateBadge,
  [1041] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      anon_sym_translateBadge,
    STATE(30), 1,
      aux_sym_collection_layout_repeat1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [1061] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_properties,
    STATE(36), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_schema_properties_repeat3,
    ACTIONS(192), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1083] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      anon_sym_properties,
    STATE(36), 1,
      aux_sym_schema_properties_repeat3,
    STATE(37), 1,
      sym_comment,
    STATE(177), 1,
      sym_schema_properties,
    ACTIONS(192), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1105] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(156), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [1123] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      anon_sym_properties,
    STATE(36), 1,
      aux_sym_schema_properties_repeat3,
    STATE(39), 1,
      sym_comment,
    STATE(172), 1,
      sym_schema_properties,
    ACTIONS(192), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1145] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(178), 7,
      anon_sym_RBRACE,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
      anon_sym_translateBadge,
  [1161] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_properties,
    STATE(41), 2,
      sym_comment,
      aux_sym_schema_properties_repeat3,
    ACTIONS(199), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1181] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1196] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 1,
      anon_sym_logging,
    ACTIONS(206), 1,
      anon_sym_rateLimiting,
    STATE(43), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_collection_security_repeat1,
    STATE(145), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [1219] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_boolean,
    STATE(44), 1,
      sym_comment,
    STATE(117), 1,
      sym_constant,
    ACTIONS(136), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
  [1240] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(208), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1255] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(204), 1,
      anon_sym_logging,
    ACTIONS(206), 1,
      anon_sym_rateLimiting,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_collection_security_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(145), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [1278] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_boolean,
    STATE(19), 1,
      sym_constant,
    STATE(47), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
  [1299] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_logging,
    ACTIONS(217), 1,
      anon_sym_rateLimiting,
    STATE(48), 2,
      sym_comment,
      aux_sym_collection_security_repeat1,
    STATE(145), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [1320] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    ACTIONS(224), 1,
      anon_sym_QMARK,
    STATE(49), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_properties_column_repeat1,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(220), 2,
      sym_word,
      anon_sym_RBRACE,
  [1343] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(226), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1358] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(228), 5,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_QMARK,
  [1372] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(230), 5,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1386] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(53), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_properties_column_repeat1,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(232), 2,
      sym_word,
      anon_sym_RBRACE,
  [1406] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_properties_column_repeat1,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(234), 2,
      sym_word,
      anon_sym_RBRACE,
  [1426] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(55), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_properties_column_repeat1,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(236), 2,
      sym_word,
      anon_sym_RBRACE,
  [1446] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(238), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_filters,
      anon_sym_label,
  [1460] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      sym_word,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_variable_name,
    STATE(57), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_properties_block_repeat1,
    STATE(147), 1,
      sym_properties_column,
  [1482] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(58), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_properties_column_repeat1,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(244), 2,
      sym_word,
      anon_sym_RBRACE,
  [1502] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(248), 1,
      anon_sym_ATcondition,
    STATE(143), 1,
      sym_condition,
    ACTIONS(246), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_comment,
      aux_sym_schema_properties_repeat1,
  [1520] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(251), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(60), 2,
      sym_comment,
      aux_sym_properties_column_repeat1,
  [1538] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(258), 1,
      anon_sym_ATcondition,
    STATE(59), 1,
      aux_sym_schema_properties_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(143), 1,
      sym_condition,
    ACTIONS(256), 2,
      sym_word,
      anon_sym_RBRACE,
  [1558] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      anon_sym_collection,
    STATE(160), 1,
      sym_collection,
    STATE(166), 1,
      sym_declaration,
    STATE(62), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [1578] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(63), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_properties_column_repeat1,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(265), 2,
      sym_word,
      anon_sym_RBRACE,
  [1598] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(267), 5,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1612] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(65), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_properties_column_repeat1,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(269), 2,
      sym_word,
      anon_sym_RBRACE,
  [1632] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_collection,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      aux_sym_program_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(160), 1,
      sym_collection,
    STATE(166), 1,
      sym_declaration,
  [1654] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      sym_word,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_variable_name,
    STATE(147), 1,
      sym_properties_column,
    STATE(67), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [1674] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(53), 1,
      aux_sym_properties_column_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(278), 2,
      sym_word,
      anon_sym_RBRACE,
  [1694] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(54), 1,
      aux_sym_properties_column_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(280), 2,
      sym_word,
      anon_sym_RBRACE,
  [1714] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(60), 1,
      aux_sym_properties_column_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(282), 2,
      sym_word,
      anon_sym_RBRACE,
  [1734] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      sym_word,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_variable_name,
    STATE(67), 1,
      aux_sym_properties_block_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(147), 1,
      sym_properties_column,
  [1756] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(60), 1,
      aux_sym_properties_column_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(280), 2,
      sym_word,
      anon_sym_RBRACE,
  [1776] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(286), 5,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1790] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(55), 1,
      aux_sym_properties_column_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(288), 2,
      sym_word,
      anon_sym_RBRACE,
  [1810] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(258), 1,
      anon_sym_ATcondition,
    STATE(61), 1,
      aux_sym_schema_properties_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(143), 1,
      sym_condition,
    ACTIONS(290), 2,
      sym_word,
      anon_sym_RBRACE,
  [1830] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(60), 1,
      aux_sym_properties_column_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(292), 2,
      sym_word,
      anon_sym_RBRACE,
  [1850] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(60), 1,
      aux_sym_properties_column_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(127), 1,
      sym_attribute,
    ACTIONS(288), 2,
      sym_word,
      anon_sym_RBRACE,
  [1870] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_filters,
      anon_sym_label,
  [1884] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(298), 1,
      anon_sym_name,
    ACTIONS(300), 1,
      anon_sym_options,
    STATE(79), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_collection_layout_repeat2,
  [1903] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      anon_sym_filters,
    ACTIONS(307), 1,
      anon_sym_label,
    STATE(80), 2,
      sym_comment,
      aux_sym_collection_filters_presets_repeat1,
  [1920] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(310), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_quoted_string,
  [1933] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_comment,
    STATE(119), 1,
      sym_logical_concatenator_operator,
    ACTIONS(312), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1950] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(316), 4,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
  [1963] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(318), 1,
      sym_word,
    STATE(31), 1,
      sym_variable_name,
    STATE(82), 1,
      sym_binary_operation,
    STATE(84), 1,
      sym_comment,
    STATE(175), 1,
      sym_condition_expression,
  [1982] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      sym_word,
    STATE(63), 1,
      sym_variable_name,
    STATE(85), 2,
      sym_comment,
      aux_sym_collection_keyed_list_repeat1,
  [1999] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      anon_sym_filters,
    ACTIONS(327), 1,
      anon_sym_label,
    STATE(86), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_collection_filters_presets_repeat1,
  [2018] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      sym_word,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_variable_name,
    STATE(87), 2,
      sym_comment,
      aux_sym_collection_filters_presets_repeat2,
  [2035] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 1,
      sym_word,
    STATE(75), 1,
      sym_variable_name,
    STATE(88), 2,
      sym_comment,
      aux_sym_schema_properties_repeat2,
  [2052] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_name,
    ACTIONS(342), 1,
      anon_sym_options,
    STATE(89), 2,
      sym_comment,
      aux_sym_collection_layout_repeat2,
  [2069] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(345), 1,
      sym_word,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_variable_name,
    STATE(90), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_collection_keyed_list_repeat1,
  [2088] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      sym_word,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_collection_filters_presets_repeat2,
    STATE(173), 1,
      sym_variable_name,
  [2107] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      anon_sym_indexes,
    ACTIONS(356), 1,
      anon_sym_placeholder,
    STATE(92), 2,
      sym_comment,
      aux_sym_collection_search_repeat2,
  [2124] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      sym_word,
    STATE(49), 1,
      sym_function_name,
    STATE(93), 2,
      sym_comment,
      aux_sym_collection_functions_repeat1,
  [2141] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      sym_word,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_comment,
    STATE(101), 1,
      aux_sym_collection_security_repeat2,
    STATE(187), 1,
      sym_function_name,
  [2160] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(298), 1,
      anon_sym_name,
    ACTIONS(300), 1,
      anon_sym_options,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_collection_layout_repeat2,
    STATE(95), 1,
      sym_comment,
  [2179] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 1,
      anon_sym_indexes,
    ACTIONS(372), 1,
      anon_sym_placeholder,
    STATE(96), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_collection_search_repeat2,
  [2198] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      sym_word,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_function_name,
    STATE(97), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_collection_functions_repeat1,
  [2217] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(376), 1,
      sym_word,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_variable_name,
    STATE(88), 1,
      aux_sym_schema_properties_repeat2,
    STATE(98), 1,
      sym_comment,
  [2236] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_comment,
    ACTIONS(380), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2251] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      sym_word,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_collection_filters_presets_repeat2,
    STATE(100), 1,
      sym_comment,
    STATE(173), 1,
      sym_variable_name,
  [2270] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      sym_word,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_collection_security_repeat2,
    STATE(187), 1,
      sym_function_name,
  [2289] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      sym_word,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_variable_name,
    STATE(102), 2,
      sym_comment,
      aux_sym_collection_search_repeat1,
  [2306] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(325), 1,
      anon_sym_filters,
    ACTIONS(327), 1,
      anon_sym_label,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_collection_filters_presets_repeat1,
    STATE(103), 1,
      sym_comment,
  [2325] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(370), 1,
      anon_sym_indexes,
    ACTIONS(372), 1,
      anon_sym_placeholder,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_collection_search_repeat2,
    STATE(104), 1,
      sym_comment,
  [2344] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(345), 1,
      sym_word,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_variable_name,
    STATE(85), 1,
      aux_sym_collection_keyed_list_repeat1,
    STATE(105), 1,
      sym_comment,
  [2363] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(376), 1,
      sym_word,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_variable_name,
    STATE(98), 1,
      aux_sym_schema_properties_repeat2,
    STATE(106), 1,
      sym_comment,
  [2382] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_word,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_function_name,
    STATE(107), 2,
      sym_comment,
      aux_sym_collection_security_repeat2,
  [2399] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(345), 1,
      sym_word,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      aux_sym_collection_search_repeat1,
    STATE(108), 1,
      sym_comment,
    STATE(153), 1,
      sym_variable_name,
  [2418] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      sym_word,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_function_name,
    STATE(93), 1,
      aux_sym_collection_functions_repeat1,
    STATE(109), 1,
      sym_comment,
  [2437] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2449] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym_array_repeat1,
  [2465] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_word,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_dictionary_repeat1,
  [2481] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_word,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_dictionary_repeat1,
    STATE(113), 1,
      sym_comment,
  [2497] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(114), 1,
      sym_comment,
    ACTIONS(156), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATcondition,
  [2509] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_boolean,
    STATE(115), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
  [2523] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(156), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2535] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [2547] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(424), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATcondition,
  [2559] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(318), 1,
      sym_word,
    STATE(31), 1,
      sym_variable_name,
    STATE(119), 1,
      sym_comment,
    STATE(189), 1,
      sym_binary_operation,
  [2575] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(426), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2587] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(428), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2599] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 1,
      anon_sym_strategy,
    STATE(122), 2,
      sym_comment,
      aux_sym_collection_security_logging_repeat1,
  [2613] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(123), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2625] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    STATE(124), 2,
      sym_comment,
      aux_sym_array_repeat1,
  [2639] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_word,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_comment,
    STATE(141), 1,
      aux_sym_dictionary_repeat1,
  [2655] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(126), 1,
      sym_comment,
    ACTIONS(302), 3,
      anon_sym_RBRACE,
      anon_sym_filters,
      anon_sym_label,
  [2667] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(444), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2679] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_options,
  [2691] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    ACTIONS(450), 1,
      anon_sym_strategy,
    STATE(122), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(129), 1,
      sym_comment,
  [2707] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_RBRACE,
      anon_sym_indexes,
      anon_sym_placeholder,
  [2719] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(450), 1,
      anon_sym_strategy,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(131), 1,
      sym_comment,
  [2735] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2747] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_array_repeat1,
    STATE(133), 1,
      sym_comment,
  [2763] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      anon_sym_functions,
    STATE(134), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_collection_security_repeat3,
  [2779] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      anon_sym_functions,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_collection_security_repeat3,
  [2795] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(136), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_options,
  [2807] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(450), 1,
      anon_sym_strategy,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(137), 1,
      sym_comment,
  [2823] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(450), 1,
      anon_sym_strategy,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(138), 1,
      sym_comment,
  [2839] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(470), 1,
      sym_word,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(139), 2,
      sym_comment,
      aux_sym_dictionary_repeat1,
  [2853] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_functions,
    STATE(140), 2,
      sym_comment,
      aux_sym_collection_security_repeat3,
  [2867] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_word,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      aux_sym_dictionary_repeat1,
    STATE(141), 1,
      sym_comment,
  [2883] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(345), 1,
      sym_word,
    STATE(108), 1,
      aux_sym_collection_search_repeat1,
    STATE(142), 1,
      sym_comment,
    STATE(153), 1,
      sym_variable_name,
  [2899] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(143), 1,
      sym_comment,
    ACTIONS(482), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATcondition,
  [2911] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(144), 1,
      sym_comment,
    ACTIONS(484), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2923] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(486), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2935] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(146), 1,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_RBRACE,
      anon_sym_indexes,
      anon_sym_placeholder,
  [2947] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(488), 2,
      sym_word,
      anon_sym_RBRACE,
  [2958] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(148), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_RBRACE,
      anon_sym_functions,
  [2969] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      sym_word,
    STATE(40), 1,
      sym_variable_name,
    STATE(149), 1,
      sym_comment,
  [2982] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      sym_word,
    STATE(150), 1,
      sym_comment,
    STATE(178), 1,
      sym_collection_name,
  [2995] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(151), 1,
      sym_comment,
    ACTIONS(238), 2,
      sym_word,
      anon_sym_RBRACE,
  [3006] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      sym_comment,
    ACTIONS(294), 2,
      sym_word,
      anon_sym_RBRACE,
  [3017] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(153), 1,
      sym_comment,
    ACTIONS(496), 2,
      sym_word,
      anon_sym_RBRACE,
  [3028] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(154), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_word,
      anon_sym_RBRACE,
  [3039] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(155), 1,
      sym_comment,
    ACTIONS(64), 2,
      sym_word,
      anon_sym_RBRACE,
  [3050] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(156), 1,
      sym_comment,
    ACTIONS(473), 2,
      sym_word,
      anon_sym_RBRACE,
  [3061] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(157), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_RBRACE,
      anon_sym_functions,
  [3072] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym_dictionary,
    STATE(158), 1,
      sym_comment,
  [3085] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_properties_block,
    STATE(159), 1,
      sym_comment,
  [3098] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(160), 1,
      sym_comment,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3109] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(161), 1,
      sym_comment,
    ACTIONS(504), 2,
      sym_word,
      anon_sym_RBRACE,
  [3120] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(162), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_RBRACE,
      anon_sym_strategy,
  [3131] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(506), 2,
      sym_word,
      anon_sym_RBRACE,
  [3142] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_properties_block,
    STATE(164), 1,
      sym_comment,
  [3155] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3166] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(166), 1,
      sym_comment,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3177] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(167), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3188] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(168), 1,
      sym_comment,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3199] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(169), 1,
      sym_comment,
    ACTIONS(514), 2,
      sym_word,
      anon_sym_RBRACE,
  [3210] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(170), 1,
      sym_comment,
    ACTIONS(516), 2,
      sym_word,
      anon_sym_RBRACE,
  [3221] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(518), 1,
      sym_word,
    STATE(171), 1,
      sym_comment,
  [3231] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_comment,
  [3241] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_comment,
  [3251] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_comment,
  [3261] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym_comment,
  [3271] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      sym_quoted_string,
    STATE(176), 1,
      sym_comment,
  [3281] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym_comment,
  [3291] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_comment,
  [3301] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_comment,
  [3311] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(536), 1,
      sym_quoted_string,
    STATE(180), 1,
      sym_comment,
  [3321] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_comment,
  [3331] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_comment,
  [3341] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(542), 1,
      sym_quoted_string,
    STATE(183), 1,
      sym_comment,
  [3351] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_comment,
  [3361] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(546), 1,
      sym_word,
    STATE(185), 1,
      sym_comment,
  [3371] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_comment,
  [3381] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_comment,
  [3391] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      sym_comment,
  [3401] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [3411] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym_comment,
  [3421] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_comment,
  [3431] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_comment,
  [3441] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_comment,
  [3451] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_comment,
  [3461] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_comment,
  [3471] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_quoted_string,
    STATE(196), 1,
      sym_comment,
  [3481] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_comment,
  [3491] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      sym_comment,
  [3501] = 1,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 97,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 248,
  [SMALL_STATE(8)] = 278,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 368,
  [SMALL_STATE(12)] = 398,
  [SMALL_STATE(13)] = 428,
  [SMALL_STATE(14)] = 458,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 548,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 608,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 668,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 728,
  [SMALL_STATE(24)] = 758,
  [SMALL_STATE(25)] = 794,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 860,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 910,
  [SMALL_STATE(30)] = 935,
  [SMALL_STATE(31)] = 958,
  [SMALL_STATE(32)] = 979,
  [SMALL_STATE(33)] = 1000,
  [SMALL_STATE(34)] = 1025,
  [SMALL_STATE(35)] = 1041,
  [SMALL_STATE(36)] = 1061,
  [SMALL_STATE(37)] = 1083,
  [SMALL_STATE(38)] = 1105,
  [SMALL_STATE(39)] = 1123,
  [SMALL_STATE(40)] = 1145,
  [SMALL_STATE(41)] = 1161,
  [SMALL_STATE(42)] = 1181,
  [SMALL_STATE(43)] = 1196,
  [SMALL_STATE(44)] = 1219,
  [SMALL_STATE(45)] = 1240,
  [SMALL_STATE(46)] = 1255,
  [SMALL_STATE(47)] = 1278,
  [SMALL_STATE(48)] = 1299,
  [SMALL_STATE(49)] = 1320,
  [SMALL_STATE(50)] = 1343,
  [SMALL_STATE(51)] = 1358,
  [SMALL_STATE(52)] = 1372,
  [SMALL_STATE(53)] = 1386,
  [SMALL_STATE(54)] = 1406,
  [SMALL_STATE(55)] = 1426,
  [SMALL_STATE(56)] = 1446,
  [SMALL_STATE(57)] = 1460,
  [SMALL_STATE(58)] = 1482,
  [SMALL_STATE(59)] = 1502,
  [SMALL_STATE(60)] = 1520,
  [SMALL_STATE(61)] = 1538,
  [SMALL_STATE(62)] = 1558,
  [SMALL_STATE(63)] = 1578,
  [SMALL_STATE(64)] = 1598,
  [SMALL_STATE(65)] = 1612,
  [SMALL_STATE(66)] = 1632,
  [SMALL_STATE(67)] = 1654,
  [SMALL_STATE(68)] = 1674,
  [SMALL_STATE(69)] = 1694,
  [SMALL_STATE(70)] = 1714,
  [SMALL_STATE(71)] = 1734,
  [SMALL_STATE(72)] = 1756,
  [SMALL_STATE(73)] = 1776,
  [SMALL_STATE(74)] = 1790,
  [SMALL_STATE(75)] = 1810,
  [SMALL_STATE(76)] = 1830,
  [SMALL_STATE(77)] = 1850,
  [SMALL_STATE(78)] = 1870,
  [SMALL_STATE(79)] = 1884,
  [SMALL_STATE(80)] = 1903,
  [SMALL_STATE(81)] = 1920,
  [SMALL_STATE(82)] = 1933,
  [SMALL_STATE(83)] = 1950,
  [SMALL_STATE(84)] = 1963,
  [SMALL_STATE(85)] = 1982,
  [SMALL_STATE(86)] = 1999,
  [SMALL_STATE(87)] = 2018,
  [SMALL_STATE(88)] = 2035,
  [SMALL_STATE(89)] = 2052,
  [SMALL_STATE(90)] = 2069,
  [SMALL_STATE(91)] = 2088,
  [SMALL_STATE(92)] = 2107,
  [SMALL_STATE(93)] = 2124,
  [SMALL_STATE(94)] = 2141,
  [SMALL_STATE(95)] = 2160,
  [SMALL_STATE(96)] = 2179,
  [SMALL_STATE(97)] = 2198,
  [SMALL_STATE(98)] = 2217,
  [SMALL_STATE(99)] = 2236,
  [SMALL_STATE(100)] = 2251,
  [SMALL_STATE(101)] = 2270,
  [SMALL_STATE(102)] = 2289,
  [SMALL_STATE(103)] = 2306,
  [SMALL_STATE(104)] = 2325,
  [SMALL_STATE(105)] = 2344,
  [SMALL_STATE(106)] = 2363,
  [SMALL_STATE(107)] = 2382,
  [SMALL_STATE(108)] = 2399,
  [SMALL_STATE(109)] = 2418,
  [SMALL_STATE(110)] = 2437,
  [SMALL_STATE(111)] = 2449,
  [SMALL_STATE(112)] = 2465,
  [SMALL_STATE(113)] = 2481,
  [SMALL_STATE(114)] = 2497,
  [SMALL_STATE(115)] = 2509,
  [SMALL_STATE(116)] = 2523,
  [SMALL_STATE(117)] = 2535,
  [SMALL_STATE(118)] = 2547,
  [SMALL_STATE(119)] = 2559,
  [SMALL_STATE(120)] = 2575,
  [SMALL_STATE(121)] = 2587,
  [SMALL_STATE(122)] = 2599,
  [SMALL_STATE(123)] = 2613,
  [SMALL_STATE(124)] = 2625,
  [SMALL_STATE(125)] = 2639,
  [SMALL_STATE(126)] = 2655,
  [SMALL_STATE(127)] = 2667,
  [SMALL_STATE(128)] = 2679,
  [SMALL_STATE(129)] = 2691,
  [SMALL_STATE(130)] = 2707,
  [SMALL_STATE(131)] = 2719,
  [SMALL_STATE(132)] = 2735,
  [SMALL_STATE(133)] = 2747,
  [SMALL_STATE(134)] = 2763,
  [SMALL_STATE(135)] = 2779,
  [SMALL_STATE(136)] = 2795,
  [SMALL_STATE(137)] = 2807,
  [SMALL_STATE(138)] = 2823,
  [SMALL_STATE(139)] = 2839,
  [SMALL_STATE(140)] = 2853,
  [SMALL_STATE(141)] = 2867,
  [SMALL_STATE(142)] = 2883,
  [SMALL_STATE(143)] = 2899,
  [SMALL_STATE(144)] = 2911,
  [SMALL_STATE(145)] = 2923,
  [SMALL_STATE(146)] = 2935,
  [SMALL_STATE(147)] = 2947,
  [SMALL_STATE(148)] = 2958,
  [SMALL_STATE(149)] = 2969,
  [SMALL_STATE(150)] = 2982,
  [SMALL_STATE(151)] = 2995,
  [SMALL_STATE(152)] = 3006,
  [SMALL_STATE(153)] = 3017,
  [SMALL_STATE(154)] = 3028,
  [SMALL_STATE(155)] = 3039,
  [SMALL_STATE(156)] = 3050,
  [SMALL_STATE(157)] = 3061,
  [SMALL_STATE(158)] = 3072,
  [SMALL_STATE(159)] = 3085,
  [SMALL_STATE(160)] = 3098,
  [SMALL_STATE(161)] = 3109,
  [SMALL_STATE(162)] = 3120,
  [SMALL_STATE(163)] = 3131,
  [SMALL_STATE(164)] = 3142,
  [SMALL_STATE(165)] = 3155,
  [SMALL_STATE(166)] = 3166,
  [SMALL_STATE(167)] = 3177,
  [SMALL_STATE(168)] = 3188,
  [SMALL_STATE(169)] = 3199,
  [SMALL_STATE(170)] = 3210,
  [SMALL_STATE(171)] = 3221,
  [SMALL_STATE(172)] = 3231,
  [SMALL_STATE(173)] = 3241,
  [SMALL_STATE(174)] = 3251,
  [SMALL_STATE(175)] = 3261,
  [SMALL_STATE(176)] = 3271,
  [SMALL_STATE(177)] = 3281,
  [SMALL_STATE(178)] = 3291,
  [SMALL_STATE(179)] = 3301,
  [SMALL_STATE(180)] = 3311,
  [SMALL_STATE(181)] = 3321,
  [SMALL_STATE(182)] = 3331,
  [SMALL_STATE(183)] = 3341,
  [SMALL_STATE(184)] = 3351,
  [SMALL_STATE(185)] = 3361,
  [SMALL_STATE(186)] = 3371,
  [SMALL_STATE(187)] = 3381,
  [SMALL_STATE(188)] = 3391,
  [SMALL_STATE(189)] = 3401,
  [SMALL_STATE(190)] = 3411,
  [SMALL_STATE(191)] = 3421,
  [SMALL_STATE(192)] = 3431,
  [SMALL_STATE(193)] = 3441,
  [SMALL_STATE(194)] = 3451,
  [SMALL_STATE(195)] = 3461,
  [SMALL_STATE(196)] = 3471,
  [SMALL_STATE(197)] = 3481,
  [SMALL_STATE(198)] = 3491,
  [SMALL_STATE(199)] = 3501,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_search, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_search, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_keyed_list, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_keyed_list, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties_block, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_search, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_search, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_filters_presets, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_filters_presets, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_functions, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_functions, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_security, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_security, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_functions, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_functions, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_layout, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_layout, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_filters_presets, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_filters_presets, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_keyed_list, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_keyed_list, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_modifiers, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_modifiers, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_layout, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_layout, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties_block, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 1, 0, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1, 0, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_properties, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0), SHIFT_REPEAT(159),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0), SHIFT_REPEAT(179),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, 0, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 4, 0, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 6, 0, 7),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 4, 0, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 2, 0, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 3, 0, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 5, 0, 7),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 3, 0, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat1, 2, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_name, 1, 0, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat2, 2, 0, 0), SHIFT_REPEAT(27),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat2, 2, 0, 0),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 2, 0, 0), SHIFT_REPEAT(114),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0), SHIFT_REPEAT(180),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0), SHIFT_REPEAT(181),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat2, 2, 0, 0),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat2, 2, 0, 0), SHIFT_REPEAT(182),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat2, 2, 0, 0), SHIFT_REPEAT(183),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_rate_limiting, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 8),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column_type, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_rate_limiting, 4, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_logging_repeat1, 2, 0, 0),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_logging_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_logging, 4, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 4, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat2, 4, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_logging, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 2, 0, 0),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 2, 0, 0), SHIFT_REPEAT(186),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 4, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 1, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 4, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat2, 4, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4, 0, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 5, 0, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat2, 3, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_concatenator_operator, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [566] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
