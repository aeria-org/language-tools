const PREC = {
  comment: 1,
}

const $block = (rule) => seq('{', rule, '}')
const $attribute = (name, arg) => seq(`@${name}`, '(', arg || '', ')')
const $commaSep1 = (rule) => seq(rule, repeat(seq(',', rule)))
const $commaSep = (rule) => optional($commaSep1(rule))
const $array = (rule) => seq('[', $commaSep(rule), ']')

module.exports = grammar({
  name: 'aeria',
  extras: $ => [
    $.comment,
    /[\s\ufeff\u2060\u200b\u00a0]/,
  ],
  rules: {
    program: $ => repeat(
      $.declaration,
    ),
    comment: $ => prec(PREC.comment, token(
      seq('//', /.*/),
    )),
    number: $ => /[0-9]+/,
    boolean: $ => choice('true', 'false'),
    quoted_string: $ => token(seq('"', /[^"\n]+/, '"')),
    array_identifier: $ => '[]',
    array: $ => $array(
      choice(
        $.number,
        $.quoted_string,
        $.boolean,
      ),
    ),
    string_array: $ => $array($.quoted_string),
    word: $ => /[a-zA-Z]([a-zA-Z0-9]|_)+/,
    collection_name: $ => alias($.word, 'collection_name'),
    attribute: $ => seq(
      '@',
      $.word,
      optional(
        seq(
          '(',
          choice(
            $.array,
            $.number,
          ),
          ')',
        ),
      ),
    ),
    binary_operator: $ => choice(
      '==',
      '!=',
      '>=',
      '<=',
      'in',
      '>',
      '<',
    ),
    logical_concatenator_operator: $ => choice(
      '&&',
      '||',
    ),
    binary_operation: $ => seq(
      field('property_name', $.word),
      $.binary_operator,
      choice(
        $.number,
        $.boolean,
        $.quoted_string,
      ),
    ),
    condition_expression: $ => seq(
      $.binary_operation,
      optional(
        seq(
          $.logical_concatenator_operator,
          $.binary_operation,
        ),
      ),
    ),
    condition: $ => $attribute('condition', $.condition_expression),
    required_block: $ => $block(
      repeat(
        seq(
          $.word,
          optional($.condition),
        ),
      ),
    ),
    writable_block: $ => repeat1($.word),
    immutable_block: $ => choice(
      $.boolean,
      $block(
        repeat($.word),
      ),
    ),
    schema_properties: $ => repeat1(
      choice(
        seq('properties', $.properties_block),
        seq('writable', $.writable_block),
        seq('required', $.required_block),
        seq('immutable', $.immutable_block),
      ),
    ),
    properties_column_type: $ => choice(
      'str',
      'num',
      'int',
      'bool',
      'enum',
      'const',
    ),
    properties_column: $ => seq(
      $.word,
      optional($.array_identifier),
      choice(
        $.properties_column_type,
        $.collection_name,
        $block($.schema_properties),
      ),
      repeat($.attribute),
    ),
    properties_block: $ => $block(
      repeat($.properties_column),
    ),
    collection_icon: $ => seq(
      'icon',
      field('name', $.quoted_string),
    ),
    collection_keyed_list: $ => seq(
      choice(
        'form',
        'filters',
        'immutable',
        'indexes',
        'presets',
        'required',
        'table',
        'tableMeta',
        'writable',
      ),
      $block(
        repeat(
          seq(
            $.word,
            repeat($.attribute),
          ),
        ),
      ),
    ),
    collection_functions: $ => seq(
      'functions',
      $block(
        repeat(
          seq(
            $.word,
            optional(token.immediate('?')),
            repeat($.attribute),
          ),
        ),
      ),
    ),
    collection: $ => seq(
      field('type', 'collection'),
      field('name', $.collection_name),
      $block(
        repeat(
          choice(
            $.collection_icon,
            $.collection_keyed_list,
            $.collection_functions,
            seq('properties', $.properties_block),
          ),
        ),
      ),
    ),
    declaration: $ => choice(
      $.collection,
    ),
  },
})
