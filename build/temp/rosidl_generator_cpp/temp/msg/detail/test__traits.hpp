// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from temp:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEMP__MSG__DETAIL__TEST__TRAITS_HPP_
#define TEMP__MSG__DETAIL__TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "temp/msg/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace temp
{

namespace msg
{

inline void to_flow_style_yaml(
  const Test & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Test & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Test & msg, bool use_flow_style = false)
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

}  // namespace temp

namespace rosidl_generator_traits
{

[[deprecated("use temp::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const temp::msg::Test & msg,
  std::ostream & out, size_t indentation = 0)
{
  temp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use temp::msg::to_yaml() instead")]]
inline std::string to_yaml(const temp::msg::Test & msg)
{
  return temp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<temp::msg::Test>()
{
  return "temp::msg::Test";
}

template<>
inline const char * name<temp::msg::Test>()
{
  return "temp/msg/Test";
}

template<>
struct has_fixed_size<temp::msg::Test>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<temp::msg::Test>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<temp::msg::Test>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEMP__MSG__DETAIL__TEST__TRAITS_HPP_
