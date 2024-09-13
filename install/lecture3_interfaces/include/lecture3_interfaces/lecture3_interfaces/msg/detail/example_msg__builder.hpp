// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lecture3_interfaces:msg/ExampleMsg.idl
// generated code does not contain a copyright notice

#ifndef LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_
#define LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lecture3_interfaces/msg/detail/example_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lecture3_interfaces
{

namespace msg
{

namespace builder
{

class Init_ExampleMsg_description
{
public:
  explicit Init_ExampleMsg_description(::lecture3_interfaces::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  ::lecture3_interfaces::msg::ExampleMsg description(::lecture3_interfaces::msg::ExampleMsg::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lecture3_interfaces::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_id
{
public:
  explicit Init_ExampleMsg_id(::lecture3_interfaces::msg::ExampleMsg & msg)
  : msg_(msg)
  {}
  Init_ExampleMsg_description id(::lecture3_interfaces::msg::ExampleMsg::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ExampleMsg_description(msg_);
  }

private:
  ::lecture3_interfaces::msg::ExampleMsg msg_;
};

class Init_ExampleMsg_temperature
{
public:
  Init_ExampleMsg_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExampleMsg_id temperature(::lecture3_interfaces::msg::ExampleMsg::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_ExampleMsg_id(msg_);
  }

private:
  ::lecture3_interfaces::msg::ExampleMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lecture3_interfaces::msg::ExampleMsg>()
{
  return lecture3_interfaces::msg::builder::Init_ExampleMsg_temperature();
}

}  // namespace lecture3_interfaces

#endif  // LECTURE3_INTERFACES__MSG__DETAIL__EXAMPLE_MSG__BUILDER_HPP_
