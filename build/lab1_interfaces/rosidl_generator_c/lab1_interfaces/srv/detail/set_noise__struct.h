// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lab1_interfaces:srv/SetNoise.idl
// generated code does not contain a copyright notice

#ifndef LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__STRUCT_H_
#define LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mean'
// Member 'variance'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in srv/SetNoise in the package lab1_interfaces.
typedef struct lab1_interfaces__srv__SetNoise_Request
{
  std_msgs__msg__Float64 mean;
  std_msgs__msg__Float64 variance;
} lab1_interfaces__srv__SetNoise_Request;

// Struct for a sequence of lab1_interfaces__srv__SetNoise_Request.
typedef struct lab1_interfaces__srv__SetNoise_Request__Sequence
{
  lab1_interfaces__srv__SetNoise_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lab1_interfaces__srv__SetNoise_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetNoise in the package lab1_interfaces.
typedef struct lab1_interfaces__srv__SetNoise_Response
{
  uint8_t structure_needs_at_least_one_member;
} lab1_interfaces__srv__SetNoise_Response;

// Struct for a sequence of lab1_interfaces__srv__SetNoise_Response.
typedef struct lab1_interfaces__srv__SetNoise_Response__Sequence
{
  lab1_interfaces__srv__SetNoise_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lab1_interfaces__srv__SetNoise_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__STRUCT_H_
