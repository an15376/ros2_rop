// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rp2_inter:srv/Multy.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__SRV__DETAIL__MULTY__FUNCTIONS_H_
#define RP2_INTER__SRV__DETAIL__MULTY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rp2_inter/msg/rosidl_generator_c__visibility_control.h"

#include "rp2_inter/srv/detail/multy__struct.h"

/// Initialize srv/Multy message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__srv__Multy_Request
 * )) before or use
 * rp2_inter__srv__Multy_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__srv__Multy_Request__init(rp2_inter__srv__Multy_Request * msg);

/// Finalize srv/Multy message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__srv__Multy_Request__fini(rp2_inter__srv__Multy_Request * msg);

/// Create srv/Multy message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__srv__Multy_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__srv__Multy_Request *
rp2_inter__srv__Multy_Request__create();

/// Destroy srv/Multy message.
/**
 * It calls
 * rp2_inter__srv__Multy_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__srv__Multy_Request__destroy(rp2_inter__srv__Multy_Request * msg);

/// Check for srv/Multy message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__srv__Multy_Request__are_equal(const rp2_inter__srv__Multy_Request * lhs, const rp2_inter__srv__Multy_Request * rhs);

/// Copy a srv/Multy message.
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
rp2_inter__srv__Multy_Request__copy(
  const rp2_inter__srv__Multy_Request * input,
  rp2_inter__srv__Multy_Request * output);

/// Initialize array of srv/Multy messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__srv__Multy_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__srv__Multy_Request__Sequence__init(rp2_inter__srv__Multy_Request__Sequence * array, size_t size);

/// Finalize array of srv/Multy messages.
/**
 * It calls
 * rp2_inter__srv__Multy_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__srv__Multy_Request__Sequence__fini(rp2_inter__srv__Multy_Request__Sequence * array);

/// Create array of srv/Multy messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__srv__Multy_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__srv__Multy_Request__Sequence *
rp2_inter__srv__Multy_Request__Sequence__create(size_t size);

/// Destroy array of srv/Multy messages.
/**
 * It calls
 * rp2_inter__srv__Multy_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__srv__Multy_Request__Sequence__destroy(rp2_inter__srv__Multy_Request__Sequence * array);

/// Check for srv/Multy message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__srv__Multy_Request__Sequence__are_equal(const rp2_inter__srv__Multy_Request__Sequence * lhs, const rp2_inter__srv__Multy_Request__Sequence * rhs);

/// Copy an array of srv/Multy messages.
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
rp2_inter__srv__Multy_Request__Sequence__copy(
  const rp2_inter__srv__Multy_Request__Sequence * input,
  rp2_inter__srv__Multy_Request__Sequence * output);

/// Initialize srv/Multy message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rp2_inter__srv__Multy_Response
 * )) before or use
 * rp2_inter__srv__Multy_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__srv__Multy_Response__init(rp2_inter__srv__Multy_Response * msg);

/// Finalize srv/Multy message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__srv__Multy_Response__fini(rp2_inter__srv__Multy_Response * msg);

/// Create srv/Multy message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rp2_inter__srv__Multy_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__srv__Multy_Response *
rp2_inter__srv__Multy_Response__create();

/// Destroy srv/Multy message.
/**
 * It calls
 * rp2_inter__srv__Multy_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__srv__Multy_Response__destroy(rp2_inter__srv__Multy_Response * msg);

/// Check for srv/Multy message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__srv__Multy_Response__are_equal(const rp2_inter__srv__Multy_Response * lhs, const rp2_inter__srv__Multy_Response * rhs);

/// Copy a srv/Multy message.
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
rp2_inter__srv__Multy_Response__copy(
  const rp2_inter__srv__Multy_Response * input,
  rp2_inter__srv__Multy_Response * output);

/// Initialize array of srv/Multy messages.
/**
 * It allocates the memory for the number of elements and calls
 * rp2_inter__srv__Multy_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__srv__Multy_Response__Sequence__init(rp2_inter__srv__Multy_Response__Sequence * array, size_t size);

/// Finalize array of srv/Multy messages.
/**
 * It calls
 * rp2_inter__srv__Multy_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__srv__Multy_Response__Sequence__fini(rp2_inter__srv__Multy_Response__Sequence * array);

/// Create array of srv/Multy messages.
/**
 * It allocates the memory for the array and calls
 * rp2_inter__srv__Multy_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
rp2_inter__srv__Multy_Response__Sequence *
rp2_inter__srv__Multy_Response__Sequence__create(size_t size);

/// Destroy array of srv/Multy messages.
/**
 * It calls
 * rp2_inter__srv__Multy_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
void
rp2_inter__srv__Multy_Response__Sequence__destroy(rp2_inter__srv__Multy_Response__Sequence * array);

/// Check for srv/Multy message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rp2_inter
bool
rp2_inter__srv__Multy_Response__Sequence__are_equal(const rp2_inter__srv__Multy_Response__Sequence * lhs, const rp2_inter__srv__Multy_Response__Sequence * rhs);

/// Copy an array of srv/Multy messages.
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
rp2_inter__srv__Multy_Response__Sequence__copy(
  const rp2_inter__srv__Multy_Response__Sequence * input,
  rp2_inter__srv__Multy_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RP2_INTER__SRV__DETAIL__MULTY__FUNCTIONS_H_
