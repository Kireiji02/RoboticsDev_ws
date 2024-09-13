// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_plus_interfaces:msg/ScannerData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__STRUCT_H_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ScannerData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__msg__ScannerData
{
  rosidl_runtime_c__String type;
  double angle;
  double distance;
} turtlesim_plus_interfaces__msg__ScannerData;

// Struct for a sequence of turtlesim_plus_interfaces__msg__ScannerData.
typedef struct turtlesim_plus_interfaces__msg__ScannerData__Sequence
{
  turtlesim_plus_interfaces__msg__ScannerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__msg__ScannerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__STRUCT_H_
