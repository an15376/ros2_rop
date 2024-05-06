// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rp2_inter:msg/Uid.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__MSG__DETAIL__UID__FUNCTIONS_H_
#define RP2_INTER__MSG__DETAIL__UID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rp2_inter/msg/rosidl_generator_c__visibility_control.h"

#include "rp2_inter/msg/detail/uid__struct.h"

/// Initialize msg/Uid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__msg__Uid
 * )) before or use
 * rp2_inter__msg__Uid__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__msg__Uid__init(rp2_inter__msg__Uid * msg);

/// Finalize msg/Uid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__msg__Uid__fini(rp2_inter__msg__Uid * msg);

/// Create msg/Uid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__msg__Uid__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__msg__Uid *
rp2_inter__msg__Uid__create();

/// Destroy msg/Uid message.
/**
 * It calls
 * rp2_inter__msg__Uid__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__msg__Uid__destroy(rp2_inter__msg__Uid * msg);

/// Check for msg/Uid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__msg__Uid__are_equal(const rp2_inter__msg__Uid * lhs, const rp2_inter__msg__Uid * rhs);

/// Copy a msg/Uid message.
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
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__msg__Uid__copy(
  const rp2_inter__msg__Uid * input,
  rp2_inter__msg__Uid * output);

/// Initialize array of msg/Uid messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__msg__Uid__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__msg__Uid__Sequence__init(rp2_inter__msg__Uid__Sequence * array, size_t size);

/// Finalize array of msg/Uid messages.
/**
 * It calls
 * rp2_inter__msg__Uid__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__msg__Uid__Sequence__fini(rp2_inter__msg__Uid__Sequence * array);

/// Create array of msg/Uid messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__msg__Uid__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__msg__Uid__Sequence *
rp2_inter__msg__Uid__Sequence__create(size_t size);

/// Destroy array of msg/Uid messages.
/**
 * It calls
 * rp2_inter__msg__Uid__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__msg__Uid__Sequence__destroy(rp2_inter__msg__Uid__Sequence * array);

/// Check for msg/Uid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__msg__Uid__Sequence__are_equal(const rp2_inter__msg__Uid__Sequence * lhs, const rp2_inter__msg__Uid__Sequence * rhs);

/// Copy an array of msg/Uid messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__msg__Uid__Sequence__copy(
  const rp2_inter__msg__Uid__Sequence * input,
  rp2_inter__msg__Uid__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RP2_INTER__MSG__DETAIL__UID__FUNCTIONS_H_
