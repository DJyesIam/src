// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocar_msgs:msg/LinkArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__STRUCT_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__autocar_msgs__msg__LinkArray __attribute__((deprecated))
#else
# define DEPRECATED__autocar_msgs__msg__LinkArray __declspec(deprecated)
#endif

namespace autocar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinkArray_
{
  using Type = LinkArray_<ContainerAllocator>;

  explicit LinkArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_num = 0l;
      this->closest_wp = 0l;
      this->mode = "";
      this->traffic_stop_wp = 0l;
      this->parking_stop_wp = 0l;
      this->direction = "";
      this->next_path = "";
    }
  }

  explicit LinkArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc),
    direction(_alloc),
    next_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_num = 0l;
      this->closest_wp = 0l;
      this->mode = "";
      this->traffic_stop_wp = 0l;
      this->parking_stop_wp = 0l;
      this->direction = "";
      this->next_path = "";
    }
  }

  // field types and members
  using _link_num_type =
    int32_t;
  _link_num_type link_num;
  using _closest_wp_type =
    int32_t;
  _closest_wp_type closest_wp;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mode_type mode;
  using _traffic_stop_wp_type =
    int32_t;
  _traffic_stop_wp_type traffic_stop_wp;
  using _parking_stop_wp_type =
    int32_t;
  _parking_stop_wp_type parking_stop_wp;
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _direction_type direction;
  using _next_path_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _next_path_type next_path;

  // setters for named parameter idiom
  Type & set__link_num(
    const int32_t & _arg)
  {
    this->link_num = _arg;
    return *this;
  }
  Type & set__closest_wp(
    const int32_t & _arg)
  {
    this->closest_wp = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__traffic_stop_wp(
    const int32_t & _arg)
  {
    this->traffic_stop_wp = _arg;
    return *this;
  }
  Type & set__parking_stop_wp(
    const int32_t & _arg)
  {
    this->parking_stop_wp = _arg;
    return *this;
  }
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__next_path(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->next_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocar_msgs::msg::LinkArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocar_msgs::msg::LinkArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocar_msgs::msg::LinkArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocar_msgs::msg::LinkArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::LinkArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::LinkArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::LinkArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::LinkArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocar_msgs::msg::LinkArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocar_msgs::msg::LinkArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocar_msgs__msg__LinkArray
    std::shared_ptr<autocar_msgs::msg::LinkArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocar_msgs__msg__LinkArray
    std::shared_ptr<autocar_msgs::msg::LinkArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinkArray_ & other) const
  {
    if (this->link_num != other.link_num) {
      return false;
    }
    if (this->closest_wp != other.closest_wp) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->traffic_stop_wp != other.traffic_stop_wp) {
      return false;
    }
    if (this->parking_stop_wp != other.parking_stop_wp) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->next_path != other.next_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinkArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinkArray_

// alias to use template instance with default allocator
using LinkArray =
  autocar_msgs::msg::LinkArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__STRUCT_HPP_
