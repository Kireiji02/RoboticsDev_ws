// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lecture3_interfaces:srv/ExampleSrv.idl
// generated code does not contain a copyright notice

#ifndef LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__BUILDER_HPP_
#define LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lecture3_interfaces/srv/detail/example_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lecture3_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExampleSrv_Request_b
{
public:
  explicit Init_ExampleSrv_Request_b(::lecture3_interfaces::srv::ExampleSrv_Request & msg)
  : msg_(msg)
  {}
  ::lecture3_interfaces::srv::ExampleSrv_Request b(::lecture3_interfaces::srv::ExampleSrv_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lecture3_interfaces::srv::ExampleSrv_Request msg_;
};

class Init_ExampleSrv_Request_a
{
public:
  Init_ExampleSrv_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExampleSrv_Request_b a(::lecture3_interfaces::srv::ExampleSrv_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_ExampleSrv_Request_b(msg_);
  }

private:
  ::lecture3_interfaces::srv::ExampleSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lecture3_interfaces::srv::ExampleSrv_Request>()
{
  return lecture3_interfaces::srv::builder::Init_ExampleSrv_Request_a();
}

}  // namespace lecture3_interfaces


namespace lecture3_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExampleSrv_Response_sum
{
public:
  Init_ExampleSrv_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lecture3_interfaces::srv::ExampleSrv_Response sum(::lecture3_interfaces::srv::ExampleSrv_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lecture3_interfaces::srv::ExampleSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lecture3_interfaces::srv::ExampleSrv_Response>()
{
  return lecture3_interfaces::srv::builder::Init_ExampleSrv_Response_sum();
}

}  // namespace lecture3_interfaces

#endif  // LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__BUILDER_HPP_
