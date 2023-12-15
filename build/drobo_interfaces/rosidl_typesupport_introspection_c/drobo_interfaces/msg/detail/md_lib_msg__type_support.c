// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drobo_interfaces:msg/MdLibMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drobo_interfaces/msg/detail/md_lib_msg__rosidl_typesupport_introspection_c.h"
#include "drobo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drobo_interfaces/msg/detail/md_lib_msg__functions.h"
#include "drobo_interfaces/msg/detail/md_lib_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drobo_interfaces__msg__MdLibMsg__init(message_memory);
}

void drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_fini_function(void * message_memory)
{
  drobo_interfaces__msg__MdLibMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_message_member_array[9] = {
  {
    "address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_semi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, use_semi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "semi_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, semi_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__msg__MdLibMsg, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_message_members = {
  "drobo_interfaces__msg",  // message namespace
  "MdLibMsg",  // message name
  9,  // number of fields
  sizeof(drobo_interfaces__msg__MdLibMsg),
  drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_message_member_array,  // message members
  drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_message_type_support_handle = {
  0,
  &drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drobo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drobo_interfaces, msg, MdLibMsg)() {
  if (!drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_message_type_support_handle.typesupport_identifier) {
    drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drobo_interfaces__msg__MdLibMsg__rosidl_typesupport_introspection_c__MdLibMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
