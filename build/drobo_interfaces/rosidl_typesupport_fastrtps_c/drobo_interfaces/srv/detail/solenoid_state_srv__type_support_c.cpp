// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from drobo_interfaces:srv/SolenoidStateSrv.idl
// generated code does not contain a copyright notice
#include "drobo_interfaces/srv/detail/solenoid_state_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "drobo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drobo_interfaces/srv/detail/solenoid_state_srv__struct.h"
#include "drobo_interfaces/srv/detail/solenoid_state_srv__functions.h"
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


using _SolenoidStateSrv_Request__ros_msg_type = drobo_interfaces__srv__SolenoidStateSrv_Request;

static bool _SolenoidStateSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SolenoidStateSrv_Request__ros_msg_type * ros_message = static_cast<const _SolenoidStateSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: axle_position
  {
    cdr << ros_message->axle_position;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  return true;
}

static bool _SolenoidStateSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SolenoidStateSrv_Request__ros_msg_type * ros_message = static_cast<_SolenoidStateSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: axle_position
  {
    cdr >> ros_message->axle_position;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drobo_interfaces
size_t get_serialized_size_drobo_interfaces__srv__SolenoidStateSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolenoidStateSrv_Request__ros_msg_type * ros_message = static_cast<const _SolenoidStateSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name axle_position
  {
    size_t item_size = sizeof(ros_message->axle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SolenoidStateSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_drobo_interfaces__srv__SolenoidStateSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drobo_interfaces
size_t max_serialized_size_drobo_interfaces__srv__SolenoidStateSrv_Request(
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

  // member: axle_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = drobo_interfaces__srv__SolenoidStateSrv_Request;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SolenoidStateSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_drobo_interfaces__srv__SolenoidStateSrv_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SolenoidStateSrv_Request = {
  "drobo_interfaces::srv",
  "SolenoidStateSrv_Request",
  _SolenoidStateSrv_Request__cdr_serialize,
  _SolenoidStateSrv_Request__cdr_deserialize,
  _SolenoidStateSrv_Request__get_serialized_size,
  _SolenoidStateSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _SolenoidStateSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SolenoidStateSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drobo_interfaces, srv, SolenoidStateSrv_Request)() {
  return &_SolenoidStateSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "drobo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "drobo_interfaces/srv/detail/solenoid_state_srv__struct.h"
// already included above
// #include "drobo_interfaces/srv/detail/solenoid_state_srv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _SolenoidStateSrv_Response__ros_msg_type = drobo_interfaces__srv__SolenoidStateSrv_Response;

static bool _SolenoidStateSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SolenoidStateSrv_Response__ros_msg_type * ros_message = static_cast<const _SolenoidStateSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  // Field name: state
  {
    size_t size = 3;
    auto array_ptr = ros_message->state;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SolenoidStateSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SolenoidStateSrv_Response__ros_msg_type * ros_message = static_cast<_SolenoidStateSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  // Field name: state
  {
    size_t size = 3;
    auto array_ptr = ros_message->state;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drobo_interfaces
size_t get_serialized_size_drobo_interfaces__srv__SolenoidStateSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolenoidStateSrv_Response__ros_msg_type * ros_message = static_cast<const _SolenoidStateSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->state;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SolenoidStateSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_drobo_interfaces__srv__SolenoidStateSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drobo_interfaces
size_t max_serialized_size_drobo_interfaces__srv__SolenoidStateSrv_Response(
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

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = drobo_interfaces__srv__SolenoidStateSrv_Response;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SolenoidStateSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_drobo_interfaces__srv__SolenoidStateSrv_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SolenoidStateSrv_Response = {
  "drobo_interfaces::srv",
  "SolenoidStateSrv_Response",
  _SolenoidStateSrv_Response__cdr_serialize,
  _SolenoidStateSrv_Response__cdr_deserialize,
  _SolenoidStateSrv_Response__get_serialized_size,
  _SolenoidStateSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _SolenoidStateSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SolenoidStateSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drobo_interfaces, srv, SolenoidStateSrv_Response)() {
  return &_SolenoidStateSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "drobo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drobo_interfaces/srv/solenoid_state_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SolenoidStateSrv__callbacks = {
  "drobo_interfaces::srv",
  "SolenoidStateSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drobo_interfaces, srv, SolenoidStateSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drobo_interfaces, srv, SolenoidStateSrv_Response)(),
};

static rosidl_service_type_support_t SolenoidStateSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SolenoidStateSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drobo_interfaces, srv, SolenoidStateSrv)() {
  return &SolenoidStateSrv__handle;
}

#if defined(__cplusplus)
}
#endif
