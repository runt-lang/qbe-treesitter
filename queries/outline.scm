; QBE IL Outline
; Type definitions appear in outline
(type_definition
  name: (type_ident) @name) @item

; Data definitions appear in outline
(data_definition
  name: (global_ident) @name) @item

; Function definitions appear in outline
(function_definition
  name: (global_ident) @name) @item

; Blocks within functions (labels)
(block
  label: (label) @name) @item
