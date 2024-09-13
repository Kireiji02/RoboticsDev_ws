// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from temp:srv/Test.idl
// generated code does not contain a copyright notice

#ifndef TEMP__SRV__DETAIL__TEST__TRAITS_HPP_
#define TEMP__SRV__DETAIL__TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "temp/srv/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace temp
{

namespace srv
{

inline void to_flow_style_yaml(
  const Test_Request & msg,
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
  const Test_Request & msg,
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

inline std::string to_yaml(const Test_Request & msg, bool use_flow_style = false)
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

}  // namespace temp

namespace rosidl_generator_traits
{

[[deprecated("use temp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const temp::srv::Test_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  temp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use temp::srv::to_yaml() instead")]]
inline std::string to_yaml(const temp::srv::Test_Request & msg)
{
  return temp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<temp::srv::Test_Request>()
{
  return "temp::srv::Test_Request";
}

template<>
inline const char * name<temp::srv::Test_Request>()
{
  return "temp/srv/Test_Request";
}

template<>
struct has_fixed_size<temp::srv::Test_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<temp::srv::Test_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<temp::srv::Test_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace temp
{

namespace srv
{

inline void to_flow_style_yaml(
  const Test_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Test_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Test_Response & msg, bool use_flow_style = false)
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

}  // namespace temp

namespace rosidl_generator_traits
{

[[deprecated("use temp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const temp::srv::Test_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  temp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use temp::srv::to_yaml() instead")]]
inline std::string to_yaml(const temp::srv::Test_Response & msg)
{
  return temp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<temp::srv::Test_Response>()
{
  return "temp::srv::Test_Response";
}

template<>
inline const char * name<temp::srv::Test_Response>()
{
  return "temp/srv/Test_Response";
}

template<>
struct has_fixed_size<temp::srv::Test_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<temp::srv::Test_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<temp::srv::Test_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<temp::srv::Test>()
{
  return "temp::srv::Test";
}

template<>
inline const char * name<temp::srv::Test>()
{
  return "temp/srv/Test";
}

template<>
struct has_fixed_size<temp::srv::Test>
  : std::integral_constant<
    bool,
    has_fixed_size<temp::srv::Test_Request>::value &&
    has_fixed_size<temp::srv::Test_Response>::value
  >
{
};

template<>
struct has_bounded_size<temp::srv::Test>
  : std::integral_constant<
    bool,
    has_bounded_size<temp::srv::Test_Request>::value &&
    has_bounded_size<temp::srv::Test_Response>::value
  >
{
};

template<>
struct is_service<temp::srv::Test>
  : std::true_type
{
};

template<>
struct is_service_request<temp::srv::Test_Request>
  : std::true_type
{
};

template<>
struct is_service_response<temp::srv::Test_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEMP__SRV__DETAIL__TEST__TRAITS_HPP_
