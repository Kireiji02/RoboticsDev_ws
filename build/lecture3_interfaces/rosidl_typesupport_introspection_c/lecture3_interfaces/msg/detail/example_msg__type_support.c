// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lecture3_interfaces:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lecture3_interfaces/msg/detail/example_msg__rosidl_typesupport_introspection_c.h"
#include "lecture3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lecture3_interfaces/msg/detail/example_msg__functions.h"
#include "lecture3_interfaces/msg/detail/example_msg__struct.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lecture3_interfaces__msg__ExampleMsg__init(message_memory);
}

void lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_fini_function(void * message_memory)
{
  lecture3_interfaces__msg__ExampleMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_member_array[3] = {
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lecture3_interfaces__msg__ExampleMsg, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lecture3_interfaces__msg__ExampleMsg, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lecture3_interfaces__msg__ExampleMsg, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_members = {
  "lecture3_interfaces__msg",  // message namespace
  "ExampleMsg",  // message name
  3,  // number of fields
  sizeof(lecture3_interfaces__msg__ExampleMsg),
  lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_member_array,  // message members
  lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_type_support_handle = {
  0,
  &lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lecture3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lecture3_interfaces, msg, ExampleMsg)() {
  if (!lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_type_support_handle.typesupport_identifier) {
    lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lecture3_interfaces__msg__ExampleMsg__rosidl_typesupport_introspection_c__ExampleMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
