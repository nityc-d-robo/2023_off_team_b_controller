// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drobo_interfaces:msg/MdLibMsg.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__STRUCT_H_
#define DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MdLibMsg in the package drobo_interfaces.
typedef struct drobo_interfaces__msg__MdLibMsg
{
  uint8_t address;
  bool use_semi;
  uint8_t semi_id;
  /// , 2: PWM, 3: SPEED, 4: ANGLE, 5: LIM_SW.
  uint8_t mode;
  bool phase;
  /// [4][5]
  uint16_t power;
  bool port;
  /// [6][7], use on speed mode or angle mode.
  int32_t angle;
  /// [8][9]
  uint16_t timeout;
} drobo_interfaces__msg__MdLibMsg;

// Struct for a sequence of drobo_interfaces__msg__MdLibMsg.
typedef struct drobo_interfaces__msg__MdLibMsg__Sequence
{
  drobo_interfaces__msg__MdLibMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drobo_interfaces__msg__MdLibMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__STRUCT_H_
