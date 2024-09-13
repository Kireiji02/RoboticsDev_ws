// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lecture3_interfaces:srv/ExampleSrv.idl
// generated code does not contain a copyright notice

#ifndef LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__TRAITS_HPP_
#define LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lecture3_interfaces/srv/detail/example_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'a'
// Member 'b'
#include "std_msgs/msg/detail/int32__traits.hpp"

namespace lecture3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExampleSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    to_flow_style_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    to_flow_style_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExampleSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a:\n";
    to_block_style_yaml(msg.a, out, indentation + 2);
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b:\n";
    to_block_style_yaml(msg.b, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExampleSrv_Request & msg, bool use_flow_style = false)
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

}  // namespace lecture3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lecture3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lecture3_interfaces::srv::ExampleSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lecture3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lecture3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lecture3_interfaces::srv::ExampleSrv_Request & msg)
{
  return lecture3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lecture3_interfaces::srv::ExampleSrv_Request>()
{
  return "lecture3_interfaces::srv::ExampleSrv_Request";
}

template<>
inline const char * name<lecture3_interfaces::srv::ExampleSrv_Request>()
{
  return "lecture3_interfaces/srv/ExampleSrv_Request";
}

template<>
struct has_fixed_size<lecture3_interfaces::srv::ExampleSrv_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<lecture3_interfaces::srv::ExampleSrv_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<lecture3_interfaces::srv::ExampleSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'sum'
// already included above
// #include "std_msgs/msg/detail/int32__traits.hpp"

namespace lecture3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExampleSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    to_flow_style_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExampleSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum:\n";
    to_block_style_yaml(msg.sum, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExampleSrv_Response & msg, bool use_flow_style = false)
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

}  // namespace lecture3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lecture3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lecture3_interfaces::srv::ExampleSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lecture3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lecture3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lecture3_interfaces::srv::ExampleSrv_Response & msg)
{
  return lecture3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lecture3_interfaces::srv::ExampleSrv_Response>()
{
  return "lecture3_interfaces::srv::ExampleSrv_Response";
}

template<>
inline const char * name<lecture3_interfaces::srv::ExampleSrv_Response>()
{
  return "lecture3_interfaces/srv/ExampleSrv_Response";
}

template<>
struct has_fixed_size<lecture3_interfaces::srv::ExampleSrv_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<lecture3_interfaces::srv::ExampleSrv_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<lecture3_interfaces::srv::ExampleSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lecture3_interfaces::srv::ExampleSrv>()
{
  return "lecture3_interfaces::srv::ExampleSrv";
}

template<>
inline const char * name<lecture3_interfaces::srv::ExampleSrv>()
{
  return "lecture3_interfaces/srv/ExampleSrv";
}

template<>
struct has_fixed_size<lecture3_interfaces::srv::ExampleSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<lecture3_interfaces::srv::ExampleSrv_Request>::value &&
    has_fixed_size<lecture3_interfaces::srv::ExampleSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<lecture3_interfaces::srv::ExampleSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<lecture3_interfaces::srv::ExampleSrv_Request>::value &&
    has_bounded_size<lecture3_interfaces::srv::ExampleSrv_Response>::value
  >
{
};

template<>
struct is_service<lecture3_interfaces::srv::ExampleSrv>
  : std::true_type
{
};

template<>
struct is_service_request<lecture3_interfaces::srv::ExampleSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lecture3_interfaces::srv::ExampleSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__TRAITS_HPP_
