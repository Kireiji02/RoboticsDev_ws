// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motorsim_interfaces:srv/Notify.idl
// generated code does not contain a copyright notice

#ifndef MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__TRAITS_HPP_
#define MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motorsim_interfaces/srv/detail/notify__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motorsim_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Notify_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: trig
  {
    out << "trig: ";
    rosidl_generator_traits::value_to_yaml(msg.trig, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Notify_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trig: ";
    rosidl_generator_traits::value_to_yaml(msg.trig, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Notify_Request & msg, bool use_flow_style = false)
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

}  // namespace motorsim_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motorsim_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motorsim_interfaces::srv::Notify_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  motorsim_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motorsim_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motorsim_interfaces::srv::Notify_Request & msg)
{
  return motorsim_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motorsim_interfaces::srv::Notify_Request>()
{
  return "motorsim_interfaces::srv::Notify_Request";
}

template<>
inline const char * name<motorsim_interfaces::srv::Notify_Request>()
{
  return "motorsim_interfaces/srv/Notify_Request";
}

template<>
struct has_fixed_size<motorsim_interfaces::srv::Notify_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motorsim_interfaces::srv::Notify_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motorsim_interfaces::srv::Notify_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace motorsim_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Notify_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Notify_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Notify_Response & msg, bool use_flow_style = false)
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

}  // namespace motorsim_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motorsim_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motorsim_interfaces::srv::Notify_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  motorsim_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motorsim_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motorsim_interfaces::srv::Notify_Response & msg)
{
  return motorsim_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motorsim_interfaces::srv::Notify_Response>()
{
  return "motorsim_interfaces::srv::Notify_Response";
}

template<>
inline const char * name<motorsim_interfaces::srv::Notify_Response>()
{
  return "motorsim_interfaces/srv/Notify_Response";
}

template<>
struct has_fixed_size<motorsim_interfaces::srv::Notify_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motorsim_interfaces::srv::Notify_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motorsim_interfaces::srv::Notify_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motorsim_interfaces::srv::Notify>()
{
  return "motorsim_interfaces::srv::Notify";
}

template<>
inline const char * name<motorsim_interfaces::srv::Notify>()
{
  return "motorsim_interfaces/srv/Notify";
}

template<>
struct has_fixed_size<motorsim_interfaces::srv::Notify>
  : std::integral_constant<
    bool,
    has_fixed_size<motorsim_interfaces::srv::Notify_Request>::value &&
    has_fixed_size<motorsim_interfaces::srv::Notify_Response>::value
  >
{
};

template<>
struct has_bounded_size<motorsim_interfaces::srv::Notify>
  : std::integral_constant<
    bool,
    has_bounded_size<motorsim_interfaces::srv::Notify_Request>::value &&
    has_bounded_size<motorsim_interfaces::srv::Notify_Response>::value
  >
{
};

template<>
struct is_service<motorsim_interfaces::srv::Notify>
  : std::true_type
{
};

template<>
struct is_service_request<motorsim_interfaces::srv::Notify_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motorsim_interfaces::srv::Notify_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__TRAITS_HPP_
