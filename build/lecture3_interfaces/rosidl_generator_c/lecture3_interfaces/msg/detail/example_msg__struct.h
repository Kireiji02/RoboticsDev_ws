// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lecture3_interfaces:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_
#define LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ExampleMsg in the package lecture3_interfaces.
typedef struct lecture3_interfaces__msg__ExampleMsg
{
  float temperature;
  int32_t id;
  rosidl_runtime_c__String description;
} lecture3_interfaces__msg__ExampleMsg;

// Struct for a sequence of lecture3_interfaces__msg__ExampleMsg.
typedef struct lecture3_interfaces__msg__ExampleMsg__Sequence
{
  lecture3_interfaces__msg__ExampleMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lecture3_interfaces__msg__ExampleMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__STRUCT_H_
