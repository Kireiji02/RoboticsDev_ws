// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_plus_interfaces:msg/ScannerData.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__STRUCT_HPP_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__msg__ScannerData __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__msg__ScannerData __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScannerData_
{
  using Type = ScannerData_<ContainerAllocator>;

  explicit ScannerData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->angle = 0.0;
      this->distance = 0.0;
    }
  }

  explicit ScannerData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->angle = 0.0;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _angle_type =
    double;
  _angle_type angle;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__msg__ScannerData
    std::shared_ptr<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__msg__ScannerData
    std::shared_ptr<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScannerData_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScannerData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScannerData_

// alias to use template instance with default allocator
using ScannerData =
  turtlesim_plus_interfaces::msg::ScannerData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtlesim_plus_interfaces

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA__STRUCT_HPP_
