/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "mlua",

  rules: {
    source_file: $ => seq(
      optional($.annotation),
      'script',
       $.identifier,
       optional(seq('extends', $.identifier)),
       repeat(choice($.property, $.constructor, $.method)),
       'end'),

    identifier: _ => /[a-zA-Z_]\w*/,

    type_identifier: _ => /[a-zA-Z_]\w*/,

    annotation: $ => seq(
      '@',
      field('name', $.identifier),
      optional($.annotation_arguments),
    ),
    annotation_arguments: $ => seq(
      '(',
      sepBy(',', $.string_literal),
      optional(','),
      ')',
    ),

    property: $ => seq(
      optional($.annotation),
      optional('static'),
      'property',
      $.type_identifier,
      $.identifier,
      optional($.property_value),
    ),

    property_value: $ => seq('=', $._expression),
    
    constructor: $ => seq(
      'constructor',
      $.identifier,
      $.parameters,
      $.block,
    ),

    method: $ => seq(
      optional($.annotation),
      optional('static'),
      'method',
      $.type_identifier,
      $.identifier,
      $.parameters,
      $.block,
    ),

    parameters: $ => seq(
      '(',
      sepBy(',', seq($.type_identifier, $.identifier)),
      optional(','),
      ')',
    ),

    block: $ => seq(optional($.code), 'end'),

    code: _ => /.+/,

    _expression: $ => choice($._literal, $.identifier),

    _literal: $ => choice(
      $.string_literal,
      $.number_literal,
      $.boolean_literal,
      $.nil_literal,
      $.table_literal,
    ),

    _single_quote_string_literal: _ => /\'(.*)\'/,

    _double_quote_string_literal: _ => /\"(.*)\"/,

    string_literal: $ => choice($._single_quote_string_literal, $._double_quote_string_literal),

    number_literal: _ => /\d+/,

    boolean_literal: _ => choice('true', 'false'),

    nil_literal: _ => 'nil',

    table_literal: $ => seq(
      '{',
      sepBy(',', seq($._expression)),
      optional(','),
      '}',
    )
  },
});


/**
 * Creates a rule to match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}


/**
 * Creates a rule to optionally match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}

