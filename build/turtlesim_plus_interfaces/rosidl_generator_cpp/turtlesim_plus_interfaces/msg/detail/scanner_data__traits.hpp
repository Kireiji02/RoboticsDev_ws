// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_plus_interfaces:msg/ScannerData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__TRAITS_HPP_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_plus_interfaces/msg/detail/scanner_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScannerData & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScannerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScannerData & msg, bool use_flow_style = false)
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

}  // namespace turtlesim_plus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_plus_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_plus_interfaces::msg::ScannerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::msg::ScannerData & msg)
{
  return turtlesim_plus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::msg::ScannerData>()
{
  return "turtlesim_plus_interfaces::msg::ScannerData";
}

template<>
inline const char * name<turtlesim_plus_interfaces::msg::ScannerData>()
{
  return "turtlesim_plus_interfaces/msg/ScannerData";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::msg::ScannerData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::msg::ScannerData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_plus_interfaces::msg::ScannerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__TRAITS_HPP_
