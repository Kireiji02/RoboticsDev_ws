// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lecture3_interfaces:srv/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_MSG__STRUCT_H_
#define LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a'
// Member 'b'
#include "std_msgs/msg/detail/int32__struct.h"

/// Struct defined in srv/ExampleMsg in the package lecture3_interfaces.
typedef struct lecture3_interfaces__srv__ExampleMsg_Request
{
  std_msgs__msg__Int32 a;
  std_msgs__msg__Int32 b;
} lecture3_interfaces__srv__ExampleMsg_Request;

// Struct for a sequence of lecture3_interfaces__srv__ExampleMsg_Request.
typedef struct lecture3_interfaces__srv__ExampleMsg_Request__Sequence
{
  lecture3_interfaces__srv__ExampleMsg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lecture3_interfaces__srv__ExampleMsg_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sum'
// already included above
// #include "std_msgs/msg/detail/int32__struct.h"

/// Struct defined in srv/ExampleMsg in the package lecture3_interfaces.
typedef struct lecture3_interfaces__srv__ExampleMsg_Response
{
  std_msgs__msg__Int32 sum;
} lecture3_interfaces__srv__ExampleMsg_Response;

// Struct for a sequence of lecture3_interfaces__srv__ExampleMsg_Response.
typedef struct lecture3_interfaces__srv__ExampleMsg_Response__Sequence
{
  lecture3_interfaces__srv__ExampleMsg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lecture3_interfaces__srv__ExampleMsg_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_MSG__STRUCT_H_
