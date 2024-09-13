// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from temp:srv/Test.idl
// generated code does not contain a copyright notice

#ifndef TEMP__SRV__DETAIL__TEST__BUILDER_HPP_
#define TEMP__SRV__DETAIL__TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "temp/srv/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace temp
{

namespace srv
{

namespace builder
{

class Init_Test_Request_num
{
public:
  Init_Test_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::temp::srv::Test_Request num(::temp::srv::Test_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::temp::srv::Test_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::temp::srv::Test_Request>()
{
  return temp::srv::builder::Init_Test_Request_num();
}

}  // namespace temp


namespace temp
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::temp::srv::Test_Response>()
{
  return ::temp::srv::Test_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace temp

#endif  // TEMP__SRV__DETAIL__TEST__BUILDER_HPP_
