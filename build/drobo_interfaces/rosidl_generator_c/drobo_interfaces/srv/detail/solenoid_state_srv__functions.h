// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from drobo_interfaces:srv/SolenoidStateSrv.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__FUNCTIONS_H_
#define DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "drobo_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "drobo_interfaces/srv/detail/solenoid_state_srv__struct.h"

/// Initialize srv/SolenoidStateSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drobo_interfaces__srv__SolenoidStateSrv_Request
 * )) before or use
 * drobo_interfaces__srv__SolenoidStateSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Request__init(drobo_interfaces__srv__SolenoidStateSrv_Request * msg);

/// Finalize srv/SolenoidStateSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
void
drobo_interfaces__srv__SolenoidStateSrv_Request__fini(drobo_interfaces__srv__SolenoidStateSrv_Request * msg);

/// Create srv/SolenoidStateSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drobo_interfaces__srv__SolenoidStateSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
drobo_interfaces__srv__SolenoidStateSrv_Request *
drobo_interfaces__srv__SolenoidStateSrv_Request__create();

/// Destroy srv/SolenoidStateSrv message.
/**
 * It calls
 * drobo_interfaces__srv__SolenoidStateSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
void
drobo_interfaces__srv__SolenoidStateSrv_Request__destroy(drobo_interfaces__srv__SolenoidStateSrv_Request * msg);

/// Check for srv/SolenoidStateSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Request__are_equal(const drobo_interfaces__srv__SolenoidStateSrv_Request * lhs, const drobo_interfaces__srv__SolenoidStateSrv_Request * rhs);

/// Copy a srv/SolenoidStateSrv message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Request__copy(
  const drobo_interfaces__srv__SolenoidStateSrv_Request * input,
  drobo_interfaces__srv__SolenoidStateSrv_Request * output);

/// Initialize array of srv/SolenoidStateSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * drobo_interfaces__srv__SolenoidStateSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__init(drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/SolenoidStateSrv messages.
/**
 * It calls
 * drobo_interfaces__srv__SolenoidStateSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
void
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__fini(drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * array);

/// Create array of srv/SolenoidStateSrv messages.
/**
 * It allocates the memory for the array and calls
 * drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence *
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/SolenoidStateSrv messages.
/**
 * It calls
 * drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
void
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__destroy(drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * array);

/// Check for srv/SolenoidStateSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__are_equal(const drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * lhs, const drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * rhs);

/// Copy an array of srv/SolenoidStateSrv messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__copy(
  const drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * input,
  drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * output);

/// Initialize srv/SolenoidStateSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drobo_interfaces__srv__SolenoidStateSrv_Response
 * )) before or use
 * drobo_interfaces__srv__SolenoidStateSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Response__init(drobo_interfaces__srv__SolenoidStateSrv_Response * msg);

/// Finalize srv/SolenoidStateSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
void
drobo_interfaces__srv__SolenoidStateSrv_Response__fini(drobo_interfaces__srv__SolenoidStateSrv_Response * msg);

/// Create srv/SolenoidStateSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drobo_interfaces__srv__SolenoidStateSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
drobo_interfaces__srv__SolenoidStateSrv_Response *
drobo_interfaces__srv__SolenoidStateSrv_Response__create();

/// Destroy srv/SolenoidStateSrv message.
/**
 * It calls
 * drobo_interfaces__srv__SolenoidStateSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
void
drobo_interfaces__srv__SolenoidStateSrv_Response__destroy(drobo_interfaces__srv__SolenoidStateSrv_Response * msg);

/// Check for srv/SolenoidStateSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Response__are_equal(const drobo_interfaces__srv__SolenoidStateSrv_Response * lhs, const drobo_interfaces__srv__SolenoidStateSrv_Response * rhs);

/// Copy a srv/SolenoidStateSrv message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Response__copy(
  const drobo_interfaces__srv__SolenoidStateSrv_Response * input,
  drobo_interfaces__srv__SolenoidStateSrv_Response * output);

/// Initialize array of srv/SolenoidStateSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * drobo_interfaces__srv__SolenoidStateSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__init(drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/SolenoidStateSrv messages.
/**
 * It calls
 * drobo_interfaces__srv__SolenoidStateSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
void
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__fini(drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * array);

/// Create array of srv/SolenoidStateSrv messages.
/**
 * It allocates the memory for the array and calls
 * drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence *
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/SolenoidStateSrv messages.
/**
 * It calls
 * drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
void
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__destroy(drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * array);

/// Check for srv/SolenoidStateSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__are_equal(const drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * lhs, const drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * rhs);

/// Copy an array of srv/SolenoidStateSrv messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_drobo_interfaces
bool
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__copy(
  const drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * input,
  drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__FUNCTIONS_H_
