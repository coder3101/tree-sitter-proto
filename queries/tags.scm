(package
  (full_ident) @name) @definition.module

(message
  (message_name
    (identifier) @name)) @definition.class

(group
  (message_name
    (identifier) @name)) @definition.class

(enum
  (enum_name
    (identifier) @name)) @definition.enum

(enum_field
  (identifier) @name) @definition.constant

(service
  (service_name
    (identifier) @name)) @definition.interface

(rpc
  (rpc_name
    (identifier) @name)) @definition.method

; The last segment of a qualified name is the referenced type.
(message_or_enum_type
  (identifier) @name .) @reference.type

(extend
  (full_ident
    (identifier) @name .)) @reference.type
