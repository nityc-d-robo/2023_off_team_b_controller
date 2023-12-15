// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drobo_interfaces:srv/SolenoidStateSrv.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__TRAITS_HPP_
#define DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drobo_interfaces/srv/detail/solenoid_state_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drobo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SolenoidStateSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: axle_position
  {
    out << "axle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.axle_position, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolenoidStateSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: axle_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.axle_position, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolenoidStateSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace drobo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drobo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drobo_interfaces::srv::SolenoidStateSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drobo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drobo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const drobo_interfaces::srv::SolenoidStateSrv_Request & msg)
{
  return drobo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<drobo_interfaces::srv::SolenoidStateSrv_Request>()
{
  return "drobo_interfaces::srv::SolenoidStateSrv_Request";
}

template<>
inline const char * name<drobo_interfaces::srv::SolenoidStateSrv_Request>()
{
  return "drobo_interfaces/srv/SolenoidStateSrv_Request";
}

template<>
struct has_fixed_size<drobo_interfaces::srv::SolenoidStateSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drobo_interfaces::srv::SolenoidStateSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drobo_interfaces::srv::SolenoidStateSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace drobo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SolenoidStateSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolenoidStateSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolenoidStateSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace drobo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drobo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drobo_interfaces::srv::SolenoidStateSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drobo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drobo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const drobo_interfaces::srv::SolenoidStateSrv_Response & msg)
{
  return drobo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<drobo_interfaces::srv::SolenoidStateSrv_Response>()
{
  return "drobo_interfaces::srv::SolenoidStateSrv_Response";
}

template<>
inline const char * name<drobo_interfaces::srv::SolenoidStateSrv_Response>()
{
  return "drobo_interfaces/srv/SolenoidStateSrv_Response";
}

template<>
struct has_fixed_size<drobo_interfaces::srv::SolenoidStateSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drobo_interfaces::srv::SolenoidStateSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drobo_interfaces::srv::SolenoidStateSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drobo_interfaces::srv::SolenoidStateSrv>()
{
  return "drobo_interfaces::srv::SolenoidStateSrv";
}

template<>
inline const char * name<drobo_interfaces::srv::SolenoidStateSrv>()
{
  return "drobo_interfaces/srv/SolenoidStateSrv";
}

template<>
struct has_fixed_size<drobo_interfaces::srv::SolenoidStateSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<drobo_interfaces::srv::SolenoidStateSrv_Request>::value &&
    has_fixed_size<drobo_interfaces::srv::SolenoidStateSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<drobo_interfaces::srv::SolenoidStateSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<drobo_interfaces::srv::SolenoidStateSrv_Request>::value &&
    has_bounded_size<drobo_interfaces::srv::SolenoidStateSrv_Response>::value
  >
{
};

template<>
struct is_service<drobo_interfaces::srv::SolenoidStateSrv>
  : std::true_type
{
};

template<>
struct is_service_request<drobo_interfaces::srv::SolenoidStateSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drobo_interfaces::srv::SolenoidStateSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__TRAITS_HPP_
