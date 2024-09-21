// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocar_msgs:msg/PathArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__STRUCT_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'yaw'
#include "std_msgs/msg/detail/float64_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autocar_msgs__msg__PathArray __attribute__((deprecated))
#else
# define DEPRECATED__autocar_msgs__msg__PathArray __declspec(deprecated)
#endif

namespace autocar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathArray_
{
  using Type = PathArray_<ContainerAllocator>;

  explicit PathArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_init),
    y(_init),
    yaw(_init)
  {
    (void)_init;
  }

  explicit PathArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc, _init),
    y(_alloc, _init),
    yaw(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _x_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _x_type x;
  using _y_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _y_type y;
  using _yaw_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocar_msgs::msg::PathArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocar_msgs::msg::PathArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocar_msgs::msg::PathArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocar_msgs::msg::PathArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::PathArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::PathArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::PathArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::PathArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocar_msgs::msg::PathArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocar_msgs::msg::PathArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocar_msgs__msg__PathArray
    std::shared_ptr<autocar_msgs::msg::PathArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocar_msgs__msg__PathArray
    std::shared_ptr<autocar_msgs::msg::PathArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathArray_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathArray_

// alias to use template instance with default allocator
using PathArray =
  autocar_msgs::msg::PathArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__STRUCT_HPP_
