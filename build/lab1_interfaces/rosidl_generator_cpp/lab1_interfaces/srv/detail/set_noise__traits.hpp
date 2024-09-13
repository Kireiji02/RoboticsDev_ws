// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lab1_interfaces:srv/SetNoise.idl
// generated code does not contain a copyright notice

#ifndef LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__TRAITS_HPP_
#define LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lab1_interfaces/srv/detail/set_noise__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mean'
// Member 'variance'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace lab1_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetNoise_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mean
  {
    out << "mean: ";
    to_flow_style_yaml(msg.mean, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    to_flow_style_yaml(msg.variance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetNoise_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean:\n";
    to_block_style_yaml(msg.mean, out, indentation + 2);
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance:\n";
    to_block_style_yaml(msg.variance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetNoise_Request & msg, bool use_flow_style = false)
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

}  // namespace lab1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lab1_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lab1_interfaces::srv::SetNoise_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab1_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab1_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lab1_interfaces::srv::SetNoise_Request & msg)
{
  return lab1_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lab1_interfaces::srv::SetNoise_Request>()
{
  return "lab1_interfaces::srv::SetNoise_Request";
}

template<>
inline const char * name<lab1_interfaces::srv::SetNoise_Request>()
{
  return "lab1_interfaces/srv/SetNoise_Request";
}

template<>
struct has_fixed_size<lab1_interfaces::srv::SetNoise_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<lab1_interfaces::srv::SetNoise_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<lab1_interfaces::srv::SetNoise_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lab1_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetNoise_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetNoise_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetNoise_Response & msg, bool use_flow_style = false)
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

}  // namespace lab1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lab1_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lab1_interfaces::srv::SetNoise_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab1_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab1_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lab1_interfaces::srv::SetNoise_Response & msg)
{
  return lab1_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lab1_interfaces::srv::SetNoise_Response>()
{
  return "lab1_interfaces::srv::SetNoise_Response";
}

template<>
inline const char * name<lab1_interfaces::srv::SetNoise_Response>()
{
  return "lab1_interfaces/srv/SetNoise_Response";
}

template<>
struct has_fixed_size<lab1_interfaces::srv::SetNoise_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lab1_interfaces::srv::SetNoise_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lab1_interfaces::srv::SetNoise_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lab1_interfaces::srv::SetNoise>()
{
  return "lab1_interfaces::srv::SetNoise";
}

template<>
inline const char * name<lab1_interfaces::srv::SetNoise>()
{
  return "lab1_interfaces/srv/SetNoise";
}

template<>
struct has_fixed_size<lab1_interfaces::srv::SetNoise>
  : std::integral_constant<
    bool,
    has_fixed_size<lab1_interfaces::srv::SetNoise_Request>::value &&
    has_fixed_size<lab1_interfaces::srv::SetNoise_Response>::value
  >
{
};

template<>
struct has_bounded_size<lab1_interfaces::srv::SetNoise>
  : std::integral_constant<
    bool,
    has_bounded_size<lab1_interfaces::srv::SetNoise_Request>::value &&
    has_bounded_size<lab1_interfaces::srv::SetNoise_Response>::value
  >
{
};

template<>
struct is_service<lab1_interfaces::srv::SetNoise>
  : std::true_type
{
};

template<>
struct is_service_request<lab1_interfaces::srv::SetNoise_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lab1_interfaces::srv::SetNoise_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__TRAITS_HPP_
