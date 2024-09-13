// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_plus_interfaces:action/GetData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__BUILDER_HPP_
#define TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_plus_interfaces/action/detail/get_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_plus_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::action::GetData_Goal>()
{
  return ::turtlesim_plus_interfaces::action::GetData_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim_plus_interfaces


namespace turtlesim_plus_interfaces
{

namespace action
{

namespace builder
{

class Init_GetData_Result_data
{
public:
  explicit Init_GetData_Result_data(::turtlesim_plus_interfaces::action::GetData_Result & msg)
  : msg_(msg)
  {}
  ::turtlesim_plus_interfaces::action::GetData_Result data(::turtlesim_plus_interfaces::action::GetData_Result::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_Result msg_;
};

class Init_GetData_Result_is_data
{
public:
  Init_GetData_Result_is_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetData_Result_data is_data(::turtlesim_plus_interfaces::action::GetData_Result::_is_data_type arg)
  {
    msg_.is_data = std::move(arg);
    return Init_GetData_Result_data(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::action::GetData_Result>()
{
  return turtlesim_plus_interfaces::action::builder::Init_GetData_Result_is_data();
}

}  // namespace turtlesim_plus_interfaces


namespace turtlesim_plus_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::action::GetData_Feedback>()
{
  return ::turtlesim_plus_interfaces::action::GetData_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim_plus_interfaces


namespace turtlesim_plus_interfaces
{

namespace action
{

namespace builder
{

class Init_GetData_SendGoal_Request_goal
{
public:
  explicit Init_GetData_SendGoal_Request_goal(::turtlesim_plus_interfaces::action::GetData_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim_plus_interfaces::action::GetData_SendGoal_Request goal(::turtlesim_plus_interfaces::action::GetData_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_SendGoal_Request msg_;
};

class Init_GetData_SendGoal_Request_goal_id
{
public:
  Init_GetData_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetData_SendGoal_Request_goal goal_id(::turtlesim_plus_interfaces::action::GetData_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetData_SendGoal_Request_goal(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::action::GetData_SendGoal_Request>()
{
  return turtlesim_plus_interfaces::action::builder::Init_GetData_SendGoal_Request_goal_id();
}

}  // namespace turtlesim_plus_interfaces


namespace turtlesim_plus_interfaces
{

namespace action
{

namespace builder
{

class Init_GetData_SendGoal_Response_stamp
{
public:
  explicit Init_GetData_SendGoal_Response_stamp(::turtlesim_plus_interfaces::action::GetData_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtlesim_plus_interfaces::action::GetData_SendGoal_Response stamp(::turtlesim_plus_interfaces::action::GetData_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_SendGoal_Response msg_;
};

class Init_GetData_SendGoal_Response_accepted
{
public:
  Init_GetData_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetData_SendGoal_Response_stamp accepted(::turtlesim_plus_interfaces::action::GetData_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GetData_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::action::GetData_SendGoal_Response>()
{
  return turtlesim_plus_interfaces::action::builder::Init_GetData_SendGoal_Response_accepted();
}

}  // namespace turtlesim_plus_interfaces


namespace turtlesim_plus_interfaces
{

namespace action
{

namespace builder
{

class Init_GetData_GetResult_Request_goal_id
{
public:
  Init_GetData_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_plus_interfaces::action::GetData_GetResult_Request goal_id(::turtlesim_plus_interfaces::action::GetData_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::action::GetData_GetResult_Request>()
{
  return turtlesim_plus_interfaces::action::builder::Init_GetData_GetResult_Request_goal_id();
}

}  // namespace turtlesim_plus_interfaces


namespace turtlesim_plus_interfaces
{

namespace action
{

namespace builder
{

class Init_GetData_GetResult_Response_result
{
public:
  explicit Init_GetData_GetResult_Response_result(::turtlesim_plus_interfaces::action::GetData_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtlesim_plus_interfaces::action::GetData_GetResult_Response result(::turtlesim_plus_interfaces::action::GetData_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_GetResult_Response msg_;
};

class Init_GetData_GetResult_Response_status
{
public:
  Init_GetData_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetData_GetResult_Response_result status(::turtlesim_plus_interfaces::action::GetData_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetData_GetResult_Response_result(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::action::GetData_GetResult_Response>()
{
  return turtlesim_plus_interfaces::action::builder::Init_GetData_GetResult_Response_status();
}

}  // namespace turtlesim_plus_interfaces


namespace turtlesim_plus_interfaces
{

namespace action
{

namespace builder
{

class Init_GetData_FeedbackMessage_feedback
{
public:
  explicit Init_GetData_FeedbackMessage_feedback(::turtlesim_plus_interfaces::action::GetData_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtlesim_plus_interfaces::action::GetData_FeedbackMessage feedback(::turtlesim_plus_interfaces::action::GetData_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_FeedbackMessage msg_;
};

class Init_GetData_FeedbackMessage_goal_id
{
public:
  Init_GetData_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetData_FeedbackMessage_feedback goal_id(::turtlesim_plus_interfaces::action::GetData_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetData_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtlesim_plus_interfaces::action::GetData_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_plus_interfaces::action::GetData_FeedbackMessage>()
{
  return turtlesim_plus_interfaces::action::builder::Init_GetData_FeedbackMessage_goal_id();
}

}  // namespace turtlesim_plus_interfaces

#endif  // TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__BUILDER_HPP_
