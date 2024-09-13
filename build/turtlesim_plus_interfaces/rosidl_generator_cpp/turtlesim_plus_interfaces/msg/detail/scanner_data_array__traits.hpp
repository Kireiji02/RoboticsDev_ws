// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_plus_interfaces:msg/ScannerDataArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__TRAITS_HPP_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_plus_interfaces/msg/detail/scanner_data_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "turtlesim_plus_interfaces/msg/detail/scanner_data__traits.hpp"

namespace turtlesim_plus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScannerDataArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScannerDataArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScannerDataArray & msg, bool use_flow_style = false)
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
  const turtlesim_plus_interfaces::msg::ScannerDataArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_plus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_plus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_plus_interfaces::msg::ScannerDataArray & msg)
{
  return turtlesim_plus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_plus_interfaces::msg::ScannerDataArray>()
{
  return "turtlesim_plus_interfaces::msg::ScannerDataArray";
}

template<>
inline const char * name<turtlesim_plus_interfaces::msg::ScannerDataArray>()
{
  return "turtlesim_plus_interfaces/msg/ScannerDataArray";
}

template<>
struct has_fixed_size<turtlesim_plus_interfaces::msg::ScannerDataArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_plus_interfaces::msg::ScannerDataArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_plus_interfaces::msg::ScannerDataArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__TRAITS_HPP_
