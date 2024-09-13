// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_plus_interfaces:action/GetData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__TRAITS_HPP_
#define TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_plus_interfaces/action/detail/get_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GetData_Goal & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetData_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetData_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::action::GetData_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::action::GetData_Goal & msg)
{
  return turtlesim_plus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_Goal>()
{
  return "turtlesim_plus_interfaces::action::GetData_Goal";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_Goal>()
{
  return "turtlesim_plus_interfaces/action/GetData_Goal";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_plus_interfaces::action::GetData_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "turtlesim_plus_interfaces/msg/detail/scanner_data_array__traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GetData_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_data
  {
    out << "is_data: ";
    rosidl_generator_traits::value_to_yaml(msg.is_data, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetData_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_data: ";
    rosidl_generator_traits::value_to_yaml(msg.is_data, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetData_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::action::GetData_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::action::GetData_Result & msg)
{
  return turtlesim_plus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_Result>()
{
  return "turtlesim_plus_interfaces::action::GetData_Result";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_Result>()
{
  return "turtlesim_plus_interfaces/action/GetData_Result";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_Result>
  : std::integral_constant<bool, has_fixed_size<turtlesim_plus_interfaces::msg::ScannerDataArray>::value> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_Result>
  : std::integral_constant<bool, has_bounded_size<turtlesim_plus_interfaces::msg::ScannerDataArray>::value> {};

template<>
struct is_message<turtlesim_plus_interfaces::action::GetData_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlesim_plus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GetData_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetData_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetData_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::action::GetData_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::action::GetData_Feedback & msg)
{
  return turtlesim_plus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_Feedback>()
{
  return "turtlesim_plus_interfaces::action::GetData_Feedback";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_Feedback>()
{
  return "turtlesim_plus_interfaces/action/GetData_Feedback";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_plus_interfaces::action::GetData_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "turtlesim_plus_interfaces/action/detail/get_data__traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GetData_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetData_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetData_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::action::GetData_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::action::GetData_SendGoal_Request & msg)
{
  return turtlesim_plus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_SendGoal_Request>()
{
  return "turtlesim_plus_interfaces::action::GetData_SendGoal_Request";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_SendGoal_Request>()
{
  return "turtlesim_plus_interfaces/action/GetData_SendGoal_Request";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<turtlesim_plus_interfaces::action::GetData_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<turtlesim_plus_interfaces::action::GetData_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlesim_plus_interfaces::action::GetData_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GetData_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetData_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetData_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::action::GetData_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::action::GetData_SendGoal_Response & msg)
{
  return turtlesim_plus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_SendGoal_Response>()
{
  return "turtlesim_plus_interfaces::action::GetData_SendGoal_Response";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_SendGoal_Response>()
{
  return "turtlesim_plus_interfaces/action/GetData_SendGoal_Response";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<turtlesim_plus_interfaces::action::GetData_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_SendGoal>()
{
  return "turtlesim_plus_interfaces::action::GetData_SendGoal";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_SendGoal>()
{
  return "turtlesim_plus_interfaces/action/GetData_SendGoal";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_plus_interfaces::action::GetData_SendGoal_Request>::value &&
    has_fixed_size<turtlesim_plus_interfaces::action::GetData_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_plus_interfaces::action::GetData_SendGoal_Request>::value &&
    has_bounded_size<turtlesim_plus_interfaces::action::GetData_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_plus_interfaces::action::GetData_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_plus_interfaces::action::GetData_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_plus_interfaces::action::GetData_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GetData_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetData_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetData_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::action::GetData_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::action::GetData_GetResult_Request & msg)
{
  return turtlesim_plus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_GetResult_Request>()
{
  return "turtlesim_plus_interfaces::action::GetData_GetResult_Request";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_GetResult_Request>()
{
  return "turtlesim_plus_interfaces/action/GetData_GetResult_Request";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlesim_plus_interfaces::action::GetData_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "turtlesim_plus_interfaces/action/detail/get_data__traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GetData_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetData_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetData_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::action::GetData_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::action::GetData_GetResult_Response & msg)
{
  return turtlesim_plus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_GetResult_Response>()
{
  return "turtlesim_plus_interfaces::action::GetData_GetResult_Response";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_GetResult_Response>()
{
  return "turtlesim_plus_interfaces/action/GetData_GetResult_Response";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<turtlesim_plus_interfaces::action::GetData_Result>::value> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<turtlesim_plus_interfaces::action::GetData_Result>::value> {};

template<>
struct is_message<turtlesim_plus_interfaces::action::GetData_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_GetResult>()
{
  return "turtlesim_plus_interfaces::action::GetData_GetResult";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_GetResult>()
{
  return "turtlesim_plus_interfaces/action/GetData_GetResult";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_plus_interfaces::action::GetData_GetResult_Request>::value &&
    has_fixed_size<turtlesim_plus_interfaces::action::GetData_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_plus_interfaces::action::GetData_GetResult_Request>::value &&
    has_bounded_size<turtlesim_plus_interfaces::action::GetData_GetResult_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_plus_interfaces::action::GetData_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_plus_interfaces::action::GetData_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_plus_interfaces::action::GetData_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "turtlesim_plus_interfaces/action/detail/get_data__traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const GetData_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetData_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetData_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::action::GetData_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::action::GetData_FeedbackMessage & msg)
{
  return turtlesim_plus_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::action::GetData_FeedbackMessage>()
{
  return "turtlesim_plus_interfaces::action::GetData_FeedbackMessage";
}

template<>
inline const char * name<turtlesim_plus_interfaces::action::GetData_FeedbackMessage>()
{
  return "turtlesim_plus_interfaces/action/GetData_FeedbackMessage";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::action::GetData_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<turtlesim_plus_interfaces::action::GetData_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::action::GetData_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<turtlesim_plus_interfaces::action::GetData_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlesim_plus_interfaces::action::GetData_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<turtlesim_plus_interfaces::action::GetData>
  : std::true_type
{
};

template<>
struct is_action_goal<turtlesim_plus_interfaces::action::GetData_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<turtlesim_plus_interfaces::action::GetData_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<turtlesim_plus_interfaces::action::GetData_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__TRAITS_HPP_
