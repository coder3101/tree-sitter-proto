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
#define STATE_COUNT 321
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_edition = 2,
  anon_sym_EQ = 3,
  anon_sym_syntax = 4,
  anon_sym_DQUOTEproto3_DQUOTE = 5,
  anon_sym_DQUOTEproto2_DQUOTE = 6,
  anon_sym_import = 7,
  anon_sym_weak = 8,
  anon_sym_public = 9,
  anon_sym_package = 10,
  anon_sym_option = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_DOT = 14,
  anon_sym_enum = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_DASH = 18,
  anon_sym_LBRACK = 19,
  anon_sym_COMMA = 20,
  anon_sym_RBRACK = 21,
  anon_sym_message = 22,
  anon_sym_extend = 23,
  anon_sym_optional = 24,
  anon_sym_required = 25,
  anon_sym_repeated = 26,
  anon_sym_oneof = 27,
  anon_sym_map = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_int32 = 31,
  anon_sym_int64 = 32,
  anon_sym_uint32 = 33,
  anon_sym_uint64 = 34,
  anon_sym_sint32 = 35,
  anon_sym_sint64 = 36,
  anon_sym_fixed32 = 37,
  anon_sym_fixed64 = 38,
  anon_sym_sfixed32 = 39,
  anon_sym_sfixed64 = 40,
  anon_sym_bool = 41,
  anon_sym_string = 42,
  anon_sym_double = 43,
  anon_sym_float = 44,
  anon_sym_bytes = 45,
  anon_sym_reserved = 46,
  anon_sym_extensions = 47,
  anon_sym_to = 48,
  anon_sym_max = 49,
  anon_sym_service = 50,
  anon_sym_rpc = 51,
  anon_sym_stream = 52,
  anon_sym_returns = 53,
  anon_sym_PLUS = 54,
  anon_sym_COLON = 55,
  sym_identifier = 56,
  sym_reserved_identifier = 57,
  sym_true = 58,
  sym_false = 59,
  sym_decimal_lit = 60,
  sym_octal_lit = 61,
  sym_hex_lit = 62,
  sym_float_lit = 63,
  anon_sym_DQUOTE = 64,
  aux_sym_string_token1 = 65,
  anon_sym_SQUOTE = 66,
  aux_sym_string_token2 = 67,
  sym_escape_sequence = 68,
  sym_comment = 69,
  sym_source_file = 70,
  sym_empty_statement = 71,
  sym_edition = 72,
  sym_syntax = 73,
  sym_import = 74,
  sym_package = 75,
  sym_option = 76,
  sym__option_name = 77,
  sym_enum = 78,
  sym_enum_name = 79,
  sym_enum_body = 80,
  sym_enum_field = 81,
  sym_enum_value_option = 82,
  sym_message = 83,
  sym_message_body = 84,
  sym_message_name = 85,
  sym_extend = 86,
  sym_field = 87,
  sym_field_options = 88,
  sym_field_option = 89,
  sym_oneof = 90,
  sym_oneof_field = 91,
  sym_map_field = 92,
  sym_key_type = 93,
  sym_type = 94,
  sym_reserved = 95,
  sym_extensions = 96,
  sym_ranges = 97,
  sym_range = 98,
  sym_reserved_field_names = 99,
  sym_message_or_enum_type = 100,
  sym_field_number = 101,
  sym_service = 102,
  sym_service_name = 103,
  sym_rpc = 104,
  sym_rpc_name = 105,
  sym_constant = 106,
  sym_block_lit = 107,
  sym_full_ident = 108,
  sym_bool = 109,
  sym_int_lit = 110,
  sym_string = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym__option_name_repeat1 = 113,
  aux_sym_enum_body_repeat1 = 114,
  aux_sym_enum_field_repeat1 = 115,
  aux_sym_message_body_repeat1 = 116,
  aux_sym_field_options_repeat1 = 117,
  aux_sym_oneof_repeat1 = 118,
  aux_sym_ranges_repeat1 = 119,
  aux_sym_reserved_field_names_repeat1 = 120,
  aux_sym_message_or_enum_type_repeat1 = 121,
  aux_sym_service_repeat1 = 122,
  aux_sym_rpc_repeat1 = 123,
  aux_sym_block_lit_repeat1 = 124,
  aux_sym_block_lit_repeat2 = 125,
  aux_sym_string_repeat1 = 126,
  aux_sym_string_repeat2 = 127,
  aux_sym_string_repeat3 = 128,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_edition] = "edition",
  [anon_sym_EQ] = "=",
  [anon_sym_syntax] = "syntax",
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
  [sym_edition] = "edition",
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
  [anon_sym_edition] = anon_sym_edition,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_syntax] = anon_sym_syntax,
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
  [sym_edition] = sym_edition,
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
  [anon_sym_edition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntax] = {
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
  [sym_edition] = {
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
  field_year = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_path] = "path",
  [field_year] = "year",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_year, 2},
  [2] =
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
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
  [46] = 27,
  [47] = 26,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 52,
  [55] = 52,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 26,
  [62] = 62,
  [63] = 27,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 64,
  [72] = 24,
  [73] = 73,
  [74] = 18,
  [75] = 75,
  [76] = 19,
  [77] = 20,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 23,
  [83] = 21,
  [84] = 84,
  [85] = 22,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 91,
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
  [109] = 26,
  [110] = 110,
  [111] = 25,
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
  [122] = 110,
  [123] = 36,
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
  [140] = 36,
  [141] = 27,
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
  [200] = 176,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 176,
  [208] = 176,
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
  [237] = 237,
  [238] = 217,
  [239] = 234,
  [240] = 240,
  [241] = 240,
  [242] = 242,
  [243] = 243,
  [244] = 211,
  [245] = 212,
  [246] = 225,
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
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 291,
  [305] = 301,
  [306] = 301,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 260,
  [315] = 260,
  [316] = 260,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 301,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(201);
      ADVANCE_MAP(
        '"', 422,
        '\'', 429,
        '(', 216,
        ')', 217,
        '+', 285,
        ',', 226,
        '-', 224,
        '.', 219,
        '/', 10,
        '0', 414,
        ':', 286,
        ';', 202,
        '<', 242,
        '=', 204,
        '>', 243,
        '[', 225,
        '\\', 37,
        ']', 227,
        'b', 133,
        'd', 129,
        'e', 62,
        'f', 38,
        'i', 112,
        'm', 39,
        'n', 40,
        'o', 120,
        'p', 42,
        'r', 66,
        's', 67,
        't', 130,
        'u', 103,
        'w', 76,
        '{', 222,
        '}', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(199);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 422,
        '\'', 429,
        '(', 216,
        ')', 217,
        ',', 226,
        '.', 218,
        '/', 10,
        ';', 202,
        '=', 204,
        '>', 243,
        '[', 225,
        ']', 227,
        '{', 222,
        '}', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 422,
        '\'', 429,
        '+', 285,
        '-', 224,
        '.', 186,
        '/', 10,
        '0', 414,
        ':', 286,
        '[', 225,
        ']', 227,
        'f', 306,
        'i', 360,
        'n', 307,
        't', 379,
        '{', 222,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(422);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(207);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead == '/') ADVANCE(431);
      if (lookahead == '\\') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(440);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(439);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '.', 218,
        '/', 10,
        ';', 202,
        '[', 225,
        'b', 369,
        'd', 365,
        'f', 339,
        'i', 358,
        'o', 376,
        's', 336,
        'u', 345,
        '}', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '.', 218,
        '/', 10,
        ';', 202,
        'b', 369,
        'd', 365,
        'e', 359,
        'f', 339,
        'i', 358,
        'm', 302,
        'o', 357,
        'r', 316,
        's', 336,
        'u', 345,
        '}', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '.', 218,
        '/', 10,
        'b', 369,
        'd', 365,
        'f', 339,
        'i', 358,
        'r', 325,
        's', 336,
        'u', 345,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '.', 218,
        '/', 10,
        'b', 369,
        'd', 365,
        'f', 339,
        'i', 358,
        's', 336,
        'u', 345,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 's') ADVANCE(395);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead == '}') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(244);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(252);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(248);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(256);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(260);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
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
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(246);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(254);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(250);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(258);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(262);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(419);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(238);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(266);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 'x') ADVANCE(279);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'q') ADVANCE(176);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 179:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 180:
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 181:
      if (lookahead == 'x') ADVANCE(279);
      END_STATE();
    case 182:
      if (lookahead == 'x') ADVANCE(205);
      END_STATE();
    case 183:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 184:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 185:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 197:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 198:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 199:
      if (eof) ADVANCE(201);
      ADVANCE_MAP(
        '"', 422,
        '\'', 429,
        '(', 216,
        ')', 217,
        '+', 285,
        ',', 226,
        '-', 224,
        '.', 219,
        '/', 10,
        '0', 414,
        ':', 286,
        ';', 202,
        '<', 242,
        '=', 204,
        '>', 243,
        '[', 225,
        ']', 227,
        'b', 133,
        'd', 129,
        'e', 62,
        'f', 38,
        'i', 112,
        'm', 39,
        'n', 40,
        'o', 120,
        'p', 42,
        'r', 66,
        's', 67,
        't', 130,
        'u', 103,
        'w', 76,
        '{', 222,
        '}', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(199);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 200:
      if (eof) ADVANCE(201);
      ADVANCE_MAP(
        '"', 145,
        '-', 224,
        '.', 218,
        '/', 10,
        '0', 416,
        ';', 202,
        '=', 204,
        'e', 63,
        'i', 111,
        'm', 47,
        'o', 147,
        'p', 41,
        'r', 143,
        's', 68,
        '}', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_edition);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto2_DQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_required);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_extensions);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_extensions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(287);
      if (lookahead == '6') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(288);
      if (lookahead == '6') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(289);
      if (lookahead == '6') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(290);
      if (lookahead == '6') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(291);
      if (lookahead == '6') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == 'x') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 'y') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == 'q') ADVANCE(400);
      if (lookahead == 's') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_reserved_identifier);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_reserved_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(189);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(426);
      if (lookahead == '/') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(424);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '/') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(432);
      if (lookahead == '/') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(440);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 200},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 200},
  [57] = {.lex_state = 200},
  [58] = {.lex_state = 200},
  [59] = {.lex_state = 200},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 200},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 200},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 200},
  [73] = {.lex_state = 200},
  [74] = {.lex_state = 200},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 200},
  [77] = {.lex_state = 200},
  [78] = {.lex_state = 200},
  [79] = {.lex_state = 200},
  [80] = {.lex_state = 200},
  [81] = {.lex_state = 200},
  [82] = {.lex_state = 200},
  [83] = {.lex_state = 200},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 200},
  [86] = {.lex_state = 200},
  [87] = {.lex_state = 200},
  [88] = {.lex_state = 200},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 200},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 200},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 200},
  [97] = {.lex_state = 200},
  [98] = {.lex_state = 200},
  [99] = {.lex_state = 200},
  [100] = {.lex_state = 200},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 200},
  [104] = {.lex_state = 200},
  [105] = {.lex_state = 200},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 200},
  [113] = {.lex_state = 200},
  [114] = {.lex_state = 200},
  [115] = {.lex_state = 18},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 200},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 200},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 200},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 18},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 200},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 20},
  [142] = {.lex_state = 200},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 200},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 200},
  [161] = {.lex_state = 200},
  [162] = {.lex_state = 200},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 200},
  [165] = {.lex_state = 200},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 200},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 200},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 200},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 200},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 200},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
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
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 200},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_edition] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
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
    [sym_source_file] = STATE(289),
    [sym_empty_statement] = STATE(58),
    [sym_edition] = STATE(59),
    [sym_syntax] = STATE(59),
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
    [anon_sym_edition] = ACTIONS(9),
    [anon_sym_syntax] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_package] = ACTIONS(15),
    [anon_sym_option] = ACTIONS(17),
    [anon_sym_enum] = ACTIONS(19),
    [anon_sym_message] = ACTIONS(21),
    [anon_sym_extend] = ACTIONS(23),
    [anon_sym_service] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_message,
    ACTIONS(39), 1,
      anon_sym_extend,
    ACTIONS(43), 1,
      anon_sym_repeated,
    ACTIONS(45), 1,
      anon_sym_oneof,
    ACTIONS(47), 1,
      anon_sym_map,
    ACTIONS(51), 1,
      anon_sym_reserved,
    ACTIONS(53), 1,
      anon_sym_extensions,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(273), 1,
      sym_type,
    ACTIONS(41), 2,
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
    ACTIONS(49), 15,
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
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(37), 1,
      anon_sym_message,
    ACTIONS(39), 1,
      anon_sym_extend,
    ACTIONS(43), 1,
      anon_sym_repeated,
    ACTIONS(45), 1,
      anon_sym_oneof,
    ACTIONS(47), 1,
      anon_sym_map,
    ACTIONS(51), 1,
      anon_sym_reserved,
    ACTIONS(53), 1,
      anon_sym_extensions,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(273), 1,
      sym_type,
    ACTIONS(41), 2,
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
    ACTIONS(49), 15,
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
    ACTIONS(59), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_option,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_enum,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_message,
    ACTIONS(76), 1,
      anon_sym_extend,
    ACTIONS(82), 1,
      anon_sym_repeated,
    ACTIONS(85), 1,
      anon_sym_oneof,
    ACTIONS(88), 1,
      anon_sym_map,
    ACTIONS(94), 1,
      anon_sym_reserved,
    ACTIONS(97), 1,
      anon_sym_extensions,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(273), 1,
      sym_type,
    ACTIONS(79), 2,
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
    ACTIONS(91), 15,
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
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(37), 1,
      anon_sym_message,
    ACTIONS(39), 1,
      anon_sym_extend,
    ACTIONS(43), 1,
      anon_sym_repeated,
    ACTIONS(45), 1,
      anon_sym_oneof,
    ACTIONS(47), 1,
      anon_sym_map,
    ACTIONS(51), 1,
      anon_sym_reserved,
    ACTIONS(53), 1,
      anon_sym_extensions,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(273), 1,
      sym_type,
    ACTIONS(41), 2,
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
    ACTIONS(49), 15,
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
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(37), 1,
      anon_sym_message,
    ACTIONS(39), 1,
      anon_sym_extend,
    ACTIONS(43), 1,
      anon_sym_repeated,
    ACTIONS(45), 1,
      anon_sym_oneof,
    ACTIONS(47), 1,
      anon_sym_map,
    ACTIONS(51), 1,
      anon_sym_reserved,
    ACTIONS(53), 1,
      anon_sym_extensions,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(273), 1,
      sym_type,
    ACTIONS(41), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(2), 11,
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
    ACTIONS(49), 15,
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
    ACTIONS(107), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(109), 27,
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
    ACTIONS(111), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(113), 27,
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
    ACTIONS(115), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(117), 27,
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
    ACTIONS(119), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(121), 27,
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
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(125), 27,
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
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(129), 27,
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
    ACTIONS(131), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(133), 27,
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
    ACTIONS(135), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(137), 27,
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
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(141), 27,
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
    ACTIONS(143), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(145), 27,
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
    ACTIONS(147), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(149), 27,
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
    ACTIONS(151), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(153), 27,
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
    ACTIONS(155), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(157), 27,
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
    ACTIONS(159), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(161), 27,
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
    ACTIONS(163), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(165), 27,
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
    ACTIONS(167), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(169), 27,
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
    ACTIONS(171), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(173), 27,
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
    ACTIONS(175), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(177), 27,
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
    ACTIONS(179), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(181), 27,
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
    ACTIONS(183), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(185), 27,
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
    ACTIONS(187), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(189), 27,
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
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      anon_sym_option,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(300), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(202), 15,
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
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      anon_sym_option,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(300), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(49), 15,
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
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      anon_sym_option,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(300), 1,
      sym_type,
    STATE(29), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(49), 15,
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
  [1381] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym_hex_lit,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(119), 1,
      sym_constant,
    ACTIONS(218), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(228), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1434] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_repeated,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(311), 1,
      sym_type,
    ACTIONS(49), 15,
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
  [1473] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym_hex_lit,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(143), 1,
      sym_constant,
    ACTIONS(218), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(228), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
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
  [1555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(250), 17,
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
  [1586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(256), 17,
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
  [1615] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(311), 1,
      sym_type,
    ACTIONS(49), 15,
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
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym_hex_lit,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(116), 1,
      sym_constant,
    ACTIONS(218), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(228), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1701] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(309), 1,
      sym_type,
    ACTIONS(49), 15,
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
  [1737] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(218), 1,
      sym_message_or_enum_type,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(257), 1,
      sym_type,
    ACTIONS(49), 15,
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
  [1773] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 1,
      sym_hex_lit,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(180), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1823] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(187), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1873] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(197), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1923] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(178), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1973] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym_hex_lit,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(125), 1,
      sym_constant,
    ACTIONS(218), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(228), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(189), 17,
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
  [2051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(185), 17,
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
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(278), 17,
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
  [2107] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(249), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2154] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(220), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2201] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(230), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2248] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(320), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2295] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(301), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2342] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(305), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2389] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_float_lit,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_hex_lit,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(306), 1,
      sym_constant,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(108), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2436] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      anon_sym_import,
    ACTIONS(288), 1,
      anon_sym_package,
    ACTIONS(291), 1,
      anon_sym_option,
    ACTIONS(294), 1,
      anon_sym_enum,
    ACTIONS(297), 1,
      anon_sym_message,
    ACTIONS(300), 1,
      anon_sym_extend,
    ACTIONS(303), 1,
      anon_sym_service,
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
  [2478] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_package,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_message,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_service,
    ACTIONS(306), 1,
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
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_package,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_message,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_service,
    ACTIONS(308), 1,
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
  [2562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_package,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_message,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_service,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    STATE(57), 9,
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
    STATE(280), 1,
      sym_key_type,
    ACTIONS(310), 12,
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
    ACTIONS(183), 11,
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
    ACTIONS(314), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(312), 9,
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
    ACTIONS(187), 11,
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
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_option,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      anon_sym_reserved,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(69), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(327), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(331), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 10,
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
  [2762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_option,
    ACTIONS(323), 1,
      anon_sym_reserved,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(71), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2788] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      anon_sym_option,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_reserved,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(69), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2814] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_option,
    ACTIONS(323), 1,
      anon_sym_reserved,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(64), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2840] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_option,
    ACTIONS(323), 1,
      anon_sym_reserved,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(69), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 9,
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
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(355), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2962] = 2,
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
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 9,
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
    ACTIONS(367), 9,
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
    ACTIONS(369), 9,
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
    ACTIONS(171), 9,
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
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(371), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      anon_sym_rpc,
    STATE(94), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3154] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_option,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    ACTIONS(391), 1,
      anon_sym_rpc,
    STATE(90), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3176] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    ACTIONS(394), 1,
      sym_reserved_identifier,
    STATE(203), 1,
      sym_range,
    STATE(204), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(291), 2,
      sym_ranges,
      sym_reserved_field_names,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    ACTIONS(394), 1,
      sym_reserved_identifier,
    STATE(203), 1,
      sym_range,
    STATE(204), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(304), 2,
      sym_ranges,
      sym_reserved_field_names,
  [3238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(379), 1,
      anon_sym_rpc,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(90), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(105), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    STATE(203), 1,
      sym_range,
    STATE(204), 1,
      sym_int_lit,
    STATE(312), 1,
      sym_ranges,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(100), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3328] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(104), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(105), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3388] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(96), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3406] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_option,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(105), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(415), 1,
      anon_sym_option,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(105), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3442] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(281), 1,
      sym_string,
    ACTIONS(420), 2,
      anon_sym_weak,
      anon_sym_public,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(185), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_hex_lit,
    ACTIONS(426), 1,
      sym_float_lit,
    STATE(95), 1,
      sym_int_lit,
    ACTIONS(228), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(181), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    STATE(204), 1,
      sym_int_lit,
    STATE(237), 1,
      sym_range,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    ACTIONS(428), 1,
      anon_sym_max,
    STATE(213), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    STATE(34), 1,
      sym_int_lit,
    STATE(242), 1,
      sym_field_number,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(430), 1,
      anon_sym_stream,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(267), 1,
      sym_message_or_enum_type,
  [3599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(434), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(438), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    STATE(34), 1,
      sym_int_lit,
    STATE(248), 1,
      sym_field_number,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(442), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(446), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    STATE(34), 1,
      sym_int_lit,
    STATE(236), 1,
      sym_field_number,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3685] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_hex_lit,
    ACTIONS(426), 1,
      sym_float_lit,
    STATE(95), 1,
      sym_int_lit,
    ACTIONS(264), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [3713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(174), 1,
      sym_field_option,
    STATE(303), 1,
      sym__option_name,
    STATE(308), 1,
      sym_field_options,
  [3732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(454), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3745] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(174), 1,
      sym_field_option,
    STATE(272), 1,
      sym_field_options,
    STATE(303), 1,
      sym__option_name,
  [3764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_octal_lit,
    STATE(34), 1,
      sym_int_lit,
    STATE(35), 1,
      sym_field_number,
    ACTIONS(456), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(462), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(466), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3807] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(174), 1,
      sym_field_option,
    STATE(290), 1,
      sym_field_options,
    STATE(303), 1,
      sym__option_name,
  [3826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_stream,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(307), 1,
      sym_message_or_enum_type,
  [3845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(472), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(476), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(174), 1,
      sym_field_option,
    STATE(251), 1,
      sym_field_options,
    STATE(303), 1,
      sym__option_name,
  [3890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    STATE(34), 1,
      sym_int_lit,
    STATE(247), 1,
      sym_field_number,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_stream,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(254), 1,
      sym_message_or_enum_type,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(482), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(486), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3952] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(174), 1,
      sym_field_option,
    STATE(265), 1,
      sym_field_options,
    STATE(303), 1,
      sym__option_name,
  [3971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(189), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    ACTIONS(488), 1,
      anon_sym_DASH,
    STATE(222), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(492), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(494), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4037] = 4,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(503), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_string_repeat1,
    ACTIONS(500), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4051] = 4,
    ACTIONS(503), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SQUOTE,
    STATE(146), 1,
      aux_sym_string_repeat2,
    ACTIONS(507), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(263), 1,
      sym_message_or_enum_type,
  [4081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(168), 1,
      aux_sym_block_lit_repeat2,
  [4097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(269), 1,
      sym_string,
  [4113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(206), 1,
      sym_enum_value_option,
    STATE(296), 1,
      sym__option_name,
  [4129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_octal_lit,
    STATE(228), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [4143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(232), 1,
      sym_enum_value_option,
    STATE(296), 1,
      sym__option_name,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(518), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat3,
    STATE(277), 1,
      sym_string,
  [4187] = 4,
    ACTIONS(503), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym_string_repeat1,
    ACTIONS(522), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(231), 1,
      sym_field_option,
    STATE(303), 1,
      sym__option_name,
  [4217] = 4,
    ACTIONS(503), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SQUOTE,
    STATE(167), 1,
      aux_sym_string_repeat2,
    ACTIONS(524), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(254), 1,
      sym_message_or_enum_type,
  [4247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(221), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(261), 1,
      sym_message_or_enum_type,
  [4263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(532), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4325] = 4,
    ACTIONS(503), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_string_repeat1,
    ACTIONS(540), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4339] = 4,
    ACTIONS(503), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_SQUOTE,
    STATE(146), 1,
      aux_sym_string_repeat2,
    ACTIONS(542), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      aux_sym_block_lit_repeat2,
  [4369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(185), 1,
      sym_enum_value_option,
    STATE(296), 1,
      sym__option_name,
  [4385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(546), 1,
      anon_sym_LBRACK,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(170), 1,
      aux_sym_block_lit_repeat2,
  [4401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      anon_sym_EQ,
    STATE(62), 1,
      aux_sym__option_name_repeat1,
  [4414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_enum_field_repeat1,
  [4427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(558), 1,
      anon_sym_EQ,
    STATE(171), 1,
      aux_sym__option_name_repeat1,
  [4440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_field_options_repeat1,
  [4453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(260), 1,
      sym__option_name,
  [4475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      aux_sym_block_lit_repeat1,
  [4488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_block_lit_repeat1,
  [4501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_enum_field_repeat1,
  [4514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_block_lit_repeat1,
  [4527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_enum_field_repeat1,
  [4540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(575), 1,
      anon_sym_EQ,
    STATE(198), 1,
      aux_sym__option_name_repeat1,
  [4553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_reserved_field_names_repeat1,
  [4566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_field_options_repeat1,
  [4579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_enum_field_repeat1,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_block_lit_repeat1,
  [4614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      aux_sym_block_lit_repeat1,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_field_options_repeat1,
  [4649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_reserved_field_names_repeat1,
  [4662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_ranges_repeat1,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_ranges_repeat1,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_block_lit_repeat1,
  [4728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(608), 1,
      anon_sym_EQ,
    STATE(62), 1,
      aux_sym__option_name_repeat1,
  [4741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(316), 1,
      sym__option_name,
  [4763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      aux_sym_block_lit_repeat1,
  [4776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      aux_sym_reserved_field_names_repeat1,
  [4789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      aux_sym_ranges_repeat1,
  [4802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_to,
    ACTIONS(619), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_block_lit_repeat1,
  [4826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_enum_field_repeat1,
  [4839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(314), 1,
      sym__option_name,
  [4852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(315), 1,
      sym__option_name,
  [4865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_block_lit_repeat1,
  [4878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(283), 1,
      sym_full_ident,
  [4888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(217), 1,
      sym_enum_name,
  [4898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(234), 1,
      sym_message_name,
  [4908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
  [4926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(313), 1,
      sym_full_ident,
  [4936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
  [4946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_enum_body,
  [4956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_GT,
      sym_identifier,
  [4964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_DQUOTEproto3_DQUOTE,
      anon_sym_DQUOTEproto2_DQUOTE,
  [4972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SEMI,
    ACTIONS(647), 1,
      anon_sym_LBRACK,
  [5000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(295), 1,
      sym_rpc_name,
  [5018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(241), 1,
      sym_full_ident,
  [5028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(287), 1,
      sym_full_ident,
  [5038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    ACTIONS(653), 1,
      anon_sym_LBRACK,
  [5058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    ACTIONS(657), 1,
      anon_sym_LBRACE,
  [5068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(319), 1,
      sym_service_name,
  [5102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_message_body,
  [5112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
  [5132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_enum_body,
  [5150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_message_body,
  [5160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_message_body,
  [5170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_message_body,
  [5180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(676), 1,
      anon_sym_LBRACK,
  [5190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(238), 1,
      sym_enum_name,
  [5210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(239), 1,
      sym_message_name,
  [5220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(240), 1,
      sym_full_ident,
  [5230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    ACTIONS(682), 1,
      anon_sym_LBRACK,
  [5240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SEMI,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
  [5250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
  [5265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
  [5272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
  [5279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_EQ,
  [5286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [5293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_EQ,
  [5300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
  [5307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_GT,
  [5314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_SEMI,
  [5321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
  [5328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_EQ,
  [5335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [5342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_COMMA,
  [5349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
  [5356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LT,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACK,
  [5370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_returns,
  [5377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LBRACE,
  [5391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_SEMI,
  [5398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SEMI,
  [5405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
  [5412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
  [5419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_identifier,
  [5426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SEMI,
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_EQ,
  [5440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_EQ,
  [5447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
  [5454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LBRACE,
  [5461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
  [5468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
  [5475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SEMI,
  [5482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_LPAREN,
  [5489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACK,
  [5496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DOT,
  [5503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_reserved_identifier,
  [5510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_identifier,
  [5517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [5524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_SEMI,
  [5531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
  [5538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
  [5545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SEMI,
  [5552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_SEMI,
  [5559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SEMI,
  [5566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_EQ,
  [5573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
  [5580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_EQ,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_EQ,
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
  [5601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_EQ,
  [5608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_identifier,
  [5615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [5622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
  [5629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_EQ,
  [5636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SEMI,
  [5643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [5650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_SEMI,
  [5657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [5664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACK,
  [5671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
  [5678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_EQ,
  [5685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_identifier,
  [5692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_SEMI,
  [5699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
  [5706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_EQ,
  [5713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_EQ,
  [5720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_EQ,
  [5727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_returns,
  [5734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_SEMI,
  [5741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
  [5748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_SEMI,
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
  [SMALL_STATE(32)] = 1434,
  [SMALL_STATE(33)] = 1473,
  [SMALL_STATE(34)] = 1526,
  [SMALL_STATE(35)] = 1555,
  [SMALL_STATE(36)] = 1586,
  [SMALL_STATE(37)] = 1615,
  [SMALL_STATE(38)] = 1651,
  [SMALL_STATE(39)] = 1701,
  [SMALL_STATE(40)] = 1737,
  [SMALL_STATE(41)] = 1773,
  [SMALL_STATE(42)] = 1823,
  [SMALL_STATE(43)] = 1873,
  [SMALL_STATE(44)] = 1923,
  [SMALL_STATE(45)] = 1973,
  [SMALL_STATE(46)] = 2023,
  [SMALL_STATE(47)] = 2051,
  [SMALL_STATE(48)] = 2079,
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
  [SMALL_STATE(66)] = 2726,
  [SMALL_STATE(67)] = 2746,
  [SMALL_STATE(68)] = 2762,
  [SMALL_STATE(69)] = 2788,
  [SMALL_STATE(70)] = 2814,
  [SMALL_STATE(71)] = 2840,
  [SMALL_STATE(72)] = 2866,
  [SMALL_STATE(73)] = 2881,
  [SMALL_STATE(74)] = 2896,
  [SMALL_STATE(75)] = 2911,
  [SMALL_STATE(76)] = 2932,
  [SMALL_STATE(77)] = 2947,
  [SMALL_STATE(78)] = 2962,
  [SMALL_STATE(79)] = 2977,
  [SMALL_STATE(80)] = 2992,
  [SMALL_STATE(81)] = 3007,
  [SMALL_STATE(82)] = 3022,
  [SMALL_STATE(83)] = 3037,
  [SMALL_STATE(84)] = 3052,
  [SMALL_STATE(85)] = 3073,
  [SMALL_STATE(86)] = 3088,
  [SMALL_STATE(87)] = 3103,
  [SMALL_STATE(88)] = 3118,
  [SMALL_STATE(89)] = 3140,
  [SMALL_STATE(90)] = 3154,
  [SMALL_STATE(91)] = 3176,
  [SMALL_STATE(92)] = 3200,
  [SMALL_STATE(93)] = 3214,
  [SMALL_STATE(94)] = 3238,
  [SMALL_STATE(95)] = 3260,
  [SMALL_STATE(96)] = 3272,
  [SMALL_STATE(97)] = 3290,
  [SMALL_STATE(98)] = 3310,
  [SMALL_STATE(99)] = 3328,
  [SMALL_STATE(100)] = 3346,
  [SMALL_STATE(101)] = 3364,
  [SMALL_STATE(102)] = 3376,
  [SMALL_STATE(103)] = 3388,
  [SMALL_STATE(104)] = 3406,
  [SMALL_STATE(105)] = 3424,
  [SMALL_STATE(106)] = 3442,
  [SMALL_STATE(107)] = 3462,
  [SMALL_STATE(108)] = 3474,
  [SMALL_STATE(109)] = 3486,
  [SMALL_STATE(110)] = 3499,
  [SMALL_STATE(111)] = 3516,
  [SMALL_STATE(112)] = 3529,
  [SMALL_STATE(113)] = 3546,
  [SMALL_STATE(114)] = 3563,
  [SMALL_STATE(115)] = 3580,
  [SMALL_STATE(116)] = 3599,
  [SMALL_STATE(117)] = 3612,
  [SMALL_STATE(118)] = 3625,
  [SMALL_STATE(119)] = 3642,
  [SMALL_STATE(120)] = 3655,
  [SMALL_STATE(121)] = 3668,
  [SMALL_STATE(122)] = 3685,
  [SMALL_STATE(123)] = 3702,
  [SMALL_STATE(124)] = 3713,
  [SMALL_STATE(125)] = 3732,
  [SMALL_STATE(126)] = 3745,
  [SMALL_STATE(127)] = 3764,
  [SMALL_STATE(128)] = 3781,
  [SMALL_STATE(129)] = 3794,
  [SMALL_STATE(130)] = 3807,
  [SMALL_STATE(131)] = 3826,
  [SMALL_STATE(132)] = 3845,
  [SMALL_STATE(133)] = 3858,
  [SMALL_STATE(134)] = 3871,
  [SMALL_STATE(135)] = 3890,
  [SMALL_STATE(136)] = 3907,
  [SMALL_STATE(137)] = 3926,
  [SMALL_STATE(138)] = 3939,
  [SMALL_STATE(139)] = 3952,
  [SMALL_STATE(140)] = 3971,
  [SMALL_STATE(141)] = 3982,
  [SMALL_STATE(142)] = 3995,
  [SMALL_STATE(143)] = 4012,
  [SMALL_STATE(144)] = 4025,
  [SMALL_STATE(145)] = 4037,
  [SMALL_STATE(146)] = 4051,
  [SMALL_STATE(147)] = 4065,
  [SMALL_STATE(148)] = 4081,
  [SMALL_STATE(149)] = 4097,
  [SMALL_STATE(150)] = 4113,
  [SMALL_STATE(151)] = 4129,
  [SMALL_STATE(152)] = 4143,
  [SMALL_STATE(153)] = 4159,
  [SMALL_STATE(154)] = 4171,
  [SMALL_STATE(155)] = 4187,
  [SMALL_STATE(156)] = 4201,
  [SMALL_STATE(157)] = 4217,
  [SMALL_STATE(158)] = 4231,
  [SMALL_STATE(159)] = 4247,
  [SMALL_STATE(160)] = 4263,
  [SMALL_STATE(161)] = 4273,
  [SMALL_STATE(162)] = 4283,
  [SMALL_STATE(163)] = 4293,
  [SMALL_STATE(164)] = 4305,
  [SMALL_STATE(165)] = 4315,
  [SMALL_STATE(166)] = 4325,
  [SMALL_STATE(167)] = 4339,
  [SMALL_STATE(168)] = 4353,
  [SMALL_STATE(169)] = 4369,
  [SMALL_STATE(170)] = 4385,
  [SMALL_STATE(171)] = 4401,
  [SMALL_STATE(172)] = 4414,
  [SMALL_STATE(173)] = 4427,
  [SMALL_STATE(174)] = 4440,
  [SMALL_STATE(175)] = 4453,
  [SMALL_STATE(176)] = 4462,
  [SMALL_STATE(177)] = 4475,
  [SMALL_STATE(178)] = 4488,
  [SMALL_STATE(179)] = 4501,
  [SMALL_STATE(180)] = 4514,
  [SMALL_STATE(181)] = 4527,
  [SMALL_STATE(182)] = 4540,
  [SMALL_STATE(183)] = 4553,
  [SMALL_STATE(184)] = 4566,
  [SMALL_STATE(185)] = 4579,
  [SMALL_STATE(186)] = 4592,
  [SMALL_STATE(187)] = 4601,
  [SMALL_STATE(188)] = 4614,
  [SMALL_STATE(189)] = 4627,
  [SMALL_STATE(190)] = 4636,
  [SMALL_STATE(191)] = 4649,
  [SMALL_STATE(192)] = 4662,
  [SMALL_STATE(193)] = 4671,
  [SMALL_STATE(194)] = 4684,
  [SMALL_STATE(195)] = 4693,
  [SMALL_STATE(196)] = 4706,
  [SMALL_STATE(197)] = 4715,
  [SMALL_STATE(198)] = 4728,
  [SMALL_STATE(199)] = 4741,
  [SMALL_STATE(200)] = 4750,
  [SMALL_STATE(201)] = 4763,
  [SMALL_STATE(202)] = 4776,
  [SMALL_STATE(203)] = 4789,
  [SMALL_STATE(204)] = 4802,
  [SMALL_STATE(205)] = 4813,
  [SMALL_STATE(206)] = 4826,
  [SMALL_STATE(207)] = 4839,
  [SMALL_STATE(208)] = 4852,
  [SMALL_STATE(209)] = 4865,
  [SMALL_STATE(210)] = 4878,
  [SMALL_STATE(211)] = 4888,
  [SMALL_STATE(212)] = 4898,
  [SMALL_STATE(213)] = 4908,
  [SMALL_STATE(214)] = 4916,
  [SMALL_STATE(215)] = 4926,
  [SMALL_STATE(216)] = 4936,
  [SMALL_STATE(217)] = 4946,
  [SMALL_STATE(218)] = 4956,
  [SMALL_STATE(219)] = 4964,
  [SMALL_STATE(220)] = 4972,
  [SMALL_STATE(221)] = 4980,
  [SMALL_STATE(222)] = 4990,
  [SMALL_STATE(223)] = 5000,
  [SMALL_STATE(224)] = 5008,
  [SMALL_STATE(225)] = 5018,
  [SMALL_STATE(226)] = 5028,
  [SMALL_STATE(227)] = 5038,
  [SMALL_STATE(228)] = 5048,
  [SMALL_STATE(229)] = 5058,
  [SMALL_STATE(230)] = 5068,
  [SMALL_STATE(231)] = 5076,
  [SMALL_STATE(232)] = 5084,
  [SMALL_STATE(233)] = 5092,
  [SMALL_STATE(234)] = 5102,
  [SMALL_STATE(235)] = 5112,
  [SMALL_STATE(236)] = 5122,
  [SMALL_STATE(237)] = 5132,
  [SMALL_STATE(238)] = 5140,
  [SMALL_STATE(239)] = 5150,
  [SMALL_STATE(240)] = 5160,
  [SMALL_STATE(241)] = 5170,
  [SMALL_STATE(242)] = 5180,
  [SMALL_STATE(243)] = 5190,
  [SMALL_STATE(244)] = 5200,
  [SMALL_STATE(245)] = 5210,
  [SMALL_STATE(246)] = 5220,
  [SMALL_STATE(247)] = 5230,
  [SMALL_STATE(248)] = 5240,
  [SMALL_STATE(249)] = 5250,
  [SMALL_STATE(250)] = 5258,
  [SMALL_STATE(251)] = 5265,
  [SMALL_STATE(252)] = 5272,
  [SMALL_STATE(253)] = 5279,
  [SMALL_STATE(254)] = 5286,
  [SMALL_STATE(255)] = 5293,
  [SMALL_STATE(256)] = 5300,
  [SMALL_STATE(257)] = 5307,
  [SMALL_STATE(258)] = 5314,
  [SMALL_STATE(259)] = 5321,
  [SMALL_STATE(260)] = 5328,
  [SMALL_STATE(261)] = 5335,
  [SMALL_STATE(262)] = 5342,
  [SMALL_STATE(263)] = 5349,
  [SMALL_STATE(264)] = 5356,
  [SMALL_STATE(265)] = 5363,
  [SMALL_STATE(266)] = 5370,
  [SMALL_STATE(267)] = 5377,
  [SMALL_STATE(268)] = 5384,
  [SMALL_STATE(269)] = 5391,
  [SMALL_STATE(270)] = 5398,
  [SMALL_STATE(271)] = 5405,
  [SMALL_STATE(272)] = 5412,
  [SMALL_STATE(273)] = 5419,
  [SMALL_STATE(274)] = 5426,
  [SMALL_STATE(275)] = 5433,
  [SMALL_STATE(276)] = 5440,
  [SMALL_STATE(277)] = 5447,
  [SMALL_STATE(278)] = 5454,
  [SMALL_STATE(279)] = 5461,
  [SMALL_STATE(280)] = 5468,
  [SMALL_STATE(281)] = 5475,
  [SMALL_STATE(282)] = 5482,
  [SMALL_STATE(283)] = 5489,
  [SMALL_STATE(284)] = 5496,
  [SMALL_STATE(285)] = 5503,
  [SMALL_STATE(286)] = 5510,
  [SMALL_STATE(287)] = 5517,
  [SMALL_STATE(288)] = 5524,
  [SMALL_STATE(289)] = 5531,
  [SMALL_STATE(290)] = 5538,
  [SMALL_STATE(291)] = 5545,
  [SMALL_STATE(292)] = 5552,
  [SMALL_STATE(293)] = 5559,
  [SMALL_STATE(294)] = 5566,
  [SMALL_STATE(295)] = 5573,
  [SMALL_STATE(296)] = 5580,
  [SMALL_STATE(297)] = 5587,
  [SMALL_STATE(298)] = 5594,
  [SMALL_STATE(299)] = 5601,
  [SMALL_STATE(300)] = 5608,
  [SMALL_STATE(301)] = 5615,
  [SMALL_STATE(302)] = 5622,
  [SMALL_STATE(303)] = 5629,
  [SMALL_STATE(304)] = 5636,
  [SMALL_STATE(305)] = 5643,
  [SMALL_STATE(306)] = 5650,
  [SMALL_STATE(307)] = 5657,
  [SMALL_STATE(308)] = 5664,
  [SMALL_STATE(309)] = 5671,
  [SMALL_STATE(310)] = 5678,
  [SMALL_STATE(311)] = 5685,
  [SMALL_STATE(312)] = 5692,
  [SMALL_STATE(313)] = 5699,
  [SMALL_STATE(314)] = 5706,
  [SMALL_STATE(315)] = 5713,
  [SMALL_STATE(316)] = 5720,
  [SMALL_STATE(317)] = 5727,
  [SMALL_STATE(318)] = 5734,
  [SMALL_STATE(319)] = 5741,
  [SMALL_STATE(320)] = 5748,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extensions, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0), SHIFT_REPEAT(155),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0), SHIFT_REPEAT(157),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edition, 4, 0, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 3, 0, 0),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 4, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 5, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 6, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 7, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 8, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(146),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0), SHIFT_REPEAT(210),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_field_names, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reserved_field_names_repeat1, 2, 0, 0),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reserved_field_names_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 9, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4, 0, 0),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_field_names, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [766] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
