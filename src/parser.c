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
#define STATE_COUNT 317
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  anon_sym_DQUOTEproto3_DQUOTE = 4,
  anon_sym_DQUOTEproto2_DQUOTE = 5,
  anon_sym_import = 6,
  anon_sym_weak = 7,
  anon_sym_public = 8,
  anon_sym_package = 9,
  anon_sym_option = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_DOT = 13,
  anon_sym_enum = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_DASH = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  anon_sym_message = 21,
  anon_sym_extend = 22,
  anon_sym_optional = 23,
  anon_sym_required = 24,
  anon_sym_repeated = 25,
  anon_sym_oneof = 26,
  anon_sym_map = 27,
  anon_sym_LT = 28,
  anon_sym_GT = 29,
  anon_sym_int32 = 30,
  anon_sym_int64 = 31,
  anon_sym_uint32 = 32,
  anon_sym_uint64 = 33,
  anon_sym_sint32 = 34,
  anon_sym_sint64 = 35,
  anon_sym_fixed32 = 36,
  anon_sym_fixed64 = 37,
  anon_sym_sfixed32 = 38,
  anon_sym_sfixed64 = 39,
  anon_sym_bool = 40,
  anon_sym_string = 41,
  anon_sym_double = 42,
  anon_sym_float = 43,
  anon_sym_bytes = 44,
  anon_sym_reserved = 45,
  anon_sym_extensions = 46,
  anon_sym_to = 47,
  anon_sym_max = 48,
  anon_sym_service = 49,
  anon_sym_rpc = 50,
  anon_sym_stream = 51,
  anon_sym_returns = 52,
  anon_sym_PLUS = 53,
  anon_sym_COLON = 54,
  sym_identifier = 55,
  sym_reserved_identifier = 56,
  sym_true = 57,
  sym_false = 58,
  sym_decimal_lit = 59,
  sym_octal_lit = 60,
  sym_hex_lit = 61,
  sym_float_lit = 62,
  anon_sym_DQUOTE = 63,
  aux_sym_string_token1 = 64,
  anon_sym_SQUOTE = 65,
  aux_sym_string_token2 = 66,
  sym_escape_sequence = 67,
  sym_comment = 68,
  sym_source_file = 69,
  sym_empty_statement = 70,
  sym_syntax = 71,
  sym_import = 72,
  sym_package = 73,
  sym_option = 74,
  sym__option_name = 75,
  sym_enum = 76,
  sym_enum_name = 77,
  sym_enum_body = 78,
  sym_enum_field = 79,
  sym_enum_value_option = 80,
  sym_message = 81,
  sym_message_body = 82,
  sym_message_name = 83,
  sym_extend = 84,
  sym_field = 85,
  sym_field_options = 86,
  sym_field_option = 87,
  sym_oneof = 88,
  sym_oneof_field = 89,
  sym_map_field = 90,
  sym_key_type = 91,
  sym_type = 92,
  sym_reserved = 93,
  sym_extensions = 94,
  sym_ranges = 95,
  sym_range = 96,
  sym_reserved_field_names = 97,
  sym_message_or_enum_type = 98,
  sym_field_number = 99,
  sym_service = 100,
  sym_service_name = 101,
  sym_rpc = 102,
  sym_rpc_name = 103,
  sym_constant = 104,
  sym_block_lit = 105,
  sym_full_ident = 106,
  sym_bool = 107,
  sym_int_lit = 108,
  sym_string = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym__option_name_repeat1 = 111,
  aux_sym_enum_body_repeat1 = 112,
  aux_sym_enum_field_repeat1 = 113,
  aux_sym_message_body_repeat1 = 114,
  aux_sym_field_options_repeat1 = 115,
  aux_sym_oneof_repeat1 = 116,
  aux_sym_ranges_repeat1 = 117,
  aux_sym_reserved_field_names_repeat1 = 118,
  aux_sym_message_or_enum_type_repeat1 = 119,
  aux_sym_service_repeat1 = 120,
  aux_sym_rpc_repeat1 = 121,
  aux_sym_block_lit_repeat1 = 122,
  aux_sym_block_lit_repeat2 = 123,
  aux_sym_string_repeat1 = 124,
  aux_sym_string_repeat2 = 125,
  aux_sym_string_repeat3 = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTEproto3_DQUOTE] = "\"proto3\"",
  [anon_sym_DQUOTEproto2_DQUOTE] = "\"proto2\"",
  [anon_sym_import] = "import",
  [anon_sym_weak] = "weak",
  [anon_sym_public] = "public",
  [anon_sym_package] = "package",
  [anon_sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_message] = "message",
  [anon_sym_extend] = "extend",
  [anon_sym_optional] = "optional",
  [anon_sym_required] = "required",
  [anon_sym_repeated] = "repeated",
  [anon_sym_oneof] = "oneof",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [anon_sym_reserved] = "reserved",
  [anon_sym_extensions] = "extensions",
  [anon_sym_to] = "to",
  [anon_sym_max] = "max",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_stream] = "stream",
  [anon_sym_returns] = "returns",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_reserved_identifier] = "reserved_identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
  [sym_hex_lit] = "hex_lit",
  [sym_float_lit] = "float_lit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_empty_statement] = "empty_statement",
  [sym_syntax] = "syntax",
  [sym_import] = "import",
  [sym_package] = "package",
  [sym_option] = "option",
  [sym__option_name] = "_option_name",
  [sym_enum] = "enum",
  [sym_enum_name] = "enum_name",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_enum_value_option] = "enum_value_option",
  [sym_message] = "message",
  [sym_message_body] = "message_body",
  [sym_message_name] = "message_name",
  [sym_extend] = "extend",
  [sym_field] = "field",
  [sym_field_options] = "field_options",
  [sym_field_option] = "field_option",
  [sym_oneof] = "oneof",
  [sym_oneof_field] = "oneof_field",
  [sym_map_field] = "map_field",
  [sym_key_type] = "key_type",
  [sym_type] = "type",
  [sym_reserved] = "reserved",
  [sym_extensions] = "extensions",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_reserved_field_names] = "reserved_field_names",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_field_number] = "field_number",
  [sym_service] = "service",
  [sym_service_name] = "service_name",
  [sym_rpc] = "rpc",
  [sym_rpc_name] = "rpc_name",
  [sym_constant] = "constant",
  [sym_block_lit] = "block_lit",
  [sym_full_ident] = "full_ident",
  [sym_bool] = "bool",
  [sym_int_lit] = "int_lit",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__option_name_repeat1] = "_option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
  [aux_sym_message_body_repeat1] = "message_body_repeat1",
  [aux_sym_field_options_repeat1] = "field_options_repeat1",
  [aux_sym_oneof_repeat1] = "oneof_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_reserved_field_names_repeat1] = "reserved_field_names_repeat1",
  [aux_sym_message_or_enum_type_repeat1] = "message_or_enum_type_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_rpc_repeat1] = "rpc_repeat1",
  [aux_sym_block_lit_repeat1] = "block_lit_repeat1",
  [aux_sym_block_lit_repeat2] = "block_lit_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTEproto3_DQUOTE] = anon_sym_DQUOTEproto3_DQUOTE,
  [anon_sym_DQUOTEproto2_DQUOTE] = anon_sym_DQUOTEproto2_DQUOTE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_extensions] = anon_sym_extensions,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_reserved_identifier] = sym_reserved_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
  [sym_hex_lit] = sym_hex_lit,
  [sym_float_lit] = sym_float_lit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_empty_statement] = sym_empty_statement,
  [sym_syntax] = sym_syntax,
  [sym_import] = sym_import,
  [sym_package] = sym_package,
  [sym_option] = sym_option,
  [sym__option_name] = sym__option_name,
  [sym_enum] = sym_enum,
  [sym_enum_name] = sym_enum_name,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_value_option] = sym_enum_value_option,
  [sym_message] = sym_message,
  [sym_message_body] = sym_message_body,
  [sym_message_name] = sym_message_name,
  [sym_extend] = sym_extend,
  [sym_field] = sym_field,
  [sym_field_options] = sym_field_options,
  [sym_field_option] = sym_field_option,
  [sym_oneof] = sym_oneof,
  [sym_oneof_field] = sym_oneof_field,
  [sym_map_field] = sym_map_field,
  [sym_key_type] = sym_key_type,
  [sym_type] = sym_type,
  [sym_reserved] = sym_reserved,
  [sym_extensions] = sym_extensions,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_reserved_field_names] = sym_reserved_field_names,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_field_number] = sym_field_number,
  [sym_service] = sym_service,
  [sym_service_name] = sym_service_name,
  [sym_rpc] = sym_rpc,
  [sym_rpc_name] = sym_rpc_name,
  [sym_constant] = sym_constant,
  [sym_block_lit] = sym_block_lit,
  [sym_full_ident] = sym_full_ident,
  [sym_bool] = sym_bool,
  [sym_int_lit] = sym_int_lit,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__option_name_repeat1] = aux_sym__option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
  [aux_sym_message_body_repeat1] = aux_sym_message_body_repeat1,
  [aux_sym_field_options_repeat1] = aux_sym_field_options_repeat1,
  [aux_sym_oneof_repeat1] = aux_sym_oneof_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_reserved_field_names_repeat1] = aux_sym_reserved_field_names_repeat1,
  [aux_sym_message_or_enum_type_repeat1] = aux_sym_message_or_enum_type_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_rpc_repeat1] = aux_sym_rpc_repeat1,
  [aux_sym_block_lit_repeat1] = aux_sym_block_lit_repeat1,
  [aux_sym_block_lit_repeat2] = aux_sym_block_lit_repeat2,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto3_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto2_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
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
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extensions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__option_name] = {
    .visible = false,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value_option] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_message_body] = {
    .visible = true,
    .named = true,
  },
  [sym_message_name] = {
    .visible = true,
    .named = true,
  },
  [sym_extend] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_options] = {
    .visible = true,
    .named = true,
  },
  [sym_field_option] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_field] = {
    .visible = true,
    .named = true,
  },
  [sym_map_field] = {
    .visible = true,
    .named = true,
  },
  [sym_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_extensions] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved_field_names] = {
    .visible = true,
    .named = true,
  },
  [sym_message_or_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_number] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_block_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__option_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reserved_field_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_or_enum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_path = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_path, 2},
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
  [5] = 2,
  [6] = 3,
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
  [46] = 7,
  [47] = 8,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 51,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 7,
  [62] = 62,
  [63] = 8,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 64,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 24,
  [76] = 23,
  [77] = 77,
  [78] = 78,
  [79] = 20,
  [80] = 25,
  [81] = 22,
  [82] = 26,
  [83] = 83,
  [84] = 84,
  [85] = 21,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 88,
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
  [111] = 27,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 7,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 31,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 31,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 108,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 8,
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
  [178] = 169,
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
  [205] = 169,
  [206] = 169,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 233,
  [238] = 236,
  [239] = 239,
  [240] = 239,
  [241] = 216,
  [242] = 221,
  [243] = 243,
  [244] = 244,
  [245] = 243,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 248,
  [298] = 298,
  [299] = 299,
  [300] = 276,
  [301] = 248,
  [302] = 248,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 269,
  [311] = 269,
  [312] = 269,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(193);
      ADVANCE_MAP(
        '"', 412,
        '\'', 419,
        '(', 207,
        ')', 208,
        '+', 276,
        ',', 217,
        '-', 215,
        '.', 210,
        '/', 9,
        '0', 404,
        ':', 277,
        ';', 194,
        '<', 233,
        '=', 196,
        '>', 234,
        '[', 216,
        '\\', 35,
        ']', 218,
        'b', 128,
        'd', 124,
        'e', 114,
        'f', 36,
        'i', 106,
        'm', 37,
        'n', 38,
        'o', 113,
        'p', 40,
        'r', 62,
        's', 63,
        't', 125,
        'u', 97,
        'w', 72,
        '{', 213,
        '}', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(191);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 412,
        '\'', 419,
        '(', 207,
        ')', 208,
        ',', 217,
        '.', 209,
        '/', 9,
        ';', 194,
        '=', 196,
        '>', 234,
        '[', 216,
        ']', 218,
        '{', 213,
        '}', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 412,
        '\'', 419,
        '+', 276,
        '-', 215,
        '.', 179,
        '/', 9,
        '0', 404,
        ':', 277,
        '[', 216,
        ']', 218,
        'f', 297,
        'i', 351,
        'n', 298,
        't', 370,
        '{', 213,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(198);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(197);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 139,
        '.', 209,
        '/', 9,
        ';', 194,
        'b', 360,
        'd', 356,
        'e', 350,
        'f', 330,
        'i', 349,
        'm', 293,
        'o', 348,
        'r', 307,
        's', 327,
        'u', 336,
        '}', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(419);
      if (lookahead == '/') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(424);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(430);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(429);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '.', 209,
        '/', 9,
        ';', 194,
        '[', 216,
        'b', 360,
        'd', 356,
        'f', 330,
        'i', 349,
        'o', 367,
        's', 327,
        'u', 336,
        '}', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '.', 209,
        '/', 9,
        'b', 360,
        'd', 356,
        'f', 330,
        'i', 349,
        'r', 316,
        's', 327,
        'u', 336,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '.', 209,
        '/', 9,
        'b', 360,
        'd', 356,
        'f', 330,
        'i', 349,
        's', 327,
        'u', 336,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 's') ADVANCE(386);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead == '}') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(235);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(243);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(239);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(247);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(251);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(5);
      if (lookahead == '3') ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(237);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(245);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(241);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(249);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(253);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'x') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(409);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(200);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'y') ADVANCE(158);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == 'x') ADVANCE(270);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'q') ADVANCE(169);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 172:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 173:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 174:
      if (lookahead == 'x') ADVANCE(270);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(195);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 177:
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 178:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 190:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 191:
      if (eof) ADVANCE(193);
      ADVANCE_MAP(
        '"', 412,
        '\'', 419,
        '(', 207,
        ')', 208,
        '+', 276,
        ',', 217,
        '-', 215,
        '.', 210,
        '/', 9,
        '0', 404,
        ':', 277,
        ';', 194,
        '<', 233,
        '=', 196,
        '>', 234,
        '[', 216,
        ']', 218,
        'b', 128,
        'd', 124,
        'e', 114,
        'f', 36,
        'i', 106,
        'm', 37,
        'n', 38,
        'o', 113,
        'p', 40,
        'r', 62,
        's', 63,
        't', 125,
        'u', 97,
        'w', 72,
        '{', 213,
        '}', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(191);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 192:
      if (eof) ADVANCE(193);
      ADVANCE_MAP(
        '"', 190,
        '-', 215,
        '.', 209,
        '/', 9,
        '0', 406,
        ';', 194,
        '=', 196,
        'e', 115,
        'i', 105,
        'm', 45,
        'o', 141,
        'p', 39,
        'r', 137,
        's', 64,
        '}', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(192);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto2_DQUOTE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_required);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_extensions);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_extensions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(278);
      if (lookahead == '6') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(279);
      if (lookahead == '6') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(280);
      if (lookahead == '6') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(281);
      if (lookahead == '6') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '6') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 's') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'x') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 'y') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == 'q') ADVANCE(391);
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_reserved_identifier);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(182);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(418);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(414);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(425);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead == '/') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(421);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(430);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 192},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 192},
  [57] = {.lex_state = 192},
  [58] = {.lex_state = 192},
  [59] = {.lex_state = 192},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 192},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 192},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 192},
  [73] = {.lex_state = 192},
  [74] = {.lex_state = 192},
  [75] = {.lex_state = 192},
  [76] = {.lex_state = 192},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 192},
  [79] = {.lex_state = 192},
  [80] = {.lex_state = 192},
  [81] = {.lex_state = 192},
  [82] = {.lex_state = 192},
  [83] = {.lex_state = 192},
  [84] = {.lex_state = 192},
  [85] = {.lex_state = 192},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 192},
  [89] = {.lex_state = 192},
  [90] = {.lex_state = 192},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 192},
  [93] = {.lex_state = 192},
  [94] = {.lex_state = 192},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 192},
  [97] = {.lex_state = 192},
  [98] = {.lex_state = 192},
  [99] = {.lex_state = 192},
  [100] = {.lex_state = 192},
  [101] = {.lex_state = 192},
  [102] = {.lex_state = 192},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 192},
  [113] = {.lex_state = 192},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 192},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 192},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 192},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 192},
  [128] = {.lex_state = 192},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 192},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 18},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 192},
  [160] = {.lex_state = 192},
  [161] = {.lex_state = 192},
  [162] = {.lex_state = 192},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 192},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 192},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 192},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 192},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 192},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 192},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 192},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 192},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_extensions] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(277),
    [sym_empty_statement] = STATE(58),
    [sym_syntax] = STATE(57),
    [sym_import] = STATE(58),
    [sym_package] = STATE(58),
    [sym_option] = STATE(58),
    [sym_enum] = STATE(58),
    [sym_message] = STATE(58),
    [sym_extend] = STATE(58),
    [sym_service] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_syntax] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(13),
    [anon_sym_option] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(17),
    [anon_sym_message] = ACTIONS(19),
    [anon_sym_extend] = ACTIONS(21),
    [anon_sym_service] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(251), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(3), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [86] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(251), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [172] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      anon_sym_option,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_enum,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_message,
    ACTIONS(74), 1,
      anon_sym_extend,
    ACTIONS(80), 1,
      anon_sym_repeated,
    ACTIONS(83), 1,
      anon_sym_oneof,
    ACTIONS(86), 1,
      anon_sym_map,
    ACTIONS(92), 1,
      anon_sym_reserved,
    ACTIONS(95), 1,
      anon_sym_extensions,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(251), 1,
      sym_type,
    ACTIONS(77), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(89), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [258] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(251), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(6), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [344] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(251), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(107), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(111), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(115), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(119), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(123), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(127), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(131), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(135), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(139), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(143), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(147), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(151), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(155), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(159), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(163), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(167), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(171), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(175), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(179), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(183), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(187), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1228] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_option,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(315), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(200), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1279] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_option,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(315), 1,
      sym_type,
    STATE(30), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1330] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_option,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(315), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(216), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(220), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1439] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_COLON,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_hex_lit,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(137), 1,
      sym_constant,
    ACTIONS(224), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(234), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(246), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1523] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_repeated,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(292), 1,
      sym_type,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1562] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_hex_lit,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(140), 1,
      sym_constant,
    ACTIONS(224), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(234), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1615] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(314), 1,
      sym_type,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1651] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(262), 1,
      sym_hex_lit,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(203), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1701] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(182), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1751] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(204), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1801] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_hex_lit,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(126), 1,
      sym_constant,
    ACTIONS(224), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(234), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(272), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1879] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(195), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1929] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(292), 1,
      sym_type,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1965] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_hex_lit,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(131), 1,
      sym_constant,
    ACTIONS(224), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(234), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(107), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [2043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(111), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [2071] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
    STATE(287), 1,
      sym_type,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [2107] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(209), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2154] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(220), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2201] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(302), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2248] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(208), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2295] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(248), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2342] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(297), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2389] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_float_lit,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_hex_lit,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(301), 1,
      sym_constant,
    ACTIONS(232), 2,
      sym_true,
      sym_false,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2436] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(59), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2478] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(56), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2520] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(59), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      anon_sym_import,
    ACTIONS(290), 1,
      anon_sym_package,
    ACTIONS(293), 1,
      anon_sym_option,
    ACTIONS(296), 1,
      anon_sym_enum,
    ACTIONS(299), 1,
      anon_sym_message,
    ACTIONS(302), 1,
      anon_sym_extend,
    ACTIONS(305), 1,
      anon_sym_service,
    STATE(59), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(294), 1,
      sym_key_type,
    ACTIONS(308), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
      anon_sym_rpc,
  [2642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(310), 9,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
      anon_sym_rpc,
  [2680] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      anon_sym_reserved,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(67), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 10,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(325), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2742] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(321), 1,
      anon_sym_reserved,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(68), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      anon_sym_option,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_reserved,
    ACTIONS(342), 1,
      sym_identifier,
    STATE(68), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(345), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2814] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(321), 1,
      anon_sym_reserved,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(71), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2840] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(321), 1,
      anon_sym_reserved,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(68), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      aux_sym_string_repeat3,
    ACTIONS(357), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      aux_sym_string_repeat3,
    ACTIONS(365), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3117] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    ACTIONS(375), 1,
      sym_reserved_identifier,
    STATE(174), 1,
      sym_range,
    STATE(175), 1,
      sym_int_lit,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(276), 2,
      sym_ranges,
      sym_reserved_field_names,
  [3141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      anon_sym_rpc,
    STATE(90), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      anon_sym_option,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 1,
      anon_sym_rpc,
    STATE(90), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3199] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(379), 1,
      anon_sym_rpc,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(89), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3221] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    ACTIONS(375), 1,
      sym_reserved_identifier,
    STATE(174), 1,
      sym_range,
    STATE(175), 1,
      sym_int_lit,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(300), 2,
      sym_ranges,
      sym_reserved_field_names,
  [3245] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(101), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3275] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    STATE(174), 1,
      sym_range,
    STATE(175), 1,
      sym_int_lit,
    STATE(307), 1,
      sym_ranges,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(94), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(100), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(102), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(101), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3367] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      anon_sym_option,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(101), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(101), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3439] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(262), 1,
      sym_string,
    ACTIONS(418), 2,
      anon_sym_weak,
      anon_sym_public,
  [3459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_hex_lit,
    ACTIONS(422), 1,
      sym_float_lit,
    STATE(104), 1,
      sym_int_lit,
    ACTIONS(260), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(426), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3501] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(197), 1,
      sym_field_option,
    STATE(281), 1,
      sym__option_name,
    STATE(309), 1,
      sym_field_options,
  [3520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(187), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(222), 1,
      sym_field_number,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(231), 1,
      sym_field_number,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(432), 1,
      anon_sym_stream,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(250), 1,
      sym_message_or_enum_type,
  [3586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(218), 1,
      sym_field_number,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(436), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(107), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_stream,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(252), 1,
      sym_message_or_enum_type,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(442), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(197), 1,
      sym_field_option,
    STATE(281), 1,
      sym__option_name,
    STATE(282), 1,
      sym_field_options,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    ACTIONS(444), 1,
      anon_sym_max,
    STATE(219), 1,
      sym_int_lit,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(448), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_stream,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(295), 1,
      sym_message_or_enum_type,
  [3740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    ACTIONS(452), 1,
      anon_sym_DASH,
    STATE(235), 1,
      sym_int_lit,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(456), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(211), 1,
      sym_field_number,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    STATE(175), 1,
      sym_int_lit,
    STATE(234), 1,
      sym_range,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(460), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [3828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(464), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(197), 1,
      sym_field_option,
    STATE(281), 1,
      sym__option_name,
    STATE(285), 1,
      sym_field_options,
  [3860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(34), 1,
      sym_field_number,
    ACTIONS(466), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(472), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_hex_lit,
    ACTIONS(422), 1,
      sym_float_lit,
    STATE(104), 1,
      sym_int_lit,
    ACTIONS(234), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(476), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(480), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(197), 1,
      sym_field_option,
    STATE(272), 1,
      sym_field_options,
    STATE(281), 1,
      sym__option_name,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(484), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(488), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(197), 1,
      sym_field_option,
    STATE(261), 1,
      sym_field_options,
    STATE(281), 1,
      sym__option_name,
  [3997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(111), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [4010] = 4,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_string_repeat1,
    ACTIONS(492), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_DOT,
    ACTIONS(496), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(180), 1,
      sym_enum_value_option,
    STATE(256), 1,
      sym__option_name,
  [4052] = 4,
    ACTIONS(494), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      aux_sym_string_repeat1,
    ACTIONS(502), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(258), 1,
      sym_message_or_enum_type,
  [4082] = 4,
    ACTIONS(494), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      aux_sym_string_repeat2,
    ACTIONS(506), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_DOT,
    ACTIONS(508), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(191), 1,
      sym_enum_value_option,
    STATE(256), 1,
      sym__option_name,
  [4124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(210), 1,
      sym_enum_value_option,
    STATE(256), 1,
      sym__option_name,
  [4140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat3,
    STATE(305), 1,
      sym_string,
  [4156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(512), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(166), 1,
      aux_sym_block_lit_repeat2,
  [4172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(217), 1,
      sym_field_option,
    STATE(281), 1,
      sym__option_name,
  [4188] = 4,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    ACTIONS(494), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_string_repeat2,
    ACTIONS(516), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_DOT,
    ACTIONS(518), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(250), 1,
      sym_message_or_enum_type,
  [4230] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(257), 1,
      sym_message_or_enum_type,
  [4246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4286] = 4,
    ACTIONS(494), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      aux_sym_string_repeat1,
    ACTIONS(530), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4310] = 4,
    ACTIONS(494), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      aux_sym_string_repeat2,
    ACTIONS(537), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      sym_identifier,
    STATE(166), 1,
      aux_sym_block_lit_repeat2,
  [4340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_block_lit_repeat2,
  [4356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_octal_lit,
    STATE(223), 1,
      sym_int_lit,
    ACTIONS(262), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [4370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(311), 1,
      sym__option_name,
  [4383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_enum_field_repeat1,
  [4396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      anon_sym_EQ,
    STATE(62), 1,
      aux_sym__option_name_repeat1,
  [4409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_enum_field_repeat1,
  [4422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_reserved_field_names_repeat1,
  [4435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_ranges_repeat1,
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_to,
    ACTIONS(567), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SEMI,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_ranges_repeat1,
  [4472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_field_options_repeat1,
  [4485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(269), 1,
      sym__option_name,
  [4498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_enum_field_repeat1,
  [4520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_block_lit_repeat1,
  [4533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_block_lit_repeat1,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_field_options_repeat1,
  [4568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_reserved_field_names_repeat1,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_block_lit_repeat1,
  [4621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_block_lit_repeat1,
  [4634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      aux_sym_enum_field_repeat1,
  [4647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(605), 1,
      anon_sym_EQ,
    STATE(171), 1,
      aux_sym__option_name_repeat1,
  [4660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_block_lit_repeat1,
  [4673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_enum_field_repeat1,
  [4686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_block_lit_repeat1,
  [4699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_field_options_repeat1,
  [4721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      aux_sym_reserved_field_names_repeat1,
  [4734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_EQ,
    STATE(207), 1,
      aux_sym__option_name_repeat1,
  [4747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      aux_sym_ranges_repeat1,
  [4760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_block_lit_repeat1,
  [4782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_block_lit_repeat1,
  [4795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_block_lit_repeat1,
  [4808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(310), 1,
      sym__option_name,
  [4821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(312), 1,
      sym__option_name,
  [4834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(617), 1,
      anon_sym_EQ,
    STATE(62), 1,
      aux_sym__option_name_repeat1,
  [4847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_LBRACK,
  [4881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(227), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
    STATE(255), 1,
      sym_full_ident,
  [4901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
    STATE(265), 1,
      sym_rpc_name,
  [4911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(227), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
    STATE(233), 1,
      sym_enum_name,
  [4931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SEMI,
    ACTIONS(639), 1,
      anon_sym_LBRACK,
  [4949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(236), 1,
      sym_message_name,
  [4975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SEMI,
    ACTIONS(647), 1,
      anon_sym_LBRACK,
  [4985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_SEMI,
    ACTIONS(651), 1,
      anon_sym_LBRACK,
  [4995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
    STATE(313), 1,
      sym_full_ident,
  [5015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    ACTIONS(653), 1,
      anon_sym_LBRACE,
  [5025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
    STATE(227), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_SEMI,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
  [5045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_DQUOTEproto3_DQUOTE,
      anon_sym_DQUOTEproto2_DQUOTE,
  [5053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 2,
      anon_sym_GT,
      sym_identifier,
  [5061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(666), 1,
      anon_sym_LBRACK,
  [5071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
    STATE(270), 1,
      sym_full_ident,
  [5081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_enum_body,
  [5091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
  [5109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_message_body,
  [5119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_enum_body,
  [5129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_message_body,
  [5139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_message_body,
  [5149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_message_body,
  [5159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
    STATE(237), 1,
      sym_enum_name,
  [5169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(238), 1,
      sym_message_name,
  [5179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
    STATE(239), 1,
      sym_full_ident,
  [5189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
    STATE(240), 1,
      sym_full_ident,
  [5207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_identifier,
    STATE(299), 1,
      sym_service_name,
  [5217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
  [5227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SEMI,
  [5234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
  [5241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
  [5248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_identifier,
  [5255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [5262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_identifier,
  [5269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_EQ,
  [5276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
  [5283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_EQ,
  [5290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [5297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [5304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
  [5311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_returns,
  [5318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACK,
  [5325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_SEMI,
  [5332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SEMI,
  [5339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
  [5346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
  [5353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SEMI,
  [5360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_LT,
  [5367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_SEMI,
  [5374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_EQ,
  [5381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RBRACK,
  [5388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
  [5395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
  [5402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SEMI,
  [5409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_identifier,
  [5416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_EQ,
  [5423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [5430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      ts_builtin_sym_end,
  [5437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_reserved_identifier,
  [5444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_identifier,
  [5451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
  [5458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_EQ,
  [5465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
  [5472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_EQ,
  [5479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
  [5486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACK,
  [5493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_LPAREN,
  [5500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_identifier,
  [5507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_EQ,
  [5514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_EQ,
  [5521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
  [5528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_EQ,
  [5535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_identifier,
  [5542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_EQ,
  [5549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
  [5556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
  [5563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
  [5570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_SEMI,
  [5577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_DOT,
  [5584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
  [5591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_SEMI,
  [5598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [5605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_SEMI,
  [5612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_SEMI,
  [5619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
  [5626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [5633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_SEMI,
  [5640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SEMI,
  [5647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [5654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RBRACK,
  [5661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_EQ,
  [5668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_EQ,
  [5675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_EQ,
  [5682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
  [5689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_GT,
  [5696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_identifier,
  [5703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_returns,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 344,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 468,
  [SMALL_STATE(9)] = 506,
  [SMALL_STATE(10)] = 544,
  [SMALL_STATE(11)] = 582,
  [SMALL_STATE(12)] = 620,
  [SMALL_STATE(13)] = 658,
  [SMALL_STATE(14)] = 696,
  [SMALL_STATE(15)] = 734,
  [SMALL_STATE(16)] = 772,
  [SMALL_STATE(17)] = 810,
  [SMALL_STATE(18)] = 848,
  [SMALL_STATE(19)] = 886,
  [SMALL_STATE(20)] = 924,
  [SMALL_STATE(21)] = 962,
  [SMALL_STATE(22)] = 1000,
  [SMALL_STATE(23)] = 1038,
  [SMALL_STATE(24)] = 1076,
  [SMALL_STATE(25)] = 1114,
  [SMALL_STATE(26)] = 1152,
  [SMALL_STATE(27)] = 1190,
  [SMALL_STATE(28)] = 1228,
  [SMALL_STATE(29)] = 1279,
  [SMALL_STATE(30)] = 1330,
  [SMALL_STATE(31)] = 1381,
  [SMALL_STATE(32)] = 1410,
  [SMALL_STATE(33)] = 1439,
  [SMALL_STATE(34)] = 1492,
  [SMALL_STATE(35)] = 1523,
  [SMALL_STATE(36)] = 1562,
  [SMALL_STATE(37)] = 1615,
  [SMALL_STATE(38)] = 1651,
  [SMALL_STATE(39)] = 1701,
  [SMALL_STATE(40)] = 1751,
  [SMALL_STATE(41)] = 1801,
  [SMALL_STATE(42)] = 1851,
  [SMALL_STATE(43)] = 1879,
  [SMALL_STATE(44)] = 1929,
  [SMALL_STATE(45)] = 1965,
  [SMALL_STATE(46)] = 2015,
  [SMALL_STATE(47)] = 2043,
  [SMALL_STATE(48)] = 2071,
  [SMALL_STATE(49)] = 2107,
  [SMALL_STATE(50)] = 2154,
  [SMALL_STATE(51)] = 2201,
  [SMALL_STATE(52)] = 2248,
  [SMALL_STATE(53)] = 2295,
  [SMALL_STATE(54)] = 2342,
  [SMALL_STATE(55)] = 2389,
  [SMALL_STATE(56)] = 2436,
  [SMALL_STATE(57)] = 2478,
  [SMALL_STATE(58)] = 2520,
  [SMALL_STATE(59)] = 2562,
  [SMALL_STATE(60)] = 2604,
  [SMALL_STATE(61)] = 2625,
  [SMALL_STATE(62)] = 2642,
  [SMALL_STATE(63)] = 2663,
  [SMALL_STATE(64)] = 2680,
  [SMALL_STATE(65)] = 2706,
  [SMALL_STATE(66)] = 2722,
  [SMALL_STATE(67)] = 2742,
  [SMALL_STATE(68)] = 2768,
  [SMALL_STATE(69)] = 2794,
  [SMALL_STATE(70)] = 2814,
  [SMALL_STATE(71)] = 2840,
  [SMALL_STATE(72)] = 2866,
  [SMALL_STATE(73)] = 2881,
  [SMALL_STATE(74)] = 2896,
  [SMALL_STATE(75)] = 2911,
  [SMALL_STATE(76)] = 2926,
  [SMALL_STATE(77)] = 2941,
  [SMALL_STATE(78)] = 2962,
  [SMALL_STATE(79)] = 2977,
  [SMALL_STATE(80)] = 2992,
  [SMALL_STATE(81)] = 3007,
  [SMALL_STATE(82)] = 3022,
  [SMALL_STATE(83)] = 3037,
  [SMALL_STATE(84)] = 3052,
  [SMALL_STATE(85)] = 3067,
  [SMALL_STATE(86)] = 3082,
  [SMALL_STATE(87)] = 3103,
  [SMALL_STATE(88)] = 3117,
  [SMALL_STATE(89)] = 3141,
  [SMALL_STATE(90)] = 3163,
  [SMALL_STATE(91)] = 3185,
  [SMALL_STATE(92)] = 3199,
  [SMALL_STATE(93)] = 3221,
  [SMALL_STATE(94)] = 3245,
  [SMALL_STATE(95)] = 3263,
  [SMALL_STATE(96)] = 3275,
  [SMALL_STATE(97)] = 3295,
  [SMALL_STATE(98)] = 3313,
  [SMALL_STATE(99)] = 3331,
  [SMALL_STATE(100)] = 3349,
  [SMALL_STATE(101)] = 3367,
  [SMALL_STATE(102)] = 3385,
  [SMALL_STATE(103)] = 3403,
  [SMALL_STATE(104)] = 3415,
  [SMALL_STATE(105)] = 3427,
  [SMALL_STATE(106)] = 3439,
  [SMALL_STATE(107)] = 3459,
  [SMALL_STATE(108)] = 3471,
  [SMALL_STATE(109)] = 3488,
  [SMALL_STATE(110)] = 3501,
  [SMALL_STATE(111)] = 3520,
  [SMALL_STATE(112)] = 3533,
  [SMALL_STATE(113)] = 3550,
  [SMALL_STATE(114)] = 3567,
  [SMALL_STATE(115)] = 3586,
  [SMALL_STATE(116)] = 3603,
  [SMALL_STATE(117)] = 3616,
  [SMALL_STATE(118)] = 3629,
  [SMALL_STATE(119)] = 3648,
  [SMALL_STATE(120)] = 3661,
  [SMALL_STATE(121)] = 3680,
  [SMALL_STATE(122)] = 3691,
  [SMALL_STATE(123)] = 3708,
  [SMALL_STATE(124)] = 3721,
  [SMALL_STATE(125)] = 3740,
  [SMALL_STATE(126)] = 3757,
  [SMALL_STATE(127)] = 3770,
  [SMALL_STATE(128)] = 3787,
  [SMALL_STATE(129)] = 3804,
  [SMALL_STATE(130)] = 3817,
  [SMALL_STATE(131)] = 3828,
  [SMALL_STATE(132)] = 3841,
  [SMALL_STATE(133)] = 3860,
  [SMALL_STATE(134)] = 3877,
  [SMALL_STATE(135)] = 3890,
  [SMALL_STATE(136)] = 3907,
  [SMALL_STATE(137)] = 3920,
  [SMALL_STATE(138)] = 3933,
  [SMALL_STATE(139)] = 3952,
  [SMALL_STATE(140)] = 3965,
  [SMALL_STATE(141)] = 3978,
  [SMALL_STATE(142)] = 3997,
  [SMALL_STATE(143)] = 4010,
  [SMALL_STATE(144)] = 4024,
  [SMALL_STATE(145)] = 4036,
  [SMALL_STATE(146)] = 4052,
  [SMALL_STATE(147)] = 4066,
  [SMALL_STATE(148)] = 4082,
  [SMALL_STATE(149)] = 4096,
  [SMALL_STATE(150)] = 4108,
  [SMALL_STATE(151)] = 4124,
  [SMALL_STATE(152)] = 4140,
  [SMALL_STATE(153)] = 4156,
  [SMALL_STATE(154)] = 4172,
  [SMALL_STATE(155)] = 4188,
  [SMALL_STATE(156)] = 4202,
  [SMALL_STATE(157)] = 4214,
  [SMALL_STATE(158)] = 4230,
  [SMALL_STATE(159)] = 4246,
  [SMALL_STATE(160)] = 4256,
  [SMALL_STATE(161)] = 4266,
  [SMALL_STATE(162)] = 4276,
  [SMALL_STATE(163)] = 4286,
  [SMALL_STATE(164)] = 4300,
  [SMALL_STATE(165)] = 4310,
  [SMALL_STATE(166)] = 4324,
  [SMALL_STATE(167)] = 4340,
  [SMALL_STATE(168)] = 4356,
  [SMALL_STATE(169)] = 4370,
  [SMALL_STATE(170)] = 4383,
  [SMALL_STATE(171)] = 4396,
  [SMALL_STATE(172)] = 4409,
  [SMALL_STATE(173)] = 4422,
  [SMALL_STATE(174)] = 4435,
  [SMALL_STATE(175)] = 4448,
  [SMALL_STATE(176)] = 4459,
  [SMALL_STATE(177)] = 4472,
  [SMALL_STATE(178)] = 4485,
  [SMALL_STATE(179)] = 4498,
  [SMALL_STATE(180)] = 4507,
  [SMALL_STATE(181)] = 4520,
  [SMALL_STATE(182)] = 4533,
  [SMALL_STATE(183)] = 4546,
  [SMALL_STATE(184)] = 4555,
  [SMALL_STATE(185)] = 4568,
  [SMALL_STATE(186)] = 4581,
  [SMALL_STATE(187)] = 4590,
  [SMALL_STATE(188)] = 4599,
  [SMALL_STATE(189)] = 4608,
  [SMALL_STATE(190)] = 4621,
  [SMALL_STATE(191)] = 4634,
  [SMALL_STATE(192)] = 4647,
  [SMALL_STATE(193)] = 4660,
  [SMALL_STATE(194)] = 4673,
  [SMALL_STATE(195)] = 4686,
  [SMALL_STATE(196)] = 4699,
  [SMALL_STATE(197)] = 4708,
  [SMALL_STATE(198)] = 4721,
  [SMALL_STATE(199)] = 4734,
  [SMALL_STATE(200)] = 4747,
  [SMALL_STATE(201)] = 4760,
  [SMALL_STATE(202)] = 4769,
  [SMALL_STATE(203)] = 4782,
  [SMALL_STATE(204)] = 4795,
  [SMALL_STATE(205)] = 4808,
  [SMALL_STATE(206)] = 4821,
  [SMALL_STATE(207)] = 4834,
  [SMALL_STATE(208)] = 4847,
  [SMALL_STATE(209)] = 4855,
  [SMALL_STATE(210)] = 4863,
  [SMALL_STATE(211)] = 4871,
  [SMALL_STATE(212)] = 4881,
  [SMALL_STATE(213)] = 4891,
  [SMALL_STATE(214)] = 4901,
  [SMALL_STATE(215)] = 4911,
  [SMALL_STATE(216)] = 4921,
  [SMALL_STATE(217)] = 4931,
  [SMALL_STATE(218)] = 4939,
  [SMALL_STATE(219)] = 4949,
  [SMALL_STATE(220)] = 4957,
  [SMALL_STATE(221)] = 4965,
  [SMALL_STATE(222)] = 4975,
  [SMALL_STATE(223)] = 4985,
  [SMALL_STATE(224)] = 4995,
  [SMALL_STATE(225)] = 5005,
  [SMALL_STATE(226)] = 5015,
  [SMALL_STATE(227)] = 5025,
  [SMALL_STATE(228)] = 5035,
  [SMALL_STATE(229)] = 5045,
  [SMALL_STATE(230)] = 5053,
  [SMALL_STATE(231)] = 5061,
  [SMALL_STATE(232)] = 5071,
  [SMALL_STATE(233)] = 5081,
  [SMALL_STATE(234)] = 5091,
  [SMALL_STATE(235)] = 5099,
  [SMALL_STATE(236)] = 5109,
  [SMALL_STATE(237)] = 5119,
  [SMALL_STATE(238)] = 5129,
  [SMALL_STATE(239)] = 5139,
  [SMALL_STATE(240)] = 5149,
  [SMALL_STATE(241)] = 5159,
  [SMALL_STATE(242)] = 5169,
  [SMALL_STATE(243)] = 5179,
  [SMALL_STATE(244)] = 5189,
  [SMALL_STATE(245)] = 5197,
  [SMALL_STATE(246)] = 5207,
  [SMALL_STATE(247)] = 5217,
  [SMALL_STATE(248)] = 5227,
  [SMALL_STATE(249)] = 5234,
  [SMALL_STATE(250)] = 5241,
  [SMALL_STATE(251)] = 5248,
  [SMALL_STATE(252)] = 5255,
  [SMALL_STATE(253)] = 5262,
  [SMALL_STATE(254)] = 5269,
  [SMALL_STATE(255)] = 5276,
  [SMALL_STATE(256)] = 5283,
  [SMALL_STATE(257)] = 5290,
  [SMALL_STATE(258)] = 5297,
  [SMALL_STATE(259)] = 5304,
  [SMALL_STATE(260)] = 5311,
  [SMALL_STATE(261)] = 5318,
  [SMALL_STATE(262)] = 5325,
  [SMALL_STATE(263)] = 5332,
  [SMALL_STATE(264)] = 5339,
  [SMALL_STATE(265)] = 5346,
  [SMALL_STATE(266)] = 5353,
  [SMALL_STATE(267)] = 5360,
  [SMALL_STATE(268)] = 5367,
  [SMALL_STATE(269)] = 5374,
  [SMALL_STATE(270)] = 5381,
  [SMALL_STATE(271)] = 5388,
  [SMALL_STATE(272)] = 5395,
  [SMALL_STATE(273)] = 5402,
  [SMALL_STATE(274)] = 5409,
  [SMALL_STATE(275)] = 5416,
  [SMALL_STATE(276)] = 5423,
  [SMALL_STATE(277)] = 5430,
  [SMALL_STATE(278)] = 5437,
  [SMALL_STATE(279)] = 5444,
  [SMALL_STATE(280)] = 5451,
  [SMALL_STATE(281)] = 5458,
  [SMALL_STATE(282)] = 5465,
  [SMALL_STATE(283)] = 5472,
  [SMALL_STATE(284)] = 5479,
  [SMALL_STATE(285)] = 5486,
  [SMALL_STATE(286)] = 5493,
  [SMALL_STATE(287)] = 5500,
  [SMALL_STATE(288)] = 5507,
  [SMALL_STATE(289)] = 5514,
  [SMALL_STATE(290)] = 5521,
  [SMALL_STATE(291)] = 5528,
  [SMALL_STATE(292)] = 5535,
  [SMALL_STATE(293)] = 5542,
  [SMALL_STATE(294)] = 5549,
  [SMALL_STATE(295)] = 5556,
  [SMALL_STATE(296)] = 5563,
  [SMALL_STATE(297)] = 5570,
  [SMALL_STATE(298)] = 5577,
  [SMALL_STATE(299)] = 5584,
  [SMALL_STATE(300)] = 5591,
  [SMALL_STATE(301)] = 5598,
  [SMALL_STATE(302)] = 5605,
  [SMALL_STATE(303)] = 5612,
  [SMALL_STATE(304)] = 5619,
  [SMALL_STATE(305)] = 5626,
  [SMALL_STATE(306)] = 5633,
  [SMALL_STATE(307)] = 5640,
  [SMALL_STATE(308)] = 5647,
  [SMALL_STATE(309)] = 5654,
  [SMALL_STATE(310)] = 5661,
  [SMALL_STATE(311)] = 5668,
  [SMALL_STATE(312)] = 5675,
  [SMALL_STATE(313)] = 5682,
  [SMALL_STATE(314)] = 5689,
  [SMALL_STATE(315)] = 5696,
  [SMALL_STATE(316)] = 5703,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extensions, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3, 0, 0),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0), SHIFT_REPEAT(143),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0), SHIFT_REPEAT(155),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 8, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 5, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 7, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 6, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 4, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(165),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0), SHIFT_REPEAT(232),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0), SHIFT_REPEAT(36),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2, 0, 0),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_field_names, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reserved_field_names_repeat1, 2, 0, 0),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reserved_field_names_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 9, 0, 0),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_field_names, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [744] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
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

TS_PUBLIC const TSLanguage *tree_sitter_proto(void) {
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
