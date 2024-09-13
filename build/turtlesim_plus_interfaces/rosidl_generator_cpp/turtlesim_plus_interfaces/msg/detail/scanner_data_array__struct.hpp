// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_plus_interfaces:msg/ScannerDataArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__STRUCT_HPP_
#define TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "turtlesim_plus_interfaces/msg/detail/scanner_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_plus_interfaces__msg__ScannerDataArray __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_plus_interfaces__msg__ScannerDataArray __declspec(deprecated)
#endif

namespace turtlesim_plus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScannerDataArray_
{
  using Type = ScannerDataArray_<ContainerAllocator>;

  explicit ScannerDataArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ScannerDataArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtlesim_plus_interfaces::msg::ScannerData_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_plus_interfaces__msg__ScannerDataArray
    std::shared_ptr<turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_plus_interfaces__msg__ScannerDataArray
    std::shared_ptr<turtlesim_plus_interfaces::msg::ScannerDataArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScannerDataArray_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScannerDataArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScannerDataArray_

// alias to use template instance with default allocator
using ScannerDataArray =
  turtlesim_plus_interfaces::msg::ScannerDataArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtlesim_plus_interfaces

#endif  // TURTLESIM_PLUS_INTERFACES__MSG__DETAIL__SCANNER_DATA_ARRAY__STRUCT_HPP_
