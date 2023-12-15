// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drobo_interfaces:msg/MdLibMsg.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__STRUCT_HPP_
#define DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drobo_interfaces__msg__MdLibMsg __attribute__((deprecated))
#else
# define DEPRECATED__drobo_interfaces__msg__MdLibMsg __declspec(deprecated)
#endif

namespace drobo_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MdLibMsg_
{
  using Type = MdLibMsg_<ContainerAllocator>;

  explicit MdLibMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0;
      this->use_semi = false;
      this->semi_id = 0;
      this->mode = 0;
      this->phase = false;
      this->power = 0;
      this->port = false;
      this->angle = 0l;
      this->timeout = 0;
    }
  }

  explicit MdLibMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0;
      this->use_semi = false;
      this->semi_id = 0;
      this->mode = 0;
      this->phase = false;
      this->power = 0;
      this->port = false;
      this->angle = 0l;
      this->timeout = 0;
    }
  }

  // field types and members
  using _address_type =
    uint8_t;
  _address_type address;
  using _use_semi_type =
    bool;
  _use_semi_type use_semi;
  using _semi_id_type =
    uint8_t;
  _semi_id_type semi_id;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _phase_type =
    bool;
  _phase_type phase;
  using _power_type =
    uint16_t;
  _power_type power;
  using _port_type =
    bool;
  _port_type port;
  using _angle_type =
    int32_t;
  _angle_type angle;
  using _timeout_type =
    uint16_t;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__address(
    const uint8_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__use_semi(
    const bool & _arg)
  {
    this->use_semi = _arg;
    return *this;
  }
  Type & set__semi_id(
    const uint8_t & _arg)
  {
    this->semi_id = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__phase(
    const bool & _arg)
  {
    this->phase = _arg;
    return *this;
  }
  Type & set__power(
    const uint16_t & _arg)
  {
    this->power = _arg;
    return *this;
  }
  Type & set__port(
    const bool & _arg)
  {
    this->port = _arg;
    return *this;
  }
  Type & set__angle(
    const int32_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__timeout(
    const uint16_t & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drobo_interfaces::msg::MdLibMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const drobo_interfaces::msg::MdLibMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drobo_interfaces::msg::MdLibMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drobo_interfaces::msg::MdLibMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drobo_interfaces::msg::MdLibMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drobo_interfaces::msg::MdLibMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drobo_interfaces::msg::MdLibMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drobo_interfaces::msg::MdLibMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drobo_interfaces::msg::MdLibMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drobo_interfaces::msg::MdLibMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drobo_interfaces__msg__MdLibMsg
    std::shared_ptr<drobo_interfaces::msg::MdLibMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drobo_interfaces__msg__MdLibMsg
    std::shared_ptr<drobo_interfaces::msg::MdLibMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MdLibMsg_ & other) const
  {
    if (this->address != other.address) {
      return false;
    }
    if (this->use_semi != other.use_semi) {
      return false;
    }
    if (this->semi_id != other.semi_id) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->phase != other.phase) {
      return false;
    }
    if (this->power != other.power) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const MdLibMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MdLibMsg_

// alias to use template instance with default allocator
using MdLibMsg =
  drobo_interfaces::msg::MdLibMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drobo_interfaces

#endif  // DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__STRUCT_HPP_
