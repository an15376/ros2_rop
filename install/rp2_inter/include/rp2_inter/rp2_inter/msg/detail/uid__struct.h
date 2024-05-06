// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rp2_inter:msg/Uid.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__MSG__DETAIL__UID__STRUCT_H_
#define RP2_INTER__MSG__DETAIL__UID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Uid in the package rp2_inter.
typedef struct rp2_inter__msg__Uid
{
  rosidl_runtime_c__String uid;
} rp2_inter__msg__Uid;

// Struct for a sequence of rp2_inter__msg__Uid.
typedef struct rp2_inter__msg__Uid__Sequence
{
  rp2_inter__msg__Uid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__msg__Uid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RP2_INTER__MSG__DETAIL__UID__STRUCT_H_
