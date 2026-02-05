; QBE IL Highlights
; Comments
(comment) @comment

; Keywords
[
  "type"
  "data"
  "function"
  "export"
  "thread"
  "section"
  "align"
  "env"
] @keyword

; Control flow
[
  "jmp"
  "jnz"
  "ret"
  "hlt"
  "phi"
  "call"
] @keyword.control

; Types
(base_type) @type.builtin

(extended_type) @type.builtin

(sub_type) @type.builtin

(abi_type) @type.builtin

; Type identifiers (user-defined types)
(type_ident) @type

; Operators - binary
(binary_opcode) @operator

; Operators - comparison
(compare_opcode) @operator

; Operators - conversion
(convert_opcode) @function.builtin

; Operators - memory
(load_opcode) @function.builtin

(store_opcode) @function.builtin

(alloc_opcode) @function.builtin

[
  "copy"
  "cast"
  "blit"
  "vastart"
  "vaarg"
  "neg"
] @function.builtin

; Identifiers
(global_ident) @variable.builtin

(temp_ident) @variable

; Labels
(label) @label

; Function definition
(function_definition
  name: (global_ident) @function)

; Type definition
(type_definition
  name: (type_ident) @type.definition)

; Data definition
(data_definition
  name: (global_ident) @constant)

; Call targets
(call_expr
  callee: (global_ident) @function.call)

; Literals
(integer) @number

(float) @number.float

(string) @string

; Punctuation
[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  ","
  "="
] @punctuation.delimiter

; Variadic
"..." @punctuation.special
