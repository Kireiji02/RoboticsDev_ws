// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_plus_interfaces:action/GetData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__STRUCT_H_
#define TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GetData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__action__GetData_Goal
{
  uint8_t structure_needs_at_least_one_member;
} turtlesim_plus_interfaces__action__GetData_Goal;

// Struct for a sequence of turtlesim_plus_interfaces__action__GetData_Goal.
typedef struct turtlesim_plus_interfaces__action__GetData_Goal__Sequence
{
  turtlesim_plus_interfaces__action__GetData_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__action__GetData_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "turtlesim_plus_interfaces/msg/detail/scanner_data_array__struct.h"

/// Struct defined in action/GetData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__action__GetData_Result
{
  bool is_data;
  turtlesim_plus_interfaces__msg__ScannerDataArray data;
} turtlesim_plus_interfaces__action__GetData_Result;

// Struct for a sequence of turtlesim_plus_interfaces__action__GetData_Result.
typedef struct turtlesim_plus_interfaces__action__GetData_Result__Sequence
{
  turtlesim_plus_interfaces__action__GetData_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__action__GetData_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GetData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__action__GetData_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} turtlesim_plus_interfaces__action__GetData_Feedback;

// Struct for a sequence of turtlesim_plus_interfaces__action__GetData_Feedback.
typedef struct turtlesim_plus_interfaces__action__GetData_Feedback__Sequence
{
  turtlesim_plus_interfaces__action__GetData_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__action__GetData_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "turtlesim_plus_interfaces/action/detail/get_data__struct.h"

/// Struct defined in action/GetData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__action__GetData_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtlesim_plus_interfaces__action__GetData_Goal goal;
} turtlesim_plus_interfaces__action__GetData_SendGoal_Request;

// Struct for a sequence of turtlesim_plus_interfaces__action__GetData_SendGoal_Request.
typedef struct turtlesim_plus_interfaces__action__GetData_SendGoal_Request__Sequence
{
  turtlesim_plus_interfaces__action__GetData_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__action__GetData_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GetData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__action__GetData_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} turtlesim_plus_interfaces__action__GetData_SendGoal_Response;

// Struct for a sequence of turtlesim_plus_interfaces__action__GetData_SendGoal_Response.
typedef struct turtlesim_plus_interfaces__action__GetData_SendGoal_Response__Sequence
{
  turtlesim_plus_interfaces__action__GetData_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__action__GetData_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GetData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__action__GetData_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} turtlesim_plus_interfaces__action__GetData_GetResult_Request;

// Struct for a sequence of turtlesim_plus_interfaces__action__GetData_GetResult_Request.
typedef struct turtlesim_plus_interfaces__action__GetData_GetResult_Request__Sequence
{
  turtlesim_plus_interfaces__action__GetData_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__action__GetData_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "turtlesim_plus_interfaces/action/detail/get_data__struct.h"

/// Struct defined in action/GetData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__action__GetData_GetResult_Response
{
  int8_t status;
  turtlesim_plus_interfaces__action__GetData_Result result;
} turtlesim_plus_interfaces__action__GetData_GetResult_Response;

// Struct for a sequence of turtlesim_plus_interfaces__action__GetData_GetResult_Response.
typedef struct turtlesim_plus_interfaces__action__GetData_GetResult_Response__Sequence
{
  turtlesim_plus_interfaces__action__GetData_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__action__GetData_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "turtlesim_plus_interfaces/action/detail/get_data__struct.h"

/// Struct defined in action/GetData in the package turtlesim_plus_interfaces.
typedef struct turtlesim_plus_interfaces__action__GetData_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtlesim_plus_interfaces__action__GetData_Feedback feedback;
} turtlesim_plus_interfaces__action__GetData_FeedbackMessage;

// Struct for a sequence of turtlesim_plus_interfaces__action__GetData_FeedbackMessage.
typedef struct turtlesim_plus_interfaces__action__GetData_FeedbackMessage__Sequence
{
  turtlesim_plus_interfaces__action__GetData_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_plus_interfaces__action__GetData_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__STRUCT_H_
