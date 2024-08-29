[
  "script"
  "extends"
  "static"
  "property"
  "constructor"
  "method"
] @keyword

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
] @punctuation.bracket

(type_identifier) @type

(annotation name: (identifier) @attribute)
"@" @operator

