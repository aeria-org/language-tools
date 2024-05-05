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
    /[\s\ufeff\u2060\u200b\u00a0]/
  ],
  rules: {
    program: $ => repeat(
      $.declaration
    ),
    comment: $ => prec(PREC.comment, token(
      seq('--', /.*/)
    )),

    number: $ => /[0-9]+/,
    boolean: $ => choice('true', 'false'),
    quoted_string: $ => token(seq('"', /[^"\n]+/, '"')),
    boolean: $ => choice('true', 'false'),
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
    capitalized_word: $ => /[A-Z]([a-zA-Z0-9]|_)+/,

    property_str_attribute: $ => choice(
      $attribute('minLength', $.number),
      $attribute('maxLength', $.number),
    ),
    property_str_type: $ => 'str',
    property_str: $ => seq(
      field('type', $.property_str_type),
      repeat($.property_str_attribute),
    ),

    property_num_attribute: $ => choice(
      $attribute('minimum', $.number),
      $attribute('maximum', $.number),
      $attribute('exclusiveMinimum', $.number),
      $attribute('exclusiveMaximum', $.number),
    ),
    property_num_type: $ => choice('int', 'num'),
    property_num: $ => seq(
      field('type', $.property_num_type),
      repeat($.property_num_attribute)
    ),

    property_enum_attribute: $ => choice(
      $attribute('options', $.string_array),
    ),
    property_enum_type: $ => 'enum',
    property_enum: $ => seq(
      field('type', $.property_enum_type),
      repeat($.property_enum_attribute)
    ),

    property_obj: $ => $block($.schema_properties),
    property_file_attribute: $ => choice(
      $attribute(
        'accept',
        choice(
          $.quoted_string,
          $.string_array,
        )
      ),
    ),
    property_file_type: $ => 'File',
    property_file: $ => seq(
      field('type', $.property_file_type),
      repeat($.property_file_attribute)
    ),

    property_ref_attribute: $ => choice(
      $attribute('indexes', $.string_array),
    ),
    property_ref: $ => seq(
      field('type', $.capitalized_word),
      repeat($.property_ref_attribute)
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
        $.quoted_string
      )
    ),
    condition_expression: $ => seq(
      $.binary_operation,
      optional(
        seq(
          $.logical_concatenator_operator,
          $.binary_operation
        )
      )
    ),
    condition: $ => $attribute('condition', $.condition_expression),

    property_column: $ => seq(
      field('name', $.word),
      optional($.array_identifier),
      choice(
        $.property_str,
        $.property_num,
        $.property_enum,
        $.property_obj,
        $.property_file,
        $.property_ref,
      )
    ),

    properties_keyword: $ => 'properties',
    required_keyword: $ => 'required',
    writable_keyword: $ => 'writable',
    immutable_keyword: $ => 'immutable',
    functions_keyword: $ => 'functions',

    properties_block: $ => $block(
      repeat($.property_column)
    ),
    toplevel_required_block: $ => $block(
      repeat(
        seq(
          $.word,
          optional($.condition)
        )
      )
    ),
    required_block: $ => repeat1($.word),
    writable_block: $ => repeat1($.word),
    immutable_block: $ => choice(
      $.boolean,
      $block(
        repeat($.word)
      ),
    ),
    schema_properties: $ => repeat1(
      choice(
        seq($.properties_keyword, $.properties_block),
        seq($.writable_keyword, $.writable_block),
        seq($.required_keyword, $.required_block),
        seq($.immutable_keyword, $.immutable_block),
      )
    ),
    builtin_function: $ => choice(
      'get',
      'getAll',
      'insert',
      'remove',
      'removeAll',
      'removeFile',
      'upload',
    ),
    functions_block: $ => $block(
      repeat1(
        choice(
          $.builtin_function,
          $.word,
        )
      )
    ),

    collection_keyword: $ => 'collection',
    collection_block: $ => $block(
      repeat1(
        choice(
          seq($.properties_keyword, $.properties_block),
          seq($.writable_keyword, $.writable_block),
          seq($.required_keyword, $.toplevel_required_block),
          seq($.immutable_keyword, $.immutable_block),
          seq($.functions_keyword, $.functions_block),
        )
      )
    ),
    declaration: $ => choice(
      seq(
        field('type', $.collection_keyword),
        field('name', $.capitalized_word),
        $.collection_block
      )
    ),
  },
})
