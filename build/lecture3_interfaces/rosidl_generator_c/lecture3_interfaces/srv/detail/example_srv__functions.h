// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lecture3_interfaces:srv/ExampleSrv.idl
// generated code does not contain a copyright notice

#ifndef LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__FUNCTIONS_H_
#define LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lecture3_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "lecture3_interfaces/srv/detail/example_srv__struct.h"

/// Initialize srv/ExampleSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lecture3_interfaces__srv__ExampleSrv_Request
 * )) before or use
 * lecture3_interfaces__srv__ExampleSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Request__init(lecture3_interfaces__srv__ExampleSrv_Request * msg);

/// Finalize srv/ExampleSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
void
lecture3_interfaces__srv__ExampleSrv_Request__fini(lecture3_interfaces__srv__ExampleSrv_Request * msg);

/// Create srv/ExampleSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lecture3_interfaces__srv__ExampleSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
lecture3_interfaces__srv__ExampleSrv_Request *
lecture3_interfaces__srv__ExampleSrv_Request__create();

/// Destroy srv/ExampleSrv message.
/**
 * It calls
 * lecture3_interfaces__srv__ExampleSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
void
lecture3_interfaces__srv__ExampleSrv_Request__destroy(lecture3_interfaces__srv__ExampleSrv_Request * msg);

/// Check for srv/ExampleSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Request__are_equal(const lecture3_interfaces__srv__ExampleSrv_Request * lhs, const lecture3_interfaces__srv__ExampleSrv_Request * rhs);

/// Copy a srv/ExampleSrv message.
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
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Request__copy(
  const lecture3_interfaces__srv__ExampleSrv_Request * input,
  lecture3_interfaces__srv__ExampleSrv_Request * output);

/// Initialize array of srv/ExampleSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * lecture3_interfaces__srv__ExampleSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__init(lecture3_interfaces__srv__ExampleSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/ExampleSrv messages.
/**
 * It calls
 * lecture3_interfaces__srv__ExampleSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
void
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__fini(lecture3_interfaces__srv__ExampleSrv_Request__Sequence * array);

/// Create array of srv/ExampleSrv messages.
/**
 * It allocates the memory for the array and calls
 * lecture3_interfaces__srv__ExampleSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
lecture3_interfaces__srv__ExampleSrv_Request__Sequence *
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/ExampleSrv messages.
/**
 * It calls
 * lecture3_interfaces__srv__ExampleSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
void
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__destroy(lecture3_interfaces__srv__ExampleSrv_Request__Sequence * array);

/// Check for srv/ExampleSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__are_equal(const lecture3_interfaces__srv__ExampleSrv_Request__Sequence * lhs, const lecture3_interfaces__srv__ExampleSrv_Request__Sequence * rhs);

/// Copy an array of srv/ExampleSrv messages.
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
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__copy(
  const lecture3_interfaces__srv__ExampleSrv_Request__Sequence * input,
  lecture3_interfaces__srv__ExampleSrv_Request__Sequence * output);

/// Initialize srv/ExampleSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lecture3_interfaces__srv__ExampleSrv_Response
 * )) before or use
 * lecture3_interfaces__srv__ExampleSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Response__init(lecture3_interfaces__srv__ExampleSrv_Response * msg);

/// Finalize srv/ExampleSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
void
lecture3_interfaces__srv__ExampleSrv_Response__fini(lecture3_interfaces__srv__ExampleSrv_Response * msg);

/// Create srv/ExampleSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lecture3_interfaces__srv__ExampleSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
lecture3_interfaces__srv__ExampleSrv_Response *
lecture3_interfaces__srv__ExampleSrv_Response__create();

/// Destroy srv/ExampleSrv message.
/**
 * It calls
 * lecture3_interfaces__srv__ExampleSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
void
lecture3_interfaces__srv__ExampleSrv_Response__destroy(lecture3_interfaces__srv__ExampleSrv_Response * msg);

/// Check for srv/ExampleSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Response__are_equal(const lecture3_interfaces__srv__ExampleSrv_Response * lhs, const lecture3_interfaces__srv__ExampleSrv_Response * rhs);

/// Copy a srv/ExampleSrv message.
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
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Response__copy(
  const lecture3_interfaces__srv__ExampleSrv_Response * input,
  lecture3_interfaces__srv__ExampleSrv_Response * output);

/// Initialize array of srv/ExampleSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * lecture3_interfaces__srv__ExampleSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__init(lecture3_interfaces__srv__ExampleSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/ExampleSrv messages.
/**
 * It calls
 * lecture3_interfaces__srv__ExampleSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
void
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__fini(lecture3_interfaces__srv__ExampleSrv_Response__Sequence * array);

/// Create array of srv/ExampleSrv messages.
/**
 * It allocates the memory for the array and calls
 * lecture3_interfaces__srv__ExampleSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
lecture3_interfaces__srv__ExampleSrv_Response__Sequence *
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/ExampleSrv messages.
/**
 * It calls
 * lecture3_interfaces__srv__ExampleSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
void
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__destroy(lecture3_interfaces__srv__ExampleSrv_Response__Sequence * array);

/// Check for srv/ExampleSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__are_equal(const lecture3_interfaces__srv__ExampleSrv_Response__Sequence * lhs, const lecture3_interfaces__srv__ExampleSrv_Response__Sequence * rhs);

/// Copy an array of srv/ExampleSrv messages.
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
ROSIDL_GENERATOR_C_PUBLIC_lecture3_interfaces
bool
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__copy(
  const lecture3_interfaces__srv__ExampleSrv_Response__Sequence * input,
  lecture3_interfaces__srv__ExampleSrv_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__FUNCTIONS_H_
