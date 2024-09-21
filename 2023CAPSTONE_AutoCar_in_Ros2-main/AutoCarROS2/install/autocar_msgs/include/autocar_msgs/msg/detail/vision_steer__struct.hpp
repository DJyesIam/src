// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocar_msgs:msg/VisionSteer.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__STRUCT_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__autocar_msgs__msg__VisionSteer __attribute__((deprecated))
#else
# define DEPRECATED__autocar_msgs__msg__VisionSteer __declspec(deprecated)
#endif

namespace autocar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionSteer_
{
  using Type = VisionSteer_<ContainerAllocator>;

  explicit VisionSteer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->steer = 0.0f;
    }
  }

  explicit VisionSteer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->steer = 0.0f;
    }
  }

  // field types and members
  using _detected_type =
    bool;
  _detected_type detected;
  using _steer_type =
    float;
  _steer_type steer;

  // setters for named parameter idiom
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__steer(
    const float & _arg)
  {
    this->steer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocar_msgs::msg::VisionSteer_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocar_msgs::msg::VisionSteer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocar_msgs::msg::VisionSteer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocar_msgs::msg::VisionSteer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::VisionSteer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::VisionSteer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::VisionSteer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::VisionSteer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocar_msgs::msg::VisionSteer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocar_msgs::msg::VisionSteer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocar_msgs__msg__VisionSteer
    std::shared_ptr<autocar_msgs::msg::VisionSteer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocar_msgs__msg__VisionSteer
    std::shared_ptr<autocar_msgs::msg::VisionSteer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionSteer_ & other) const
  {
    if (this->detected != other.detected) {
      return false;
    }
    if (this->steer != other.steer) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionSteer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionSteer_

// alias to use template instance with default allocator
using VisionSteer =
  autocar_msgs::msg::VisionSteer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__STRUCT_HPP_
