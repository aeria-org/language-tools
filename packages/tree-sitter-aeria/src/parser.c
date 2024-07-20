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
#define STATE_COUNT 166
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 1
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_EQ_EQ = 11,
  anon_sym_BANG_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_in = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  anon_sym_AMP_AMP = 18,
  anon_sym_PIPE_PIPE = 19,
  anon_sym_AT = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_ATcondition = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
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
  anon_sym_functions = 42,
  anon_sym_QMARK = 43,
  anon_sym_logging = 44,
  anon_sym_strategy = 45,
  anon_sym_rateLimiting = 46,
  anon_sym_security = 47,
  anon_sym_search = 48,
  anon_sym_placeholder = 49,
  anon_sym_layout = 50,
  anon_sym_name = 51,
  anon_sym_options = 52,
  anon_sym_title = 53,
  anon_sym_picture = 54,
  anon_sym_badge = 55,
  anon_sym_information = 56,
  anon_sym_active = 57,
  anon_sym_translateBadge = 58,
  anon_sym_owned = 59,
  anon_sym_timestamps = 60,
  anon_sym_icon = 61,
  anon_sym_collection = 62,
  sym_program = 63,
  sym_comment = 64,
  sym_boolean = 65,
  sym_constant = 66,
  sym_array = 67,
  sym_collection_name = 68,
  sym_binary_operator = 69,
  sym_logical_concatenator_operator = 70,
  sym_binary_operation = 71,
  sym_condition_expression = 72,
  sym_attribute = 73,
  sym_condition = 74,
  sym_schema_properties = 75,
  sym_properties_column_type = 76,
  sym_properties_column = 77,
  sym_properties_block = 78,
  sym_collection_keyed_list = 79,
  sym_collection_functions = 80,
  sym_collection_security_logging = 81,
  sym_collection_security_rate_limiting = 82,
  sym_collection_security = 83,
  sym_collection_search = 84,
  sym_collection_layout = 85,
  sym_collection_modifiers = 86,
  sym_collection = 87,
  sym_declaration = 88,
  aux_sym_program_repeat1 = 89,
  aux_sym_array_repeat1 = 90,
  aux_sym_writable_block_repeat1 = 91,
  aux_sym_schema_properties_repeat1 = 92,
  aux_sym_schema_properties_repeat2 = 93,
  aux_sym_schema_properties_repeat3 = 94,
  aux_sym_properties_column_repeat1 = 95,
  aux_sym_properties_block_repeat1 = 96,
  aux_sym_collection_keyed_list_repeat1 = 97,
  aux_sym_collection_functions_repeat1 = 98,
  aux_sym_collection_security_logging_repeat1 = 99,
  aux_sym_collection_security_repeat1 = 100,
  aux_sym_collection_security_repeat2 = 101,
  aux_sym_collection_security_repeat3 = 102,
  aux_sym_collection_search_repeat1 = 103,
  aux_sym_collection_layout_repeat1 = 104,
  aux_sym_collection_layout_repeat2 = 105,
  aux_sym_collection_repeat1 = 106,
  anon_alias_sym_collection_name = 107,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_functions] = "functions",
  [anon_sym_QMARK] = "\?",
  [anon_sym_logging] = "logging",
  [anon_sym_strategy] = "strategy",
  [anon_sym_rateLimiting] = "rateLimiting",
  [anon_sym_security] = "security",
  [anon_sym_search] = "search",
  [anon_sym_placeholder] = "placeholder",
  [anon_sym_layout] = "layout",
  [anon_sym_name] = "name",
  [anon_sym_options] = "options",
  [anon_sym_title] = "title",
  [anon_sym_picture] = "picture",
  [anon_sym_badge] = "badge",
  [anon_sym_information] = "information",
  [anon_sym_active] = "active",
  [anon_sym_translateBadge] = "translateBadge",
  [anon_sym_owned] = "owned",
  [anon_sym_timestamps] = "timestamps",
  [anon_sym_icon] = "icon",
  [anon_sym_collection] = "collection",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [sym_constant] = "constant",
  [sym_array] = "array",
  [sym_collection_name] = "collection_name",
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
  [sym_collection_functions] = "collection_functions",
  [sym_collection_security_logging] = "collection_security_logging",
  [sym_collection_security_rate_limiting] = "collection_security_rate_limiting",
  [sym_collection_security] = "collection_security",
  [sym_collection_search] = "collection_search",
  [sym_collection_layout] = "collection_layout",
  [sym_collection_modifiers] = "collection_modifiers",
  [sym_collection] = "collection",
  [sym_declaration] = "declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_writable_block_repeat1] = "writable_block_repeat1",
  [aux_sym_schema_properties_repeat1] = "schema_properties_repeat1",
  [aux_sym_schema_properties_repeat2] = "schema_properties_repeat2",
  [aux_sym_schema_properties_repeat3] = "schema_properties_repeat3",
  [aux_sym_properties_column_repeat1] = "properties_column_repeat1",
  [aux_sym_properties_block_repeat1] = "properties_block_repeat1",
  [aux_sym_collection_keyed_list_repeat1] = "collection_keyed_list_repeat1",
  [aux_sym_collection_functions_repeat1] = "collection_functions_repeat1",
  [aux_sym_collection_security_logging_repeat1] = "collection_security_logging_repeat1",
  [aux_sym_collection_security_repeat1] = "collection_security_repeat1",
  [aux_sym_collection_security_repeat2] = "collection_security_repeat2",
  [aux_sym_collection_security_repeat3] = "collection_security_repeat3",
  [aux_sym_collection_search_repeat1] = "collection_search_repeat1",
  [aux_sym_collection_layout_repeat1] = "collection_layout_repeat1",
  [aux_sym_collection_layout_repeat2] = "collection_layout_repeat2",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_logging] = anon_sym_logging,
  [anon_sym_strategy] = anon_sym_strategy,
  [anon_sym_rateLimiting] = anon_sym_rateLimiting,
  [anon_sym_security] = anon_sym_security,
  [anon_sym_search] = anon_sym_search,
  [anon_sym_placeholder] = anon_sym_placeholder,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_picture] = anon_sym_picture,
  [anon_sym_badge] = anon_sym_badge,
  [anon_sym_information] = anon_sym_information,
  [anon_sym_active] = anon_sym_active,
  [anon_sym_translateBadge] = anon_sym_translateBadge,
  [anon_sym_owned] = anon_sym_owned,
  [anon_sym_timestamps] = anon_sym_timestamps,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_collection] = anon_sym_collection,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [sym_constant] = sym_constant,
  [sym_array] = sym_array,
  [sym_collection_name] = sym_collection_name,
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
  [sym_collection_functions] = sym_collection_functions,
  [sym_collection_security_logging] = sym_collection_security_logging,
  [sym_collection_security_rate_limiting] = sym_collection_security_rate_limiting,
  [sym_collection_security] = sym_collection_security,
  [sym_collection_search] = sym_collection_search,
  [sym_collection_layout] = sym_collection_layout,
  [sym_collection_modifiers] = sym_collection_modifiers,
  [sym_collection] = sym_collection,
  [sym_declaration] = sym_declaration,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_writable_block_repeat1] = aux_sym_writable_block_repeat1,
  [aux_sym_schema_properties_repeat1] = aux_sym_schema_properties_repeat1,
  [aux_sym_schema_properties_repeat2] = aux_sym_schema_properties_repeat2,
  [aux_sym_schema_properties_repeat3] = aux_sym_schema_properties_repeat3,
  [aux_sym_properties_column_repeat1] = aux_sym_properties_column_repeat1,
  [aux_sym_properties_block_repeat1] = aux_sym_properties_block_repeat1,
  [aux_sym_collection_keyed_list_repeat1] = aux_sym_collection_keyed_list_repeat1,
  [aux_sym_collection_functions_repeat1] = aux_sym_collection_functions_repeat1,
  [aux_sym_collection_security_logging_repeat1] = aux_sym_collection_security_logging_repeat1,
  [aux_sym_collection_security_repeat1] = aux_sym_collection_security_repeat1,
  [aux_sym_collection_security_repeat2] = aux_sym_collection_security_repeat2,
  [aux_sym_collection_security_repeat3] = aux_sym_collection_security_repeat3,
  [aux_sym_collection_search_repeat1] = aux_sym_collection_search_repeat1,
  [aux_sym_collection_layout_repeat1] = aux_sym_collection_layout_repeat1,
  [aux_sym_collection_layout_repeat2] = aux_sym_collection_layout_repeat2,
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
  [anon_sym_search] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_placeholder] = {
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
  [sym_collection_name] = {
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
  [sym_collection_search] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_modifiers] = {
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
  [aux_sym_writable_block_repeat1] = {
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
  [aux_sym_collection_search_repeat1] = {
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
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(229);
      ADVANCE_MAP(
        '!', 10,
        '"', 227,
        '&', 4,
        '(', 261,
        ')', 262,
        ',', 237,
        '/', 9,
        '<', 257,
        '=', 11,
        '>', 256,
        '?', 288,
        '@', 260,
        '[', 236,
        ']', 238,
        'a', 39,
        'b', 16,
        'c', 148,
        'e', 132,
        'f', 17,
        'i', 41,
        'l', 19,
        'n', 25,
        'o', 164,
        'p', 103,
        'r', 24,
        's', 56,
        't', 20,
        'w', 166,
        '{', 264,
        '|', 225,
        '}', 265,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '&', 4,
        ')', 262,
        ',', 237,
        '/', 9,
        ']', 238,
        'a', 39,
        'b', 15,
        'f', 96,
        'i', 42,
        'l', 18,
        'o', 220,
        'p', 103,
        'r', 55,
        's', 57,
        't', 21,
        'w', 166,
        '|', 225,
        '}', 265,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(258);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '?') ADVANCE(288);
      if (lookahead == '@') ADVANCE(260);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(265);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '@') ADVANCE(260);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(265);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '}') ADVANCE(265);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '/', 9,
        '[', 14,
        'b', 149,
        'c', 150,
        'e', 136,
        'i', 137,
        'n', 212,
        's', 192,
        '{', 264,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(230);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(235);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(223);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 165:
      if (lookahead == 'q') ADVANCE(214);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 219:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 220:
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 221:
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 223:
      if (lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 224:
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 225:
      if (lookahead == '|') ADVANCE(259);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 227:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      ADVANCE_MAP(
        '!', 10,
        '"', 227,
        '&', 4,
        '(', 261,
        ')', 262,
        ',', 237,
        '/', 9,
        '<', 257,
        '=', 11,
        '>', 256,
        '@', 260,
        '[', 236,
        ']', 238,
        'a', 39,
        'b', 16,
        'c', 148,
        'e', 132,
        'f', 17,
        'i', 41,
        'l', 19,
        'n', 25,
        'o', 164,
        'p', 103,
        'r', 24,
        's', 56,
        't', 20,
        'w', 166,
        '{', 264,
        '|', 225,
        '}', 265,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_array_identifier);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(252);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ATcondition);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_properties);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_form);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_immutable);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_writable);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_num);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_filters);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_indexes);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_presets);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'M') ADVANCE(82);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_tableMeta);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_logging);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_strategy);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_rateLimiting);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_search);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_badge);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_information);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_translateBadge);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_timestamps);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_collection);
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
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {(TSStateId)(-1)},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_logging] = ACTIONS(1),
    [anon_sym_rateLimiting] = ACTIONS(1),
    [anon_sym_security] = ACTIONS(1),
    [anon_sym_search] = ACTIONS(1),
    [anon_sym_placeholder] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [anon_sym_badge] = ACTIONS(1),
    [anon_sym_active] = ACTIONS(1),
    [anon_sym_translateBadge] = ACTIONS(1),
    [anon_sym_owned] = ACTIONS(1),
    [anon_sym_timestamps] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_collection] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(149),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(135),
    [sym_declaration] = STATE(128),
    [aux_sym_program_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_collection] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_table,
    STATE(2), 1,
      sym_comment,
    ACTIONS(9), 28,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
      anon_sym_translateBadge,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [40] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_properties,
    ACTIONS(21), 1,
      anon_sym_table,
    ACTIONS(24), 1,
      anon_sym_functions,
    ACTIONS(27), 1,
      anon_sym_security,
    ACTIONS(30), 1,
      anon_sym_search,
    ACTIONS(33), 1,
      anon_sym_layout,
    STATE(3), 2,
      sym_comment,
      aux_sym_collection_repeat1,
    ACTIONS(36), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    STATE(16), 6,
      sym_collection_keyed_list,
      sym_collection_functions,
      sym_collection_security,
      sym_collection_search,
      sym_collection_layout,
      sym_collection_modifiers,
    ACTIONS(18), 8,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
  [92] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_properties,
    ACTIONS(45), 1,
      anon_sym_table,
    ACTIONS(47), 1,
      anon_sym_functions,
    ACTIONS(49), 1,
      anon_sym_security,
    ACTIONS(51), 1,
      anon_sym_search,
    ACTIONS(53), 1,
      anon_sym_layout,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_collection_repeat1,
    ACTIONS(55), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    STATE(16), 6,
      sym_collection_keyed_list,
      sym_collection_functions,
      sym_collection_security,
      sym_collection_search,
      sym_collection_layout,
      sym_collection_modifiers,
    ACTIONS(43), 8,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
  [146] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_properties,
    ACTIONS(45), 1,
      anon_sym_table,
    ACTIONS(47), 1,
      anon_sym_functions,
    ACTIONS(49), 1,
      anon_sym_security,
    ACTIONS(51), 1,
      anon_sym_search,
    ACTIONS(53), 1,
      anon_sym_layout,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_collection_repeat1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
    STATE(16), 6,
      sym_collection_keyed_list,
      sym_collection_functions,
      sym_collection_security,
      sym_collection_search,
      sym_collection_layout,
      sym_collection_modifiers,
    ACTIONS(43), 8,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
  [200] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 1,
      anon_sym_table,
    STATE(6), 1,
      sym_comment,
    ACTIONS(59), 20,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [232] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(65), 1,
      anon_sym_table,
    STATE(7), 1,
      sym_comment,
    ACTIONS(63), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [261] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_table,
    STATE(8), 1,
      sym_comment,
    ACTIONS(67), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [290] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(73), 1,
      anon_sym_table,
    STATE(9), 1,
      sym_comment,
    ACTIONS(71), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [319] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(77), 1,
      anon_sym_table,
    STATE(10), 1,
      sym_comment,
    ACTIONS(75), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [348] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(81), 1,
      anon_sym_table,
    STATE(11), 1,
      sym_comment,
    ACTIONS(79), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [377] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_table,
    STATE(12), 1,
      sym_comment,
    ACTIONS(83), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [406] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(89), 1,
      anon_sym_table,
    STATE(13), 1,
      sym_comment,
    ACTIONS(87), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [435] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(93), 1,
      anon_sym_table,
    STATE(14), 1,
      sym_comment,
    ACTIONS(91), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [464] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      anon_sym_table,
    STATE(15), 1,
      sym_comment,
    ACTIONS(95), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [493] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_table,
    STATE(16), 1,
      sym_comment,
    ACTIONS(99), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [522] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(105), 1,
      anon_sym_table,
    STATE(17), 1,
      sym_comment,
    ACTIONS(103), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [551] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      anon_sym_table,
    STATE(18), 1,
      sym_comment,
    ACTIONS(13), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [580] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_table,
    STATE(19), 1,
      sym_comment,
    ACTIONS(109), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [609] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(115), 1,
      anon_sym_table,
    STATE(20), 1,
      sym_comment,
    ACTIONS(113), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [638] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(119), 1,
      anon_sym_table,
    STATE(21), 1,
      sym_comment,
    ACTIONS(117), 17,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
      anon_sym_filters,
      anon_sym_indexes,
      anon_sym_presets,
      anon_sym_tableMeta,
      anon_sym_functions,
      anon_sym_security,
      anon_sym_search,
      anon_sym_layout,
      anon_sym_owned,
      anon_sym_timestamps,
      anon_sym_icon,
  [667] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      sym_array_identifier,
    ACTIONS(123), 1,
      sym_word,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_comment,
    STATE(60), 2,
      sym_collection_name,
      sym_properties_column_type,
    ACTIONS(127), 6,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
  [695] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(123), 1,
      sym_word,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_comment,
    STATE(44), 2,
      sym_collection_name,
      sym_properties_column_type,
    ACTIONS(127), 6,
      anon_sym_str,
      anon_sym_num,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_enum,
      anon_sym_const,
  [720] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      anon_sym_translateBadge,
    STATE(24), 2,
      sym_comment,
      aux_sym_collection_layout_repeat1,
    ACTIONS(133), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [741] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_boolean,
    STATE(25), 1,
      sym_comment,
    ACTIONS(139), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(144), 2,
      sym_constant,
      sym_array,
  [766] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_translateBadge,
    STATE(24), 1,
      aux_sym_collection_layout_repeat1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(147), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [789] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    STATE(37), 1,
      sym_binary_operator,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [810] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_properties,
    STATE(28), 2,
      sym_comment,
      aux_sym_schema_properties_repeat3,
    ACTIONS(160), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [830] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      anon_sym_properties,
    STATE(29), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_schema_properties_repeat3,
    STATE(163), 1,
      sym_schema_properties,
    ACTIONS(165), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [852] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      anon_sym_properties,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_schema_properties_repeat3,
    STATE(136), 1,
      sym_schema_properties,
    ACTIONS(165), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [874] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      anon_sym_properties,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_schema_properties_repeat3,
    STATE(31), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [896] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(131), 7,
      anon_sym_RBRACE,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
      anon_sym_translateBadge,
  [912] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      anon_sym_translateBadge,
    STATE(26), 1,
      aux_sym_collection_layout_repeat1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(147), 5,
      anon_sym_title,
      anon_sym_picture,
      anon_sym_badge,
      anon_sym_information,
      anon_sym_active,
  [932] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [947] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 1,
      anon_sym_logging,
    ACTIONS(176), 1,
      anon_sym_rateLimiting,
    STATE(35), 2,
      sym_comment,
      aux_sym_collection_security_repeat1,
    STATE(107), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [968] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_boolean,
    STATE(7), 1,
      sym_constant,
    STATE(36), 1,
      sym_comment,
    ACTIONS(139), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
  [989] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_boolean,
    STATE(37), 1,
      sym_comment,
    STATE(87), 1,
      sym_constant,
    ACTIONS(139), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
  [1010] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(155), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1025] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      anon_sym_logging,
    ACTIONS(183), 1,
      anon_sym_rateLimiting,
    STATE(39), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_collection_security_repeat1,
    STATE(107), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [1048] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(185), 6,
      anon_sym_RBRACE,
      anon_sym_properties,
      anon_sym_form,
      anon_sym_immutable,
      anon_sym_required,
      anon_sym_writable,
  [1063] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    ACTIONS(191), 1,
      anon_sym_QMARK,
    STATE(41), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_properties_column_repeat1,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(187), 2,
      sym_word,
      anon_sym_RBRACE,
  [1086] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_comment,
    STATE(93), 1,
      sym_boolean,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_number,
      sym_quoted_string,
  [1107] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_logging,
    ACTIONS(183), 1,
      anon_sym_rateLimiting,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_collection_security_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(107), 2,
      sym_collection_security_logging,
      sym_collection_security_rate_limiting,
  [1130] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_properties_column_repeat1,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(199), 2,
      sym_word,
      anon_sym_RBRACE,
  [1150] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_properties_column_repeat1,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(201), 2,
      sym_word,
      anon_sym_RBRACE,
  [1170] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(205), 1,
      anon_sym_AT,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(203), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_comment,
      aux_sym_properties_column_repeat1,
  [1188] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(46), 1,
      aux_sym_properties_column_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(208), 2,
      sym_word,
      anon_sym_RBRACE,
  [1208] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(46), 1,
      aux_sym_properties_column_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(210), 2,
      sym_word,
      anon_sym_RBRACE,
  [1228] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(49), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_properties_column_repeat1,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(210), 2,
      sym_word,
      anon_sym_RBRACE,
  [1248] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    STATE(127), 1,
      sym_boolean,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      sym_number,
      sym_quoted_string,
  [1266] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      anon_sym_ATcondition,
    STATE(105), 1,
      sym_condition,
    ACTIONS(214), 2,
      sym_word,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_comment,
      aux_sym_schema_properties_repeat1,
  [1284] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(46), 1,
      aux_sym_properties_column_repeat1,
    STATE(52), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(219), 2,
      sym_word,
      anon_sym_RBRACE,
  [1304] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(52), 1,
      aux_sym_properties_column_repeat1,
    STATE(53), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(221), 2,
      sym_word,
      anon_sym_RBRACE,
  [1324] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(225), 1,
      anon_sym_ATcondition,
    STATE(51), 1,
      aux_sym_schema_properties_repeat1,
    STATE(54), 1,
      sym_comment,
    STATE(105), 1,
      sym_condition,
    ACTIONS(223), 2,
      sym_word,
      anon_sym_RBRACE,
  [1344] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(46), 1,
      aux_sym_properties_column_repeat1,
    STATE(55), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(227), 2,
      sym_word,
      anon_sym_RBRACE,
  [1364] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_collection,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_program_repeat1,
    STATE(128), 1,
      sym_declaration,
    STATE(135), 1,
      sym_collection,
  [1386] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(46), 1,
      aux_sym_properties_column_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(231), 2,
      sym_word,
      anon_sym_RBRACE,
  [1406] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(46), 1,
      aux_sym_properties_column_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(201), 2,
      sym_word,
      anon_sym_RBRACE,
  [1426] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(225), 1,
      anon_sym_ATcondition,
    STATE(54), 1,
      aux_sym_schema_properties_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(105), 1,
      sym_condition,
    ACTIONS(233), 2,
      sym_word,
      anon_sym_RBRACE,
  [1446] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(47), 1,
      aux_sym_properties_column_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(235), 2,
      sym_word,
      anon_sym_RBRACE,
  [1466] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(46), 1,
      aux_sym_properties_column_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(237), 2,
      sym_word,
      anon_sym_RBRACE,
  [1486] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      anon_sym_collection,
    STATE(128), 1,
      sym_declaration,
    STATE(135), 1,
      sym_collection,
    STATE(62), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [1506] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(189), 1,
      anon_sym_AT,
    STATE(58), 1,
      aux_sym_properties_column_repeat1,
    STATE(63), 1,
      sym_comment,
    STATE(79), 1,
      sym_attribute,
    ACTIONS(244), 2,
      sym_word,
      anon_sym_RBRACE,
  [1526] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      anon_sym_name,
    ACTIONS(250), 1,
      anon_sym_options,
    STATE(64), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_collection_layout_repeat2,
  [1545] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      anon_sym_indexes,
    ACTIONS(256), 1,
      anon_sym_placeholder,
    STATE(65), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_collection_search_repeat1,
  [1564] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(258), 1,
      sym_word,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym_properties_column,
    STATE(66), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [1581] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      anon_sym_indexes,
    ACTIONS(268), 1,
      anon_sym_placeholder,
    STATE(67), 2,
      sym_comment,
      aux_sym_collection_search_repeat1,
  [1598] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(271), 4,
      sym_word,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1611] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      sym_word,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_properties_block_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(122), 1,
      sym_properties_column,
  [1630] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      anon_sym_name,
    ACTIONS(282), 1,
      anon_sym_options,
    STATE(70), 2,
      sym_comment,
      aux_sym_collection_layout_repeat2,
  [1647] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(248), 1,
      anon_sym_name,
    ACTIONS(250), 1,
      anon_sym_options,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_collection_layout_repeat2,
    STATE(71), 1,
      sym_comment,
  [1666] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      anon_sym_indexes,
    ACTIONS(256), 1,
      anon_sym_placeholder,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_collection_search_repeat1,
    STATE(72), 1,
      sym_comment,
  [1685] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_comment,
    STATE(132), 1,
      sym_logical_concatenator_operator,
    ACTIONS(289), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1702] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      sym_word,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_properties_block_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(122), 1,
      sym_properties_column,
  [1721] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_comment,
    ACTIONS(295), 3,
      sym_word,
      anon_sym_AT,
      anon_sym_RBRACE,
  [1736] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(299), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_quoted_string,
  [1749] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      anon_sym_strategy,
    STATE(77), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_collection_security_logging_repeat1,
  [1765] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_boolean,
    STATE(78), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
  [1779] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(305), 3,
      sym_word,
      anon_sym_AT,
      anon_sym_RBRACE,
  [1791] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      sym_word,
    STATE(80), 2,
      sym_comment,
      aux_sym_collection_keyed_list_repeat1,
  [1805] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      sym_word,
    STATE(81), 2,
      sym_comment,
      aux_sym_collection_functions_repeat1,
  [1819] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      sym_word,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_collection_security_repeat2,
  [1835] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      anon_sym_functions,
    STATE(83), 2,
      sym_comment,
      aux_sym_collection_security_repeat3,
  [1849] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(303), 1,
      anon_sym_strategy,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_collection_security_logging_repeat1,
  [1865] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_RBRACE,
      anon_sym_indexes,
      anon_sym_placeholder,
  [1877] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_options,
  [1889] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [1901] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(326), 1,
      sym_word,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_collection_keyed_list_repeat1,
  [1917] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(330), 3,
      sym_word,
      anon_sym_ATcondition,
      anon_sym_RBRACE,
  [1929] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      sym_comment,
    ACTIONS(332), 3,
      sym_word,
      anon_sym_AT,
      anon_sym_RBRACE,
  [1941] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      sym_word,
    STATE(73), 1,
      sym_binary_operation,
    STATE(91), 1,
      sym_comment,
    STATE(137), 1,
      sym_condition_expression,
  [1957] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      anon_sym_functions,
    STATE(92), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_collection_security_repeat3,
  [1973] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_array_repeat1,
  [1989] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      sym_word,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_collection_security_repeat2,
  [2005] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      sym_word,
    STATE(95), 2,
      sym_comment,
      aux_sym_schema_properties_repeat2,
  [2019] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      sym_word,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_writable_block_repeat1,
  [2035] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2047] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(326), 1,
      sym_word,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_collection_keyed_list_repeat1,
    STATE(98), 1,
      sym_comment,
  [2063] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      anon_sym_strategy,
    STATE(99), 2,
      sym_comment,
      aux_sym_collection_security_logging_repeat1,
  [2077] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(362), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2089] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      sym_word,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_collection_functions_repeat1,
    STATE(101), 1,
      sym_comment,
  [2105] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(368), 1,
      sym_word,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_schema_properties_repeat2,
  [2121] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      sym_word,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      aux_sym_collection_functions_repeat1,
    STATE(103), 1,
      sym_comment,
  [2137] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(104), 2,
      sym_comment,
      aux_sym_array_repeat1,
  [2151] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(105), 1,
      sym_comment,
    ACTIONS(379), 3,
      sym_word,
      anon_sym_ATcondition,
      anon_sym_RBRACE,
  [2163] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(338), 1,
      anon_sym_functions,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_collection_security_repeat3,
    STATE(106), 1,
      sym_comment,
  [2179] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(107), 1,
      sym_comment,
    ACTIONS(383), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2191] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(385), 1,
      sym_word,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(108), 2,
      sym_comment,
      aux_sym_collection_security_repeat2,
  [2205] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(109), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_RBRACE,
      anon_sym_indexes,
      anon_sym_placeholder,
  [2217] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(392), 1,
      sym_word,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(110), 2,
      sym_comment,
      aux_sym_writable_block_repeat1,
  [2231] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(111), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_options,
  [2243] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(112), 1,
      sym_comment,
    ACTIONS(399), 3,
      sym_word,
      anon_sym_AT,
      anon_sym_RBRACE,
  [2255] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(303), 1,
      anon_sym_strategy,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(113), 1,
      sym_comment,
  [2271] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(114), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2283] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(368), 1,
      sym_word,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_schema_properties_repeat2,
    STATE(115), 1,
      sym_comment,
  [2299] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(303), 1,
      anon_sym_strategy,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_collection_security_logging_repeat1,
    STATE(116), 1,
      sym_comment,
  [2315] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_RBRACE,
      anon_sym_logging,
      anon_sym_rateLimiting,
  [2327] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      aux_sym_array_repeat1,
    STATE(118), 1,
      sym_comment,
  [2343] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      sym_word,
    STATE(119), 1,
      sym_comment,
    STATE(148), 1,
      sym_collection_name,
  [2356] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [2367] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(417), 2,
      sym_word,
      anon_sym_RBRACE,
  [2378] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(419), 2,
      sym_word,
      anon_sym_RBRACE,
  [2389] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(123), 1,
      sym_comment,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [2400] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      sym_word,
    STATE(96), 1,
      aux_sym_writable_block_repeat1,
    STATE(124), 1,
      sym_comment,
  [2413] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(125), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_RBRACE,
      anon_sym_functions,
  [2424] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_properties_block,
    STATE(126), 1,
      sym_comment,
  [2437] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2448] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [2459] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_strategy,
  [2470] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym_word,
      anon_sym_RBRACE,
  [2481] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(131), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_RBRACE,
      anon_sym_functions,
  [2492] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      sym_word,
    STATE(132), 1,
      sym_comment,
    STATE(140), 1,
      sym_binary_operation,
  [2505] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_properties_block,
    STATE(133), 1,
      sym_comment,
  [2518] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(134), 1,
      sym_comment,
    ACTIONS(433), 2,
      sym_word,
      anon_sym_RBRACE,
  [2529] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(135), 1,
      sym_comment,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [2540] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_comment,
  [2550] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_comment,
  [2560] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_comment,
  [2570] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_comment,
  [2580] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_comment,
  [2590] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_comment,
  [2600] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_comment,
  [2610] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_comment,
  [2620] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_comment,
  [2630] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      sym_quoted_string,
    STATE(145), 1,
      sym_comment,
  [2640] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_comment,
  [2650] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(459), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym_comment,
  [2660] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_comment,
  [2670] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_comment,
  [2680] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(465), 1,
      sym_quoted_string,
    STATE(150), 1,
      sym_comment,
  [2690] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_comment,
  [2700] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_comment,
  [2710] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      sym_comment,
  [2720] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_comment,
  [2730] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_comment,
  [2740] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_comment,
  [2750] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      sym_word,
    STATE(157), 1,
      sym_comment,
  [2760] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_comment,
  [2770] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(483), 1,
      sym_word,
    STATE(159), 1,
      sym_comment,
  [2780] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_comment,
  [2790] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      sym_word,
    STATE(161), 1,
      sym_comment,
  [2800] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_comment,
  [2810] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym_comment,
  [2820] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(493), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_comment,
  [2830] = 1,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 319,
  [SMALL_STATE(11)] = 348,
  [SMALL_STATE(12)] = 377,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 435,
  [SMALL_STATE(15)] = 464,
  [SMALL_STATE(16)] = 493,
  [SMALL_STATE(17)] = 522,
  [SMALL_STATE(18)] = 551,
  [SMALL_STATE(19)] = 580,
  [SMALL_STATE(20)] = 609,
  [SMALL_STATE(21)] = 638,
  [SMALL_STATE(22)] = 667,
  [SMALL_STATE(23)] = 695,
  [SMALL_STATE(24)] = 720,
  [SMALL_STATE(25)] = 741,
  [SMALL_STATE(26)] = 766,
  [SMALL_STATE(27)] = 789,
  [SMALL_STATE(28)] = 810,
  [SMALL_STATE(29)] = 830,
  [SMALL_STATE(30)] = 852,
  [SMALL_STATE(31)] = 874,
  [SMALL_STATE(32)] = 896,
  [SMALL_STATE(33)] = 912,
  [SMALL_STATE(34)] = 932,
  [SMALL_STATE(35)] = 947,
  [SMALL_STATE(36)] = 968,
  [SMALL_STATE(37)] = 989,
  [SMALL_STATE(38)] = 1010,
  [SMALL_STATE(39)] = 1025,
  [SMALL_STATE(40)] = 1048,
  [SMALL_STATE(41)] = 1063,
  [SMALL_STATE(42)] = 1086,
  [SMALL_STATE(43)] = 1107,
  [SMALL_STATE(44)] = 1130,
  [SMALL_STATE(45)] = 1150,
  [SMALL_STATE(46)] = 1170,
  [SMALL_STATE(47)] = 1188,
  [SMALL_STATE(48)] = 1208,
  [SMALL_STATE(49)] = 1228,
  [SMALL_STATE(50)] = 1248,
  [SMALL_STATE(51)] = 1266,
  [SMALL_STATE(52)] = 1284,
  [SMALL_STATE(53)] = 1304,
  [SMALL_STATE(54)] = 1324,
  [SMALL_STATE(55)] = 1344,
  [SMALL_STATE(56)] = 1364,
  [SMALL_STATE(57)] = 1386,
  [SMALL_STATE(58)] = 1406,
  [SMALL_STATE(59)] = 1426,
  [SMALL_STATE(60)] = 1446,
  [SMALL_STATE(61)] = 1466,
  [SMALL_STATE(62)] = 1486,
  [SMALL_STATE(63)] = 1506,
  [SMALL_STATE(64)] = 1526,
  [SMALL_STATE(65)] = 1545,
  [SMALL_STATE(66)] = 1564,
  [SMALL_STATE(67)] = 1581,
  [SMALL_STATE(68)] = 1598,
  [SMALL_STATE(69)] = 1611,
  [SMALL_STATE(70)] = 1630,
  [SMALL_STATE(71)] = 1647,
  [SMALL_STATE(72)] = 1666,
  [SMALL_STATE(73)] = 1685,
  [SMALL_STATE(74)] = 1702,
  [SMALL_STATE(75)] = 1721,
  [SMALL_STATE(76)] = 1736,
  [SMALL_STATE(77)] = 1749,
  [SMALL_STATE(78)] = 1765,
  [SMALL_STATE(79)] = 1779,
  [SMALL_STATE(80)] = 1791,
  [SMALL_STATE(81)] = 1805,
  [SMALL_STATE(82)] = 1819,
  [SMALL_STATE(83)] = 1835,
  [SMALL_STATE(84)] = 1849,
  [SMALL_STATE(85)] = 1865,
  [SMALL_STATE(86)] = 1877,
  [SMALL_STATE(87)] = 1889,
  [SMALL_STATE(88)] = 1901,
  [SMALL_STATE(89)] = 1917,
  [SMALL_STATE(90)] = 1929,
  [SMALL_STATE(91)] = 1941,
  [SMALL_STATE(92)] = 1957,
  [SMALL_STATE(93)] = 1973,
  [SMALL_STATE(94)] = 1989,
  [SMALL_STATE(95)] = 2005,
  [SMALL_STATE(96)] = 2019,
  [SMALL_STATE(97)] = 2035,
  [SMALL_STATE(98)] = 2047,
  [SMALL_STATE(99)] = 2063,
  [SMALL_STATE(100)] = 2077,
  [SMALL_STATE(101)] = 2089,
  [SMALL_STATE(102)] = 2105,
  [SMALL_STATE(103)] = 2121,
  [SMALL_STATE(104)] = 2137,
  [SMALL_STATE(105)] = 2151,
  [SMALL_STATE(106)] = 2163,
  [SMALL_STATE(107)] = 2179,
  [SMALL_STATE(108)] = 2191,
  [SMALL_STATE(109)] = 2205,
  [SMALL_STATE(110)] = 2217,
  [SMALL_STATE(111)] = 2231,
  [SMALL_STATE(112)] = 2243,
  [SMALL_STATE(113)] = 2255,
  [SMALL_STATE(114)] = 2271,
  [SMALL_STATE(115)] = 2283,
  [SMALL_STATE(116)] = 2299,
  [SMALL_STATE(117)] = 2315,
  [SMALL_STATE(118)] = 2327,
  [SMALL_STATE(119)] = 2343,
  [SMALL_STATE(120)] = 2356,
  [SMALL_STATE(121)] = 2367,
  [SMALL_STATE(122)] = 2378,
  [SMALL_STATE(123)] = 2389,
  [SMALL_STATE(124)] = 2400,
  [SMALL_STATE(125)] = 2413,
  [SMALL_STATE(126)] = 2424,
  [SMALL_STATE(127)] = 2437,
  [SMALL_STATE(128)] = 2448,
  [SMALL_STATE(129)] = 2459,
  [SMALL_STATE(130)] = 2470,
  [SMALL_STATE(131)] = 2481,
  [SMALL_STATE(132)] = 2492,
  [SMALL_STATE(133)] = 2505,
  [SMALL_STATE(134)] = 2518,
  [SMALL_STATE(135)] = 2529,
  [SMALL_STATE(136)] = 2540,
  [SMALL_STATE(137)] = 2550,
  [SMALL_STATE(138)] = 2560,
  [SMALL_STATE(139)] = 2570,
  [SMALL_STATE(140)] = 2580,
  [SMALL_STATE(141)] = 2590,
  [SMALL_STATE(142)] = 2600,
  [SMALL_STATE(143)] = 2610,
  [SMALL_STATE(144)] = 2620,
  [SMALL_STATE(145)] = 2630,
  [SMALL_STATE(146)] = 2640,
  [SMALL_STATE(147)] = 2650,
  [SMALL_STATE(148)] = 2660,
  [SMALL_STATE(149)] = 2670,
  [SMALL_STATE(150)] = 2680,
  [SMALL_STATE(151)] = 2690,
  [SMALL_STATE(152)] = 2700,
  [SMALL_STATE(153)] = 2710,
  [SMALL_STATE(154)] = 2720,
  [SMALL_STATE(155)] = 2730,
  [SMALL_STATE(156)] = 2740,
  [SMALL_STATE(157)] = 2750,
  [SMALL_STATE(158)] = 2760,
  [SMALL_STATE(159)] = 2770,
  [SMALL_STATE(160)] = 2780,
  [SMALL_STATE(161)] = 2790,
  [SMALL_STATE(162)] = 2800,
  [SMALL_STATE(163)] = 2810,
  [SMALL_STATE(164)] = 2820,
  [SMALL_STATE(165)] = 2830,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_modifiers, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_modifiers, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_keyed_list, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_keyed_list, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_functions, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_functions, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_search, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_search, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_layout, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_layout, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_keyed_list, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_keyed_list, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties_block, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_security, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_security, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_repeat1, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_functions, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_functions, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_collection_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_search, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_search, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_layout, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_layout, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties_block, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0), SHIFT_REPEAT(133),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 2, 0, 0), SHIFT_REPEAT(164),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_properties, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat3, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 3, 0, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 5, 0, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 3, 0, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 6, 0, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 4, 0, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 2, 0, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column, 4, 0, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 2, 0, 0),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_name, 1, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0), SHIFT_REPEAT(150),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 2, 0, 0), SHIFT_REPEAT(152),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_column_repeat1, 1, 0, 0),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_keyed_list_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_functions_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 2, 0, 0),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 2, 0, 0), SHIFT_REPEAT(138),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_rate_limiting, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_logging_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_logging_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_logging, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_properties_repeat1, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat1, 1, 0, 0),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 2, 0, 0), SHIFT_REPEAT(160),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_search_repeat1, 4, 0, 0),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_writable_block_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_writable_block_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_layout_repeat2, 4, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_column_type, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_rate_limiting, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_security_logging, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 5, 0, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4, 0, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 4, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_writable_block_repeat1, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat3, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_security_repeat2, 4, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [463] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_concatenator_operator, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
