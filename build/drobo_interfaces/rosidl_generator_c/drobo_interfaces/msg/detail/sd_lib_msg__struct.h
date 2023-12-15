// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drobo_interfaces:msg/SdLibMsg.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__STRUCT_H_
#define DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SdLibMsg in the package drobo_interfaces.
typedef struct drobo_interfaces__msg__SdLibMsg
{
  uint8_t address;
  uint8_t semi_id;
  uint8_t port;
  uint16_t power1;
  uint16_t power2;
} drobo_interfaces__msg__SdLibMsg;

// Struct for a sequence of drobo_interfaces__msg__SdLibMsg.
typedef struct drobo_interfaces__msg__SdLibMsg__Sequence
{
  drobo_interfaces__msg__SdLibMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drobo_interfaces__msg__SdLibMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__STRUCT_H_
