// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rp2_inter:action/AddDigit.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__ACTION__DETAIL__ADD_DIGIT__FUNCTIONS_H_
#define RP2_INTER__ACTION__DETAIL__ADD_DIGIT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rp2_inter/msg/rosidl_generator_c__visibility_control.h"

#include "rp2_inter/action/detail/add_digit__struct.h"

/// Initialize action/AddDigit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__action__AddDigit_Goal
 * )) before or use
 * rp2_inter__action__AddDigit_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Goal__init(rp2_inter__action__AddDigit_Goal * msg);

/// Finalize action/AddDigit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Goal__fini(rp2_inter__action__AddDigit_Goal * msg);

/// Create action/AddDigit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__action__AddDigit_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_Goal *
rp2_inter__action__AddDigit_Goal__create();

/// Destroy action/AddDigit message.
/**
 * It calls
 * rp2_inter__action__AddDigit_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Goal__destroy(rp2_inter__action__AddDigit_Goal * msg);

/// Check for action/AddDigit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Goal__are_equal(const rp2_inter__action__AddDigit_Goal * lhs, const rp2_inter__action__AddDigit_Goal * rhs);

/// Copy a action/AddDigit message.
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
rp2_inter__action__AddDigit_Goal__copy(
  const rp2_inter__action__AddDigit_Goal * input,
  rp2_inter__action__AddDigit_Goal * output);

/// Initialize array of action/AddDigit messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__action__AddDigit_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Goal__Sequence__init(rp2_inter__action__AddDigit_Goal__Sequence * array, size_t size);

/// Finalize array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Goal__Sequence__fini(rp2_inter__action__AddDigit_Goal__Sequence * array);

/// Create array of action/AddDigit messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__action__AddDigit_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_Goal__Sequence *
rp2_inter__action__AddDigit_Goal__Sequence__create(size_t size);

/// Destroy array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Goal__Sequence__destroy(rp2_inter__action__AddDigit_Goal__Sequence * array);

/// Check for action/AddDigit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Goal__Sequence__are_equal(const rp2_inter__action__AddDigit_Goal__Sequence * lhs, const rp2_inter__action__AddDigit_Goal__Sequence * rhs);

/// Copy an array of action/AddDigit messages.
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
rp2_inter__action__AddDigit_Goal__Sequence__copy(
  const rp2_inter__action__AddDigit_Goal__Sequence * input,
  rp2_inter__action__AddDigit_Goal__Sequence * output);

/// Initialize action/AddDigit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__action__AddDigit_Result
 * )) before or use
 * rp2_inter__action__AddDigit_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Result__init(rp2_inter__action__AddDigit_Result * msg);

/// Finalize action/AddDigit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Result__fini(rp2_inter__action__AddDigit_Result * msg);

/// Create action/AddDigit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__action__AddDigit_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_Result *
rp2_inter__action__AddDigit_Result__create();

/// Destroy action/AddDigit message.
/**
 * It calls
 * rp2_inter__action__AddDigit_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Result__destroy(rp2_inter__action__AddDigit_Result * msg);

/// Check for action/AddDigit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Result__are_equal(const rp2_inter__action__AddDigit_Result * lhs, const rp2_inter__action__AddDigit_Result * rhs);

/// Copy a action/AddDigit message.
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
rp2_inter__action__AddDigit_Result__copy(
  const rp2_inter__action__AddDigit_Result * input,
  rp2_inter__action__AddDigit_Result * output);

/// Initialize array of action/AddDigit messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__action__AddDigit_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Result__Sequence__init(rp2_inter__action__AddDigit_Result__Sequence * array, size_t size);

/// Finalize array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Result__Sequence__fini(rp2_inter__action__AddDigit_Result__Sequence * array);

/// Create array of action/AddDigit messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__action__AddDigit_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_Result__Sequence *
rp2_inter__action__AddDigit_Result__Sequence__create(size_t size);

/// Destroy array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Result__Sequence__destroy(rp2_inter__action__AddDigit_Result__Sequence * array);

/// Check for action/AddDigit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Result__Sequence__are_equal(const rp2_inter__action__AddDigit_Result__Sequence * lhs, const rp2_inter__action__AddDigit_Result__Sequence * rhs);

/// Copy an array of action/AddDigit messages.
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
rp2_inter__action__AddDigit_Result__Sequence__copy(
  const rp2_inter__action__AddDigit_Result__Sequence * input,
  rp2_inter__action__AddDigit_Result__Sequence * output);

/// Initialize action/AddDigit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__action__AddDigit_Feedback
 * )) before or use
 * rp2_inter__action__AddDigit_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Feedback__init(rp2_inter__action__AddDigit_Feedback * msg);

/// Finalize action/AddDigit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Feedback__fini(rp2_inter__action__AddDigit_Feedback * msg);

/// Create action/AddDigit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__action__AddDigit_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_Feedback *
rp2_inter__action__AddDigit_Feedback__create();

/// Destroy action/AddDigit message.
/**
 * It calls
 * rp2_inter__action__AddDigit_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Feedback__destroy(rp2_inter__action__AddDigit_Feedback * msg);

/// Check for action/AddDigit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Feedback__are_equal(const rp2_inter__action__AddDigit_Feedback * lhs, const rp2_inter__action__AddDigit_Feedback * rhs);

/// Copy a action/AddDigit message.
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
rp2_inter__action__AddDigit_Feedback__copy(
  const rp2_inter__action__AddDigit_Feedback * input,
  rp2_inter__action__AddDigit_Feedback * output);

/// Initialize array of action/AddDigit messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__action__AddDigit_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Feedback__Sequence__init(rp2_inter__action__AddDigit_Feedback__Sequence * array, size_t size);

/// Finalize array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Feedback__Sequence__fini(rp2_inter__action__AddDigit_Feedback__Sequence * array);

/// Create array of action/AddDigit messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__action__AddDigit_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_Feedback__Sequence *
rp2_inter__action__AddDigit_Feedback__Sequence__create(size_t size);

/// Destroy array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_Feedback__Sequence__destroy(rp2_inter__action__AddDigit_Feedback__Sequence * array);

/// Check for action/AddDigit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_Feedback__Sequence__are_equal(const rp2_inter__action__AddDigit_Feedback__Sequence * lhs, const rp2_inter__action__AddDigit_Feedback__Sequence * rhs);

/// Copy an array of action/AddDigit messages.
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
rp2_inter__action__AddDigit_Feedback__Sequence__copy(
  const rp2_inter__action__AddDigit_Feedback__Sequence * input,
  rp2_inter__action__AddDigit_Feedback__Sequence * output);

/// Initialize action/AddDigit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__action__AddDigit_SendGoal_Request
 * )) before or use
 * rp2_inter__action__AddDigit_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_SendGoal_Request__init(rp2_inter__action__AddDigit_SendGoal_Request * msg);

/// Finalize action/AddDigit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_SendGoal_Request__fini(rp2_inter__action__AddDigit_SendGoal_Request * msg);

/// Create action/AddDigit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__action__AddDigit_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_SendGoal_Request *
rp2_inter__action__AddDigit_SendGoal_Request__create();

/// Destroy action/AddDigit message.
/**
 * It calls
 * rp2_inter__action__AddDigit_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_SendGoal_Request__destroy(rp2_inter__action__AddDigit_SendGoal_Request * msg);

/// Check for action/AddDigit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_SendGoal_Request__are_equal(const rp2_inter__action__AddDigit_SendGoal_Request * lhs, const rp2_inter__action__AddDigit_SendGoal_Request * rhs);

/// Copy a action/AddDigit message.
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
rp2_inter__action__AddDigit_SendGoal_Request__copy(
  const rp2_inter__action__AddDigit_SendGoal_Request * input,
  rp2_inter__action__AddDigit_SendGoal_Request * output);

/// Initialize array of action/AddDigit messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__action__AddDigit_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_SendGoal_Request__Sequence__init(rp2_inter__action__AddDigit_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_SendGoal_Request__Sequence__fini(rp2_inter__action__AddDigit_SendGoal_Request__Sequence * array);

/// Create array of action/AddDigit messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__action__AddDigit_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_SendGoal_Request__Sequence *
rp2_inter__action__AddDigit_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_SendGoal_Request__Sequence__destroy(rp2_inter__action__AddDigit_SendGoal_Request__Sequence * array);

/// Check for action/AddDigit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_SendGoal_Request__Sequence__are_equal(const rp2_inter__action__AddDigit_SendGoal_Request__Sequence * lhs, const rp2_inter__action__AddDigit_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/AddDigit messages.
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
rp2_inter__action__AddDigit_SendGoal_Request__Sequence__copy(
  const rp2_inter__action__AddDigit_SendGoal_Request__Sequence * input,
  rp2_inter__action__AddDigit_SendGoal_Request__Sequence * output);

/// Initialize action/AddDigit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__action__AddDigit_SendGoal_Response
 * )) before or use
 * rp2_inter__action__AddDigit_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_SendGoal_Response__init(rp2_inter__action__AddDigit_SendGoal_Response * msg);

/// Finalize action/AddDigit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_SendGoal_Response__fini(rp2_inter__action__AddDigit_SendGoal_Response * msg);

/// Create action/AddDigit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__action__AddDigit_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_SendGoal_Response *
rp2_inter__action__AddDigit_SendGoal_Response__create();

/// Destroy action/AddDigit message.
/**
 * It calls
 * rp2_inter__action__AddDigit_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_SendGoal_Response__destroy(rp2_inter__action__AddDigit_SendGoal_Response * msg);

/// Check for action/AddDigit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_SendGoal_Response__are_equal(const rp2_inter__action__AddDigit_SendGoal_Response * lhs, const rp2_inter__action__AddDigit_SendGoal_Response * rhs);

/// Copy a action/AddDigit message.
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
rp2_inter__action__AddDigit_SendGoal_Response__copy(
  const rp2_inter__action__AddDigit_SendGoal_Response * input,
  rp2_inter__action__AddDigit_SendGoal_Response * output);

/// Initialize array of action/AddDigit messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__action__AddDigit_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_SendGoal_Response__Sequence__init(rp2_inter__action__AddDigit_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_SendGoal_Response__Sequence__fini(rp2_inter__action__AddDigit_SendGoal_Response__Sequence * array);

/// Create array of action/AddDigit messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__action__AddDigit_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_SendGoal_Response__Sequence *
rp2_inter__action__AddDigit_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_SendGoal_Response__Sequence__destroy(rp2_inter__action__AddDigit_SendGoal_Response__Sequence * array);

/// Check for action/AddDigit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_SendGoal_Response__Sequence__are_equal(const rp2_inter__action__AddDigit_SendGoal_Response__Sequence * lhs, const rp2_inter__action__AddDigit_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/AddDigit messages.
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
rp2_inter__action__AddDigit_SendGoal_Response__Sequence__copy(
  const rp2_inter__action__AddDigit_SendGoal_Response__Sequence * input,
  rp2_inter__action__AddDigit_SendGoal_Response__Sequence * output);

/// Initialize action/AddDigit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__action__AddDigit_GetResult_Request
 * )) before or use
 * rp2_inter__action__AddDigit_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_GetResult_Request__init(rp2_inter__action__AddDigit_GetResult_Request * msg);

/// Finalize action/AddDigit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_GetResult_Request__fini(rp2_inter__action__AddDigit_GetResult_Request * msg);

/// Create action/AddDigit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__action__AddDigit_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_GetResult_Request *
rp2_inter__action__AddDigit_GetResult_Request__create();

/// Destroy action/AddDigit message.
/**
 * It calls
 * rp2_inter__action__AddDigit_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_GetResult_Request__destroy(rp2_inter__action__AddDigit_GetResult_Request * msg);

/// Check for action/AddDigit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_GetResult_Request__are_equal(const rp2_inter__action__AddDigit_GetResult_Request * lhs, const rp2_inter__action__AddDigit_GetResult_Request * rhs);

/// Copy a action/AddDigit message.
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
rp2_inter__action__AddDigit_GetResult_Request__copy(
  const rp2_inter__action__AddDigit_GetResult_Request * input,
  rp2_inter__action__AddDigit_GetResult_Request * output);

/// Initialize array of action/AddDigit messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__action__AddDigit_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_GetResult_Request__Sequence__init(rp2_inter__action__AddDigit_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_GetResult_Request__Sequence__fini(rp2_inter__action__AddDigit_GetResult_Request__Sequence * array);

/// Create array of action/AddDigit messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__action__AddDigit_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_GetResult_Request__Sequence *
rp2_inter__action__AddDigit_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_GetResult_Request__Sequence__destroy(rp2_inter__action__AddDigit_GetResult_Request__Sequence * array);

/// Check for action/AddDigit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_GetResult_Request__Sequence__are_equal(const rp2_inter__action__AddDigit_GetResult_Request__Sequence * lhs, const rp2_inter__action__AddDigit_GetResult_Request__Sequence * rhs);

/// Copy an array of action/AddDigit messages.
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
rp2_inter__action__AddDigit_GetResult_Request__Sequence__copy(
  const rp2_inter__action__AddDigit_GetResult_Request__Sequence * input,
  rp2_inter__action__AddDigit_GetResult_Request__Sequence * output);

/// Initialize action/AddDigit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__action__AddDigit_GetResult_Response
 * )) before or use
 * rp2_inter__action__AddDigit_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_GetResult_Response__init(rp2_inter__action__AddDigit_GetResult_Response * msg);

/// Finalize action/AddDigit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_GetResult_Response__fini(rp2_inter__action__AddDigit_GetResult_Response * msg);

/// Create action/AddDigit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__action__AddDigit_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_GetResult_Response *
rp2_inter__action__AddDigit_GetResult_Response__create();

/// Destroy action/AddDigit message.
/**
 * It calls
 * rp2_inter__action__AddDigit_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_GetResult_Response__destroy(rp2_inter__action__AddDigit_GetResult_Response * msg);

/// Check for action/AddDigit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_GetResult_Response__are_equal(const rp2_inter__action__AddDigit_GetResult_Response * lhs, const rp2_inter__action__AddDigit_GetResult_Response * rhs);

/// Copy a action/AddDigit message.
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
rp2_inter__action__AddDigit_GetResult_Response__copy(
  const rp2_inter__action__AddDigit_GetResult_Response * input,
  rp2_inter__action__AddDigit_GetResult_Response * output);

/// Initialize array of action/AddDigit messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__action__AddDigit_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_GetResult_Response__Sequence__init(rp2_inter__action__AddDigit_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_GetResult_Response__Sequence__fini(rp2_inter__action__AddDigit_GetResult_Response__Sequence * array);

/// Create array of action/AddDigit messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__action__AddDigit_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_GetResult_Response__Sequence *
rp2_inter__action__AddDigit_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_GetResult_Response__Sequence__destroy(rp2_inter__action__AddDigit_GetResult_Response__Sequence * array);

/// Check for action/AddDigit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_GetResult_Response__Sequence__are_equal(const rp2_inter__action__AddDigit_GetResult_Response__Sequence * lhs, const rp2_inter__action__AddDigit_GetResult_Response__Sequence * rhs);

/// Copy an array of action/AddDigit messages.
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
rp2_inter__action__AddDigit_GetResult_Response__Sequence__copy(
  const rp2_inter__action__AddDigit_GetResult_Response__Sequence * input,
  rp2_inter__action__AddDigit_GetResult_Response__Sequence * output);

/// Initialize action/AddDigit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__action__AddDigit_FeedbackMessage
 * )) before or use
 * rp2_inter__action__AddDigit_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_FeedbackMessage__init(rp2_inter__action__AddDigit_FeedbackMessage * msg);

/// Finalize action/AddDigit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_FeedbackMessage__fini(rp2_inter__action__AddDigit_FeedbackMessage * msg);

/// Create action/AddDigit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__action__AddDigit_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_FeedbackMessage *
rp2_inter__action__AddDigit_FeedbackMessage__create();

/// Destroy action/AddDigit message.
/**
 * It calls
 * rp2_inter__action__AddDigit_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_FeedbackMessage__destroy(rp2_inter__action__AddDigit_FeedbackMessage * msg);

/// Check for action/AddDigit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_FeedbackMessage__are_equal(const rp2_inter__action__AddDigit_FeedbackMessage * lhs, const rp2_inter__action__AddDigit_FeedbackMessage * rhs);

/// Copy a action/AddDigit message.
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
rp2_inter__action__AddDigit_FeedbackMessage__copy(
  const rp2_inter__action__AddDigit_FeedbackMessage * input,
  rp2_inter__action__AddDigit_FeedbackMessage * output);

/// Initialize array of action/AddDigit messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__action__AddDigit_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_FeedbackMessage__Sequence__init(rp2_inter__action__AddDigit_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_FeedbackMessage__Sequence__fini(rp2_inter__action__AddDigit_FeedbackMessage__Sequence * array);

/// Create array of action/AddDigit messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__action__AddDigit_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__action__AddDigit_FeedbackMessage__Sequence *
rp2_inter__action__AddDigit_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/AddDigit messages.
/**
 * It calls
 * rp2_inter__action__AddDigit_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__action__AddDigit_FeedbackMessage__Sequence__destroy(rp2_inter__action__AddDigit_FeedbackMessage__Sequence * array);

/// Check for action/AddDigit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__action__AddDigit_FeedbackMessage__Sequence__are_equal(const rp2_inter__action__AddDigit_FeedbackMessage__Sequence * lhs, const rp2_inter__action__AddDigit_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/AddDigit messages.
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
rp2_inter__action__AddDigit_FeedbackMessage__Sequence__copy(
  const rp2_inter__action__AddDigit_FeedbackMessage__Sequence * input,
  rp2_inter__action__AddDigit_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RP2_INTER__ACTION__DETAIL__ADD_DIGIT__FUNCTIONS_H_
