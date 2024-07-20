const PREC = {
  comment: 1,
}

const $block = (rule) => seq('{', rule, '}')
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
    constant: $ => choice(
      $.number,
      $.boolean,
      $.quoted_string,
    ),
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
      $.constant,
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
    attribute: $ => seq(
      '@',
      $.word,
      optional(
        seq(
          '(',
          choice(
            $.array,
            $.constant,
          ),
          ')',
        ),
      ),
    ),
    condition: $ => seq(
      '@condition',
      seq(
        '(',
        $.condition_expression,
        ')',
      ),
    ),
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
        seq(
          choice(
            'form',
            'immutable',
            'required',
            'writable',
          ),
          $block(
            repeat(
              seq(
                $.word,
                repeat($.condition),
              ),
            ),
          ),
        ),
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
      field('name', $.word),
      optional($.array_identifier),
      choice(
        field('type', $.properties_column_type),
        field('type', $.collection_name),
        $block($.schema_properties),
      ),
      repeat($.attribute),
    ),
    properties_block: $ => $block(
      repeat($.properties_column),
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
    collection_security_logging: $ => seq(
      'logging',
      $block(
        repeat(
          choice(
            seq('strategy', $.quoted_string),
          ),
        ),
      ),
    ),
    collection_security_rate_limiting: $ => seq(
      'rateLimiting',
      $block(
        repeat(
          choice(
            seq('strategy', $.quoted_string),
          ),
        ),
      ),
    ),
    collection_security: $ => seq(
      'security',
      $block(
        repeat(
          choice(
            seq(
              'functions',
              $block(
                repeat(
                  choice(
                    seq(
                      $.word,
                      $block(
                        repeat(
                          choice(
                            $.collection_security_logging,
                            $.collection_security_rate_limiting,
                          ),
                        ),
                      ),
                    )
                  ),
                ),
              ),
            ),
          ),
        ),
      ),
    ),
    collection_search: $ => seq(
      'search',
      $block(
        repeat(
          choice(
            seq('placeholder', $.quoted_string),
            seq('indexes', $block(
              repeat1(
                $.word,
              ),
            )),
          ),
        ),
      ),
    ),
    collection_layout: $ => seq(
      'layout',
      $block(
        repeat(
          choice(
            seq('name', $.quoted_string),
            seq('options', $block(
              repeat1(
                choice(
                  seq('title', $.word),
                  seq('picture', $.word),
                  seq('badge', $.word),
                  seq('information', $.word),
                  seq('active', $.word),
                  seq('translateBadge', $.boolean),
                ),
              ),
            )),
          ),
        ),
      ),
    ),
    collection_modifiers: $ => seq(
      choice(
        'owned',
        'timestamps',
        'icon',
      ),
      $.constant,
    ),
    collection: $ => seq(
      field('type', 'collection'),
      field('name', $.collection_name),
      $block(
        repeat(
          choice(
            $.collection_modifiers,
            $.collection_keyed_list,
            $.collection_functions,
            $.collection_security,
            $.collection_search,
            $.collection_layout,
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
