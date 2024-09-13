// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_plus_interfaces:msg/ScannerDataArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__BUILDER_HPP_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_plus_interfaces/msg/detail/scanner_data_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_plus_interfaces
{

namespace msg
{

namespace builder
{

class Init_ScannerDataArray_data
{
public:
  Init_ScannerDataArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_plus_interfaces::msg::ScannerDataArray data(::turtlesim_plus_interfaces::msg::ScannerDataArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_plus_interfaces::msg::ScannerDataArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::msg::ScannerDataArray>()
{
  return turtlesim_plus_interfaces::msg::builder::Init_ScannerDataArray_data();
}

}  // namespace turtlesim_plus_interfaces

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__BUILDER_HPP_
