// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from drobo_interfaces:msg/MdLibMsg.idl
// generated code does not contain a copyright notice
#include "drobo_interfaces/msg/detail/md_lib_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "drobo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drobo_interfaces/msg/detail/md_lib_msg__struct.h"
#include "drobo_interfaces/msg/detail/md_lib_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MdLibMsg__ros_msg_type = drobo_interfaces__msg__MdLibMsg;

static bool _MdLibMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MdLibMsg__ros_msg_type * ros_message = static_cast<const _MdLibMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: address
  {
    cdr << ros_message->address;
  }

  // Field name: use_semi
  {
    cdr << (ros_message->use_semi ? true : false);
  }

  // Field name: semi_id
  {
    cdr << ros_message->semi_id;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: phase
  {
    cdr << (ros_message->phase ? true : false);
  }

  // Field name: power
  {
    cdr << ros_message->power;
  }

  // Field name: port
  {
    cdr << (ros_message->port ? true : false);
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: timeout
  {
    cdr << ros_message->timeout;
  }

  return true;
}

static bool _MdLibMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MdLibMsg__ros_msg_type * ros_message = static_cast<_MdLibMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: address
  {
    cdr >> ros_message->address;
  }

  // Field name: use_semi
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_semi = tmp ? true : false;
  }

  // Field name: semi_id
  {
    cdr >> ros_message->semi_id;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: phase
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->phase = tmp ? true : false;
  }

  // Field name: power
  {
    cdr >> ros_message->power;
  }

  // Field name: port
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port = tmp ? true : false;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: timeout
  {
    cdr >> ros_message->timeout;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drobo_interfaces
size_t get_serialized_size_drobo_interfaces__msg__MdLibMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MdLibMsg__ros_msg_type * ros_message = static_cast<const _MdLibMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name address
  {
    size_t item_size = sizeof(ros_message->address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_semi
  {
    size_t item_size = sizeof(ros_message->use_semi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name semi_id
  {
    size_t item_size = sizeof(ros_message->semi_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name phase
  {
    size_t item_size = sizeof(ros_message->phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power
  {
    size_t item_size = sizeof(ros_message->power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port
  {
    size_t item_size = sizeof(ros_message->port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timeout
  {
    size_t item_size = sizeof(ros_message->timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MdLibMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_drobo_interfaces__msg__MdLibMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drobo_interfaces
size_t max_serialized_size_drobo_interfaces__msg__MdLibMsg(
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

  // member: address
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_semi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: semi_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: phase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timeout
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
    using DataType = drobo_interfaces__msg__MdLibMsg;
    is_plain =
      (
      offsetof(DataType, timeout) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MdLibMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_drobo_interfaces__msg__MdLibMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MdLibMsg = {
  "drobo_interfaces::msg",
  "MdLibMsg",
  _MdLibMsg__cdr_serialize,
  _MdLibMsg__cdr_deserialize,
  _MdLibMsg__get_serialized_size,
  _MdLibMsg__max_serialized_size
};

static rosidl_message_type_support_t _MdLibMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MdLibMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drobo_interfaces, msg, MdLibMsg)() {
  return &_MdLibMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
