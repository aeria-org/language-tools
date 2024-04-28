module.exports = grammar({
  name: 'aeria',
  extras: $ => [
    $.comment,
    /[\s\ufeff\u2060\u200b\u00a0]/
  ],
  rules: {
    comment: $ => prec(1, token(
      seq('--', /.*/)
    ))
  },
})
