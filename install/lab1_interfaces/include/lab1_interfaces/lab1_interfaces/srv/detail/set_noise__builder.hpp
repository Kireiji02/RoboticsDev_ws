// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lab1_interfaces:srv/SetNoise.idl
// generated code does not contain a copyright notice

#ifndef LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__BUILDER_HPP_
#define LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lab1_interfaces/srv/detail/set_noise__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lab1_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetNoise_Request_variance
{
public:
  explicit Init_SetNoise_Request_variance(::lab1_interfaces::srv::SetNoise_Request & msg)
  : msg_(msg)
  {}
  ::lab1_interfaces::srv::SetNoise_Request variance(::lab1_interfaces::srv::SetNoise_Request::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab1_interfaces::srv::SetNoise_Request msg_;
};

class Init_SetNoise_Request_mean
{
public:
  Init_SetNoise_Request_mean()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNoise_Request_variance mean(::lab1_interfaces::srv::SetNoise_Request::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_SetNoise_Request_variance(msg_);
  }

private:
  ::lab1_interfaces::srv::SetNoise_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab1_interfaces::srv::SetNoise_Request>()
{
  return lab1_interfaces::srv::builder::Init_SetNoise_Request_mean();
}

}  // namespace lab1_interfaces


namespace lab1_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab1_interfaces::srv::SetNoise_Response>()
{
  return ::lab1_interfaces::srv::SetNoise_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace lab1_interfaces

#endif  // LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__BUILDER_HPP_
