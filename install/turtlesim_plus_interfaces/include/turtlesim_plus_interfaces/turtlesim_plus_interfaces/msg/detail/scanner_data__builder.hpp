// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_plus_interfaces:msg/ScannerData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__BUILDER_HPP_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_plus_interfaces/msg/detail/scanner_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_plus_interfaces
{

namespace msg
{

namespace builder
{

class Init_ScannerData_distance
{
public:
  explicit Init_ScannerData_distance(::turtlesim_plus_interfaces::msg::ScannerData & msg)
  : msg_(msg)
  {}
  ::turtlesim_plus_interfaces::msg::ScannerData distance(::turtlesim_plus_interfaces::msg::ScannerData::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_plus_interfaces::msg::ScannerData msg_;
};

class Init_ScannerData_angle
{
public:
  explicit Init_ScannerData_angle(::turtlesim_plus_interfaces::msg::ScannerData & msg)
  : msg_(msg)
  {}
  Init_ScannerData_distance angle(::turtlesim_plus_interfaces::msg::ScannerData::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_ScannerData_distance(msg_);
  }

private:
  ::turtlesim_plus_interfaces::msg::ScannerData msg_;
};

class Init_ScannerData_type
{
public:
  Init_ScannerData_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScannerData_angle type(::turtlesim_plus_interfaces::msg::ScannerData::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ScannerData_angle(msg_);
  }

private:
  ::turtlesim_plus_interfaces::msg::ScannerData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::msg::ScannerData>()
{
  return turtlesim_plus_interfaces::msg::builder::Init_ScannerData_type();
}

}  // namespace turtlesim_plus_interfaces

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__BUILDER_HPP_
