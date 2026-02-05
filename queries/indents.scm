; QBE IL Indents
; Blocks increase indent
(type_definition
  "{" @indent
  "}" @outdent)

(data_definition
  "{" @indent
  "}" @outdent)

(function_definition
  "{" @indent
  "}" @outdent)

; Function parameters
(function_definition
  "(" @indent
  ")" @outdent)

; Call arguments
(call_expr
  "(" @indent
  ")" @outdent)
