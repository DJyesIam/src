// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocar_msgs:msg/PolygonArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__STRUCT_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'polygon_list'
#include "autocar_msgs/msg/detail/polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autocar_msgs__msg__PolygonArray __attribute__((deprecated))
#else
# define DEPRECATED__autocar_msgs__msg__PolygonArray __declspec(deprecated)
#endif

namespace autocar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PolygonArray_
{
  using Type = PolygonArray_<ContainerAllocator>;

  explicit PolygonArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PolygonArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _polygon_list_type =
    std::vector<autocar_msgs::msg::Polygon_<ContainerAllocator>, typename ContainerAllocator::template rebind<autocar_msgs::msg::Polygon_<ContainerAllocator>>::other>;
  _polygon_list_type polygon_list;

  // setters for named parameter idiom
  Type & set__polygon_list(
    const std::vector<autocar_msgs::msg::Polygon_<ContainerAllocator>, typename ContainerAllocator::template rebind<autocar_msgs::msg::Polygon_<ContainerAllocator>>::other> & _arg)
  {
    this->polygon_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocar_msgs::msg::PolygonArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocar_msgs::msg::PolygonArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocar_msgs::msg::PolygonArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocar_msgs::msg::PolygonArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::PolygonArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::PolygonArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::PolygonArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::PolygonArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocar_msgs::msg::PolygonArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocar_msgs::msg::PolygonArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocar_msgs__msg__PolygonArray
    std::shared_ptr<autocar_msgs::msg::PolygonArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocar_msgs__msg__PolygonArray
    std::shared_ptr<autocar_msgs::msg::PolygonArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PolygonArray_ & other) const
  {
    if (this->polygon_list != other.polygon_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const PolygonArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PolygonArray_

// alias to use template instance with default allocator
using PolygonArray =
  autocar_msgs::msg::PolygonArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__STRUCT_HPP_
