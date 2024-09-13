// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_interfaces:srv/SetParam.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__STRUCT_H_
#define CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'kp_linear'
// Member 'kp_angular'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in srv/SetParam in the package controller_interfaces.
typedef struct controller_interfaces__srv__SetParam_Request
{
  std_msgs__msg__Float64 kp_linear;
  std_msgs__msg__Float64 kp_angular;
} controller_interfaces__srv__SetParam_Request;

// Struct for a sequence of controller_interfaces__srv__SetParam_Request.
typedef struct controller_interfaces__srv__SetParam_Request__Sequence
{
  controller_interfaces__srv__SetParam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interfaces__srv__SetParam_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetParam in the package controller_interfaces.
typedef struct controller_interfaces__srv__SetParam_Response
{
  uint8_t structure_needs_at_least_one_member;
} controller_interfaces__srv__SetParam_Response;

// Struct for a sequence of controller_interfaces__srv__SetParam_Response.
typedef struct controller_interfaces__srv__SetParam_Response__Sequence
{
  controller_interfaces__srv__SetParam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interfaces__srv__SetParam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__STRUCT_H_
