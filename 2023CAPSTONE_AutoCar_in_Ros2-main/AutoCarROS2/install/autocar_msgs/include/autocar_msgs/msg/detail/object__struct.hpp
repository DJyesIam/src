// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocar_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autocar_msgs__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__autocar_msgs__msg__Object __declspec(deprecated)
#endif

namespace autocar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->classification = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->yaw = 0.0f;
      this->v = 0.0f;
      this->yawrate = 0.0f;
      this->a = 0.0f;
      this->delta = 0.0f;
      this->length = 0.0f;
      this->width = 0.0f;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->classification = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->yaw = 0.0f;
      this->v = 0.0f;
      this->yawrate = 0.0f;
      this->a = 0.0f;
      this->delta = 0.0f;
      this->length = 0.0f;
      this->width = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _v_type =
    float;
  _v_type v;
  using _yawrate_type =
    float;
  _yawrate_type yawrate;
  using _a_type =
    float;
  _a_type a;
  using _delta_type =
    float;
  _delta_type delta;
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__classification(
    const uint8_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__v(
    const float & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__yawrate(
    const float & _arg)
  {
    this->yawrate = _arg;
    return *this;
  }
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__delta(
    const float & _arg)
  {
    this->delta = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CLASSIFICATION_UNKNOWN =
    0u;
  static constexpr uint8_t CLASSIFICATION_CAR =
    1u;
  static constexpr uint8_t CLASSIFICATION_PEDESTRIAN =
    2u;
  static constexpr uint8_t CLASSIFICATION_CYCLIST =
    3u;

  // pointer types
  using RawPtr =
    autocar_msgs::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocar_msgs::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocar_msgs::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocar_msgs::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocar_msgs::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocar_msgs::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocar_msgs::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocar_msgs::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocar_msgs__msg__Object
    std::shared_ptr<autocar_msgs::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocar_msgs__msg__Object
    std::shared_ptr<autocar_msgs::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->yawrate != other.yawrate) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->delta != other.delta) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  autocar_msgs::msg::Object_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Object_<ContainerAllocator>::CLASSIFICATION_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Object_<ContainerAllocator>::CLASSIFICATION_CAR;
template<typename ContainerAllocator>
constexpr uint8_t Object_<ContainerAllocator>::CLASSIFICATION_PEDESTRIAN;
template<typename ContainerAllocator>
constexpr uint8_t Object_<ContainerAllocator>::CLASSIFICATION_CYCLIST;

}  // namespace msg

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
