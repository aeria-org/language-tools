(comment) @comment
(number) @number
(string) @string

(declaration name: (declaration_name) @type)
(property_column name: (declaration_name) @local.definition)

[
  (collection_keyword)
  (properties_keyword)
] @keyword.type

[
 (property_str_attribute)
 (property_num_attribute)
 (property_file_attribute)
 (property_ref_attribute)
] @attribute.builtin

[
 (property_str_type)
 (property_num_type)
 (property_file_type)
 (property_ref type: (declaration_name))
] @type.builtin

"," @punctuation.delimiter

[
 "("
 ")"
 "{"
 "}"
 "["
 "]"
] @punctuation.bracket

