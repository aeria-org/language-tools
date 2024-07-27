const PREC = {
  comment: 1,
}

const $block = (rule) => seq('{', rule, '}')
const $commaSep1 = (rule) => seq(rule, repeat(seq(',', rule)))
const $commaSep = (rule) => optional($commaSep1(rule))

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
    word: $ => /[a-zA-Z]([a-zA-Z0-9]|_)+/,
    number: $ => /[0-9]+/,
    boolean: $ => choice('true', 'false'),
    quoted_string: $ => token(seq('"', /[^"\n]+/, '"')),
    constant: $ => choice(
      $.number,
      $.boolean,
      $.quoted_string,
    ),
    array_operator: $ => '[]',
    array: $ => seq(
      '[',
      $commaSep(
        choice(
          $.array,
          $.constant,
          $.dictionary,
          $.identifier,
        ),
      ),
      ']',
    ),
    dictionary: $ => seq(
      '{',
      repeat(
        seq(
          $.word,
          choice(
            $.array,
            $.constant,
            $.dictionary,
            $.identifier,
          ),
        ),
      ),
      '}',
    ),
    identifier: $ => alias($.word, 'identifier'),
    collection_name: $ => alias($.word, 'collection_name'),
    module_name: $ => alias($.word, 'module_name'),
    function_name: $ => alias($.word, 'function_name'),
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
      field('property_name', $.identifier),
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
                $.identifier,
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
      field('name', $.identifier),
      optional($.array_operator),
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
            $.identifier,
            repeat($.attribute),
          ),
        ),
      ),
    ),
    collection_filters_presets: $ => seq(
      'filtersPresets',
      $block(
        repeat(
          seq(
            $.identifier,
            $block(
              repeat(
                choice(
                  seq('label', $.quoted_string),
                  seq('filters', $.dictionary),
                ),
              ),
            ),
          )
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
                  seq('title', $.identifier),
                  seq('picture', $.identifier),
                  seq('badge', $.identifier),
                  seq('information', $.identifier),
                  seq('active', $.identifier),
                  seq('translateBadge', $.boolean),
                ),
              ),
            )),
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
                $.identifier,
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
    collection_functions: $ => seq(
      'functions',
      $block(
        repeat(
          seq(
            $.function_name,
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
                      $.function_name,
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
    collection: $ => seq(
      field('type', 'collection'),
      field('name', $.collection_name),
      optional(
        seq(
          'extends',
          field('module', $.module_name), token.immediate('.'),
          field('symbol', $.collection_name),
        ),
      ),
      $block(
        repeat(
          choice(
            seq('properties', $.properties_block),
            $.collection_modifiers,
            $.collection_keyed_list,
            $.collection_filters_presets,
            $.collection_layout,
            $.collection_search,
            $.collection_functions,
            $.collection_security,
          ),
        ),
      ),
    ),
    declaration: $ => choice(
      $.collection,
    ),
  },
})
