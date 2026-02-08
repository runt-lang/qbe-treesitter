#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 255
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 0
#define TOKEN_COUNT 131
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 10

enum {
  sym_comment = 1,
  sym_global_ident = 2,
  sym_temp_ident = 3,
  sym_type_ident = 4,
  sym_label = 5,
  sym_integer = 6,
  sym_float = 7,
  sym_string = 8,
  anon_sym_w = 9,
  anon_sym_l = 10,
  anon_sym_s = 11,
  anon_sym_d = 12,
  anon_sym_b = 13,
  anon_sym_h = 14,
  anon_sym_sb = 15,
  anon_sym_ub = 16,
  anon_sym_sh = 17,
  anon_sym_uh = 18,
  anon_sym_type = 19,
  anon_sym_EQ = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_align = 23,
  anon_sym_COMMA = 24,
  anon_sym_data = 25,
  anon_sym_z = 26,
  anon_sym_function = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_env = 30,
  anon_sym_DOT_DOT_DOT = 31,
  anon_sym_export = 32,
  anon_sym_thread = 33,
  anon_sym_section = 34,
  anon_sym_phi = 35,
  anon_sym_add = 36,
  anon_sym_sub = 37,
  anon_sym_mul = 38,
  anon_sym_div = 39,
  anon_sym_udiv = 40,
  anon_sym_rem = 41,
  anon_sym_urem = 42,
  anon_sym_and = 43,
  anon_sym_or = 44,
  anon_sym_xor = 45,
  anon_sym_shl = 46,
  anon_sym_shr = 47,
  anon_sym_sar = 48,
  anon_sym_neg = 49,
  anon_sym_ceqw = 50,
  anon_sym_cnew = 51,
  anon_sym_csltw = 52,
  anon_sym_cslew = 53,
  anon_sym_csgtw = 54,
  anon_sym_csgew = 55,
  anon_sym_cultw = 56,
  anon_sym_culew = 57,
  anon_sym_cugtw = 58,
  anon_sym_cugew = 59,
  anon_sym_ceql = 60,
  anon_sym_cnel = 61,
  anon_sym_csltl = 62,
  anon_sym_cslel = 63,
  anon_sym_csgtl = 64,
  anon_sym_csgel = 65,
  anon_sym_cultl = 66,
  anon_sym_culel = 67,
  anon_sym_cugtl = 68,
  anon_sym_cugel = 69,
  anon_sym_ceqs = 70,
  anon_sym_cnes = 71,
  anon_sym_clts = 72,
  anon_sym_cles = 73,
  anon_sym_cgts = 74,
  anon_sym_cges = 75,
  anon_sym_cos = 76,
  anon_sym_cuos = 77,
  anon_sym_ceqd = 78,
  anon_sym_cned = 79,
  anon_sym_cltd = 80,
  anon_sym_cled = 81,
  anon_sym_cgtd = 82,
  anon_sym_cged = 83,
  anon_sym_cod = 84,
  anon_sym_cuod = 85,
  anon_sym_extsb = 86,
  anon_sym_extub = 87,
  anon_sym_extsh = 88,
  anon_sym_extuh = 89,
  anon_sym_extsw = 90,
  anon_sym_extuw = 91,
  anon_sym_exts = 92,
  anon_sym_truncd = 93,
  anon_sym_stosi = 94,
  anon_sym_stoui = 95,
  anon_sym_dtosi = 96,
  anon_sym_dtoui = 97,
  anon_sym_swtof = 98,
  anon_sym_uwtof = 99,
  anon_sym_sltof = 100,
  anon_sym_ultof = 101,
  anon_sym_loadw = 102,
  anon_sym_loadl = 103,
  anon_sym_loads = 104,
  anon_sym_loadd = 105,
  anon_sym_loadsw = 106,
  anon_sym_loaduw = 107,
  anon_sym_loadsb = 108,
  anon_sym_loadub = 109,
  anon_sym_loadsh = 110,
  anon_sym_loaduh = 111,
  anon_sym_storew = 112,
  anon_sym_storel = 113,
  anon_sym_stores = 114,
  anon_sym_stored = 115,
  anon_sym_storeb = 116,
  anon_sym_storeh = 117,
  anon_sym_alloc4 = 118,
  anon_sym_alloc8 = 119,
  anon_sym_alloc16 = 120,
  anon_sym_copy = 121,
  anon_sym_cast = 122,
  anon_sym_blit = 123,
  anon_sym_vastart = 124,
  anon_sym_vaarg = 125,
  anon_sym_call = 126,
  anon_sym_jmp = 127,
  anon_sym_jnz = 128,
  anon_sym_ret = 129,
  sym_hlt = 130,
  sym_source_file = 131,
  sym__definition = 132,
  sym_base_type = 133,
  sym_extended_type = 134,
  sym_sub_type = 135,
  sym_abi_type = 136,
  sym_type_definition = 137,
  sym_align_spec = 138,
  sym_type_body = 139,
  sym_type_member = 140,
  sym_data_definition = 141,
  sym_data_item = 142,
  sym__data_value = 143,
  sym_function_definition = 144,
  sym_parameter = 145,
  sym_linkage = 146,
  sym_block = 147,
  sym_phi = 148,
  sym_phi_arg = 149,
  sym_instruction = 150,
  sym_assign_inst = 151,
  sym__operation = 152,
  sym_binary_op = 153,
  sym_binary_opcode = 154,
  sym_unary_op = 155,
  sym_compare_op = 156,
  sym_compare_opcode = 157,
  sym_convert_op = 158,
  sym_convert_opcode = 159,
  sym_load_op = 160,
  sym_load_opcode = 161,
  sym_store_inst = 162,
  sym_store_opcode = 163,
  sym_alloc_op = 164,
  sym_alloc_opcode = 165,
  sym_copy_op = 166,
  sym_cast_op = 167,
  sym_blit_inst = 168,
  sym_vastart_inst = 169,
  sym_vaarg_op = 170,
  sym_call_inst = 171,
  sym_call_expr = 172,
  sym_call_arg = 173,
  sym_jump = 174,
  sym_jmp = 175,
  sym_jnz = 176,
  sym_ret = 177,
  sym__value = 178,
  sym_thread_local = 179,
  aux_sym_source_file_repeat1 = 180,
  aux_sym_type_body_repeat1 = 181,
  aux_sym_type_body_repeat2 = 182,
  aux_sym_data_definition_repeat1 = 183,
  aux_sym_data_definition_repeat2 = 184,
  aux_sym_data_item_repeat1 = 185,
  aux_sym_function_definition_repeat1 = 186,
  aux_sym_function_definition_repeat2 = 187,
  aux_sym_block_repeat1 = 188,
  aux_sym_block_repeat2 = 189,
  aux_sym_phi_repeat1 = 190,
  aux_sym_call_expr_repeat1 = 191,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_global_ident] = "global_ident",
  [sym_temp_ident] = "temp_ident",
  [sym_type_ident] = "type_ident",
  [sym_label] = "label",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_string] = "string",
  [anon_sym_w] = "w",
  [anon_sym_l] = "l",
  [anon_sym_s] = "s",
  [anon_sym_d] = "d",
  [anon_sym_b] = "b",
  [anon_sym_h] = "h",
  [anon_sym_sb] = "sb",
  [anon_sym_ub] = "ub",
  [anon_sym_sh] = "sh",
  [anon_sym_uh] = "uh",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_align] = "align",
  [anon_sym_COMMA] = ",",
  [anon_sym_data] = "data",
  [anon_sym_z] = "z",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_env] = "env",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_export] = "export",
  [anon_sym_thread] = "thread",
  [anon_sym_section] = "section",
  [anon_sym_phi] = "phi",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_mul] = "mul",
  [anon_sym_div] = "div",
  [anon_sym_udiv] = "udiv",
  [anon_sym_rem] = "rem",
  [anon_sym_urem] = "urem",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_shl] = "shl",
  [anon_sym_shr] = "shr",
  [anon_sym_sar] = "sar",
  [anon_sym_neg] = "neg",
  [anon_sym_ceqw] = "ceqw",
  [anon_sym_cnew] = "cnew",
  [anon_sym_csltw] = "csltw",
  [anon_sym_cslew] = "cslew",
  [anon_sym_csgtw] = "csgtw",
  [anon_sym_csgew] = "csgew",
  [anon_sym_cultw] = "cultw",
  [anon_sym_culew] = "culew",
  [anon_sym_cugtw] = "cugtw",
  [anon_sym_cugew] = "cugew",
  [anon_sym_ceql] = "ceql",
  [anon_sym_cnel] = "cnel",
  [anon_sym_csltl] = "csltl",
  [anon_sym_cslel] = "cslel",
  [anon_sym_csgtl] = "csgtl",
  [anon_sym_csgel] = "csgel",
  [anon_sym_cultl] = "cultl",
  [anon_sym_culel] = "culel",
  [anon_sym_cugtl] = "cugtl",
  [anon_sym_cugel] = "cugel",
  [anon_sym_ceqs] = "ceqs",
  [anon_sym_cnes] = "cnes",
  [anon_sym_clts] = "clts",
  [anon_sym_cles] = "cles",
  [anon_sym_cgts] = "cgts",
  [anon_sym_cges] = "cges",
  [anon_sym_cos] = "cos",
  [anon_sym_cuos] = "cuos",
  [anon_sym_ceqd] = "ceqd",
  [anon_sym_cned] = "cned",
  [anon_sym_cltd] = "cltd",
  [anon_sym_cled] = "cled",
  [anon_sym_cgtd] = "cgtd",
  [anon_sym_cged] = "cged",
  [anon_sym_cod] = "cod",
  [anon_sym_cuod] = "cuod",
  [anon_sym_extsb] = "extsb",
  [anon_sym_extub] = "extub",
  [anon_sym_extsh] = "extsh",
  [anon_sym_extuh] = "extuh",
  [anon_sym_extsw] = "extsw",
  [anon_sym_extuw] = "extuw",
  [anon_sym_exts] = "exts",
  [anon_sym_truncd] = "truncd",
  [anon_sym_stosi] = "stosi",
  [anon_sym_stoui] = "stoui",
  [anon_sym_dtosi] = "dtosi",
  [anon_sym_dtoui] = "dtoui",
  [anon_sym_swtof] = "swtof",
  [anon_sym_uwtof] = "uwtof",
  [anon_sym_sltof] = "sltof",
  [anon_sym_ultof] = "ultof",
  [anon_sym_loadw] = "loadw",
  [anon_sym_loadl] = "loadl",
  [anon_sym_loads] = "loads",
  [anon_sym_loadd] = "loadd",
  [anon_sym_loadsw] = "loadsw",
  [anon_sym_loaduw] = "loaduw",
  [anon_sym_loadsb] = "loadsb",
  [anon_sym_loadub] = "loadub",
  [anon_sym_loadsh] = "loadsh",
  [anon_sym_loaduh] = "loaduh",
  [anon_sym_storew] = "storew",
  [anon_sym_storel] = "storel",
  [anon_sym_stores] = "stores",
  [anon_sym_stored] = "stored",
  [anon_sym_storeb] = "storeb",
  [anon_sym_storeh] = "storeh",
  [anon_sym_alloc4] = "alloc4",
  [anon_sym_alloc8] = "alloc8",
  [anon_sym_alloc16] = "alloc16",
  [anon_sym_copy] = "copy",
  [anon_sym_cast] = "cast",
  [anon_sym_blit] = "blit",
  [anon_sym_vastart] = "vastart",
  [anon_sym_vaarg] = "vaarg",
  [anon_sym_call] = "call",
  [anon_sym_jmp] = "jmp",
  [anon_sym_jnz] = "jnz",
  [anon_sym_ret] = "ret",
  [sym_hlt] = "hlt",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_base_type] = "base_type",
  [sym_extended_type] = "extended_type",
  [sym_sub_type] = "sub_type",
  [sym_abi_type] = "abi_type",
  [sym_type_definition] = "type_definition",
  [sym_align_spec] = "align_spec",
  [sym_type_body] = "type_body",
  [sym_type_member] = "type_member",
  [sym_data_definition] = "data_definition",
  [sym_data_item] = "data_item",
  [sym__data_value] = "_data_value",
  [sym_function_definition] = "function_definition",
  [sym_parameter] = "parameter",
  [sym_linkage] = "linkage",
  [sym_block] = "block",
  [sym_phi] = "phi",
  [sym_phi_arg] = "phi_arg",
  [sym_instruction] = "instruction",
  [sym_assign_inst] = "assign_inst",
  [sym__operation] = "_operation",
  [sym_binary_op] = "binary_op",
  [sym_binary_opcode] = "binary_opcode",
  [sym_unary_op] = "unary_op",
  [sym_compare_op] = "compare_op",
  [sym_compare_opcode] = "compare_opcode",
  [sym_convert_op] = "convert_op",
  [sym_convert_opcode] = "convert_opcode",
  [sym_load_op] = "load_op",
  [sym_load_opcode] = "load_opcode",
  [sym_store_inst] = "store_inst",
  [sym_store_opcode] = "store_opcode",
  [sym_alloc_op] = "alloc_op",
  [sym_alloc_opcode] = "alloc_opcode",
  [sym_copy_op] = "copy_op",
  [sym_cast_op] = "cast_op",
  [sym_blit_inst] = "blit_inst",
  [sym_vastart_inst] = "vastart_inst",
  [sym_vaarg_op] = "vaarg_op",
  [sym_call_inst] = "call_inst",
  [sym_call_expr] = "call_expr",
  [sym_call_arg] = "call_arg",
  [sym_jump] = "jump",
  [sym_jmp] = "jmp",
  [sym_jnz] = "jnz",
  [sym_ret] = "ret",
  [sym__value] = "_value",
  [sym_thread_local] = "thread_local",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_body_repeat1] = "type_body_repeat1",
  [aux_sym_type_body_repeat2] = "type_body_repeat2",
  [aux_sym_data_definition_repeat1] = "data_definition_repeat1",
  [aux_sym_data_definition_repeat2] = "data_definition_repeat2",
  [aux_sym_data_item_repeat1] = "data_item_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_definition_repeat2] = "function_definition_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_phi_repeat1] = "phi_repeat1",
  [aux_sym_call_expr_repeat1] = "call_expr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_global_ident] = sym_global_ident,
  [sym_temp_ident] = sym_temp_ident,
  [sym_type_ident] = sym_type_ident,
  [sym_label] = sym_label,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_sb] = anon_sym_sb,
  [anon_sym_ub] = anon_sym_ub,
  [anon_sym_sh] = anon_sym_sh,
  [anon_sym_uh] = anon_sym_uh,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_thread] = anon_sym_thread,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_phi] = anon_sym_phi,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_udiv] = anon_sym_udiv,
  [anon_sym_rem] = anon_sym_rem,
  [anon_sym_urem] = anon_sym_urem,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shr] = anon_sym_shr,
  [anon_sym_sar] = anon_sym_sar,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_ceqw] = anon_sym_ceqw,
  [anon_sym_cnew] = anon_sym_cnew,
  [anon_sym_csltw] = anon_sym_csltw,
  [anon_sym_cslew] = anon_sym_cslew,
  [anon_sym_csgtw] = anon_sym_csgtw,
  [anon_sym_csgew] = anon_sym_csgew,
  [anon_sym_cultw] = anon_sym_cultw,
  [anon_sym_culew] = anon_sym_culew,
  [anon_sym_cugtw] = anon_sym_cugtw,
  [anon_sym_cugew] = anon_sym_cugew,
  [anon_sym_ceql] = anon_sym_ceql,
  [anon_sym_cnel] = anon_sym_cnel,
  [anon_sym_csltl] = anon_sym_csltl,
  [anon_sym_cslel] = anon_sym_cslel,
  [anon_sym_csgtl] = anon_sym_csgtl,
  [anon_sym_csgel] = anon_sym_csgel,
  [anon_sym_cultl] = anon_sym_cultl,
  [anon_sym_culel] = anon_sym_culel,
  [anon_sym_cugtl] = anon_sym_cugtl,
  [anon_sym_cugel] = anon_sym_cugel,
  [anon_sym_ceqs] = anon_sym_ceqs,
  [anon_sym_cnes] = anon_sym_cnes,
  [anon_sym_clts] = anon_sym_clts,
  [anon_sym_cles] = anon_sym_cles,
  [anon_sym_cgts] = anon_sym_cgts,
  [anon_sym_cges] = anon_sym_cges,
  [anon_sym_cos] = anon_sym_cos,
  [anon_sym_cuos] = anon_sym_cuos,
  [anon_sym_ceqd] = anon_sym_ceqd,
  [anon_sym_cned] = anon_sym_cned,
  [anon_sym_cltd] = anon_sym_cltd,
  [anon_sym_cled] = anon_sym_cled,
  [anon_sym_cgtd] = anon_sym_cgtd,
  [anon_sym_cged] = anon_sym_cged,
  [anon_sym_cod] = anon_sym_cod,
  [anon_sym_cuod] = anon_sym_cuod,
  [anon_sym_extsb] = anon_sym_extsb,
  [anon_sym_extub] = anon_sym_extub,
  [anon_sym_extsh] = anon_sym_extsh,
  [anon_sym_extuh] = anon_sym_extuh,
  [anon_sym_extsw] = anon_sym_extsw,
  [anon_sym_extuw] = anon_sym_extuw,
  [anon_sym_exts] = anon_sym_exts,
  [anon_sym_truncd] = anon_sym_truncd,
  [anon_sym_stosi] = anon_sym_stosi,
  [anon_sym_stoui] = anon_sym_stoui,
  [anon_sym_dtosi] = anon_sym_dtosi,
  [anon_sym_dtoui] = anon_sym_dtoui,
  [anon_sym_swtof] = anon_sym_swtof,
  [anon_sym_uwtof] = anon_sym_uwtof,
  [anon_sym_sltof] = anon_sym_sltof,
  [anon_sym_ultof] = anon_sym_ultof,
  [anon_sym_loadw] = anon_sym_loadw,
  [anon_sym_loadl] = anon_sym_loadl,
  [anon_sym_loads] = anon_sym_loads,
  [anon_sym_loadd] = anon_sym_loadd,
  [anon_sym_loadsw] = anon_sym_loadsw,
  [anon_sym_loaduw] = anon_sym_loaduw,
  [anon_sym_loadsb] = anon_sym_loadsb,
  [anon_sym_loadub] = anon_sym_loadub,
  [anon_sym_loadsh] = anon_sym_loadsh,
  [anon_sym_loaduh] = anon_sym_loaduh,
  [anon_sym_storew] = anon_sym_storew,
  [anon_sym_storel] = anon_sym_storel,
  [anon_sym_stores] = anon_sym_stores,
  [anon_sym_stored] = anon_sym_stored,
  [anon_sym_storeb] = anon_sym_storeb,
  [anon_sym_storeh] = anon_sym_storeh,
  [anon_sym_alloc4] = anon_sym_alloc4,
  [anon_sym_alloc8] = anon_sym_alloc8,
  [anon_sym_alloc16] = anon_sym_alloc16,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_cast] = anon_sym_cast,
  [anon_sym_blit] = anon_sym_blit,
  [anon_sym_vastart] = anon_sym_vastart,
  [anon_sym_vaarg] = anon_sym_vaarg,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_jnz] = anon_sym_jnz,
  [anon_sym_ret] = anon_sym_ret,
  [sym_hlt] = sym_hlt,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_base_type] = sym_base_type,
  [sym_extended_type] = sym_extended_type,
  [sym_sub_type] = sym_sub_type,
  [sym_abi_type] = sym_abi_type,
  [sym_type_definition] = sym_type_definition,
  [sym_align_spec] = sym_align_spec,
  [sym_type_body] = sym_type_body,
  [sym_type_member] = sym_type_member,
  [sym_data_definition] = sym_data_definition,
  [sym_data_item] = sym_data_item,
  [sym__data_value] = sym__data_value,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter] = sym_parameter,
  [sym_linkage] = sym_linkage,
  [sym_block] = sym_block,
  [sym_phi] = sym_phi,
  [sym_phi_arg] = sym_phi_arg,
  [sym_instruction] = sym_instruction,
  [sym_assign_inst] = sym_assign_inst,
  [sym__operation] = sym__operation,
  [sym_binary_op] = sym_binary_op,
  [sym_binary_opcode] = sym_binary_opcode,
  [sym_unary_op] = sym_unary_op,
  [sym_compare_op] = sym_compare_op,
  [sym_compare_opcode] = sym_compare_opcode,
  [sym_convert_op] = sym_convert_op,
  [sym_convert_opcode] = sym_convert_opcode,
  [sym_load_op] = sym_load_op,
  [sym_load_opcode] = sym_load_opcode,
  [sym_store_inst] = sym_store_inst,
  [sym_store_opcode] = sym_store_opcode,
  [sym_alloc_op] = sym_alloc_op,
  [sym_alloc_opcode] = sym_alloc_opcode,
  [sym_copy_op] = sym_copy_op,
  [sym_cast_op] = sym_cast_op,
  [sym_blit_inst] = sym_blit_inst,
  [sym_vastart_inst] = sym_vastart_inst,
  [sym_vaarg_op] = sym_vaarg_op,
  [sym_call_inst] = sym_call_inst,
  [sym_call_expr] = sym_call_expr,
  [sym_call_arg] = sym_call_arg,
  [sym_jump] = sym_jump,
  [sym_jmp] = sym_jmp,
  [sym_jnz] = sym_jnz,
  [sym_ret] = sym_ret,
  [sym__value] = sym__value,
  [sym_thread_local] = sym_thread_local,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_body_repeat1] = aux_sym_type_body_repeat1,
  [aux_sym_type_body_repeat2] = aux_sym_type_body_repeat2,
  [aux_sym_data_definition_repeat1] = aux_sym_data_definition_repeat1,
  [aux_sym_data_definition_repeat2] = aux_sym_data_definition_repeat2,
  [aux_sym_data_item_repeat1] = aux_sym_data_item_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_definition_repeat2] = aux_sym_function_definition_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_phi_repeat1] = aux_sym_phi_repeat1,
  [aux_sym_call_expr_repeat1] = aux_sym_call_expr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_global_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_temp_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
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
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceqw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cnew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csltw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cslew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csgtw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csgew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cultw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_culew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cugtw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cugew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cnel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csltl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cslel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csgtl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csgel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cultl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_culel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cugtl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cugel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceqs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cnes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cgts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cges] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cuos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceqd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cltd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cgtd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cuod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extsh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extuh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extuw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_truncd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stosi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stoui] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dtosi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dtoui] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swtof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uwtof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sltof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ultof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loads] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loaduw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadsh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loaduh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stores] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stored] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storeb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storeh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vastart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vaarg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [sym_hlt] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_extended_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_type] = {
    .visible = true,
    .named = true,
  },
  [sym_abi_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_align_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_type_body] = {
    .visible = true,
    .named = true,
  },
  [sym_type_member] = {
    .visible = true,
    .named = true,
  },
  [sym_data_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_data_item] = {
    .visible = true,
    .named = true,
  },
  [sym__data_value] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_linkage] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_phi] = {
    .visible = true,
    .named = true,
  },
  [sym_phi_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_inst] = {
    .visible = true,
    .named = true,
  },
  [sym__operation] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_compare_op] = {
    .visible = true,
    .named = true,
  },
  [sym_compare_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_convert_op] = {
    .visible = true,
    .named = true,
  },
  [sym_convert_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_load_op] = {
    .visible = true,
    .named = true,
  },
  [sym_load_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_store_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_store_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_alloc_op] = {
    .visible = true,
    .named = true,
  },
  [sym_alloc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_op] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_op] = {
    .visible = true,
    .named = true,
  },
  [sym_blit_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_vastart_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_vaarg_op] = {
    .visible = true,
    .named = true,
  },
  [sym_call_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_call_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_jmp] = {
    .visible = true,
    .named = true,
  },
  [sym_jnz] = {
    .visible = true,
    .named = true,
  },
  [sym_ret] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_thread_local] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_phi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_callee = 1,
  field_dest = 2,
  field_label = 3,
  field_name = 4,
  field_op = 5,
  field_return_type = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_callee] = "callee",
  [field_dest] = "dest",
  [field_label] = "label",
  [field_name] = "name",
  [field_op] = "op",
  [field_return_type] = "return_type",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_label, 0},
  [2] =
    {field_name, 2},
  [3] =
    {field_name, 2},
    {field_return_type, 1},
  [5] =
    {field_name, 3},
    {field_return_type, 2},
  [7] =
    {field_dest, 0},
    {field_op, 3},
    {field_type, 2},
  [10] =
    {field_callee, 1},
  [11] =
    {field_op, 0},
  [12] =
    {field_dest, 0},
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
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead == 'j') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(108);
      if (lookahead == 'z') ADVANCE(193);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '}') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(171);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(172);
      if (lookahead == 'z') ADVANCE(193);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '}') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(198);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '4') ADVANCE(285);
      if (lookahead == '8') ADVANCE(286);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'w') ADVANCE(258);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(276);
      if (lookahead == 'h') ADVANCE(278);
      if (lookahead == 'w') ADVANCE(274);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(283);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 'w') ADVANCE(279);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(218);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(269);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(265);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(268);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(267);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(222);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'w') ADVANCE(221);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(220);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'w') ADVANCE(219);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 'w') ADVANCE(225);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(224);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'w') ADVANCE(223);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 'q') ADVANCE(32);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 145:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 146:
      if (lookahead == 'v') ADVANCE(197);
      END_STATE();
    case 147:
      if (lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 148:
      if (lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 149:
      if (lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 150:
      if (lookahead == 'z') ADVANCE(295);
      END_STATE();
    case 151:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 156:
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 157:
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 158:
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 160:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 'j') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(108);
      if (lookahead == '}') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_global_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_temp_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_type_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_sb);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ub);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_sh);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_uh);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_thread);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_phi);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_udiv);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_rem);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_urem);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_shl);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_shr);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_sar);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ceqw);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_cnew);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_csltw);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_cslew);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_csgtw);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_csgew);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_cultw);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_culew);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_cugtw);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_cugew);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_ceql);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_cnel);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_csltl);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_cslel);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_csgtl);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_csgel);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_cultl);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_culel);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_cugtl);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_cugel);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_ceqs);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_cnes);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_clts);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_cles);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_cgts);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_cges);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_cos);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_cuos);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_ceqd);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_cned);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_cltd);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_cled);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_cgtd);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_cged);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_cod);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_cuod);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_extsb);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_extub);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_extsh);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_extuh);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_extsw);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_extuw);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_exts);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(257);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_truncd);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_stosi);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_stoui);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_dtosi);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_dtoui);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_swtof);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_uwtof);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_sltof);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_ultof);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_loadw);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_loadl);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_loads);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_loadd);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_loadsw);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_loaduw);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_loadsb);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_loadub);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_loadsh);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_loaduh);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_storew);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_storel);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_stores);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_stored);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_storeb);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_storeh);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_alloc4);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_alloc8);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_alloc16);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_blit);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_vastart);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_vaarg);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_jnz);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_hlt);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 160},
  [7] = {.lex_state = 160},
  [8] = {.lex_state = 160},
  [9] = {.lex_state = 160},
  [10] = {.lex_state = 160},
  [11] = {.lex_state = 160},
  [12] = {.lex_state = 160},
  [13] = {.lex_state = 160},
  [14] = {.lex_state = 160},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 160},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 160},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 160},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 160},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 160},
  [27] = {.lex_state = 160},
  [28] = {.lex_state = 160},
  [29] = {.lex_state = 160},
  [30] = {.lex_state = 160},
  [31] = {.lex_state = 160},
  [32] = {.lex_state = 160},
  [33] = {.lex_state = 160},
  [34] = {.lex_state = 160},
  [35] = {.lex_state = 160},
  [36] = {.lex_state = 160},
  [37] = {.lex_state = 160},
  [38] = {.lex_state = 160},
  [39] = {.lex_state = 160},
  [40] = {.lex_state = 160},
  [41] = {.lex_state = 160},
  [42] = {.lex_state = 160},
  [43] = {.lex_state = 160},
  [44] = {.lex_state = 160},
  [45] = {.lex_state = 160},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 160},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 160},
  [66] = {.lex_state = 160},
  [67] = {.lex_state = 160},
  [68] = {.lex_state = 160},
  [69] = {.lex_state = 160},
  [70] = {.lex_state = 160},
  [71] = {.lex_state = 160},
  [72] = {.lex_state = 160},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 160},
  [75] = {.lex_state = 160},
  [76] = {.lex_state = 160},
  [77] = {.lex_state = 160},
  [78] = {.lex_state = 160},
  [79] = {.lex_state = 160},
  [80] = {.lex_state = 160},
  [81] = {.lex_state = 160},
  [82] = {.lex_state = 160},
  [83] = {.lex_state = 160},
  [84] = {.lex_state = 160},
  [85] = {.lex_state = 160},
  [86] = {.lex_state = 160},
  [87] = {.lex_state = 160},
  [88] = {.lex_state = 160},
  [89] = {.lex_state = 160},
  [90] = {.lex_state = 160},
  [91] = {.lex_state = 160},
  [92] = {.lex_state = 160},
  [93] = {.lex_state = 160},
  [94] = {.lex_state = 160},
  [95] = {.lex_state = 160},
  [96] = {.lex_state = 160},
  [97] = {.lex_state = 160},
  [98] = {.lex_state = 160},
  [99] = {.lex_state = 160},
  [100] = {.lex_state = 160},
  [101] = {.lex_state = 160},
  [102] = {.lex_state = 160},
  [103] = {.lex_state = 160},
  [104] = {.lex_state = 160},
  [105] = {.lex_state = 160},
  [106] = {.lex_state = 160},
  [107] = {.lex_state = 160},
  [108] = {.lex_state = 160},
  [109] = {.lex_state = 160},
  [110] = {.lex_state = 160},
  [111] = {.lex_state = 160},
  [112] = {.lex_state = 160},
  [113] = {.lex_state = 160},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 160},
  [116] = {.lex_state = 160},
  [117] = {.lex_state = 160},
  [118] = {.lex_state = 160},
  [119] = {.lex_state = 160},
  [120] = {.lex_state = 160},
  [121] = {.lex_state = 160},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
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
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
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
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_global_ident] = ACTIONS(1),
    [sym_temp_ident] = ACTIONS(1),
    [sym_type_ident] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_sb] = ACTIONS(1),
    [anon_sym_ub] = ACTIONS(1),
    [anon_sym_sh] = ACTIONS(1),
    [anon_sym_uh] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_thread] = ACTIONS(1),
    [anon_sym_phi] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_udiv] = ACTIONS(1),
    [anon_sym_rem] = ACTIONS(1),
    [anon_sym_urem] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_ceqw] = ACTIONS(1),
    [anon_sym_cnew] = ACTIONS(1),
    [anon_sym_csltw] = ACTIONS(1),
    [anon_sym_cslew] = ACTIONS(1),
    [anon_sym_csgtw] = ACTIONS(1),
    [anon_sym_csgew] = ACTIONS(1),
    [anon_sym_cultw] = ACTIONS(1),
    [anon_sym_culew] = ACTIONS(1),
    [anon_sym_cugtw] = ACTIONS(1),
    [anon_sym_cugew] = ACTIONS(1),
    [anon_sym_ceql] = ACTIONS(1),
    [anon_sym_cnel] = ACTIONS(1),
    [anon_sym_csltl] = ACTIONS(1),
    [anon_sym_cslel] = ACTIONS(1),
    [anon_sym_csgtl] = ACTIONS(1),
    [anon_sym_csgel] = ACTIONS(1),
    [anon_sym_cultl] = ACTIONS(1),
    [anon_sym_culel] = ACTIONS(1),
    [anon_sym_cugtl] = ACTIONS(1),
    [anon_sym_cugel] = ACTIONS(1),
    [anon_sym_ceqs] = ACTIONS(1),
    [anon_sym_cnes] = ACTIONS(1),
    [anon_sym_clts] = ACTIONS(1),
    [anon_sym_cles] = ACTIONS(1),
    [anon_sym_cgts] = ACTIONS(1),
    [anon_sym_cges] = ACTIONS(1),
    [anon_sym_cos] = ACTIONS(1),
    [anon_sym_cuos] = ACTIONS(1),
    [anon_sym_ceqd] = ACTIONS(1),
    [anon_sym_cned] = ACTIONS(1),
    [anon_sym_cltd] = ACTIONS(1),
    [anon_sym_cled] = ACTIONS(1),
    [anon_sym_cgtd] = ACTIONS(1),
    [anon_sym_cged] = ACTIONS(1),
    [anon_sym_cod] = ACTIONS(1),
    [anon_sym_cuod] = ACTIONS(1),
    [anon_sym_extsb] = ACTIONS(1),
    [anon_sym_extub] = ACTIONS(1),
    [anon_sym_extsh] = ACTIONS(1),
    [anon_sym_extuh] = ACTIONS(1),
    [anon_sym_extsw] = ACTIONS(1),
    [anon_sym_extuw] = ACTIONS(1),
    [anon_sym_exts] = ACTIONS(1),
    [anon_sym_truncd] = ACTIONS(1),
    [anon_sym_swtof] = ACTIONS(1),
    [anon_sym_uwtof] = ACTIONS(1),
    [anon_sym_ultof] = ACTIONS(1),
    [anon_sym_alloc4] = ACTIONS(1),
    [anon_sym_alloc8] = ACTIONS(1),
    [anon_sym_alloc16] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_cast] = ACTIONS(1),
    [anon_sym_blit] = ACTIONS(1),
    [anon_sym_vastart] = ACTIONS(1),
    [anon_sym_vaarg] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_jnz] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [sym_hlt] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(252),
    [sym__definition] = STATE(42),
    [sym_type_definition] = STATE(42),
    [sym_data_definition] = STATE(42),
    [sym_function_definition] = STATE(42),
    [sym_linkage] = STATE(92),
    [aux_sym_source_file_repeat1] = STATE(42),
    [aux_sym_data_definition_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_data] = ACTIONS(9),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(13),
    [anon_sym_thread] = ACTIONS(13),
    [anon_sym_section] = ACTIONS(15),
  },
  [2] = {
    [sym__operation] = STATE(28),
    [sym_binary_op] = STATE(28),
    [sym_binary_opcode] = STATE(90),
    [sym_unary_op] = STATE(28),
    [sym_compare_op] = STATE(28),
    [sym_compare_opcode] = STATE(91),
    [sym_convert_op] = STATE(28),
    [sym_convert_opcode] = STATE(95),
    [sym_load_op] = STATE(28),
    [sym_load_opcode] = STATE(97),
    [sym_alloc_op] = STATE(28),
    [sym_alloc_opcode] = STATE(98),
    [sym_copy_op] = STATE(28),
    [sym_cast_op] = STATE(28),
    [sym_vaarg_op] = STATE(28),
    [sym_call_expr] = STATE(28),
    [sym_comment] = ACTIONS(3),
    [anon_sym_add] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(17),
    [anon_sym_mul] = ACTIONS(17),
    [anon_sym_div] = ACTIONS(17),
    [anon_sym_udiv] = ACTIONS(17),
    [anon_sym_rem] = ACTIONS(17),
    [anon_sym_urem] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_xor] = ACTIONS(17),
    [anon_sym_shl] = ACTIONS(17),
    [anon_sym_shr] = ACTIONS(17),
    [anon_sym_sar] = ACTIONS(17),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_ceqw] = ACTIONS(21),
    [anon_sym_cnew] = ACTIONS(21),
    [anon_sym_csltw] = ACTIONS(21),
    [anon_sym_cslew] = ACTIONS(21),
    [anon_sym_csgtw] = ACTIONS(21),
    [anon_sym_csgew] = ACTIONS(21),
    [anon_sym_cultw] = ACTIONS(21),
    [anon_sym_culew] = ACTIONS(21),
    [anon_sym_cugtw] = ACTIONS(21),
    [anon_sym_cugew] = ACTIONS(21),
    [anon_sym_ceql] = ACTIONS(21),
    [anon_sym_cnel] = ACTIONS(21),
    [anon_sym_csltl] = ACTIONS(21),
    [anon_sym_cslel] = ACTIONS(21),
    [anon_sym_csgtl] = ACTIONS(21),
    [anon_sym_csgel] = ACTIONS(21),
    [anon_sym_cultl] = ACTIONS(21),
    [anon_sym_culel] = ACTIONS(21),
    [anon_sym_cugtl] = ACTIONS(21),
    [anon_sym_cugel] = ACTIONS(21),
    [anon_sym_ceqs] = ACTIONS(21),
    [anon_sym_cnes] = ACTIONS(21),
    [anon_sym_clts] = ACTIONS(21),
    [anon_sym_cles] = ACTIONS(21),
    [anon_sym_cgts] = ACTIONS(21),
    [anon_sym_cges] = ACTIONS(21),
    [anon_sym_cos] = ACTIONS(21),
    [anon_sym_cuos] = ACTIONS(21),
    [anon_sym_ceqd] = ACTIONS(21),
    [anon_sym_cned] = ACTIONS(21),
    [anon_sym_cltd] = ACTIONS(21),
    [anon_sym_cled] = ACTIONS(21),
    [anon_sym_cgtd] = ACTIONS(21),
    [anon_sym_cged] = ACTIONS(21),
    [anon_sym_cod] = ACTIONS(21),
    [anon_sym_cuod] = ACTIONS(21),
    [anon_sym_extsb] = ACTIONS(23),
    [anon_sym_extub] = ACTIONS(23),
    [anon_sym_extsh] = ACTIONS(23),
    [anon_sym_extuh] = ACTIONS(23),
    [anon_sym_extsw] = ACTIONS(23),
    [anon_sym_extuw] = ACTIONS(23),
    [anon_sym_exts] = ACTIONS(25),
    [anon_sym_truncd] = ACTIONS(23),
    [anon_sym_stosi] = ACTIONS(23),
    [anon_sym_stoui] = ACTIONS(23),
    [anon_sym_dtosi] = ACTIONS(23),
    [anon_sym_dtoui] = ACTIONS(23),
    [anon_sym_swtof] = ACTIONS(23),
    [anon_sym_uwtof] = ACTIONS(23),
    [anon_sym_sltof] = ACTIONS(23),
    [anon_sym_ultof] = ACTIONS(23),
    [anon_sym_loadw] = ACTIONS(27),
    [anon_sym_loadl] = ACTIONS(27),
    [anon_sym_loads] = ACTIONS(29),
    [anon_sym_loadd] = ACTIONS(27),
    [anon_sym_loadsw] = ACTIONS(27),
    [anon_sym_loaduw] = ACTIONS(27),
    [anon_sym_loadsb] = ACTIONS(27),
    [anon_sym_loadub] = ACTIONS(27),
    [anon_sym_loadsh] = ACTIONS(27),
    [anon_sym_loaduh] = ACTIONS(27),
    [anon_sym_alloc4] = ACTIONS(31),
    [anon_sym_alloc8] = ACTIONS(31),
    [anon_sym_alloc16] = ACTIONS(31),
    [anon_sym_copy] = ACTIONS(33),
    [anon_sym_cast] = ACTIONS(35),
    [anon_sym_vaarg] = ACTIONS(37),
    [anon_sym_call] = ACTIONS(39),
  },
  [3] = {
    [sym_comment] = ACTIONS(3),
    [sym_global_ident] = ACTIONS(41),
    [sym_temp_ident] = ACTIONS(41),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [anon_sym_thread] = ACTIONS(41),
    [anon_sym_phi] = ACTIONS(41),
    [anon_sym_add] = ACTIONS(41),
    [anon_sym_sub] = ACTIONS(41),
    [anon_sym_mul] = ACTIONS(41),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_udiv] = ACTIONS(41),
    [anon_sym_rem] = ACTIONS(41),
    [anon_sym_urem] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_xor] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [anon_sym_sar] = ACTIONS(41),
    [anon_sym_neg] = ACTIONS(41),
    [anon_sym_ceqw] = ACTIONS(41),
    [anon_sym_cnew] = ACTIONS(41),
    [anon_sym_csltw] = ACTIONS(41),
    [anon_sym_cslew] = ACTIONS(41),
    [anon_sym_csgtw] = ACTIONS(41),
    [anon_sym_csgew] = ACTIONS(41),
    [anon_sym_cultw] = ACTIONS(41),
    [anon_sym_culew] = ACTIONS(41),
    [anon_sym_cugtw] = ACTIONS(41),
    [anon_sym_cugew] = ACTIONS(41),
    [anon_sym_ceql] = ACTIONS(41),
    [anon_sym_cnel] = ACTIONS(41),
    [anon_sym_csltl] = ACTIONS(41),
    [anon_sym_cslel] = ACTIONS(41),
    [anon_sym_csgtl] = ACTIONS(41),
    [anon_sym_csgel] = ACTIONS(41),
    [anon_sym_cultl] = ACTIONS(41),
    [anon_sym_culel] = ACTIONS(41),
    [anon_sym_cugtl] = ACTIONS(41),
    [anon_sym_cugel] = ACTIONS(41),
    [anon_sym_ceqs] = ACTIONS(41),
    [anon_sym_cnes] = ACTIONS(41),
    [anon_sym_clts] = ACTIONS(41),
    [anon_sym_cles] = ACTIONS(41),
    [anon_sym_cgts] = ACTIONS(41),
    [anon_sym_cges] = ACTIONS(41),
    [anon_sym_cos] = ACTIONS(41),
    [anon_sym_cuos] = ACTIONS(41),
    [anon_sym_ceqd] = ACTIONS(41),
    [anon_sym_cned] = ACTIONS(41),
    [anon_sym_cltd] = ACTIONS(41),
    [anon_sym_cled] = ACTIONS(41),
    [anon_sym_cgtd] = ACTIONS(41),
    [anon_sym_cged] = ACTIONS(41),
    [anon_sym_cod] = ACTIONS(41),
    [anon_sym_cuod] = ACTIONS(41),
    [anon_sym_extsb] = ACTIONS(41),
    [anon_sym_extub] = ACTIONS(41),
    [anon_sym_extsh] = ACTIONS(41),
    [anon_sym_extuh] = ACTIONS(41),
    [anon_sym_extsw] = ACTIONS(41),
    [anon_sym_extuw] = ACTIONS(41),
    [anon_sym_exts] = ACTIONS(43),
    [anon_sym_truncd] = ACTIONS(41),
    [anon_sym_stosi] = ACTIONS(41),
    [anon_sym_stoui] = ACTIONS(41),
    [anon_sym_dtosi] = ACTIONS(41),
    [anon_sym_dtoui] = ACTIONS(41),
    [anon_sym_swtof] = ACTIONS(41),
    [anon_sym_uwtof] = ACTIONS(41),
    [anon_sym_sltof] = ACTIONS(41),
    [anon_sym_ultof] = ACTIONS(41),
    [anon_sym_loadw] = ACTIONS(41),
    [anon_sym_loadl] = ACTIONS(41),
    [anon_sym_loads] = ACTIONS(43),
    [anon_sym_loadd] = ACTIONS(41),
    [anon_sym_loadsw] = ACTIONS(41),
    [anon_sym_loaduw] = ACTIONS(41),
    [anon_sym_loadsb] = ACTIONS(41),
    [anon_sym_loadub] = ACTIONS(41),
    [anon_sym_loadsh] = ACTIONS(41),
    [anon_sym_loaduh] = ACTIONS(41),
    [anon_sym_alloc4] = ACTIONS(41),
    [anon_sym_alloc8] = ACTIONS(41),
    [anon_sym_alloc16] = ACTIONS(41),
    [anon_sym_copy] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(41),
    [anon_sym_vaarg] = ACTIONS(41),
    [anon_sym_call] = ACTIONS(41),
  },
  [4] = {
    [sym_comment] = ACTIONS(3),
    [sym_global_ident] = ACTIONS(45),
    [sym_temp_ident] = ACTIONS(45),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(45),
    [anon_sym_thread] = ACTIONS(45),
    [anon_sym_add] = ACTIONS(45),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_mul] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_udiv] = ACTIONS(45),
    [anon_sym_rem] = ACTIONS(45),
    [anon_sym_urem] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(45),
    [anon_sym_shl] = ACTIONS(45),
    [anon_sym_shr] = ACTIONS(45),
    [anon_sym_sar] = ACTIONS(45),
    [anon_sym_neg] = ACTIONS(45),
    [anon_sym_ceqw] = ACTIONS(45),
    [anon_sym_cnew] = ACTIONS(45),
    [anon_sym_csltw] = ACTIONS(45),
    [anon_sym_cslew] = ACTIONS(45),
    [anon_sym_csgtw] = ACTIONS(45),
    [anon_sym_csgew] = ACTIONS(45),
    [anon_sym_cultw] = ACTIONS(45),
    [anon_sym_culew] = ACTIONS(45),
    [anon_sym_cugtw] = ACTIONS(45),
    [anon_sym_cugew] = ACTIONS(45),
    [anon_sym_ceql] = ACTIONS(45),
    [anon_sym_cnel] = ACTIONS(45),
    [anon_sym_csltl] = ACTIONS(45),
    [anon_sym_cslel] = ACTIONS(45),
    [anon_sym_csgtl] = ACTIONS(45),
    [anon_sym_csgel] = ACTIONS(45),
    [anon_sym_cultl] = ACTIONS(45),
    [anon_sym_culel] = ACTIONS(45),
    [anon_sym_cugtl] = ACTIONS(45),
    [anon_sym_cugel] = ACTIONS(45),
    [anon_sym_ceqs] = ACTIONS(45),
    [anon_sym_cnes] = ACTIONS(45),
    [anon_sym_clts] = ACTIONS(45),
    [anon_sym_cles] = ACTIONS(45),
    [anon_sym_cgts] = ACTIONS(45),
    [anon_sym_cges] = ACTIONS(45),
    [anon_sym_cos] = ACTIONS(45),
    [anon_sym_cuos] = ACTIONS(45),
    [anon_sym_ceqd] = ACTIONS(45),
    [anon_sym_cned] = ACTIONS(45),
    [anon_sym_cltd] = ACTIONS(45),
    [anon_sym_cled] = ACTIONS(45),
    [anon_sym_cgtd] = ACTIONS(45),
    [anon_sym_cged] = ACTIONS(45),
    [anon_sym_cod] = ACTIONS(45),
    [anon_sym_cuod] = ACTIONS(45),
    [anon_sym_extsb] = ACTIONS(45),
    [anon_sym_extub] = ACTIONS(45),
    [anon_sym_extsh] = ACTIONS(45),
    [anon_sym_extuh] = ACTIONS(45),
    [anon_sym_extsw] = ACTIONS(45),
    [anon_sym_extuw] = ACTIONS(45),
    [anon_sym_exts] = ACTIONS(47),
    [anon_sym_truncd] = ACTIONS(45),
    [anon_sym_stosi] = ACTIONS(45),
    [anon_sym_stoui] = ACTIONS(45),
    [anon_sym_dtosi] = ACTIONS(45),
    [anon_sym_dtoui] = ACTIONS(45),
    [anon_sym_swtof] = ACTIONS(45),
    [anon_sym_uwtof] = ACTIONS(45),
    [anon_sym_sltof] = ACTIONS(45),
    [anon_sym_ultof] = ACTIONS(45),
    [anon_sym_loadw] = ACTIONS(45),
    [anon_sym_loadl] = ACTIONS(45),
    [anon_sym_loads] = ACTIONS(47),
    [anon_sym_loadd] = ACTIONS(45),
    [anon_sym_loadsw] = ACTIONS(45),
    [anon_sym_loaduw] = ACTIONS(45),
    [anon_sym_loadsb] = ACTIONS(45),
    [anon_sym_loadub] = ACTIONS(45),
    [anon_sym_loadsh] = ACTIONS(45),
    [anon_sym_loaduh] = ACTIONS(45),
    [anon_sym_alloc4] = ACTIONS(45),
    [anon_sym_alloc8] = ACTIONS(45),
    [anon_sym_alloc16] = ACTIONS(45),
    [anon_sym_copy] = ACTIONS(45),
    [anon_sym_cast] = ACTIONS(45),
    [anon_sym_vaarg] = ACTIONS(45),
    [anon_sym_call] = ACTIONS(45),
  },
  [5] = {
    [sym_comment] = ACTIONS(3),
    [sym_global_ident] = ACTIONS(49),
    [sym_temp_ident] = ACTIONS(49),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(49),
    [anon_sym_thread] = ACTIONS(49),
    [anon_sym_add] = ACTIONS(49),
    [anon_sym_sub] = ACTIONS(49),
    [anon_sym_mul] = ACTIONS(49),
    [anon_sym_div] = ACTIONS(49),
    [anon_sym_udiv] = ACTIONS(49),
    [anon_sym_rem] = ACTIONS(49),
    [anon_sym_urem] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_or] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(49),
    [anon_sym_shl] = ACTIONS(49),
    [anon_sym_shr] = ACTIONS(49),
    [anon_sym_sar] = ACTIONS(49),
    [anon_sym_neg] = ACTIONS(49),
    [anon_sym_ceqw] = ACTIONS(49),
    [anon_sym_cnew] = ACTIONS(49),
    [anon_sym_csltw] = ACTIONS(49),
    [anon_sym_cslew] = ACTIONS(49),
    [anon_sym_csgtw] = ACTIONS(49),
    [anon_sym_csgew] = ACTIONS(49),
    [anon_sym_cultw] = ACTIONS(49),
    [anon_sym_culew] = ACTIONS(49),
    [anon_sym_cugtw] = ACTIONS(49),
    [anon_sym_cugew] = ACTIONS(49),
    [anon_sym_ceql] = ACTIONS(49),
    [anon_sym_cnel] = ACTIONS(49),
    [anon_sym_csltl] = ACTIONS(49),
    [anon_sym_cslel] = ACTIONS(49),
    [anon_sym_csgtl] = ACTIONS(49),
    [anon_sym_csgel] = ACTIONS(49),
    [anon_sym_cultl] = ACTIONS(49),
    [anon_sym_culel] = ACTIONS(49),
    [anon_sym_cugtl] = ACTIONS(49),
    [anon_sym_cugel] = ACTIONS(49),
    [anon_sym_ceqs] = ACTIONS(49),
    [anon_sym_cnes] = ACTIONS(49),
    [anon_sym_clts] = ACTIONS(49),
    [anon_sym_cles] = ACTIONS(49),
    [anon_sym_cgts] = ACTIONS(49),
    [anon_sym_cges] = ACTIONS(49),
    [anon_sym_cos] = ACTIONS(49),
    [anon_sym_cuos] = ACTIONS(49),
    [anon_sym_ceqd] = ACTIONS(49),
    [anon_sym_cned] = ACTIONS(49),
    [anon_sym_cltd] = ACTIONS(49),
    [anon_sym_cled] = ACTIONS(49),
    [anon_sym_cgtd] = ACTIONS(49),
    [anon_sym_cged] = ACTIONS(49),
    [anon_sym_cod] = ACTIONS(49),
    [anon_sym_cuod] = ACTIONS(49),
    [anon_sym_extsb] = ACTIONS(49),
    [anon_sym_extub] = ACTIONS(49),
    [anon_sym_extsh] = ACTIONS(49),
    [anon_sym_extuh] = ACTIONS(49),
    [anon_sym_extsw] = ACTIONS(49),
    [anon_sym_extuw] = ACTIONS(49),
    [anon_sym_exts] = ACTIONS(51),
    [anon_sym_truncd] = ACTIONS(49),
    [anon_sym_stosi] = ACTIONS(49),
    [anon_sym_stoui] = ACTIONS(49),
    [anon_sym_dtosi] = ACTIONS(49),
    [anon_sym_dtoui] = ACTIONS(49),
    [anon_sym_swtof] = ACTIONS(49),
    [anon_sym_uwtof] = ACTIONS(49),
    [anon_sym_sltof] = ACTIONS(49),
    [anon_sym_ultof] = ACTIONS(49),
    [anon_sym_loadw] = ACTIONS(49),
    [anon_sym_loadl] = ACTIONS(49),
    [anon_sym_loads] = ACTIONS(51),
    [anon_sym_loadd] = ACTIONS(49),
    [anon_sym_loadsw] = ACTIONS(49),
    [anon_sym_loaduw] = ACTIONS(49),
    [anon_sym_loadsb] = ACTIONS(49),
    [anon_sym_loadub] = ACTIONS(49),
    [anon_sym_loadsh] = ACTIONS(49),
    [anon_sym_loaduh] = ACTIONS(49),
    [anon_sym_alloc4] = ACTIONS(49),
    [anon_sym_alloc8] = ACTIONS(49),
    [anon_sym_alloc16] = ACTIONS(49),
    [anon_sym_copy] = ACTIONS(49),
    [anon_sym_cast] = ACTIONS(49),
    [anon_sym_vaarg] = ACTIONS(49),
    [anon_sym_call] = ACTIONS(49),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_phi] = ACTIONS(53),
    [anon_sym_add] = ACTIONS(45),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_mul] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_udiv] = ACTIONS(45),
    [anon_sym_rem] = ACTIONS(45),
    [anon_sym_urem] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(45),
    [anon_sym_shl] = ACTIONS(45),
    [anon_sym_shr] = ACTIONS(45),
    [anon_sym_sar] = ACTIONS(45),
    [anon_sym_neg] = ACTIONS(45),
    [anon_sym_ceqw] = ACTIONS(45),
    [anon_sym_cnew] = ACTIONS(45),
    [anon_sym_csltw] = ACTIONS(45),
    [anon_sym_cslew] = ACTIONS(45),
    [anon_sym_csgtw] = ACTIONS(45),
    [anon_sym_csgew] = ACTIONS(45),
    [anon_sym_cultw] = ACTIONS(45),
    [anon_sym_culew] = ACTIONS(45),
    [anon_sym_cugtw] = ACTIONS(45),
    [anon_sym_cugew] = ACTIONS(45),
    [anon_sym_ceql] = ACTIONS(45),
    [anon_sym_cnel] = ACTIONS(45),
    [anon_sym_csltl] = ACTIONS(45),
    [anon_sym_cslel] = ACTIONS(45),
    [anon_sym_csgtl] = ACTIONS(45),
    [anon_sym_csgel] = ACTIONS(45),
    [anon_sym_cultl] = ACTIONS(45),
    [anon_sym_culel] = ACTIONS(45),
    [anon_sym_cugtl] = ACTIONS(45),
    [anon_sym_cugel] = ACTIONS(45),
    [anon_sym_ceqs] = ACTIONS(45),
    [anon_sym_cnes] = ACTIONS(45),
    [anon_sym_clts] = ACTIONS(45),
    [anon_sym_cles] = ACTIONS(45),
    [anon_sym_cgts] = ACTIONS(45),
    [anon_sym_cges] = ACTIONS(45),
    [anon_sym_cos] = ACTIONS(45),
    [anon_sym_cuos] = ACTIONS(45),
    [anon_sym_ceqd] = ACTIONS(45),
    [anon_sym_cned] = ACTIONS(45),
    [anon_sym_cltd] = ACTIONS(45),
    [anon_sym_cled] = ACTIONS(45),
    [anon_sym_cgtd] = ACTIONS(45),
    [anon_sym_cged] = ACTIONS(45),
    [anon_sym_cod] = ACTIONS(45),
    [anon_sym_cuod] = ACTIONS(45),
    [anon_sym_extsb] = ACTIONS(45),
    [anon_sym_extub] = ACTIONS(45),
    [anon_sym_extsh] = ACTIONS(45),
    [anon_sym_extuh] = ACTIONS(45),
    [anon_sym_extsw] = ACTIONS(45),
    [anon_sym_extuw] = ACTIONS(45),
    [anon_sym_exts] = ACTIONS(47),
    [anon_sym_truncd] = ACTIONS(45),
    [anon_sym_stosi] = ACTIONS(45),
    [anon_sym_stoui] = ACTIONS(45),
    [anon_sym_dtosi] = ACTIONS(45),
    [anon_sym_dtoui] = ACTIONS(45),
    [anon_sym_swtof] = ACTIONS(45),
    [anon_sym_uwtof] = ACTIONS(45),
    [anon_sym_sltof] = ACTIONS(45),
    [anon_sym_ultof] = ACTIONS(45),
    [anon_sym_loadw] = ACTIONS(45),
    [anon_sym_loadl] = ACTIONS(45),
    [anon_sym_loads] = ACTIONS(47),
    [anon_sym_loadd] = ACTIONS(45),
    [anon_sym_loadsw] = ACTIONS(45),
    [anon_sym_loaduw] = ACTIONS(45),
    [anon_sym_loadsb] = ACTIONS(45),
    [anon_sym_loadub] = ACTIONS(45),
    [anon_sym_loadsh] = ACTIONS(45),
    [anon_sym_loaduh] = ACTIONS(45),
    [anon_sym_alloc4] = ACTIONS(45),
    [anon_sym_alloc8] = ACTIONS(45),
    [anon_sym_alloc16] = ACTIONS(45),
    [anon_sym_copy] = ACTIONS(45),
    [anon_sym_cast] = ACTIONS(45),
    [anon_sym_vaarg] = ACTIONS(45),
    [anon_sym_call] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_call,
    ACTIONS(55), 1,
      sym_temp_ident,
    ACTIONS(59), 1,
      anon_sym_blit,
    ACTIONS(61), 1,
      anon_sym_vastart,
    ACTIONS(63), 1,
      anon_sym_jmp,
    ACTIONS(65), 1,
      anon_sym_jnz,
    ACTIONS(67), 1,
      anon_sym_ret,
    ACTIONS(69), 1,
      sym_hlt,
    STATE(29), 1,
      sym_call_expr,
    STATE(72), 1,
      sym_store_opcode,
    STATE(200), 1,
      sym_jump,
    STATE(10), 2,
      sym_instruction,
      aux_sym_block_repeat2,
    STATE(14), 2,
      sym_phi,
      aux_sym_block_repeat1,
    STATE(191), 3,
      sym_jmp,
      sym_jnz,
      sym_ret,
    STATE(30), 5,
      sym_assign_inst,
      sym_store_inst,
      sym_blit_inst,
      sym_vastart_inst,
      sym_call_inst,
    ACTIONS(57), 6,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
  [65] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_call,
    ACTIONS(55), 1,
      sym_temp_ident,
    ACTIONS(59), 1,
      anon_sym_blit,
    ACTIONS(61), 1,
      anon_sym_vastart,
    ACTIONS(63), 1,
      anon_sym_jmp,
    ACTIONS(65), 1,
      anon_sym_jnz,
    ACTIONS(67), 1,
      anon_sym_ret,
    ACTIONS(69), 1,
      sym_hlt,
    STATE(29), 1,
      sym_call_expr,
    STATE(72), 1,
      sym_store_opcode,
    STATE(189), 1,
      sym_jump,
    STATE(7), 2,
      sym_phi,
      aux_sym_block_repeat1,
    STATE(9), 2,
      sym_instruction,
      aux_sym_block_repeat2,
    STATE(191), 3,
      sym_jmp,
      sym_jnz,
      sym_ret,
    STATE(30), 5,
      sym_assign_inst,
      sym_store_inst,
      sym_blit_inst,
      sym_vastart_inst,
      sym_call_inst,
    ACTIONS(57), 6,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
  [130] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_call,
    ACTIONS(59), 1,
      anon_sym_blit,
    ACTIONS(61), 1,
      anon_sym_vastart,
    ACTIONS(63), 1,
      anon_sym_jmp,
    ACTIONS(65), 1,
      anon_sym_jnz,
    ACTIONS(67), 1,
      anon_sym_ret,
    ACTIONS(69), 1,
      sym_hlt,
    ACTIONS(71), 1,
      sym_temp_ident,
    STATE(29), 1,
      sym_call_expr,
    STATE(72), 1,
      sym_store_opcode,
    STATE(200), 1,
      sym_jump,
    STATE(11), 2,
      sym_instruction,
      aux_sym_block_repeat2,
    STATE(191), 3,
      sym_jmp,
      sym_jnz,
      sym_ret,
    STATE(30), 5,
      sym_assign_inst,
      sym_store_inst,
      sym_blit_inst,
      sym_vastart_inst,
      sym_call_inst,
    ACTIONS(57), 6,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
  [191] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_call,
    ACTIONS(59), 1,
      anon_sym_blit,
    ACTIONS(61), 1,
      anon_sym_vastart,
    ACTIONS(63), 1,
      anon_sym_jmp,
    ACTIONS(65), 1,
      anon_sym_jnz,
    ACTIONS(67), 1,
      anon_sym_ret,
    ACTIONS(69), 1,
      sym_hlt,
    ACTIONS(71), 1,
      sym_temp_ident,
    STATE(29), 1,
      sym_call_expr,
    STATE(72), 1,
      sym_store_opcode,
    STATE(187), 1,
      sym_jump,
    STATE(11), 2,
      sym_instruction,
      aux_sym_block_repeat2,
    STATE(191), 3,
      sym_jmp,
      sym_jnz,
      sym_ret,
    STATE(30), 5,
      sym_assign_inst,
      sym_store_inst,
      sym_blit_inst,
      sym_vastart_inst,
      sym_call_inst,
    ACTIONS(57), 6,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
  [252] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_temp_ident,
    ACTIONS(79), 1,
      anon_sym_blit,
    ACTIONS(82), 1,
      anon_sym_vastart,
    ACTIONS(85), 1,
      anon_sym_call,
    STATE(29), 1,
      sym_call_expr,
    STATE(72), 1,
      sym_store_opcode,
    STATE(11), 2,
      sym_instruction,
      aux_sym_block_repeat2,
    ACTIONS(88), 4,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
    STATE(30), 5,
      sym_assign_inst,
      sym_store_inst,
      sym_blit_inst,
      sym_vastart_inst,
      sym_call_inst,
    ACTIONS(76), 6,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 19,
      sym_temp_ident,
      sym_label,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_phi_repeat1,
    ACTIONS(92), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_temp_ident,
    STATE(14), 2,
      sym_phi,
      aux_sym_block_repeat1,
    ACTIONS(100), 13,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [376] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 1,
      anon_sym_env,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(101), 1,
      sym_abi_type,
    STATE(154), 1,
      sym_call_arg,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [416] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      anon_sym_env,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(163), 1,
      sym_parameter,
    STATE(224), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_phi_repeat1,
    ACTIONS(122), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [482] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(118), 1,
      anon_sym_env,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_parameter,
    STATE(224), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_phi_repeat1,
    ACTIONS(128), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [548] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(118), 1,
      anon_sym_env,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_parameter,
    STATE(224), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [588] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(118), 1,
      anon_sym_env,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_parameter,
    STATE(224), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 15,
      sym_temp_ident,
      anon_sym_COMMA,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [649] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(112), 1,
      anon_sym_env,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(101), 1,
      sym_abi_type,
    STATE(195), 1,
      sym_call_arg,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 15,
      sym_temp_ident,
      anon_sym_COMMA,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [707] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(118), 1,
      anon_sym_env,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(190), 1,
      sym_parameter,
    STATE(224), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [764] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_type,
    ACTIONS(143), 1,
      anon_sym_data,
    ACTIONS(146), 1,
      anon_sym_function,
    ACTIONS(152), 1,
      anon_sym_section,
    ACTIONS(149), 2,
      anon_sym_export,
      anon_sym_thread,
    STATE(92), 2,
      sym_linkage,
      aux_sym_data_definition_repeat1,
    STATE(27), 5,
      sym__definition,
      sym_type_definition,
      sym_data_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [1018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [1058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [1078] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(9), 1,
      anon_sym_data,
    ACTIONS(11), 1,
      anon_sym_function,
    ACTIONS(15), 1,
      anon_sym_section,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_export,
      anon_sym_thread,
    STATE(92), 2,
      sym_linkage,
      aux_sym_data_definition_repeat1,
    STATE(27), 5,
      sym__definition,
      sym_type_definition,
      sym_data_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [1132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 14,
      sym_temp_ident,
      anon_sym_storew,
      anon_sym_storel,
      anon_sym_stores,
      anon_sym_stored,
      anon_sym_storeb,
      anon_sym_storeh,
      anon_sym_blit,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      sym_hlt,
  [1172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(191), 1,
      sym_global_ident,
    STATE(244), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [1203] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    ACTIONS(193), 1,
      sym_global_ident,
    STATE(232), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [1234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    STATE(74), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [1262] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    STATE(2), 1,
      sym_abi_type,
    STATE(4), 1,
      sym_sub_type,
    STATE(6), 1,
      sym_base_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [1292] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_extended_type,
    STATE(152), 1,
      sym_type_member,
    STATE(153), 1,
      aux_sym_type_body_repeat2,
    STATE(222), 1,
      sym_type_body,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1322] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_extended_type,
    STATE(152), 1,
      sym_type_member,
    STATE(153), 1,
      aux_sym_type_body_repeat2,
    STATE(202), 1,
      sym_type_body,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1352] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_type_ident,
    ACTIONS(106), 1,
      anon_sym_s,
    STATE(2), 1,
      sym_abi_type,
    STATE(4), 2,
      sym_base_type,
      sym_sub_type,
    ACTIONS(104), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(108), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [1380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_extended_type,
    STATE(194), 1,
      sym_type_member,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_extended_type,
    STATE(194), 1,
      sym_type_member,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_extended_type,
    STATE(194), 1,
      sym_type_member,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_z,
    STATE(111), 1,
      sym_extended_type,
    STATE(171), 1,
      sym_data_item,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_z,
    STATE(111), 1,
      sym_extended_type,
    STATE(155), 1,
      sym_data_item,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1485] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_z,
    STATE(111), 1,
      sym_extended_type,
    STATE(138), 1,
      sym_data_item,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1506] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    ACTIONS(211), 2,
      sym_label,
      anon_sym_RBRACE,
    STATE(197), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(209), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1527] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_z,
    STATE(111), 1,
      sym_extended_type,
    STATE(174), 1,
      sym_data_item,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_z,
    STATE(111), 1,
      sym_extended_type,
    STATE(192), 1,
      sym_data_item,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_extended_type,
    STATE(194), 1,
      sym_type_member,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_extended_type,
    STATE(162), 1,
      sym_type_member,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_extended_type,
    STATE(194), 1,
      sym_type_member,
    ACTIONS(197), 6,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
      anon_sym_b,
      anon_sym_h,
  [1626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(65), 2,
      sym__data_value,
      aux_sym_data_item_repeat1,
    ACTIONS(217), 4,
      sym_global_ident,
      sym_integer,
      sym_float,
      sym_string,
  [1644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(65), 2,
      sym__data_value,
      aux_sym_data_item_repeat1,
    ACTIONS(222), 4,
      sym_global_ident,
      sym_integer,
      sym_float,
      sym_string,
  [1662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(211), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(236), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(41), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(238), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(184), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(240), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(24), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(242), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_section,
    ACTIONS(244), 2,
      anon_sym_data,
      anon_sym_function,
    ACTIONS(246), 2,
      anon_sym_export,
      anon_sym_thread,
    STATE(76), 2,
      sym_linkage,
      aux_sym_data_definition_repeat1,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(40), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(254), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(32), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(260), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [1926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(39), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(268), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(44), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(270), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(37), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(272), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(210), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(274), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [1994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(38), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(276), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(226), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(278), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(227), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(280), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2045] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_section,
    ACTIONS(282), 1,
      anon_sym_data,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(13), 2,
      anon_sym_export,
      anon_sym_thread,
    STATE(76), 2,
      sym_linkage,
      aux_sym_data_definition_repeat1,
  [2066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(215), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(288), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(36), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(290), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(26), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(294), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(34), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(296), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(217), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(300), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(186), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(302), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(45), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(304), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_thread,
    STATE(221), 2,
      sym__value,
      sym_thread_local,
    ACTIONS(310), 4,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      sym_global_ident,
      sym_integer,
      sym_float,
      sym_string,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 2,
      sym__data_value,
      aux_sym_data_item_repeat1,
    ACTIONS(322), 4,
      sym_global_ident,
      sym_integer,
      sym_float,
      sym_string,
  [2345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_string,
    ACTIONS(326), 5,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 5,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
      anon_sym_thread,
  [2370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(238), 1,
      sym_base_type,
    ACTIONS(104), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [2383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 5,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
      anon_sym_thread,
  [2405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 5,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
      anon_sym_thread,
  [2416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 5,
      anon_sym_data,
      anon_sym_function,
      anon_sym_export,
      anon_sym_thread,
      anon_sym_section,
  [2427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 5,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
      anon_sym_thread,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 5,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
      anon_sym_thread,
  [2449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      sym_global_ident,
      sym_temp_ident,
      sym_integer,
      sym_float,
      anon_sym_thread,
  [2460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_label,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_function_definition_repeat1,
  [2655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_data_definition_repeat2,
  [2668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_data_definition_repeat2,
  [2681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_data_definition_repeat2,
  [2694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(133), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_call_expr_repeat1,
  [2718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(131), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_type_body_repeat1,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_definition_repeat1,
  [2755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
    ACTIONS(399), 1,
      anon_sym_align,
    STATE(203), 1,
      sym_align_spec,
  [2768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_align,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_align_spec,
  [2781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_call_expr_repeat1,
  [2794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      aux_sym_data_definition_repeat2,
  [2807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      aux_sym_type_body_repeat2,
  [2820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_align,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_align_spec,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(123), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_integer,
    ACTIONS(418), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_type_body_repeat1,
  [2868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      aux_sym_type_body_repeat2,
  [2881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_call_expr_repeat1,
  [2894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_data_definition_repeat2,
  [2907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(129), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [2918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_definition_repeat1,
  [2931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_type_body_repeat1,
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_function_definition_repeat1,
  [2957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_function_definition_repeat1,
  [2970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_type_body_repeat1,
  [2983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_type_body_repeat1,
  [2996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_definition_repeat1,
  [3009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(130), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [3020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(132), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [3031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      aux_sym_data_definition_repeat2,
  [3044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_definition_repeat1,
  [3057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(127), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(122), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [3079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_definition_repeat1,
  [3092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_data_definition_repeat2,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(126), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [3116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(134), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [3127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym_data_definition_repeat2,
  [3140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_definition_repeat1,
  [3153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      aux_sym_data_definition_repeat2,
  [3166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(124), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [3177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_label,
    STATE(128), 2,
      sym_block,
      aux_sym_function_definition_repeat2,
  [3188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_label,
    STATE(19), 1,
      sym_phi_arg,
  [3198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      sym_label,
      anon_sym_RBRACE,
  [3206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      sym_label,
      anon_sym_RBRACE,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_label,
    STATE(22), 1,
      sym_phi_arg,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym_label,
      anon_sym_RBRACE,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      sym_label,
      anon_sym_RBRACE,
  [3280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      sym_label,
      anon_sym_RBRACE,
  [3296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      sym_label,
      anon_sym_RBRACE,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      sym_label,
      anon_sym_RBRACE,
  [3368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
  [3383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
  [3390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LBRACE,
  [3404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_EQ,
  [3418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
  [3425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COMMA,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
  [3446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_integer,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_COMMA,
  [3474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
  [3488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
  [3495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
  [3502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
  [3509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
  [3516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [3523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
  [3530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_temp_ident,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
  [3544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
  [3551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_type_ident,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_integer,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_integer,
  [3586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_global_ident,
  [3593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
  [3607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_EQ,
  [3614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_global_ident,
  [3621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_label,
  [3628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_phi,
  [3635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_EQ,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_label,
  [3663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_global_ident,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_global_ident,
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_label,
  [3691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_EQ,
  [3705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
  [3712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
  [3719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_EQ,
  [3726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
  [3733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_string,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_global_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 299,
  [SMALL_STATE(13)] = 324,
  [SMALL_STATE(14)] = 350,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 456,
  [SMALL_STATE(18)] = 482,
  [SMALL_STATE(19)] = 522,
  [SMALL_STATE(20)] = 548,
  [SMALL_STATE(21)] = 588,
  [SMALL_STATE(22)] = 628,
  [SMALL_STATE(23)] = 649,
  [SMALL_STATE(24)] = 686,
  [SMALL_STATE(25)] = 707,
  [SMALL_STATE(26)] = 744,
  [SMALL_STATE(27)] = 764,
  [SMALL_STATE(28)] = 798,
  [SMALL_STATE(29)] = 818,
  [SMALL_STATE(30)] = 838,
  [SMALL_STATE(31)] = 858,
  [SMALL_STATE(32)] = 878,
  [SMALL_STATE(33)] = 898,
  [SMALL_STATE(34)] = 918,
  [SMALL_STATE(35)] = 938,
  [SMALL_STATE(36)] = 958,
  [SMALL_STATE(37)] = 978,
  [SMALL_STATE(38)] = 998,
  [SMALL_STATE(39)] = 1018,
  [SMALL_STATE(40)] = 1038,
  [SMALL_STATE(41)] = 1058,
  [SMALL_STATE(42)] = 1078,
  [SMALL_STATE(43)] = 1112,
  [SMALL_STATE(44)] = 1132,
  [SMALL_STATE(45)] = 1152,
  [SMALL_STATE(46)] = 1172,
  [SMALL_STATE(47)] = 1203,
  [SMALL_STATE(48)] = 1234,
  [SMALL_STATE(49)] = 1262,
  [SMALL_STATE(50)] = 1292,
  [SMALL_STATE(51)] = 1322,
  [SMALL_STATE(52)] = 1352,
  [SMALL_STATE(53)] = 1380,
  [SMALL_STATE(54)] = 1401,
  [SMALL_STATE(55)] = 1422,
  [SMALL_STATE(56)] = 1443,
  [SMALL_STATE(57)] = 1464,
  [SMALL_STATE(58)] = 1485,
  [SMALL_STATE(59)] = 1506,
  [SMALL_STATE(60)] = 1527,
  [SMALL_STATE(61)] = 1548,
  [SMALL_STATE(62)] = 1569,
  [SMALL_STATE(63)] = 1590,
  [SMALL_STATE(64)] = 1608,
  [SMALL_STATE(65)] = 1626,
  [SMALL_STATE(66)] = 1644,
  [SMALL_STATE(67)] = 1662,
  [SMALL_STATE(68)] = 1675,
  [SMALL_STATE(69)] = 1688,
  [SMALL_STATE(70)] = 1701,
  [SMALL_STATE(71)] = 1714,
  [SMALL_STATE(72)] = 1727,
  [SMALL_STATE(73)] = 1744,
  [SMALL_STATE(74)] = 1761,
  [SMALL_STATE(75)] = 1778,
  [SMALL_STATE(76)] = 1795,
  [SMALL_STATE(77)] = 1814,
  [SMALL_STATE(78)] = 1827,
  [SMALL_STATE(79)] = 1844,
  [SMALL_STATE(80)] = 1857,
  [SMALL_STATE(81)] = 1870,
  [SMALL_STATE(82)] = 1887,
  [SMALL_STATE(83)] = 1900,
  [SMALL_STATE(84)] = 1913,
  [SMALL_STATE(85)] = 1926,
  [SMALL_STATE(86)] = 1943,
  [SMALL_STATE(87)] = 1960,
  [SMALL_STATE(88)] = 1977,
  [SMALL_STATE(89)] = 1994,
  [SMALL_STATE(90)] = 2011,
  [SMALL_STATE(91)] = 2028,
  [SMALL_STATE(92)] = 2045,
  [SMALL_STATE(93)] = 2066,
  [SMALL_STATE(94)] = 2079,
  [SMALL_STATE(95)] = 2096,
  [SMALL_STATE(96)] = 2113,
  [SMALL_STATE(97)] = 2126,
  [SMALL_STATE(98)] = 2143,
  [SMALL_STATE(99)] = 2160,
  [SMALL_STATE(100)] = 2173,
  [SMALL_STATE(101)] = 2190,
  [SMALL_STATE(102)] = 2207,
  [SMALL_STATE(103)] = 2224,
  [SMALL_STATE(104)] = 2237,
  [SMALL_STATE(105)] = 2250,
  [SMALL_STATE(106)] = 2267,
  [SMALL_STATE(107)] = 2280,
  [SMALL_STATE(108)] = 2293,
  [SMALL_STATE(109)] = 2306,
  [SMALL_STATE(110)] = 2319,
  [SMALL_STATE(111)] = 2331,
  [SMALL_STATE(112)] = 2345,
  [SMALL_STATE(113)] = 2359,
  [SMALL_STATE(114)] = 2370,
  [SMALL_STATE(115)] = 2383,
  [SMALL_STATE(116)] = 2394,
  [SMALL_STATE(117)] = 2405,
  [SMALL_STATE(118)] = 2416,
  [SMALL_STATE(119)] = 2427,
  [SMALL_STATE(120)] = 2438,
  [SMALL_STATE(121)] = 2449,
  [SMALL_STATE(122)] = 2460,
  [SMALL_STATE(123)] = 2474,
  [SMALL_STATE(124)] = 2488,
  [SMALL_STATE(125)] = 2502,
  [SMALL_STATE(126)] = 2516,
  [SMALL_STATE(127)] = 2530,
  [SMALL_STATE(128)] = 2544,
  [SMALL_STATE(129)] = 2558,
  [SMALL_STATE(130)] = 2572,
  [SMALL_STATE(131)] = 2586,
  [SMALL_STATE(132)] = 2600,
  [SMALL_STATE(133)] = 2614,
  [SMALL_STATE(134)] = 2628,
  [SMALL_STATE(135)] = 2642,
  [SMALL_STATE(136)] = 2655,
  [SMALL_STATE(137)] = 2668,
  [SMALL_STATE(138)] = 2681,
  [SMALL_STATE(139)] = 2694,
  [SMALL_STATE(140)] = 2705,
  [SMALL_STATE(141)] = 2718,
  [SMALL_STATE(142)] = 2729,
  [SMALL_STATE(143)] = 2742,
  [SMALL_STATE(144)] = 2755,
  [SMALL_STATE(145)] = 2768,
  [SMALL_STATE(146)] = 2781,
  [SMALL_STATE(147)] = 2794,
  [SMALL_STATE(148)] = 2807,
  [SMALL_STATE(149)] = 2820,
  [SMALL_STATE(150)] = 2833,
  [SMALL_STATE(151)] = 2844,
  [SMALL_STATE(152)] = 2855,
  [SMALL_STATE(153)] = 2868,
  [SMALL_STATE(154)] = 2881,
  [SMALL_STATE(155)] = 2894,
  [SMALL_STATE(156)] = 2907,
  [SMALL_STATE(157)] = 2918,
  [SMALL_STATE(158)] = 2931,
  [SMALL_STATE(159)] = 2944,
  [SMALL_STATE(160)] = 2957,
  [SMALL_STATE(161)] = 2970,
  [SMALL_STATE(162)] = 2983,
  [SMALL_STATE(163)] = 2996,
  [SMALL_STATE(164)] = 3009,
  [SMALL_STATE(165)] = 3020,
  [SMALL_STATE(166)] = 3031,
  [SMALL_STATE(167)] = 3044,
  [SMALL_STATE(168)] = 3057,
  [SMALL_STATE(169)] = 3068,
  [SMALL_STATE(170)] = 3079,
  [SMALL_STATE(171)] = 3092,
  [SMALL_STATE(172)] = 3105,
  [SMALL_STATE(173)] = 3116,
  [SMALL_STATE(174)] = 3127,
  [SMALL_STATE(175)] = 3140,
  [SMALL_STATE(176)] = 3153,
  [SMALL_STATE(177)] = 3166,
  [SMALL_STATE(178)] = 3177,
  [SMALL_STATE(179)] = 3188,
  [SMALL_STATE(180)] = 3198,
  [SMALL_STATE(181)] = 3206,
  [SMALL_STATE(182)] = 3214,
  [SMALL_STATE(183)] = 3222,
  [SMALL_STATE(184)] = 3230,
  [SMALL_STATE(185)] = 3238,
  [SMALL_STATE(186)] = 3248,
  [SMALL_STATE(187)] = 3256,
  [SMALL_STATE(188)] = 3264,
  [SMALL_STATE(189)] = 3272,
  [SMALL_STATE(190)] = 3280,
  [SMALL_STATE(191)] = 3288,
  [SMALL_STATE(192)] = 3296,
  [SMALL_STATE(193)] = 3304,
  [SMALL_STATE(194)] = 3312,
  [SMALL_STATE(195)] = 3320,
  [SMALL_STATE(196)] = 3328,
  [SMALL_STATE(197)] = 3336,
  [SMALL_STATE(198)] = 3344,
  [SMALL_STATE(199)] = 3352,
  [SMALL_STATE(200)] = 3360,
  [SMALL_STATE(201)] = 3368,
  [SMALL_STATE(202)] = 3376,
  [SMALL_STATE(203)] = 3383,
  [SMALL_STATE(204)] = 3390,
  [SMALL_STATE(205)] = 3397,
  [SMALL_STATE(206)] = 3404,
  [SMALL_STATE(207)] = 3411,
  [SMALL_STATE(208)] = 3418,
  [SMALL_STATE(209)] = 3425,
  [SMALL_STATE(210)] = 3432,
  [SMALL_STATE(211)] = 3439,
  [SMALL_STATE(212)] = 3446,
  [SMALL_STATE(213)] = 3453,
  [SMALL_STATE(214)] = 3460,
  [SMALL_STATE(215)] = 3467,
  [SMALL_STATE(216)] = 3474,
  [SMALL_STATE(217)] = 3481,
  [SMALL_STATE(218)] = 3488,
  [SMALL_STATE(219)] = 3495,
  [SMALL_STATE(220)] = 3502,
  [SMALL_STATE(221)] = 3509,
  [SMALL_STATE(222)] = 3516,
  [SMALL_STATE(223)] = 3523,
  [SMALL_STATE(224)] = 3530,
  [SMALL_STATE(225)] = 3537,
  [SMALL_STATE(226)] = 3544,
  [SMALL_STATE(227)] = 3551,
  [SMALL_STATE(228)] = 3558,
  [SMALL_STATE(229)] = 3565,
  [SMALL_STATE(230)] = 3572,
  [SMALL_STATE(231)] = 3579,
  [SMALL_STATE(232)] = 3586,
  [SMALL_STATE(233)] = 3593,
  [SMALL_STATE(234)] = 3600,
  [SMALL_STATE(235)] = 3607,
  [SMALL_STATE(236)] = 3614,
  [SMALL_STATE(237)] = 3621,
  [SMALL_STATE(238)] = 3628,
  [SMALL_STATE(239)] = 3635,
  [SMALL_STATE(240)] = 3642,
  [SMALL_STATE(241)] = 3649,
  [SMALL_STATE(242)] = 3656,
  [SMALL_STATE(243)] = 3663,
  [SMALL_STATE(244)] = 3670,
  [SMALL_STATE(245)] = 3677,
  [SMALL_STATE(246)] = 3684,
  [SMALL_STATE(247)] = 3691,
  [SMALL_STATE(248)] = 3698,
  [SMALL_STATE(249)] = 3705,
  [SMALL_STATE(250)] = 3712,
  [SMALL_STATE(251)] = 3719,
  [SMALL_STATE(252)] = 3726,
  [SMALL_STATE(253)] = 3733,
  [SMALL_STATE(254)] = 3740,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abi_type, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abi_type, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_type, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_type, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(207),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(113),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(105),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(102),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(100),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thread_local, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 2), SHIFT_REPEAT(185),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(241),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 6, .production_id = 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 5, .production_id = 9),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi_arg, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_op, 2, .production_id = 8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_inst, 4, .production_id = 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_inst, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 4, .production_id = 8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blit_inst, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc_op, 2, .production_id = 8),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert_op, 2, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_op, 4, .production_id = 8),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vaarg_op, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_op, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_op, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store_inst, 4, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vastart_inst, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_item_repeat1, 2), SHIFT_REPEAT(65),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_item_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_item, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_definition, 8, .production_id = 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 6, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_definition_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(115),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_definition_repeat1, 2), SHIFT_REPEAT(253),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_definition, 6, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_definition, 9, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_definition, 7, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 7, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_definition, 7, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_definition, 8, .production_id = 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extended_type, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linkage, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store_opcode, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linkage, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc_opcode, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_opcode, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linkage, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_opcode, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert_opcode, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(8),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_definition_repeat2, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_definition_repeat2, 2), SHIFT_REPEAT(61),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(23),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_body_repeat2, 2), SHIFT_REPEAT(63),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_body_repeat2, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_body_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_body_repeat1, 2), SHIFT_REPEAT(64),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(25),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jnz, 6),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_body_repeat2, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_body_repeat2, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arg, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arg, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_body_repeat2, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_arg, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_spec, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [592] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_qbe(void) {
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
