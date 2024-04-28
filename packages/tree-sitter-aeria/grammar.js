const PREC = {
  comment: 1,
}

const $block = (rule) => seq('{', rule, '}')
const $attribute = (name, arg) => seq(`@${name}`, '(', arg, ')')
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
    string: $ => token(seq('"', /[^"\n]+/, '"')),
    boolean: $ => choice('true', 'false'),
    array_identifier: $ => '[]',
    array: $ => $array(
      choice(
        $.number,
        $.string,
        $.boolean,
      ),
    ),
    string_array: $ => $array($.string),

    declaration_name: $ => /[a-zA-Z]([a-zA-Z0-9]|_)+/,
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

    property_obj: $ => $block($.schema_properties),

    property_file_attribute: $ => choice(
      $attribute('accept', $.number),
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
      field('type', $.declaration_name),
      repeat($.property_ref_attribute)
    ),

    property_column: $ => seq(
      field('name', $.declaration_name),
      optional($.array_identifier),
      choice(
        $.property_str,
        $.property_num,
        $.property_obj,
        $.property_file,
        $.property_ref,
      )
    ),

    properties_block: $ => $block(
      repeat($.property_column)
    ),

    properties_keyword: $ => 'properties',
    schema_properties: $ => repeat1(
      choice(
        seq($.properties_keyword, $.properties_block),
      )
    ),

    collection_keyword: $ => 'collection',
    collection_block: $ => $block($.schema_properties),
    declaration: $ => choice(
      seq(
        field('type', $.collection_keyword),
        field('name', $.declaration_name),
        $.collection_block
      )
    ),
  },
})
