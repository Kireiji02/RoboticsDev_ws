// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_interfaces:srv/SetParam.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__TRAITS_HPP_
#define CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_interfaces/srv/detail/set_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'kp_linear'
// Member 'kp_angular'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace controller_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetParam_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp_linear
  {
    out << "kp_linear: ";
    to_flow_style_yaml(msg.kp_linear, out);
    out << ", ";
  }

  // member: kp_angular
  {
    out << "kp_angular: ";
    to_flow_style_yaml(msg.kp_angular, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp_linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_linear:\n";
    to_block_style_yaml(msg.kp_linear, out, indentation + 2);
  }

  // member: kp_angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_angular:\n";
    to_block_style_yaml(msg.kp_angular, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetParam_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace controller_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use controller_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_interfaces::srv::SetParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_interfaces::srv::SetParam_Request & msg)
{
  return controller_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_interfaces::srv::SetParam_Request>()
{
  return "controller_interfaces::srv::SetParam_Request";
}

template<>
inline const char * name<controller_interfaces::srv::SetParam_Request>()
{
  return "controller_interfaces/srv/SetParam_Request";
}

template<>
struct has_fixed_size<controller_interfaces::srv::SetParam_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<controller_interfaces::srv::SetParam_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<controller_interfaces::srv::SetParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace controller_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetParam_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetParam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetParam_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace controller_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use controller_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_interfaces::srv::SetParam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_interfaces::srv::SetParam_Response & msg)
{
  return controller_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_interfaces::srv::SetParam_Response>()
{
  return "controller_interfaces::srv::SetParam_Response";
}

template<>
inline const char * name<controller_interfaces::srv::SetParam_Response>()
{
  return "controller_interfaces/srv/SetParam_Response";
}

template<>
struct has_fixed_size<controller_interfaces::srv::SetParam_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interfaces::srv::SetParam_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interfaces::srv::SetParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_interfaces::srv::SetParam>()
{
  return "controller_interfaces::srv::SetParam";
}

template<>
inline const char * name<controller_interfaces::srv::SetParam>()
{
  return "controller_interfaces/srv/SetParam";
}

template<>
struct has_fixed_size<controller_interfaces::srv::SetParam>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_interfaces::srv::SetParam_Request>::value &&
    has_fixed_size<controller_interfaces::srv::SetParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_interfaces::srv::SetParam>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_interfaces::srv::SetParam_Request>::value &&
    has_bounded_size<controller_interfaces::srv::SetParam_Response>::value
  >
{
};

template<>
struct is_service<controller_interfaces::srv::SetParam>
  : std::true_type
{
};

template<>
struct is_service_request<controller_interfaces::srv::SetParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_interfaces::srv::SetParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__TRAITS_HPP_
