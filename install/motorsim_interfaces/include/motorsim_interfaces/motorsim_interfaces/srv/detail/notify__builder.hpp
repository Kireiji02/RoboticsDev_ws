// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motorsim_interfaces:srv/Notify.idl
// generated code does not contain a copyright notice

#ifndef MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__BUILDER_HPP_
#define MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motorsim_interfaces/srv/detail/notify__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motorsim_interfaces
{

namespace srv
{

namespace builder
{

class Init_Notify_Request_trig
{
public:
  Init_Notify_Request_trig()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motorsim_interfaces::srv::Notify_Request trig(::motorsim_interfaces::srv::Notify_Request::_trig_type arg)
  {
    msg_.trig = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorsim_interfaces::srv::Notify_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorsim_interfaces::srv::Notify_Request>()
{
  return motorsim_interfaces::srv::builder::Init_Notify_Request_trig();
}

}  // namespace motorsim_interfaces


namespace motorsim_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorsim_interfaces::srv::Notify_Response>()
{
  return ::motorsim_interfaces::srv::Notify_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace motorsim_interfaces

#endif  // MOTORSIM_INTERFACES__SRV__DETAIL__NOTIFY__BUILDER_HPP_
