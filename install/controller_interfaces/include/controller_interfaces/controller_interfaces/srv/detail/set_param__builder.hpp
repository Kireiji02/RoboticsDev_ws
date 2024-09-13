// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_interfaces:srv/SetParam.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__BUILDER_HPP_
#define CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_interfaces/srv/detail/set_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetParam_Request_kp_angular
{
public:
  explicit Init_SetParam_Request_kp_angular(::controller_interfaces::srv::SetParam_Request & msg)
  : msg_(msg)
  {}
  ::controller_interfaces::srv::SetParam_Request kp_angular(::controller_interfaces::srv::SetParam_Request::_kp_angular_type arg)
  {
    msg_.kp_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interfaces::srv::SetParam_Request msg_;
};

class Init_SetParam_Request_kp_linear
{
public:
  Init_SetParam_Request_kp_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetParam_Request_kp_angular kp_linear(::controller_interfaces::srv::SetParam_Request::_kp_linear_type arg)
  {
    msg_.kp_linear = std::move(arg);
    return Init_SetParam_Request_kp_angular(msg_);
  }

private:
  ::controller_interfaces::srv::SetParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interfaces::srv::SetParam_Request>()
{
  return controller_interfaces::srv::builder::Init_SetParam_Request_kp_linear();
}

}  // namespace controller_interfaces


namespace controller_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interfaces::srv::SetParam_Response>()
{
  return ::controller_interfaces::srv::SetParam_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace controller_interfaces

#endif  // CONTROLLER_INTERFACES__SRV__DETAIL__SET_PARAM__BUILDER_HPP_
