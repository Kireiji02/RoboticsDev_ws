// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lab1_interfaces:srv/SetNoise.idl
// generated code does not contain a copyright notice

#ifndef LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__STRUCT_HPP_
#define LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mean'
// Member 'variance'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lab1_interfaces__srv__SetNoise_Request __attribute__((deprecated))
#else
# define DEPRECATED__lab1_interfaces__srv__SetNoise_Request __declspec(deprecated)
#endif

namespace lab1_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNoise_Request_
{
  using Type = SetNoise_Request_<ContainerAllocator>;

  explicit SetNoise_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mean(_init),
    variance(_init)
  {
    (void)_init;
  }

  explicit SetNoise_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mean(_alloc, _init),
    variance(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mean_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _mean_type mean;
  using _variance_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _variance_type variance;

  // setters for named parameter idiom
  Type & set__mean(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->mean = _arg;
    return *this;
  }
  Type & set__variance(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->variance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab1_interfaces__srv__SetNoise_Request
    std::shared_ptr<lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab1_interfaces__srv__SetNoise_Request
    std::shared_ptr<lab1_interfaces::srv::SetNoise_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNoise_Request_ & other) const
  {
    if (this->mean != other.mean) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNoise_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNoise_Request_

// alias to use template instance with default allocator
using SetNoise_Request =
  lab1_interfaces::srv::SetNoise_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lab1_interfaces


#ifndef _WIN32
# define DEPRECATED__lab1_interfaces__srv__SetNoise_Response __attribute__((deprecated))
#else
# define DEPRECATED__lab1_interfaces__srv__SetNoise_Response __declspec(deprecated)
#endif

namespace lab1_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNoise_Response_
{
  using Type = SetNoise_Response_<ContainerAllocator>;

  explicit SetNoise_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetNoise_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab1_interfaces__srv__SetNoise_Response
    std::shared_ptr<lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab1_interfaces__srv__SetNoise_Response
    std::shared_ptr<lab1_interfaces::srv::SetNoise_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNoise_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNoise_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNoise_Response_

// alias to use template instance with default allocator
using SetNoise_Response =
  lab1_interfaces::srv::SetNoise_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lab1_interfaces

namespace lab1_interfaces
{

namespace srv
{

struct SetNoise
{
  using Request = lab1_interfaces::srv::SetNoise_Request;
  using Response = lab1_interfaces::srv::SetNoise_Response;
};

}  // namespace srv

}  // namespace lab1_interfaces

#endif  // LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__STRUCT_HPP_
