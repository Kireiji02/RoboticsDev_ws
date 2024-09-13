// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_plus_interfaces:action/GetData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__STRUCT_HPP_
#define TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_Goal __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_Goal __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetData_Goal_
{
  using Type = GetData_Goal_<ContainerAllocator>;

  explicit GetData_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetData_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_Goal
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_Goal
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetData_Goal_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetData_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetData_Goal_

// alias to use template instance with default allocator
using GetData_Goal =
  turtlesim_plus_interfaces::action::GetData_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim_plus_interfaces


// Include directives for member types
// Member 'data'
#include "turtlesim_plus_interfaces/msg/detail/scanner_data_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_Result __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_Result __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetData_Result_
{
  using Type = GetData_Result_<ContainerAllocator>;

  explicit GetData_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_data = false;
    }
  }

  explicit GetData_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_data = false;
    }
  }

  // field types and members
  using _is_data_type =
    bool;
  _is_data_type is_data;
  using _data_type =
    turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__is_data(
    const bool & _arg)
  {
    this->is_data = _arg;
    return *this;
  }
  Type & set__data(
    const turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_Result
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_Result
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetData_Result_ & other) const
  {
    if (this->is_data != other.is_data) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetData_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetData_Result_

// alias to use template instance with default allocator
using GetData_Result =
  turtlesim_plus_interfaces::action::GetData_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim_plus_interfaces


#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_Feedback __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetData_Feedback_
{
  using Type = GetData_Feedback_<ContainerAllocator>;

  explicit GetData_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetData_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_Feedback
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_Feedback
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetData_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetData_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetData_Feedback_

// alias to use template instance with default allocator
using GetData_Feedback =
  turtlesim_plus_interfaces::action::GetData_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim_plus_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "turtlesim_plus_interfaces/action/detail/get_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_SendGoal_Request __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetData_SendGoal_Request_
{
  using Type = GetData_SendGoal_Request_<ContainerAllocator>;

  explicit GetData_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GetData_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const turtlesim_plus_interfaces::action::GetData_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_SendGoal_Request
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_SendGoal_Request
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetData_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetData_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetData_SendGoal_Request_

// alias to use template instance with default allocator
using GetData_SendGoal_Request =
  turtlesim_plus_interfaces::action::GetData_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim_plus_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_SendGoal_Response __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetData_SendGoal_Response_
{
  using Type = GetData_SendGoal_Response_<ContainerAllocator>;

  explicit GetData_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GetData_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_SendGoal_Response
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_SendGoal_Response
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetData_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetData_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetData_SendGoal_Response_

// alias to use template instance with default allocator
using GetData_SendGoal_Response =
  turtlesim_plus_interfaces::action::GetData_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace turtlesim_plus_interfaces
{

namespace action
{

struct GetData_SendGoal
{
  using Request = turtlesim_plus_interfaces::action::GetData_SendGoal_Request;
  using Response = turtlesim_plus_interfaces::action::GetData_SendGoal_Response;
};

}  // namespace action

}  // namespace turtlesim_plus_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_GetResult_Request __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetData_GetResult_Request_
{
  using Type = GetData_GetResult_Request_<ContainerAllocator>;

  explicit GetData_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GetData_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_GetResult_Request
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_GetResult_Request
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetData_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetData_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetData_GetResult_Request_

// alias to use template instance with default allocator
using GetData_GetResult_Request =
  turtlesim_plus_interfaces::action::GetData_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim_plus_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "turtlesim_plus_interfaces/action/detail/get_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_GetResult_Response __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetData_GetResult_Response_
{
  using Type = GetData_GetResult_Response_<ContainerAllocator>;

  explicit GetData_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GetData_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const turtlesim_plus_interfaces::action::GetData_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_GetResult_Response
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_GetResult_Response
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetData_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetData_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetData_GetResult_Response_

// alias to use template instance with default allocator
using GetData_GetResult_Response =
  turtlesim_plus_interfaces::action::GetData_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim_plus_interfaces

namespace turtlesim_plus_interfaces
{

namespace action
{

struct GetData_GetResult
{
  using Request = turtlesim_plus_interfaces::action::GetData_GetResult_Request;
  using Response = turtlesim_plus_interfaces::action::GetData_GetResult_Response;
};

}  // namespace action

}  // namespace turtlesim_plus_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "turtlesim_plus_interfaces/action/detail/get_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__action__GetData_FeedbackMessage __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetData_FeedbackMessage_
{
  using Type = GetData_FeedbackMessage_<ContainerAllocator>;

  explicit GetData_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GetData_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const turtlesim_plus_interfaces::action::GetData_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_FeedbackMessage
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__action__GetData_FeedbackMessage
    std::shared_ptr<turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetData_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetData_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetData_FeedbackMessage_

// alias to use template instance with default allocator
using GetData_FeedbackMessage =
  turtlesim_plus_interfaces::action::GetData_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim_plus_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace turtlesim_plus_interfaces
{

namespace action
{

struct GetData
{
  /// The goal message defined in the action definition.
  using Goal = turtlesim_plus_interfaces::action::GetData_Goal;
  /// The result message defined in the action definition.
  using Result = turtlesim_plus_interfaces::action::GetData_Result;
  /// The feedback message defined in the action definition.
  using Feedback = turtlesim_plus_interfaces::action::GetData_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = turtlesim_plus_interfaces::action::GetData_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = turtlesim_plus_interfaces::action::GetData_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = turtlesim_plus_interfaces::action::GetData_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GetData GetData;

}  // namespace action

}  // namespace turtlesim_plus_interfaces

#endif  // TURTLESIM_PLUS_INTERFACES__ACTION__DETAIL__GET_DATA__STRUCT_HPP_
