// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from drobo_interfaces:msg/MdLibMsg.idl
// generated code does not contain a copyright notice
#include "drobo_interfaces/msg/detail/md_lib_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "drobo_interfaces/msg/detail/md_lib_msg__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace drobo_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drobo_interfaces
cdr_serialize(
  const drobo_interfaces::msg::MdLibMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: address
  cdr << ros_message.address;
  // Member: use_semi
  cdr << (ros_message.use_semi ? true : false);
  // Member: semi_id
  cdr << ros_message.semi_id;
  // Member: mode
  cdr << ros_message.mode;
  // Member: phase
  cdr << (ros_message.phase ? true : false);
  // Member: power
  cdr << ros_message.power;
  // Member: port
  cdr << (ros_message.port ? true : false);
  // Member: angle
  cdr << ros_message.angle;
  // Member: timeout
  cdr << ros_message.timeout;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drobo_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drobo_interfaces::msg::MdLibMsg & ros_message)
{
  // Member: address
  cdr >> ros_message.address;

  // Member: use_semi
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_semi = tmp ? true : false;
  }

  // Member: semi_id
  cdr >> ros_message.semi_id;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: phase
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.phase = tmp ? true : false;
  }

  // Member: power
  cdr >> ros_message.power;

  // Member: port
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port = tmp ? true : false;
  }

  // Member: angle
  cdr >> ros_message.angle;

  // Member: timeout
  cdr >> ros_message.timeout;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drobo_interfaces
get_serialized_size(
  const drobo_interfaces::msg::MdLibMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: address
  {
    size_t item_size = sizeof(ros_message.address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_semi
  {
    size_t item_size = sizeof(ros_message.use_semi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: semi_id
  {
    size_t item_size = sizeof(ros_message.semi_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: phase
  {
    size_t item_size = sizeof(ros_message.phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power
  {
    size_t item_size = sizeof(ros_message.power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port
  {
    size_t item_size = sizeof(ros_message.port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timeout
  {
    size_t item_size = sizeof(ros_message.timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drobo_interfaces
max_serialized_size_MdLibMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: address
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_semi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: semi_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: phase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timeout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = drobo_interfaces::msg::MdLibMsg;
    is_plain =
      (
      offsetof(DataType, timeout) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MdLibMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const drobo_interfaces::msg::MdLibMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MdLibMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<drobo_interfaces::msg::MdLibMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MdLibMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const drobo_interfaces::msg::MdLibMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MdLibMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MdLibMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MdLibMsg__callbacks = {
  "drobo_interfaces::msg",
  "MdLibMsg",
  _MdLibMsg__cdr_serialize,
  _MdLibMsg__cdr_deserialize,
  _MdLibMsg__get_serialized_size,
  _MdLibMsg__max_serialized_size
};

static rosidl_message_type_support_t _MdLibMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MdLibMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drobo_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_drobo_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<drobo_interfaces::msg::MdLibMsg>()
{
  return &drobo_interfaces::msg::typesupport_fastrtps_cpp::_MdLibMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drobo_interfaces, msg, MdLibMsg)() {
  return &drobo_interfaces::msg::typesupport_fastrtps_cpp::_MdLibMsg__handle;
}

#ifdef __cplusplus
}
#endif
