// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drobo_interfaces:srv/SolenoidStateSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drobo_interfaces/srv/detail/solenoid_state_srv__rosidl_typesupport_introspection_c.h"
#include "drobo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drobo_interfaces/srv/detail/solenoid_state_srv__functions.h"
#include "drobo_interfaces/srv/detail/solenoid_state_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drobo_interfaces__srv__SolenoidStateSrv_Request__init(message_memory);
}

void drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_fini_function(void * message_memory)
{
  drobo_interfaces__srv__SolenoidStateSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_member_array[2] = {
  {
    "axle_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__srv__SolenoidStateSrv_Request, axle_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__srv__SolenoidStateSrv_Request, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_members = {
  "drobo_interfaces__srv",  // message namespace
  "SolenoidStateSrv_Request",  // message name
  2,  // number of fields
  sizeof(drobo_interfaces__srv__SolenoidStateSrv_Request),
  drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_member_array,  // message members
  drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_type_support_handle = {
  0,
  &drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drobo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drobo_interfaces, srv, SolenoidStateSrv_Request)() {
  if (!drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_type_support_handle.typesupport_identifier) {
    drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drobo_interfaces__srv__SolenoidStateSrv_Request__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drobo_interfaces/srv/detail/solenoid_state_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drobo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drobo_interfaces/srv/detail/solenoid_state_srv__functions.h"
// already included above
// #include "drobo_interfaces/srv/detail/solenoid_state_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drobo_interfaces__srv__SolenoidStateSrv_Response__init(message_memory);
}

void drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_fini_function(void * message_memory)
{
  drobo_interfaces__srv__SolenoidStateSrv_Response__fini(message_memory);
}

size_t drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__size_function__SolenoidStateSrv_Response__state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__get_const_function__SolenoidStateSrv_Response__state(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__get_function__SolenoidStateSrv_Response__state(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__fetch_function__SolenoidStateSrv_Response__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__get_const_function__SolenoidStateSrv_Response__state(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__assign_function__SolenoidStateSrv_Response__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__get_function__SolenoidStateSrv_Response__state(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__srv__SolenoidStateSrv_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(drobo_interfaces__srv__SolenoidStateSrv_Response, state),  // bytes offset in struct
    NULL,  // default value
    drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__size_function__SolenoidStateSrv_Response__state,  // size() function pointer
    drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__get_const_function__SolenoidStateSrv_Response__state,  // get_const(index) function pointer
    drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__get_function__SolenoidStateSrv_Response__state,  // get(index) function pointer
    drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__fetch_function__SolenoidStateSrv_Response__state,  // fetch(index, &value) function pointer
    drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__assign_function__SolenoidStateSrv_Response__state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_members = {
  "drobo_interfaces__srv",  // message namespace
  "SolenoidStateSrv_Response",  // message name
  2,  // number of fields
  sizeof(drobo_interfaces__srv__SolenoidStateSrv_Response),
  drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_member_array,  // message members
  drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_type_support_handle = {
  0,
  &drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drobo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drobo_interfaces, srv, SolenoidStateSrv_Response)() {
  if (!drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_type_support_handle.typesupport_identifier) {
    drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drobo_interfaces__srv__SolenoidStateSrv_Response__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "drobo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "drobo_interfaces/srv/detail/solenoid_state_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_service_members = {
  "drobo_interfaces__srv",  // service namespace
  "SolenoidStateSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_Request_message_type_support_handle,
  NULL  // response message
  // drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_service_type_support_handle = {
  0,
  &drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drobo_interfaces, srv, SolenoidStateSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drobo_interfaces, srv, SolenoidStateSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drobo_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drobo_interfaces, srv, SolenoidStateSrv)() {
  if (!drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_service_type_support_handle.typesupport_identifier) {
    drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drobo_interfaces, srv, SolenoidStateSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drobo_interfaces, srv, SolenoidStateSrv_Response)()->data;
  }

  return &drobo_interfaces__srv__detail__solenoid_state_srv__rosidl_typesupport_introspection_c__SolenoidStateSrv_service_type_support_handle;
}
