// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rp2_inter:action/AddDigit.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__ACTION__DETAIL__ADD_DIGIT__STRUCT_H_
#define RP2_INTER__ACTION__DETAIL__ADD_DIGIT__STRUCT_H_

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

/// Struct defined in action/AddDigit in the package rp2_inter.
typedef struct rp2_inter__action__AddDigit_Goal
{
  rosidl_runtime_c__String uid;
} rp2_inter__action__AddDigit_Goal;

// Struct for a sequence of rp2_inter__action__AddDigit_Goal.
typedef struct rp2_inter__action__AddDigit_Goal__Sequence
{
  rp2_inter__action__AddDigit_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__action__AddDigit_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_uid'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/AddDigit in the package rp2_inter.
typedef struct rp2_inter__action__AddDigit_Result
{
  rosidl_runtime_c__int32__Sequence result_uid;
} rp2_inter__action__AddDigit_Result;

// Struct for a sequence of rp2_inter__action__AddDigit_Result.
typedef struct rp2_inter__action__AddDigit_Result__Sequence
{
  rp2_inter__action__AddDigit_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__action__AddDigit_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'intermediate_uid'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/AddDigit in the package rp2_inter.
typedef struct rp2_inter__action__AddDigit_Feedback
{
  rosidl_runtime_c__int32__Sequence intermediate_uid;
} rp2_inter__action__AddDigit_Feedback;

// Struct for a sequence of rp2_inter__action__AddDigit_Feedback.
typedef struct rp2_inter__action__AddDigit_Feedback__Sequence
{
  rp2_inter__action__AddDigit_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__action__AddDigit_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rp2_inter/action/detail/add_digit__struct.h"

/// Struct defined in action/AddDigit in the package rp2_inter.
typedef struct rp2_inter__action__AddDigit_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rp2_inter__action__AddDigit_Goal goal;
} rp2_inter__action__AddDigit_SendGoal_Request;

// Struct for a sequence of rp2_inter__action__AddDigit_SendGoal_Request.
typedef struct rp2_inter__action__AddDigit_SendGoal_Request__Sequence
{
  rp2_inter__action__AddDigit_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__action__AddDigit_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AddDigit in the package rp2_inter.
typedef struct rp2_inter__action__AddDigit_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rp2_inter__action__AddDigit_SendGoal_Response;

// Struct for a sequence of rp2_inter__action__AddDigit_SendGoal_Response.
typedef struct rp2_inter__action__AddDigit_SendGoal_Response__Sequence
{
  rp2_inter__action__AddDigit_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__action__AddDigit_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AddDigit in the package rp2_inter.
typedef struct rp2_inter__action__AddDigit_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rp2_inter__action__AddDigit_GetResult_Request;

// Struct for a sequence of rp2_inter__action__AddDigit_GetResult_Request.
typedef struct rp2_inter__action__AddDigit_GetResult_Request__Sequence
{
  rp2_inter__action__AddDigit_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__action__AddDigit_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rp2_inter/action/detail/add_digit__struct.h"

/// Struct defined in action/AddDigit in the package rp2_inter.
typedef struct rp2_inter__action__AddDigit_GetResult_Response
{
  int8_t status;
  rp2_inter__action__AddDigit_Result result;
} rp2_inter__action__AddDigit_GetResult_Response;

// Struct for a sequence of rp2_inter__action__AddDigit_GetResult_Response.
typedef struct rp2_inter__action__AddDigit_GetResult_Response__Sequence
{
  rp2_inter__action__AddDigit_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__action__AddDigit_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rp2_inter/action/detail/add_digit__struct.h"

/// Struct defined in action/AddDigit in the package rp2_inter.
typedef struct rp2_inter__action__AddDigit_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rp2_inter__action__AddDigit_Feedback feedback;
} rp2_inter__action__AddDigit_FeedbackMessage;

// Struct for a sequence of rp2_inter__action__AddDigit_FeedbackMessage.
typedef struct rp2_inter__action__AddDigit_FeedbackMessage__Sequence
{
  rp2_inter__action__AddDigit_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rp2_inter__action__AddDigit_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RP2_INTER__ACTION__DETAIL__ADD_DIGIT__STRUCT_H_
