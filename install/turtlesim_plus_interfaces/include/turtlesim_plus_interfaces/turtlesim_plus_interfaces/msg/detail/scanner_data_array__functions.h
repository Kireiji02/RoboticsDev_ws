// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlesim_plus_interfaces:msg/ScannerDataArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__FUNCTIONS_H_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtlesim_plus_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtlesim_plus_interfaces/msg/detail/scanner_data_array__struct.h"

/// Initialize msg/ScannerDataArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim_plus_interfaces__msg__ScannerDataArray
 * )) before or use
 * turtlesim_plus_interfaces__msg__ScannerDataArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerDataArray__init(turtlesim_plus_interfaces__msg__ScannerDataArray * msg);

/// Finalize msg/ScannerDataArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
void
turtlesim_plus_interfaces__msg__ScannerDataArray__fini(turtlesim_plus_interfaces__msg__ScannerDataArray * msg);

/// Create msg/ScannerDataArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim_plus_interfaces__msg__ScannerDataArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
turtlesim_plus_interfaces__msg__ScannerDataArray *
turtlesim_plus_interfaces__msg__ScannerDataArray__create();

/// Destroy msg/ScannerDataArray message.
/**
 * It calls
 * turtlesim_plus_interfaces__msg__ScannerDataArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
void
turtlesim_plus_interfaces__msg__ScannerDataArray__destroy(turtlesim_plus_interfaces__msg__ScannerDataArray * msg);

/// Check for msg/ScannerDataArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerDataArray__are_equal(const turtlesim_plus_interfaces__msg__ScannerDataArray * lhs, const turtlesim_plus_interfaces__msg__ScannerDataArray * rhs);

/// Copy a msg/ScannerDataArray message.
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
turtlesim_plus_interfaces__msg__ScannerDataArray__copy(
  const turtlesim_plus_interfaces__msg__ScannerDataArray * input,
  turtlesim_plus_interfaces__msg__ScannerDataArray * output);

/// Initialize array of msg/ScannerDataArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim_plus_interfaces__msg__ScannerDataArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence__init(turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence * array, size_t size);

/// Finalize array of msg/ScannerDataArray messages.
/**
 * It calls
 * turtlesim_plus_interfaces__msg__ScannerDataArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
void
turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence__fini(turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence * array);

/// Create array of msg/ScannerDataArray messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence *
turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence__create(size_t size);

/// Destroy array of msg/ScannerDataArray messages.
/**
 * It calls
 * turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
void
turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence__destroy(turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence * array);

/// Check for msg/ScannerDataArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_plus_interfaces
bool
turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence__are_equal(const turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence * lhs, const turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence * rhs);

/// Copy an array of msg/ScannerDataArray messages.
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
turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence__copy(
  const turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence * input,
  turtlesim_plus_interfaces__msg__ScannerDataArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__FUNCTIONS_H_
