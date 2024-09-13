// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_plus_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_
#define TURTLESIM_PLUS_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GivePosition in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__srv__GivePosition_Request
{
  double x;
  double y;
} turtlesim_plus_interfaces__srv__GivePosition_Request;

// Struct for a sequence of turtlesim_plus_interfaces__srv__GivePosition_Request.
typedef struct turtlesim_plus_interfaces__srv__GivePosition_Request__Sequence
{
  turtlesim_plus_interfaces__srv__GivePosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__srv__GivePosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GivePosition in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__srv__GivePosition_Response
{
  uint8_t structure_needs_at_least_one_member;
} turtlesim_plus_interfaces__srv__GivePosition_Response;

// Struct for a sequence of turtlesim_plus_interfaces__srv__GivePosition_Response.
typedef struct turtlesim_plus_interfaces__srv__GivePosition_Response__Sequence
{
  turtlesim_plus_interfaces__srv__GivePosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__srv__GivePosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_PLUS_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_
