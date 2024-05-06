// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rp2_inter:srv/Multy.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__SRV__DETAIL__MULTY__STRUCT_H_
#define RP2_INTER__SRV__DETAIL__MULTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Multy in the package rp2_inter.
typedef struct rp2_inter__srv__Multy_Request
{
  int64_t a;
  int64_t b;
} rp2_inter__srv__Multy_Request;

// Struct for a sequence of rp2_inter__srv__Multy_Request.
typedef struct rp2_inter__srv__Multy_Request__Sequence
{
  rp2_inter__srv__Multy_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__srv__Multy_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Multy in the package rp2_inter.
typedef struct rp2_inter__srv__Multy_Response
{
  int64_t product;
} rp2_inter__srv__Multy_Response;

// Struct for a sequence of rp2_inter__srv__Multy_Response.
typedef struct rp2_inter__srv__Multy_Response__Sequence
{
  rp2_inter__srv__Multy_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__srv__Multy_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RP2_INTER__SRV__DETAIL__MULTY__STRUCT_H_
