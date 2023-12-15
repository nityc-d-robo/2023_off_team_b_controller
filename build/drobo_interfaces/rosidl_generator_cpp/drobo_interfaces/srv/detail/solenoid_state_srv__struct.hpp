// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drobo_interfaces:srv/SolenoidStateSrv.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__STRUCT_HPP_
#define DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drobo_interfaces__srv__SolenoidStateSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__drobo_interfaces__srv__SolenoidStateSrv_Request __declspec(deprecated)
#endif

namespace drobo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SolenoidStateSrv_Request_
{
  using Type = SolenoidStateSrv_Request_<ContainerAllocator>;

  explicit SolenoidStateSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axle_position = 0;
      this->state = 0;
    }
  }

  explicit SolenoidStateSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axle_position = 0;
      this->state = 0;
    }
  }

  // field types and members
  using _axle_position_type =
    uint8_t;
  _axle_position_type axle_position;
  using _state_type =
    int8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__axle_position(
    const uint8_t & _arg)
  {
    this->axle_position = _arg;
    return *this;
  }
  Type & set__state(
    const int8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drobo_interfaces__srv__SolenoidStateSrv_Request
    std::shared_ptr<drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drobo_interfaces__srv__SolenoidStateSrv_Request
    std::shared_ptr<drobo_interfaces::srv::SolenoidStateSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolenoidStateSrv_Request_ & other) const
  {
    if (this->axle_position != other.axle_position) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolenoidStateSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolenoidStateSrv_Request_

// alias to use template instance with default allocator
using SolenoidStateSrv_Request =
  drobo_interfaces::srv::SolenoidStateSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace drobo_interfaces


#ifndef _WIN32
# define DEPRECATED__drobo_interfaces__srv__SolenoidStateSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__drobo_interfaces__srv__SolenoidStateSrv_Response __declspec(deprecated)
#endif

namespace drobo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SolenoidStateSrv_Response_
{
  using Type = SolenoidStateSrv_Response_<ContainerAllocator>;

  explicit SolenoidStateSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->state.begin(), this->state.end(), false);
    }
  }

  explicit SolenoidStateSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->state.begin(), this->state.end(), false);
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _state_type =
    std::array<bool, 3>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__state(
    const std::array<bool, 3> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drobo_interfaces__srv__SolenoidStateSrv_Response
    std::shared_ptr<drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drobo_interfaces__srv__SolenoidStateSrv_Response
    std::shared_ptr<drobo_interfaces::srv::SolenoidStateSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolenoidStateSrv_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolenoidStateSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolenoidStateSrv_Response_

// alias to use template instance with default allocator
using SolenoidStateSrv_Response =
  drobo_interfaces::srv::SolenoidStateSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace drobo_interfaces

namespace drobo_interfaces
{

namespace srv
{

struct SolenoidStateSrv
{
  using Request = drobo_interfaces::srv::SolenoidStateSrv_Request;
  using Response = drobo_interfaces::srv::SolenoidStateSrv_Response;
};

}  // namespace srv

}  // namespace drobo_interfaces

#endif  // DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__STRUCT_HPP_
