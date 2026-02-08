// Tree-sitter grammar for QBE IL
// https://c9x.me/compile/doc/il.html

module.exports = grammar({
  name: "qbe",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.type_definition, $.data_definition, $.function_definition),

    //=========================================================================
    // COMMENTS
    //=========================================================================

    comment: ($) => /#.*/,

    //=========================================================================
    // IDENTIFIERS & SIGILS
    //=========================================================================

    global_ident: ($) => /\$[a-zA-Z_.][a-zA-Z0-9_.]*/,
    temp_ident: ($) => /%[a-zA-Z_.][a-zA-Z0-9_.]*/,
    type_ident: ($) => /:[a-zA-Z_.][a-zA-Z0-9_.]*/,
    label: ($) => /@[a-zA-Z_.][a-zA-Z0-9_.]*/,

    //=========================================================================
    // LITERALS
    //=========================================================================

    integer: ($) => /-?[0-9]+/,
    float: ($) => /[sd]_-?[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?/,
    string: ($) => /"[^"]*"/,

    //=========================================================================
    // TYPES
    //=========================================================================

    base_type: ($) => choice("w", "l", "s", "d"),
    extended_type: ($) => choice("w", "l", "s", "d", "b", "h"),
    sub_type: ($) => choice("sb", "ub", "sh", "uh"),

    abi_type: ($) => choice($.base_type, $.type_ident, $.sub_type),

    //=========================================================================
    // TYPE DEFINITION
    //=========================================================================

    type_definition: ($) =>
      seq(
        "type",
        field("name", $.type_ident),
        "=",
        optional($.align_spec),
        "{",
        $.type_body,
        "}",
      ),

    align_spec: ($) => seq("align", $.integer),

    type_body: ($) =>
      choice(
        // Opaque type
        $.integer,
        // Regular struct
        seq(sep1($.type_member, ","), optional(",")),
        // Union
        repeat1(seq("{", sep1($.type_member, ","), optional(","), "}")),
      ),

    type_member: ($) => seq($.extended_type, optional($.integer)),

    //=========================================================================
    // DATA DEFINITION
    //=========================================================================

    data_definition: ($) =>
      seq(
        repeat($.linkage),
        "data",
        field("name", $.global_ident),
        "=",
        optional($.align_spec),
        "{",
        sep1($.data_item, ","),
        "}",
      ),

    data_item: ($) =>
      choice(seq($.extended_type, repeat1($._data_value)), seq("z", $.integer)),

    _data_value: ($) => choice($.integer, $.float, $.global_ident, $.string),

    //=========================================================================
    // FUNCTION DEFINITION
    //=========================================================================

    function_definition: ($) =>
      seq(
        repeat($.linkage),
        "function",
        optional(field("return_type", $.abi_type)),
        field("name", $.global_ident),
        "(",
        optional(sep1($.parameter, ",")),
        ")",
        "{",
        repeat1($.block),
        "}",
      ),

    parameter: ($) =>
      choice(seq($.abi_type, $.temp_ident), seq("env", $.temp_ident), "..."),

    //=========================================================================
    // LINKAGE
    //=========================================================================

    linkage: ($) =>
      choice("export", "thread", seq("section", $.string, optional($.string))),

    //=========================================================================
    // BLOCKS
    //=========================================================================

    block: ($) =>
      seq(
        field("label", $.label),
        repeat($.phi),
        repeat($.instruction),
        $.jump,
      ),

    //=========================================================================
    // PHI
    //=========================================================================

    phi: ($) =>
      seq(
        field("dest", $.temp_ident),
        "=",
        $.base_type,
        "phi",
        sep1($.phi_arg, ","),
      ),

    phi_arg: ($) => seq($.label, $._value),

    //=========================================================================
    // INSTRUCTIONS
    //=========================================================================

    instruction: ($) =>
      choice(
        $.assign_inst,
        $.store_inst,
        $.blit_inst,
        $.call_inst,
        $.vastart_inst,
      ),

    assign_inst: ($) =>
      seq(
        field("dest", $.temp_ident),
        "=",
        field("type", $.abi_type),
        field("op", $._operation),
      ),

    _operation: ($) =>
      choice(
        $.binary_op,
        $.unary_op,
        $.compare_op,
        $.convert_op,
        $.load_op,
        $.alloc_op,
        $.copy_op,
        $.cast_op,
        $.call_expr,
        $.vaarg_op,
      ),

    binary_op: ($) =>
      seq(field("op", $.binary_opcode), $._value, ",", $._value),

    binary_opcode: ($) =>
      choice(
        "add",
        "sub",
        "mul",
        "div",
        "udiv",
        "rem",
        "urem",
        "and",
        "or",
        "xor",
        "shl",
        "shr",
        "sar",
      ),

    unary_op: ($) => seq(field("op", "neg"), $._value),

    compare_op: ($) =>
      seq(field("op", $.compare_opcode), $._value, ",", $._value),

    compare_opcode: ($) =>
      choice(
        // Integer comparisons (w/l)
        "ceqw",
        "cnew",
        "csltw",
        "cslew",
        "csgtw",
        "csgew",
        "cultw",
        "culew",
        "cugtw",
        "cugew",
        "ceql",
        "cnel",
        "csltl",
        "cslel",
        "csgtl",
        "csgel",
        "cultl",
        "culel",
        "cugtl",
        "cugel",
        // Floating comparisons (s/d)
        "ceqs",
        "cnes",
        "clts",
        "cles",
        "cgts",
        "cges",
        "cos",
        "cuos",
        "ceqd",
        "cned",
        "cltd",
        "cled",
        "cgtd",
        "cged",
        "cod",
        "cuod",
      ),

    convert_op: ($) => seq(field("op", $.convert_opcode), $._value),

    convert_opcode: ($) =>
      choice(
        "extsb",
        "extub",
        "extsh",
        "extuh",
        "extsw",
        "extuw",
        "exts",
        "truncd",
        "stosi",
        "stoui",
        "dtosi",
        "dtoui",
        "swtof",
        "uwtof",
        "sltof",
        "ultof",
      ),

    load_op: ($) => seq(field("op", $.load_opcode), $._value),

    load_opcode: ($) =>
      choice(
        "loadw",
        "loadl",
        "loads",
        "loadd",
        "loadsw",
        "loaduw",
        "loadsb",
        "loadub",
        "loadsh",
        "loaduh",
      ),

    store_inst: ($) =>
      seq(field("op", $.store_opcode), $._value, ",", $._value),

    store_opcode: ($) =>
      choice("storew", "storel", "stores", "stored", "storeb", "storeh"),

    alloc_op: ($) => seq(field("op", $.alloc_opcode), $._value),

    alloc_opcode: ($) => choice("alloc4", "alloc8", "alloc16"),

    copy_op: ($) => seq("copy", $._value),

    cast_op: ($) => seq("cast", $._value),

    blit_inst: ($) => seq("blit", $._value, ",", $._value, ",", $.integer),

    vastart_inst: ($) => seq("vastart", $._value),

    vaarg_op: ($) => seq("vaarg", $._value),

    //=========================================================================
    // CALL
    //=========================================================================

    call_inst: ($) => $.call_expr,

    call_expr: ($) =>
      seq(
        "call",
        field("callee", $._value),
        "(",
        optional(sep1($.call_arg, ",")),
        ")",
      ),

    call_arg: ($) => choice(seq(optional("env"), $.abi_type, $._value), "..."),

    //=========================================================================
    // JUMPS
    //=========================================================================

    jump: ($) => choice($.jmp, $.jnz, $.ret, $.hlt),

    jmp: ($) => seq("jmp", $.label),

    jnz: ($) => seq("jnz", $._value, ",", $.label, ",", $.label),

    ret: ($) => seq("ret", optional($._value)),

    hlt: ($) => "hlt",

    //=========================================================================
    // VALUES
    //=========================================================================

    _value: ($) =>
      choice($.temp_ident, $.global_ident, $.integer, $.float, $.thread_local),

    thread_local: ($) => seq("thread", $.global_ident),
  },
});

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}
