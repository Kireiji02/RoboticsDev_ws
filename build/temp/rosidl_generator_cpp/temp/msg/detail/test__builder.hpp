// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from temp:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEMP__MSG__DETAIL__TEST__BUILDER_HPP_
#define TEMP__MSG__DETAIL__TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "temp/msg/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace temp
{

namespace msg
{

namespace builder
{

class Init_Test_num
{
public:
  Init_Test_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::temp::msg::Test num(::temp::msg::Test::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::temp::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::temp::msg::Test>()
{
  return temp::msg::builder::Init_Test_num();
}

}  // namespace temp

#endif  // TEMP__MSG__DETAIL__TEST__BUILDER_HPP_
