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
#define STATE_COUNT 210
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 4
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  sym_word = 2,
  sym_number = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  sym_quoted_string = 6,
  sym_array_operator = 7,
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
  anon_sym_date = 37,
  anon_sym_datetime = 38,
  anon_sym_filters = 39,
  anon_sym_indexes = 40,
  anon_sym_presets = 41,
  anon_sym_table = 42,
  anon_sym_tableMeta = 43,
  anon_sym_filtersPresets = 44,
  anon_sym_label = 45,
  anon_sym_layout = 46,
  anon_sym_name = 47,
  anon_sym_options = 48,
  anon_sym_title = 49,
  anon_sym_picture = 50,
  anon_sym_badge = 51,
  anon_sym_information = 52,
  anon_sym_active = 53,
  anon_sym_translateBadge = 54,
  anon_sym_search = 55,
  anon_sym_placeholder = 56,
  anon_sym_owned = 57,
  anon_sym_timestamps = 58,
  anon_sym_icon = 59,
  anon_sym_functions = 60,
  anon_sym_QMARK = 61,
  anon_sym_logging = 62,
  anon_sym_strategy = 63,
  anon_sym_rateLimiting = 64,
  anon_sym_security = 65,
  anon_sym_collection = 66,
  anon_sym_extends = 67,
  anon_sym_DOT = 68,
  sym_program = 69,
  sym_comment = 70,
  sym_boolean = 71,
  sym_constant = 72,
  sym_array = 73,
  sym_dictionary = 74,
  sym_identifier = 75,
  sym_collection_name = 76,
  sym_module_name = 77,
  sym_function_name = 78,
  sym_binary_operator = 79,
  sym_logical_concatenator_operator = 80,
  sym_binary_operation = 81,
  sym_condition_expression = 82,
  sym_attribute = 83,
  sym_condition = 84,
  sym_schema_properties = 85,
  sym_properties_column_type = 86,
  sym_properties_column = 87,
  sym_properties_block = 88,
  sym_collection_keyed_list = 89,
  sym_collection_filters_presets = 90,
  sym_collection_layout = 91,
  sym_collection_search = 92,
  sym_collection_modifiers = 93,
  sym_collection_functions = 94,
  sym_collection_security_logging = 95,
  sym_collection_security_rate_limiting = 96,
  sym_collection_security = 97,
  sym_collection = 98,
  sym_declaration = 99,
  aux_sym_program_repeat1 = 100,
  aux_sym_array_repeat1 = 101,
  aux_sym_dictionary_repeat1 = 102,
  aux_sym_schema_properties_repeat1 = 103,
  aux_sym_schema_properties_repeat2 = 104,
  aux_sym_schema_properties_repeat3 = 105,
  aux_sym_properties_column_repeat1 = 106,
  aux_sym_properties_block_repeat1 = 107,
  aux_sym_collection_keyed_list_repeat1 = 108,
  aux_sym_collection_filters_presets_repeat1 = 109,
  aux_sym_collection_filters_presets_repeat2 = 110,
  aux_sym_collection_layout_repeat1 = 111,
  aux_sym_collection_layout_repeat2 = 112,
  aux_sym_collection_search_repeat1 = 113,
  aux_sym_collection_search_repeat2 = 114,
  aux_sym_collection_functions_repeat1 = 115,
  aux_sym_collection_security_logging_repeat1 = 116,
  aux_sym_collection_security_repeat1 = 117,
  aux_sym_collection_security_repeat2 = 118,
  aux_sym_collection_security_repeat3 = 119,
  aux_sym_collection_repeat1 = 120,
  anon_alias_sym_collection_name = 121,
  anon_alias_sym_function_name = 122,
  anon_alias_sym_identifier = 123,
  anon_alias_sym_module_name = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_word] = "word",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_quoted_string] = "quoted_string",
  [sym_array_operator] = "array_operator",
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
  [anon_sym_date] = "date",
  [anon_sym_datetime] = "datetime",
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
  [anon_sym_extends] = "extends",
  [anon_sym_DOT] = ".",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [sym_constant] = "constant",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_identifier] = "identifier",
  [sym_collection_name] = "collection_name",
  [sym_module_name] = "module_name",
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
  [anon_alias_sym_identifier] = "identifier",
  [anon_alias_sym_module_name] = "module_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_word] = sym_word,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_quoted_string] = sym_quoted_string,
  [sym_array_operator] = sym_array_operator,
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
  [anon_sym_date] = anon_sym_date,
  [anon_sym_datetime] = anon_sym_datetime,
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
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [sym_constant] = sym_constant,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_identifier] = sym_identifier,
  [sym_collection_name] = sym_collection_name,
  [sym_module_name] = sym_module_name,
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
  [anon_alias_sym_identifier] = anon_alias_sym_identifier,
  [anon_alias_sym_module_name] = anon_alias_sym_module_name,
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
  [sym_array_operator] = {
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
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
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
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
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
  [anon_alias_sym_identifier] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_module_name] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_module = 1,
  field_name = 2,
  field_property_name = 3,
  field_symbol = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_module] = "module",
  [field_name] = "name",
  [field_property_name] = "property_name",
  [field_symbol] = "symbol",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 4},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
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
    {field_module, 3},
    {field_name, 1},
    {field_symbol, 5},
    {field_type, 0},
  [10] =
    {field_name, 0},
  [11] =
    {field_property_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_collection_name,
  },
  [3] = {
    [0] = anon_alias_sym_module_name,
  },
  [4] = {
    [0] = anon_alias_sym_identifier,
  },
  [5] = {
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 26,
  [39] = 26,
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
  [115] = 26,
  [116] = 26,
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
  [128] = 114,
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
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 113,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 72,
  [157] = 157,
  [158] = 80,
  [159] = 2,
  [160] = 8,
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
  [171] = 118,
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
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(253);
      ADVANCE_MAP(
        '!', 11,
        '"', 251,
        '&', 5,
        '(', 299,
        ')', 300,
        ',', 284,
        '.', 351,
        '/', 10,
        '<', 295,
        '=', 12,
        '>', 294,
        '?', 344,
        '@', 298,
        '[', 283,
        ']', 285,
        'a', 44,
        'b', 17,
        'c', 164,
        'd', 25,
        'e', 147,
        'f', 18,
        'i', 46,
        'l', 19,
        'n', 26,
        'o', 180,
        'p', 115,
        'r', 30,
        's', 62,
        't', 20,
        'w', 182,
        '{', 286,
        '|', 249,
        '}', 287,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == ']') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '{') ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '&', 5,
        ')', 300,
        ',', 284,
        '/', 10,
        ']', 285,
        'a', 44,
        'b', 16,
        'f', 108,
        'i', 47,
        'l', 27,
        'o', 244,
        'p', 115,
        'r', 61,
        's', 63,
        't', 21,
        'w', 182,
        '|', 249,
        '}', 287,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(296);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 299,
        ')', 300,
        ',', 284,
        '/', 10,
        '?', 344,
        '@', 298,
        ']', 285,
        '{', 286,
        '}', 287,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 299,
        ')', 300,
        ',', 284,
        '/', 10,
        '@', 298,
        ']', 285,
        '{', 286,
        '}', 287,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        ',', 284,
        '/', 10,
        '[', 15,
        ']', 285,
        'b', 165,
        'c', 166,
        'd', 23,
        'e', 151,
        'i', 154,
        'n', 236,
        's', 215,
        '{', 286,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '}') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(254);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(288);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(282);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(345);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(347);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 181:
      if (lookahead == 'q') ADVANCE(238);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 243:
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 244:
      if (lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 245:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(346);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 249:
      if (lookahead == '|') ADVANCE(297);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 251:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(3);
      END_STATE();
    case 252:
      if (eof) ADVANCE(253);
      ADVANCE_MAP(
        '!', 11,
        '"', 251,
        '&', 5,
        '(', 299,
        ')', 300,
        ',', 284,
        '/', 10,
        '<', 295,
        '=', 12,
        '>', 294,
        '@', 298,
        '[', 283,
        ']', 285,
        'a', 44,
        'b', 17,
        'c', 164,
        'd', 25,
        'e', 147,
        'f', 18,
        'i', 46,
        'l', 19,
        'n', 26,
        'o', 180,
        'p', 115,
        'r', 30,
        's', 62,
        't', 20,
        'w', 182,
        '{', 286,
        '|', 249,
        '}', 287,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_array_operator);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(291);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_ATcondition);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_properties);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_form);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_writable);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_num);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_filters);
      if (lookahead == 'P') ADVANCE(192);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_indexes);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_presets);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'M') ADVANCE(92);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_tableMeta);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_filtersPresets);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_badge);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_information);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_translateBadge);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_search);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_timestamps);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_logging);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_strategy);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_rateLimiting);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_collection);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOT);
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
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
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
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {(TSStateId)(-1)},
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
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
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
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(205),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(168),
    [sym_declaration] = STATE(177),
    [aux_sym_program_repeat1] = STATE(67),
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
  [41] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_properties,
    ACTIONS(21), 1,
      anon_sym_filtersPresets,
    ACTIONS(23), 1,
      anon_sym_layout,
    ACTIONS(25), 1,
      anon_sym_search,
    ACTIONS(29), 1,
      anon_sym_functions,
    ACTIONS(31), 1,
      anon_sym_security,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_collection_repeat1,
    ACTIONS(19), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(27), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    ACTIONS(17), 7,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
    STATE(22), 7,
      sym_collection_keyed_list,
      sym_collection_filters_presets,
      sym_collection_layout,
      sym_collection_search,
      sym_collection_modifiers,
      sym_collection_functions,
      sym_collection_security,
  [99] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_properties,
    ACTIONS(44), 1,
      anon_sym_filtersPresets,
    ACTIONS(47), 1,
      anon_sym_layout,
    ACTIONS(50), 1,
      anon_sym_search,
    ACTIONS(56), 1,
      anon_sym_functions,
    ACTIONS(59), 1,
      anon_sym_security,
    ACTIONS(41), 2,
      anon_sym_filters,
      anon_sym_table,
    STATE(4), 2,
      sym_comment,
      aux_sym_collection_repeat1,
    ACTIONS(53), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    ACTIONS(38), 7,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
    STATE(22), 7,
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
    ACTIONS(15), 1,
      anon_sym_properties,
    ACTIONS(21), 1,
      anon_sym_filtersPresets,
    ACTIONS(23), 1,
      anon_sym_layout,
    ACTIONS(25), 1,
      anon_sym_search,
    ACTIONS(29), 1,
      anon_sym_functions,
    ACTIONS(31), 1,
      anon_sym_security,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_collection_repeat1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(27), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    ACTIONS(17), 7,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
    STATE(22), 7,
      sym_collection_keyed_list,
      sym_collection_filters_presets,
      sym_collection_layout,
      sym_collection_search,
      sym_collection_modifiers,
      sym_collection_functions,
      sym_collection_security,
  [213] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_properties,
    ACTIONS(21), 1,
      anon_sym_filtersPresets,
    ACTIONS(23), 1,
      anon_sym_layout,
    ACTIONS(25), 1,
      anon_sym_search,
    ACTIONS(29), 1,
      anon_sym_functions,
    ACTIONS(31), 1,
      anon_sym_security,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_collection_repeat1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(27), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    ACTIONS(17), 7,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
    STATE(22), 7,
      sym_collection_keyed_list,
      sym_collection_filters_presets,
      sym_collection_layout,
      sym_collection_search,
      sym_collection_modifiers,
      sym_collection_functions,
      sym_collection_security,
  [271] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_properties,
    ACTIONS(21), 1,
      anon_sym_filtersPresets,
    ACTIONS(23), 1,
      anon_sym_layout,
    ACTIONS(25), 1,
      anon_sym_search,
    ACTIONS(29), 1,
      anon_sym_functions,
    ACTIONS(31), 1,
      anon_sym_security,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_collection_repeat1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(27), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    ACTIONS(17), 7,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
    STATE(22), 7,
      sym_collection_keyed_list,
      sym_collection_filters_presets,
      sym_collection_layout,
      sym_collection_search,
      sym_collection_modifiers,
      sym_collection_functions,
      sym_collection_security,
  [329] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(68), 22,
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
  [364] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
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
  [394] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
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
  [424] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
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
  [454] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
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
  [484] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
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
  [514] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
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
  [544] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
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
  [574] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
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
  [604] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
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
  [634] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
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
  [664] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
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
  [694] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
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
  [724] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(120), 17,
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
  [754] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(124), 17,
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
  [784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(33), 17,
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
  [814] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
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
  [844] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_filters,
      anon_sym_table,
    ACTIONS(134), 17,
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
  [874] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(140), 4,
      sym_array_operator,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(138), 9,
      sym_word,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_date,
      anon_sym_datetime,
  [898] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      sym_word,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_boolean,
    STATE(27), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(146), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_constant,
      sym_array,
      sym_dictionary,
      sym_identifier,
  [934] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(154), 1,
      sym_word,
    ACTIONS(156), 1,
      sym_array_operator,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_comment,
    STATE(77), 2,
      sym_collection_name,
      sym_properties_column_type,
    ACTIONS(160), 8,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_date,
      anon_sym_datetime,
  [964] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      sym_word,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_boolean,
    STATE(29), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(146), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 4,
      sym_constant,
      sym_array,
      sym_dictionary,
      sym_identifier,
  [997] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_word,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_comment,
    STATE(160), 1,
      sym_boolean,
    ACTIONS(164), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(166), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(165), 4,
      sym_constant,
      sym_array,
      sym_dictionary,
      sym_identifier,
  [1030] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(154), 1,
      sym_word,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_comment,
    STATE(62), 2,
      sym_collection_name,
      sym_properties_column_type,
    ACTIONS(160), 8,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_date,
      anon_sym_datetime,
  [1057] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      anon_sym_translateBadge,
    STATE(32), 2,
      sym_comment,
      aux_sym_collection_layout_repeat1,
    ACTIONS(174), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [1078] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    STATE(47), 1,
      sym_binary_operator,
    ACTIONS(182), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(180), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [1099] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_boolean,
    STATE(34), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(194), 2,
      sym_constant,
      sym_array,
  [1124] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_translateBadge,
    STATE(32), 1,
      aux_sym_collection_layout_repeat1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [1147] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_properties,
    STATE(36), 2,
      sym_comment,
      aux_sym_schema_properties_repeat3,
    ACTIONS(197), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1167] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(172), 7,
      anon_sym_RBRACE,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
      anon_sym_translateBadge,
  [1183] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(140), 7,
      anon_sym_RBRACE,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
      anon_sym_translateBadge,
  [1199] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(140), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [1217] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_properties,
    STATE(36), 1,
      aux_sym_schema_properties_repeat3,
    STATE(40), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1239] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      anon_sym_translateBadge,
    STATE(35), 1,
      aux_sym_collection_layout_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [1259] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_properties,
    STATE(40), 1,
      aux_sym_schema_properties_repeat3,
    STATE(42), 1,
      sym_comment,
    STATE(201), 1,
      sym_schema_properties,
    ACTIONS(204), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1281] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      anon_sym_properties,
    STATE(40), 1,
      aux_sym_schema_properties_repeat3,
    STATE(43), 1,
      sym_comment,
    STATE(190), 1,
      sym_schema_properties,
    ACTIONS(204), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1303] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_logging,
    ACTIONS(210), 1,
      anon_sym_rateLimiting,
    STATE(44), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_collection_security_repeat1,
    STATE(147), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [1326] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(192), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1341] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(216), 1,
      anon_sym_QMARK,
    STATE(46), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_properties_column_repeat1,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(212), 2,
      sym_word,
      anon_sym_RBRACE,
  [1364] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_boolean,
    STATE(47), 1,
      sym_comment,
    STATE(119), 1,
      sym_constant,
    ACTIONS(144), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
  [1385] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_boolean,
    STATE(21), 1,
      sym_constant,
    STATE(48), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
  [1406] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(218), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1421] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_logging,
    ACTIONS(225), 1,
      anon_sym_rateLimiting,
    STATE(50), 2,
      sym_comment,
      aux_sym_collection_security_repeat1,
    STATE(147), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [1442] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      anon_sym_logging,
    ACTIONS(210), 1,
      anon_sym_rateLimiting,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_collection_security_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(147), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [1465] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(230), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1480] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(53), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_properties_column_repeat1,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(232), 2,
      sym_word,
      anon_sym_RBRACE,
  [1500] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(234), 1,
      sym_word,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(176), 1,
      sym_properties_column,
    STATE(54), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [1520] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(55), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_properties_column_repeat1,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(239), 2,
      sym_word,
      anon_sym_RBRACE,
  [1540] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(56), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_properties_column_repeat1,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(241), 2,
      sym_word,
      anon_sym_RBRACE,
  [1560] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(57), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_properties_column_repeat1,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(243), 2,
      sym_word,
      anon_sym_RBRACE,
  [1580] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      anon_sym_AT,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(245), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(58), 2,
      sym_comment,
      aux_sym_properties_column_repeat1,
  [1598] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(58), 1,
      aux_sym_properties_column_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(250), 2,
      sym_word,
      anon_sym_RBRACE,
  [1618] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(252), 1,
      sym_word,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_properties_block_repeat1,
    STATE(176), 1,
      sym_properties_column,
  [1640] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(256), 5,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1654] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(57), 1,
      aux_sym_properties_column_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(258), 2,
      sym_word,
      anon_sym_RBRACE,
  [1674] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(260), 5,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1688] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(252), 1,
      sym_word,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_properties_block_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(176), 1,
      sym_properties_column,
  [1710] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(65), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_properties_column_repeat1,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(264), 2,
      sym_word,
      anon_sym_RBRACE,
  [1730] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(58), 1,
      aux_sym_properties_column_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(266), 2,
      sym_word,
      anon_sym_RBRACE,
  [1750] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_collection,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_program_repeat1,
    STATE(168), 1,
      sym_collection,
    STATE(177), 1,
      sym_declaration,
  [1772] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(56), 1,
      aux_sym_properties_column_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(266), 2,
      sym_word,
      anon_sym_RBRACE,
  [1792] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(272), 1,
      anon_sym_ATcondition,
    STATE(148), 1,
      sym_condition,
    ACTIONS(270), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(69), 2,
      sym_comment,
      aux_sym_schema_properties_repeat1,
  [1810] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(53), 1,
      aux_sym_properties_column_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(275), 2,
      sym_word,
      anon_sym_RBRACE,
  [1830] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(279), 1,
      anon_sym_ATcondition,
    STATE(71), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_schema_properties_repeat1,
    STATE(148), 1,
      sym_condition,
    ACTIONS(277), 2,
      sym_word,
      anon_sym_RBRACE,
  [1850] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(281), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_filters,
      anon_sym_label,
  [1864] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(283), 5,
      sym_word,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1878] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(58), 1,
      aux_sym_properties_column_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(285), 2,
      sym_word,
      anon_sym_RBRACE,
  [1898] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(287), 5,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_QMARK,
  [1912] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(58), 1,
      aux_sym_properties_column_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(275), 2,
      sym_word,
      anon_sym_RBRACE,
  [1932] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(59), 1,
      aux_sym_properties_column_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(145), 1,
      sym_attribute,
    ACTIONS(289), 2,
      sym_word,
      anon_sym_RBRACE,
  [1952] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(279), 1,
      anon_sym_ATcondition,
    STATE(69), 1,
      aux_sym_schema_properties_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(148), 1,
      sym_condition,
    ACTIONS(291), 2,
      sym_word,
      anon_sym_RBRACE,
  [1972] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      anon_sym_collection,
    STATE(168), 1,
      sym_collection,
    STATE(177), 1,
      sym_declaration,
    STATE(79), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [1992] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_filters,
      anon_sym_label,
  [2006] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      sym_word,
    STATE(71), 1,
      sym_identifier,
    STATE(81), 2,
      sym_comment,
      aux_sym_schema_properties_repeat2,
  [2023] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(303), 1,
      sym_word,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(82), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_schema_properties_repeat2,
  [2042] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      sym_word,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_function_name,
    STATE(83), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_collection_functions_repeat1,
  [2061] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(303), 1,
      sym_word,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(81), 1,
      aux_sym_schema_properties_repeat2,
    STATE(84), 1,
      sym_comment,
  [2080] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      anon_sym_indexes,
    ACTIONS(317), 1,
      anon_sym_placeholder,
    STATE(85), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_collection_search_repeat2,
  [2099] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      sym_word,
    STATE(65), 1,
      sym_identifier,
    STATE(86), 2,
      sym_comment,
      aux_sym_collection_keyed_list_repeat1,
  [2116] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      anon_sym_filters,
    ACTIONS(326), 1,
      anon_sym_label,
    STATE(87), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_collection_filters_presets_repeat1,
  [2135] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(328), 1,
      sym_word,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_identifier,
    STATE(88), 2,
      sym_comment,
      aux_sym_collection_filters_presets_repeat2,
  [2152] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      anon_sym_name,
    ACTIONS(337), 1,
      anon_sym_options,
    STATE(89), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym_collection_layout_repeat2,
  [2171] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      anon_sym_name,
    ACTIONS(344), 1,
      anon_sym_options,
    STATE(90), 2,
      sym_comment,
      aux_sym_collection_layout_repeat2,
  [2188] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      sym_word,
    STATE(33), 1,
      sym_identifier,
    STATE(91), 1,
      sym_comment,
    STATE(99), 1,
      sym_binary_operation,
    STATE(184), 1,
      sym_condition_expression,
  [2207] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      sym_word,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_function_name,
    STATE(92), 2,
      sym_comment,
      aux_sym_collection_security_repeat2,
  [2224] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 1,
      anon_sym_indexes,
    ACTIONS(359), 1,
      anon_sym_placeholder,
    STATE(93), 2,
      sym_comment,
      aux_sym_collection_search_repeat2,
  [2241] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(252), 1,
      sym_word,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_collection_filters_presets_repeat2,
    STATE(94), 1,
      sym_comment,
    STATE(186), 1,
      sym_identifier,
  [2260] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      sym_word,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_identifier,
    STATE(86), 1,
      aux_sym_collection_keyed_list_repeat1,
    STATE(95), 1,
      sym_comment,
  [2279] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      sym_word,
    STATE(46), 1,
      sym_function_name,
    STATE(96), 2,
      sym_comment,
      aux_sym_collection_functions_repeat1,
  [2296] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      sym_word,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_collection_security_repeat2,
    STATE(196), 1,
      sym_function_name,
  [2315] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(373), 1,
      sym_word,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_identifier,
    STATE(98), 2,
      sym_comment,
      aux_sym_collection_search_repeat1,
  [2332] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_comment,
    STATE(121), 1,
      sym_logical_concatenator_operator,
    ACTIONS(378), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2349] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(382), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_quoted_string,
  [2362] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      anon_sym_filters,
    ACTIONS(389), 1,
      anon_sym_label,
    STATE(101), 2,
      sym_comment,
      aux_sym_collection_filters_presets_repeat1,
  [2379] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      sym_word,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_collection_security_repeat2,
    STATE(102), 1,
      sym_comment,
    STATE(196), 1,
      sym_function_name,
  [2398] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(307), 1,
      sym_word,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_function_name,
    STATE(83), 1,
      aux_sym_collection_functions_repeat1,
    STATE(103), 1,
      sym_comment,
  [2417] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_comment,
    ACTIONS(396), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2432] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(315), 1,
      anon_sym_indexes,
    ACTIONS(317), 1,
      anon_sym_placeholder,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_collection_search_repeat2,
    STATE(105), 1,
      sym_comment,
  [2451] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_name,
    ACTIONS(337), 1,
      anon_sym_options,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_collection_layout_repeat2,
    STATE(106), 1,
      sym_comment,
  [2470] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      sym_word,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_collection_search_repeat1,
    STATE(107), 1,
      sym_comment,
    STATE(162), 1,
      sym_identifier,
  [2489] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(252), 1,
      sym_word,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_collection_filters_presets_repeat2,
    STATE(108), 1,
      sym_comment,
    STATE(186), 1,
      sym_identifier,
  [2508] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(324), 1,
      anon_sym_filters,
    ACTIONS(326), 1,
      anon_sym_label,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      aux_sym_collection_filters_presets_repeat1,
    STATE(109), 1,
      sym_comment,
  [2527] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      sym_word,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_collection_keyed_list_repeat1,
    STATE(110), 1,
      sym_comment,
  [2546] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(111), 1,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_options,
  [2558] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(112), 1,
      sym_comment,
    ACTIONS(414), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2570] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_word,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_dictionary_repeat1,
  [2586] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_word,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      aux_sym_dictionary_repeat1,
    STATE(114), 1,
      sym_comment,
  [2602] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(140), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATcondition,
  [2614] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(140), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2626] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_boolean,
    STATE(117), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
  [2640] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(422), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2652] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(119), 1,
      sym_comment,
    ACTIONS(424), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [2664] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(426), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATcondition,
  [2676] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      sym_word,
    STATE(33), 1,
      sym_identifier,
    STATE(121), 1,
      sym_comment,
    STATE(198), 1,
      sym_binary_operation,
  [2692] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(428), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2704] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 1,
      anon_sym_strategy,
    STATE(123), 2,
      sym_comment,
      aux_sym_collection_security_logging_repeat1,
  [2718] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2730] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    STATE(125), 2,
      sym_comment,
      aux_sym_array_repeat1,
  [2744] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    ACTIONS(444), 1,
      anon_sym_strategy,
    STATE(123), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(126), 1,
      sym_comment,
  [2760] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2772] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_word,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_dictionary_repeat1,
  [2788] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_RBRACE,
      anon_sym_filters,
      anon_sym_label,
  [2800] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(444), 1,
      anon_sym_strategy,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(130), 1,
      sym_comment,
  [2816] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      anon_sym_functions,
    STATE(131), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_collection_security_repeat3,
  [2832] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2844] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_array_repeat1,
    STATE(133), 1,
      sym_comment,
  [2860] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(444), 1,
      anon_sym_strategy,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(134), 1,
      sym_comment,
  [2876] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(135), 1,
      sym_comment,
    ACTIONS(464), 3,
      anon_sym_RBRACE,
      anon_sym_indexes,
      anon_sym_placeholder,
  [2888] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(444), 1,
      anon_sym_strategy,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(136), 1,
      sym_comment,
  [2904] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      sym_word,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(137), 2,
      sym_comment,
      aux_sym_dictionary_repeat1,
  [2918] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(138), 1,
      sym_comment,
    ACTIONS(473), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2930] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_functions,
    STATE(139), 2,
      sym_comment,
      aux_sym_collection_security_repeat3,
  [2944] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_array_repeat1,
    STATE(140), 1,
      sym_comment,
  [2960] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(141), 1,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_RBRACE,
      anon_sym_indexes,
      anon_sym_placeholder,
  [2972] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      anon_sym_functions,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      aux_sym_collection_security_repeat3,
    STATE(142), 1,
      sym_comment,
  [2988] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      sym_word,
    STATE(107), 1,
      aux_sym_collection_search_repeat1,
    STATE(143), 1,
      sym_comment,
    STATE(162), 1,
      sym_identifier,
  [3004] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(144), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_options,
  [3016] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(484), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_AT,
  [3028] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_word,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym_dictionary_repeat1,
    STATE(146), 1,
      sym_comment,
  [3044] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(488), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [3056] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(148), 1,
      sym_comment,
    ACTIONS(490), 3,
      sym_word,
      anon_sym_RBRACE,
      anon_sym_ATcondition,
  [3068] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_extends,
    STATE(149), 1,
      sym_comment,
  [3081] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_properties_block,
    STATE(150), 1,
      sym_comment,
  [3094] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_dictionary,
    STATE(151), 1,
      sym_comment,
  [3107] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      sym_comment,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3118] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(500), 1,
      sym_word,
    STATE(149), 1,
      sym_collection_name,
    STATE(153), 1,
      sym_comment,
  [3131] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(154), 1,
      sym_comment,
    ACTIONS(502), 2,
      sym_word,
      anon_sym_RBRACE,
  [3142] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(504), 1,
      sym_word,
    STATE(37), 1,
      sym_identifier,
    STATE(155), 1,
      sym_comment,
  [3155] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(156), 1,
      sym_comment,
    ACTIONS(281), 2,
      sym_word,
      anon_sym_RBRACE,
  [3166] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(506), 1,
      sym_word,
    STATE(157), 1,
      sym_comment,
    STATE(191), 1,
      sym_module_name,
  [3179] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(158), 1,
      sym_comment,
    ACTIONS(298), 2,
      sym_word,
      anon_sym_RBRACE,
  [3190] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(159), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_word,
      anon_sym_RBRACE,
  [3201] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(160), 1,
      sym_comment,
    ACTIONS(68), 2,
      sym_word,
      anon_sym_RBRACE,
  [3212] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(161), 1,
      sym_comment,
    ACTIONS(508), 2,
      sym_word,
      anon_sym_RBRACE,
  [3223] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(162), 1,
      sym_comment,
    ACTIONS(510), 2,
      sym_word,
      anon_sym_RBRACE,
  [3234] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_RBRACE,
      anon_sym_functions,
  [3245] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(164), 1,
      sym_comment,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3256] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(471), 2,
      sym_word,
      anon_sym_RBRACE,
  [3267] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(166), 1,
      sym_comment,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3278] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(167), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_RBRACE,
      anon_sym_functions,
  [3289] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(168), 1,
      sym_comment,
    ACTIONS(520), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3300] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_properties_block,
    STATE(169), 1,
      sym_comment,
  [3313] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(170), 1,
      sym_comment,
    ACTIONS(522), 2,
      sym_word,
      anon_sym_RBRACE,
  [3324] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(171), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_LBRACE,
      anon_sym_extends,
  [3335] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(172), 1,
      sym_comment,
    ACTIONS(524), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3346] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(173), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_RBRACE,
      anon_sym_strategy,
  [3357] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(500), 1,
      sym_word,
    STATE(174), 1,
      sym_comment,
    STATE(203), 1,
      sym_collection_name,
  [3370] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(175), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3381] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(176), 1,
      sym_comment,
    ACTIONS(526), 2,
      sym_word,
      anon_sym_RBRACE,
  [3392] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(177), 1,
      sym_comment,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [3403] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(178), 1,
      sym_comment,
    ACTIONS(530), 2,
      sym_word,
      anon_sym_RBRACE,
  [3414] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_comment,
  [3424] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(534), 1,
      sym_word,
    STATE(180), 1,
      sym_comment,
  [3434] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_comment,
  [3444] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(538), 1,
      sym_quoted_string,
    STATE(182), 1,
      sym_comment,
  [3454] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_comment,
  [3464] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_comment,
  [3474] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_comment,
  [3484] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_comment,
  [3494] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_comment,
  [3504] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(550), 1,
      sym_quoted_string,
    STATE(188), 1,
      sym_comment,
  [3514] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(552), 1,
      anon_sym_DOT,
    STATE(189), 1,
      sym_comment,
  [3524] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      sym_comment,
  [3534] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      anon_sym_DOT,
    STATE(191), 1,
      sym_comment,
  [3544] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_comment,
  [3554] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_comment,
  [3564] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_comment,
  [3574] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_comment,
  [3584] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_comment,
  [3594] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_quoted_string,
    STATE(197), 1,
      sym_comment,
  [3604] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym_comment,
  [3614] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_comment,
  [3624] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_comment,
  [3634] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_comment,
  [3644] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(578), 1,
      sym_word,
    STATE(202), 1,
      sym_comment,
  [3654] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_comment,
  [3664] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_comment,
  [3674] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(205), 1,
      sym_comment,
  [3684] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_comment,
  [3694] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_comment,
  [3704] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(590), 1,
      sym_quoted_string,
    STATE(208), 1,
      sym_comment,
  [3714] = 1,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 271,
  [SMALL_STATE(8)] = 329,
  [SMALL_STATE(9)] = 364,
  [SMALL_STATE(10)] = 394,
  [SMALL_STATE(11)] = 424,
  [SMALL_STATE(12)] = 454,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 514,
  [SMALL_STATE(15)] = 544,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 604,
  [SMALL_STATE(18)] = 634,
  [SMALL_STATE(19)] = 664,
  [SMALL_STATE(20)] = 694,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 754,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 814,
  [SMALL_STATE(25)] = 844,
  [SMALL_STATE(26)] = 874,
  [SMALL_STATE(27)] = 898,
  [SMALL_STATE(28)] = 934,
  [SMALL_STATE(29)] = 964,
  [SMALL_STATE(30)] = 997,
  [SMALL_STATE(31)] = 1030,
  [SMALL_STATE(32)] = 1057,
  [SMALL_STATE(33)] = 1078,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1124,
  [SMALL_STATE(36)] = 1147,
  [SMALL_STATE(37)] = 1167,
  [SMALL_STATE(38)] = 1183,
  [SMALL_STATE(39)] = 1199,
  [SMALL_STATE(40)] = 1217,
  [SMALL_STATE(41)] = 1239,
  [SMALL_STATE(42)] = 1259,
  [SMALL_STATE(43)] = 1281,
  [SMALL_STATE(44)] = 1303,
  [SMALL_STATE(45)] = 1326,
  [SMALL_STATE(46)] = 1341,
  [SMALL_STATE(47)] = 1364,
  [SMALL_STATE(48)] = 1385,
  [SMALL_STATE(49)] = 1406,
  [SMALL_STATE(50)] = 1421,
  [SMALL_STATE(51)] = 1442,
  [SMALL_STATE(52)] = 1465,
  [SMALL_STATE(53)] = 1480,
  [SMALL_STATE(54)] = 1500,
  [SMALL_STATE(55)] = 1520,
  [SMALL_STATE(56)] = 1540,
  [SMALL_STATE(57)] = 1560,
  [SMALL_STATE(58)] = 1580,
  [SMALL_STATE(59)] = 1598,
  [SMALL_STATE(60)] = 1618,
  [SMALL_STATE(61)] = 1640,
  [SMALL_STATE(62)] = 1654,
  [SMALL_STATE(63)] = 1674,
  [SMALL_STATE(64)] = 1688,
  [SMALL_STATE(65)] = 1710,
  [SMALL_STATE(66)] = 1730,
  [SMALL_STATE(67)] = 1750,
  [SMALL_STATE(68)] = 1772,
  [SMALL_STATE(69)] = 1792,
  [SMALL_STATE(70)] = 1810,
  [SMALL_STATE(71)] = 1830,
  [SMALL_STATE(72)] = 1850,
  [SMALL_STATE(73)] = 1864,
  [SMALL_STATE(74)] = 1878,
  [SMALL_STATE(75)] = 1898,
  [SMALL_STATE(76)] = 1912,
  [SMALL_STATE(77)] = 1932,
  [SMALL_STATE(78)] = 1952,
  [SMALL_STATE(79)] = 1972,
  [SMALL_STATE(80)] = 1992,
  [SMALL_STATE(81)] = 2006,
  [SMALL_STATE(82)] = 2023,
  [SMALL_STATE(83)] = 2042,
  [SMALL_STATE(84)] = 2061,
  [SMALL_STATE(85)] = 2080,
  [SMALL_STATE(86)] = 2099,
  [SMALL_STATE(87)] = 2116,
  [SMALL_STATE(88)] = 2135,
  [SMALL_STATE(89)] = 2152,
  [SMALL_STATE(90)] = 2171,
  [SMALL_STATE(91)] = 2188,
  [SMALL_STATE(92)] = 2207,
  [SMALL_STATE(93)] = 2224,
  [SMALL_STATE(94)] = 2241,
  [SMALL_STATE(95)] = 2260,
  [SMALL_STATE(96)] = 2279,
  [SMALL_STATE(97)] = 2296,
  [SMALL_STATE(98)] = 2315,
  [SMALL_STATE(99)] = 2332,
  [SMALL_STATE(100)] = 2349,
  [SMALL_STATE(101)] = 2362,
  [SMALL_STATE(102)] = 2379,
  [SMALL_STATE(103)] = 2398,
  [SMALL_STATE(104)] = 2417,
  [SMALL_STATE(105)] = 2432,
  [SMALL_STATE(106)] = 2451,
  [SMALL_STATE(107)] = 2470,
  [SMALL_STATE(108)] = 2489,
  [SMALL_STATE(109)] = 2508,
  [SMALL_STATE(110)] = 2527,
  [SMALL_STATE(111)] = 2546,
  [SMALL_STATE(112)] = 2558,
  [SMALL_STATE(113)] = 2570,
  [SMALL_STATE(114)] = 2586,
  [SMALL_STATE(115)] = 2602,
  [SMALL_STATE(116)] = 2614,
  [SMALL_STATE(117)] = 2626,
  [SMALL_STATE(118)] = 2640,
  [SMALL_STATE(119)] = 2652,
  [SMALL_STATE(120)] = 2664,
  [SMALL_STATE(121)] = 2676,
  [SMALL_STATE(122)] = 2692,
  [SMALL_STATE(123)] = 2704,
  [SMALL_STATE(124)] = 2718,
  [SMALL_STATE(125)] = 2730,
  [SMALL_STATE(126)] = 2744,
  [SMALL_STATE(127)] = 2760,
  [SMALL_STATE(128)] = 2772,
  [SMALL_STATE(129)] = 2788,
  [SMALL_STATE(130)] = 2800,
  [SMALL_STATE(131)] = 2816,
  [SMALL_STATE(132)] = 2832,
  [SMALL_STATE(133)] = 2844,
  [SMALL_STATE(134)] = 2860,
  [SMALL_STATE(135)] = 2876,
  [SMALL_STATE(136)] = 2888,
  [SMALL_STATE(137)] = 2904,
  [SMALL_STATE(138)] = 2918,
  [SMALL_STATE(139)] = 2930,
  [SMALL_STATE(140)] = 2944,
  [SMALL_STATE(141)] = 2960,
  [SMALL_STATE(142)] = 2972,
  [SMALL_STATE(143)] = 2988,
  [SMALL_STATE(144)] = 3004,
  [SMALL_STATE(145)] = 3016,
  [SMALL_STATE(146)] = 3028,
  [SMALL_STATE(147)] = 3044,
  [SMALL_STATE(148)] = 3056,
  [SMALL_STATE(149)] = 3068,
  [SMALL_STATE(150)] = 3081,
  [SMALL_STATE(151)] = 3094,
  [SMALL_STATE(152)] = 3107,
  [SMALL_STATE(153)] = 3118,
  [SMALL_STATE(154)] = 3131,
  [SMALL_STATE(155)] = 3142,
  [SMALL_STATE(156)] = 3155,
  [SMALL_STATE(157)] = 3166,
  [SMALL_STATE(158)] = 3179,
  [SMALL_STATE(159)] = 3190,
  [SMALL_STATE(160)] = 3201,
  [SMALL_STATE(161)] = 3212,
  [SMALL_STATE(162)] = 3223,
  [SMALL_STATE(163)] = 3234,
  [SMALL_STATE(164)] = 3245,
  [SMALL_STATE(165)] = 3256,
  [SMALL_STATE(166)] = 3267,
  [SMALL_STATE(167)] = 3278,
  [SMALL_STATE(168)] = 3289,
  [SMALL_STATE(169)] = 3300,
  [SMALL_STATE(170)] = 3313,
  [SMALL_STATE(171)] = 3324,
  [SMALL_STATE(172)] = 3335,
  [SMALL_STATE(173)] = 3346,
  [SMALL_STATE(174)] = 3357,
  [SMALL_STATE(175)] = 3370,
  [SMALL_STATE(176)] = 3381,
  [SMALL_STATE(177)] = 3392,
  [SMALL_STATE(178)] = 3403,
  [SMALL_STATE(179)] = 3414,
  [SMALL_STATE(180)] = 3424,
  [SMALL_STATE(181)] = 3434,
  [SMALL_STATE(182)] = 3444,
  [SMALL_STATE(183)] = 3454,
  [SMALL_STATE(184)] = 3464,
  [SMALL_STATE(185)] = 3474,
  [SMALL_STATE(186)] = 3484,
  [SMALL_STATE(187)] = 3494,
  [SMALL_STATE(188)] = 3504,
  [SMALL_STATE(189)] = 3514,
  [SMALL_STATE(190)] = 3524,
  [SMALL_STATE(191)] = 3534,
  [SMALL_STATE(192)] = 3544,
  [SMALL_STATE(193)] = 3554,
  [SMALL_STATE(194)] = 3564,
  [SMALL_STATE(195)] = 3574,
  [SMALL_STATE(196)] = 3584,
  [SMALL_STATE(197)] = 3594,
  [SMALL_STATE(198)] = 3604,
  [SMALL_STATE(199)] = 3614,
  [SMALL_STATE(200)] = 3624,
  [SMALL_STATE(201)] = 3634,
  [SMALL_STATE(202)] = 3644,
  [SMALL_STATE(203)] = 3654,
  [SMALL_STATE(204)] = 3664,
  [SMALL_STATE(205)] = 3674,
  [SMALL_STATE(206)] = 3684,
  [SMALL_STATE(207)] = 3694,
  [SMALL_STATE(208)] = 3704,
  [SMALL_STATE(209)] = 3714,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_keyed_list, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_keyed_list, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties_block, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_layout, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_layout, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_filters_presets, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_filters_presets, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_filters_presets, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_filters_presets, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_search, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_search, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_keyed_list, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_keyed_list, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_security, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties_block, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_security, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_functions, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_functions, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_functions, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_functions, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_modifiers, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_modifiers, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_search, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_search, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_layout, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_layout, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0), SHIFT_REPEAT(169),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0), SHIFT_REPEAT(183),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_properties, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 6, 0, 9),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 4, 0, 9),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 4, 0, 7),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 3, 0, 6),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 3, 0, 7),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 5, 0, 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, 0, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 2, 0, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 2, 0, 0), SHIFT_REPEAT(115),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat2, 2, 0, 0), SHIFT_REPEAT(26),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat2, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0), SHIFT_REPEAT(188),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0), SHIFT_REPEAT(192),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 2, 0, 0), SHIFT_REPEAT(75),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat2, 2, 0, 0),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat2, 2, 0, 0), SHIFT_REPEAT(193),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat2, 2, 0, 0), SHIFT_REPEAT(197),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat1, 2, 0, 0),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 4, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column_type, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_name, 1, 0, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 10),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_rate_limiting, 4, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_logging_repeat1, 2, 0, 0),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_logging_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_logging, 4, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_rate_limiting, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_logging, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat2, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 2, 0, 0),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 2, 0, 0), SHIFT_REPEAT(200),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4, 0, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 3, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat2, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 3, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 9, 0, 8),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 8, 0, 8),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 4, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 4, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 5, 0, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_filters_presets_repeat2, 4, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_concatenator_operator, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1, 0, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 3, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [584] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
