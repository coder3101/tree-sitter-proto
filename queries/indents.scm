[
  (message_body)
  (enum_body)
  (oneof)
  (service)
  (block_lit)
] @indent.begin

; rpc's body is optional (it can end in ";" instead of "{ }"), so anchor on
; the brace itself rather than the whole node to avoid indenting past a
; semicolon-terminated rpc.
(rpc
  "{" @indent.begin)

"}" @indent.end @indent.branch

; A block_lit may be delimited by angle brackets instead of braces. Anchor on
; the node so this doesn't fire for the ">" that closes a map<K, V> type.
(block_lit
  ">" @indent.end @indent.branch)

[
  (ERROR)
  (comment)
] @indent.auto
