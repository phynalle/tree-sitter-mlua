[
  "script"
  "extends"
  "static"
  "property"
  "constructor"
  "method"
] @keyword

(block_end) @keyword

[
  (boolean_literal)
  (nil_literal)
] @constant.builtin

(number_literal) @number

(string_literal) @string

[
  ","
] @punctuation.delimiter

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

(type_identifier) @type

(annotation) @attribute

(parameter
  type: (type_identifier) @type
  name: (identifier) @variable.parameter)
