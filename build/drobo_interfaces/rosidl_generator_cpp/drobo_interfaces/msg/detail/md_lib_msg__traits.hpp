// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drobo_interfaces:msg/MdLibMsg.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__TRAITS_HPP_
#define DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drobo_interfaces/msg/detail/md_lib_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drobo_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MdLibMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: address
  {
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << ", ";
  }

  // member: use_semi
  {
    out << "use_semi: ";
    rosidl_generator_traits::value_to_yaml(msg.use_semi, out);
    out << ", ";
  }

  // member: semi_id
  {
    out << "semi_id: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_id, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: phase
  {
    out << "phase: ";
    rosidl_generator_traits::value_to_yaml(msg.phase, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << ", ";
  }

  // member: port
  {
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MdLibMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << "\n";
  }

  // member: use_semi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_semi: ";
    rosidl_generator_traits::value_to_yaml(msg.use_semi, out);
    out << "\n";
  }

  // member: semi_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_id: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_id, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phase: ";
    rosidl_generator_traits::value_to_yaml(msg.phase, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }

  // member: port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MdLibMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drobo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drobo_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drobo_interfaces::msg::MdLibMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  drobo_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drobo_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const drobo_interfaces::msg::MdLibMsg & msg)
{
  return drobo_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drobo_interfaces::msg::MdLibMsg>()
{
  return "drobo_interfaces::msg::MdLibMsg";
}

template<>
inline const char * name<drobo_interfaces::msg::MdLibMsg>()
{
  return "drobo_interfaces/msg/MdLibMsg";
}

template<>
struct has_fixed_size<drobo_interfaces::msg::MdLibMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drobo_interfaces::msg::MdLibMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drobo_interfaces::msg::MdLibMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__TRAITS_HPP_
