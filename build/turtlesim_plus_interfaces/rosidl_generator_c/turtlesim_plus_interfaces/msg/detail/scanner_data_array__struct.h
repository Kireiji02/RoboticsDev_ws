// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_plus_interfaces:msg/ScannerDataArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__STRUCT_H_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "turtlesim_plus_interfaces/msg/detail/scanner_data__struct.h"

/// Struct defined in msg/ScannerDataArray in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__msg__ScannerDataArray
{
  turtlesim_plus_interfaces__msg__ScannerData__Sequence data;
} turtlesim_plus_interfaces__msg__ScannerDataArray;

// Struct for a sequence of turtlesim_plus_interfaces__msg__ScannerDataArray.
typedef struct turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence
{
  turtlesim_plus_interfaces__msg__ScannerDataArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__STRUCT_H_
