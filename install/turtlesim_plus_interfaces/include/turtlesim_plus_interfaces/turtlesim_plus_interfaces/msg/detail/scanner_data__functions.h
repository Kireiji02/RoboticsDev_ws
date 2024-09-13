// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlesim_plus_interfaces:msg/ScannerData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__FUNCTIONS_H_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtlesim_plus_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtlesim_plus_interfaces/msg/detail/scanner_data__struct.h"

/// Initialize msg/ScannerData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim_plus_interfaces__msg__ScannerData
 * )) before or use
 * turtlesim_plus_interfaces__msg__ScannerData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerData__init(turtlesim_plus_interfaces__msg__ScannerData * msg);

/// Finalize msg/ScannerData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
void
turtlesim_plus_interfaces__msg__ScannerData__fini(turtlesim_plus_interfaces__msg__ScannerData * msg);

/// Create msg/ScannerData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim_plus_interfaces__msg__ScannerData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
turtlesim_plus_interfaces__msg__ScannerData *
turtlesim_plus_interfaces__msg__ScannerData__create();

/// Destroy msg/ScannerData message.
/**
 * It calls
 * turtlesim_plus_interfaces__msg__ScannerData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
void
turtlesim_plus_interfaces__msg__ScannerData__destroy(turtlesim_plus_interfaces__msg__ScannerData * msg);

/// Check for msg/ScannerData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerData__are_equal(const turtlesim_plus_interfaces__msg__ScannerData * lhs, const turtlesim_plus_interfaces__msg__ScannerData * rhs);

/// Copy a msg/ScannerData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerData__copy(
  const turtlesim_plus_interfaces__msg__ScannerData * input,
  turtlesim_plus_interfaces__msg__ScannerData * output);

/// Initialize array of msg/ScannerData messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim_plus_interfaces__msg__ScannerData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerData__Sequence__init(turtlesim_plus_interfaces__msg__ScannerData__Sequence * array, size_t size);

/// Finalize array of msg/ScannerData messages.
/**
 * It calls
 * turtlesim_plus_interfaces__msg__ScannerData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
void
turtlesim_plus_interfaces__msg__ScannerData__Sequence__fini(turtlesim_plus_interfaces__msg__ScannerData__Sequence * array);

/// Create array of msg/ScannerData messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim_plus_interfaces__msg__ScannerData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
turtlesim_plus_interfaces__msg__ScannerData__Sequence *
turtlesim_plus_interfaces__msg__ScannerData__Sequence__create(size_t size);

/// Destroy array of msg/ScannerData messages.
/**
 * It calls
 * turtlesim_plus_interfaces__msg__ScannerData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
void
turtlesim_plus_interfaces__msg__ScannerData__Sequence__destroy(turtlesim_plus_interfaces__msg__ScannerData__Sequence * array);

/// Check for msg/ScannerData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerData__Sequence__are_equal(const turtlesim_plus_interfaces__msg__ScannerData__Sequence * lhs, const turtlesim_plus_interfaces__msg__ScannerData__Sequence * rhs);

/// Copy an array of msg/ScannerData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerData__Sequence__copy(
  const turtlesim_plus_interfaces__msg__ScannerData__Sequence * input,
  turtlesim_plus_interfaces__msg__ScannerData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__FUNCTIONS_H_
