// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lecture3_interfaces:srv/ExampleSrv.idl
// generated code does not contain a copyright notice

#ifndef LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__STRUCT_HPP_
#define LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'a'
// Member 'b'
#include "std_msgs/msg/detail/int32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lecture3_interfaces__srv__ExampleSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__lecture3_interfaces__srv__ExampleSrv_Request __declspec(deprecated)
#endif

namespace lecture3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExampleSrv_Request_
{
  using Type = ExampleSrv_Request_<ContainerAllocator>;

  explicit ExampleSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_init),
    b(_init)
  {
    (void)_init;
  }

  explicit ExampleSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_alloc, _init),
    b(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _a_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _a_type a;
  using _b_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lecture3_interfaces__srv__ExampleSrv_Request
    std::shared_ptr<lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lecture3_interfaces__srv__ExampleSrv_Request
    std::shared_ptr<lecture3_interfaces::srv::ExampleSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleSrv_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleSrv_Request_

// alias to use template instance with default allocator
using ExampleSrv_Request =
  lecture3_interfaces::srv::ExampleSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lecture3_interfaces


// Include directives for member types
// Member 'sum'
// already included above
// #include "std_msgs/msg/detail/int32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lecture3_interfaces__srv__ExampleSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__lecture3_interfaces__srv__ExampleSrv_Response __declspec(deprecated)
#endif

namespace lecture3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExampleSrv_Response_
{
  using Type = ExampleSrv_Response_<ContainerAllocator>;

  explicit ExampleSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sum(_init)
  {
    (void)_init;
  }

  explicit ExampleSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sum(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _sum_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lecture3_interfaces__srv__ExampleSrv_Response
    std::shared_ptr<lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lecture3_interfaces__srv__ExampleSrv_Response
    std::shared_ptr<lecture3_interfaces::srv::ExampleSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleSrv_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleSrv_Response_

// alias to use template instance with default allocator
using ExampleSrv_Response =
  lecture3_interfaces::srv::ExampleSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lecture3_interfaces

namespace lecture3_interfaces
{

namespace srv
{

struct ExampleSrv
{
  using Request = lecture3_interfaces::srv::ExampleSrv_Request;
  using Response = lecture3_interfaces::srv::ExampleSrv_Response;
};

}  // namespace srv

}  // namespace lecture3_interfaces

#endif  // LECTURE3_INTERFACES__SRV__DETAIL__EXAMPLE_SRV__STRUCT_HPP_
