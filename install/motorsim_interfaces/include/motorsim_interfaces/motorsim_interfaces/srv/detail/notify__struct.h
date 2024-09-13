// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motorsim_interfaces:srv/Notify.idl
// generated code does not contain a copyright notice

#ifndef MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__STRUCT_H_
#define MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Notify in the package motorsim_interfaces.
typedef struct motorsim_interfaces__srv__Notify_Request
{
  bool trig;
} motorsim_interfaces__srv__Notify_Request;

// Struct for a sequence of motorsim_interfaces__srv__Notify_Request.
typedef struct motorsim_interfaces__srv__Notify_Request__Sequence
{
  motorsim_interfaces__srv__Notify_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorsim_interfaces__srv__Notify_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Notify in the package motorsim_interfaces.
typedef struct motorsim_interfaces__srv__Notify_Response
{
  uint8_t structure_needs_at_least_one_member;
} motorsim_interfaces__srv__Notify_Response;

// Struct for a sequence of motorsim_interfaces__srv__Notify_Response.
typedef struct motorsim_interfaces__srv__Notify_Response__Sequence
{
  motorsim_interfaces__srv__Notify_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorsim_interfaces__srv__Notify_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__STRUCT_H_
