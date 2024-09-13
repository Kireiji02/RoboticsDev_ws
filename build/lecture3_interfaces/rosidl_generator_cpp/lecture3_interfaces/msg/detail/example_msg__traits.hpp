// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lecture3_interfaces:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_
#define LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lecture3_interfaces/msg/detail/example_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lecture3_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExampleMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExampleMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExampleMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lecture3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lecture3_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lecture3_interfaces::msg::ExampleMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  lecture3_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lecture3_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lecture3_interfaces::msg::ExampleMsg & msg)
{
  return lecture3_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lecture3_interfaces::msg::ExampleMsg>()
{
  return "lecture3_interfaces::msg::ExampleMsg";
}

template<>
inline const char * name<lecture3_interfaces::msg::ExampleMsg>()
{
  return "lecture3_interfaces/msg/ExampleMsg";
}

template<>
struct has_fixed_size<lecture3_interfaces::msg::ExampleMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lecture3_interfaces::msg::ExampleMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lecture3_interfaces::msg::ExampleMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__TRAITS_HPP_
