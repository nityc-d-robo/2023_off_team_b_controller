// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drobo_interfaces:msg/SdLibMsg.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__STRUCT_HPP_
#define DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drobo_interfaces__msg__SdLibMsg __attribute__((deprecated))
#else
# define DEPRECATED__drobo_interfaces__msg__SdLibMsg __declspec(deprecated)
#endif

namespace drobo_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdLibMsg_
{
  using Type = SdLibMsg_<ContainerAllocator>;

  explicit SdLibMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0;
      this->semi_id = 0;
      this->port = 0;
      this->power1 = 0;
      this->power2 = 0;
    }
  }

  explicit SdLibMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0;
      this->semi_id = 0;
      this->port = 0;
      this->power1 = 0;
      this->power2 = 0;
    }
  }

  // field types and members
  using _address_type =
    uint8_t;
  _address_type address;
  using _semi_id_type =
    uint8_t;
  _semi_id_type semi_id;
  using _port_type =
    uint8_t;
  _port_type port;
  using _power1_type =
    uint16_t;
  _power1_type power1;
  using _power2_type =
    uint16_t;
  _power2_type power2;

  // setters for named parameter idiom
  Type & set__address(
    const uint8_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__semi_id(
    const uint8_t & _arg)
  {
    this->semi_id = _arg;
    return *this;
  }
  Type & set__port(
    const uint8_t & _arg)
  {
    this->port = _arg;
    return *this;
  }
  Type & set__power1(
    const uint16_t & _arg)
  {
    this->power1 = _arg;
    return *this;
  }
  Type & set__power2(
    const uint16_t & _arg)
  {
    this->power2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drobo_interfaces::msg::SdLibMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const drobo_interfaces::msg::SdLibMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drobo_interfaces::msg::SdLibMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drobo_interfaces::msg::SdLibMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drobo_interfaces::msg::SdLibMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drobo_interfaces::msg::SdLibMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drobo_interfaces::msg::SdLibMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drobo_interfaces::msg::SdLibMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drobo_interfaces::msg::SdLibMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drobo_interfaces::msg::SdLibMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drobo_interfaces__msg__SdLibMsg
    std::shared_ptr<drobo_interfaces::msg::SdLibMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drobo_interfaces__msg__SdLibMsg
    std::shared_ptr<drobo_interfaces::msg::SdLibMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdLibMsg_ & other) const
  {
    if (this->address != other.address) {
      return false;
    }
    if (this->semi_id != other.semi_id) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->power1 != other.power1) {
      return false;
    }
    if (this->power2 != other.power2) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdLibMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdLibMsg_

// alias to use template instance with default allocator
using SdLibMsg =
  drobo_interfaces::msg::SdLibMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drobo_interfaces

#endif  // DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__STRUCT_HPP_
