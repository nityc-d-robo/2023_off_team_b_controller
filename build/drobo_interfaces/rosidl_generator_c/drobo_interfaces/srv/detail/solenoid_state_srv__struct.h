// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drobo_interfaces:srv/SolenoidStateSrv.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__STRUCT_H_
#define DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SolenoidStateSrv in the package drobo_interfaces.
typedef struct drobo_interfaces__srv__SolenoidStateSrv_Request
{
  uint8_t axle_position;
  int8_t state;
} drobo_interfaces__srv__SolenoidStateSrv_Request;

// Struct for a sequence of drobo_interfaces__srv__SolenoidStateSrv_Request.
typedef struct drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence
{
  drobo_interfaces__srv__SolenoidStateSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SolenoidStateSrv in the package drobo_interfaces.
typedef struct drobo_interfaces__srv__SolenoidStateSrv_Response
{
  /// true: Up, false: Down;
  bool result;
  bool state[3];
} drobo_interfaces__srv__SolenoidStateSrv_Response;

// Struct for a sequence of drobo_interfaces__srv__SolenoidStateSrv_Response.
typedef struct drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence
{
  drobo_interfaces__srv__SolenoidStateSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__STRUCT_H_
