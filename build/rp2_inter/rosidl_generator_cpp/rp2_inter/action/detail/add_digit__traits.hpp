// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rp2_inter:action/AddDigit.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__ACTION__DETAIL__ADD_DIGIT__TRAITS_HPP_
#define RP2_INTER__ACTION__DETAIL__ADD_DIGIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rp2_inter/action/detail/add_digit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rp2_inter
{

namespace action
{

inline void to_flow_style_yaml(
  const AddDigit_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: uid
  {
    out << "uid: ";
    rosidl_generator_traits::value_to_yaml(msg.uid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDigit_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uid: ";
    rosidl_generator_traits::value_to_yaml(msg.uid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDigit_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::action::AddDigit_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::action::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::action::AddDigit_Goal & msg)
{
  return rp2_inter::action::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::action::AddDigit_Goal>()
{
  return "rp2_inter::action::AddDigit_Goal";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_Goal>()
{
  return "rp2_inter/action/AddDigit_Goal";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rp2_inter::action::AddDigit_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rp2_inter
{

namespace action
{

inline void to_flow_style_yaml(
  const AddDigit_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_uid
  {
    if (msg.result_uid.size() == 0) {
      out << "result_uid: []";
    } else {
      out << "result_uid: [";
      size_t pending_items = msg.result_uid.size();
      for (auto item : msg.result_uid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDigit_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result_uid.size() == 0) {
      out << "result_uid: []\n";
    } else {
      out << "result_uid:\n";
      for (auto item : msg.result_uid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDigit_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::action::AddDigit_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::action::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::action::AddDigit_Result & msg)
{
  return rp2_inter::action::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::action::AddDigit_Result>()
{
  return "rp2_inter::action::AddDigit_Result";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_Result>()
{
  return "rp2_inter/action/AddDigit_Result";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rp2_inter::action::AddDigit_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rp2_inter
{

namespace action
{

inline void to_flow_style_yaml(
  const AddDigit_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: intermediate_uid
  {
    if (msg.intermediate_uid.size() == 0) {
      out << "intermediate_uid: []";
    } else {
      out << "intermediate_uid: [";
      size_t pending_items = msg.intermediate_uid.size();
      for (auto item : msg.intermediate_uid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDigit_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: intermediate_uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intermediate_uid.size() == 0) {
      out << "intermediate_uid: []\n";
    } else {
      out << "intermediate_uid:\n";
      for (auto item : msg.intermediate_uid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDigit_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::action::AddDigit_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::action::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::action::AddDigit_Feedback & msg)
{
  return rp2_inter::action::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::action::AddDigit_Feedback>()
{
  return "rp2_inter::action::AddDigit_Feedback";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_Feedback>()
{
  return "rp2_inter/action/AddDigit_Feedback";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rp2_inter::action::AddDigit_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "rp2_inter/action/detail/add_digit__traits.hpp"

namespace rp2_inter
{

namespace action
{

inline void to_flow_style_yaml(
  const AddDigit_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDigit_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDigit_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::action::AddDigit_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::action::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::action::AddDigit_SendGoal_Request & msg)
{
  return rp2_inter::action::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::action::AddDigit_SendGoal_Request>()
{
  return "rp2_inter::action::AddDigit_SendGoal_Request";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_SendGoal_Request>()
{
  return "rp2_inter/action/AddDigit_SendGoal_Request";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<rp2_inter::action::AddDigit_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<rp2_inter::action::AddDigit_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rp2_inter::action::AddDigit_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rp2_inter
{

namespace action
{

inline void to_flow_style_yaml(
  const AddDigit_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDigit_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDigit_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::action::AddDigit_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::action::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::action::AddDigit_SendGoal_Response & msg)
{
  return rp2_inter::action::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::action::AddDigit_SendGoal_Response>()
{
  return "rp2_inter::action::AddDigit_SendGoal_Response";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_SendGoal_Response>()
{
  return "rp2_inter/action/AddDigit_SendGoal_Response";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rp2_inter::action::AddDigit_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rp2_inter::action::AddDigit_SendGoal>()
{
  return "rp2_inter::action::AddDigit_SendGoal";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_SendGoal>()
{
  return "rp2_inter/action/AddDigit_SendGoal";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<rp2_inter::action::AddDigit_SendGoal_Request>::value &&
    has_fixed_size<rp2_inter::action::AddDigit_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<rp2_inter::action::AddDigit_SendGoal_Request>::value &&
    has_bounded_size<rp2_inter::action::AddDigit_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<rp2_inter::action::AddDigit_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<rp2_inter::action::AddDigit_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rp2_inter::action::AddDigit_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rp2_inter
{

namespace action
{

inline void to_flow_style_yaml(
  const AddDigit_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDigit_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDigit_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::action::AddDigit_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::action::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::action::AddDigit_GetResult_Request & msg)
{
  return rp2_inter::action::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::action::AddDigit_GetResult_Request>()
{
  return "rp2_inter::action::AddDigit_GetResult_Request";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_GetResult_Request>()
{
  return "rp2_inter/action/AddDigit_GetResult_Request";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rp2_inter::action::AddDigit_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "rp2_inter/action/detail/add_digit__traits.hpp"

namespace rp2_inter
{

namespace action
{

inline void to_flow_style_yaml(
  const AddDigit_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDigit_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDigit_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::action::AddDigit_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::action::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::action::AddDigit_GetResult_Response & msg)
{
  return rp2_inter::action::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::action::AddDigit_GetResult_Response>()
{
  return "rp2_inter::action::AddDigit_GetResult_Response";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_GetResult_Response>()
{
  return "rp2_inter/action/AddDigit_GetResult_Response";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<rp2_inter::action::AddDigit_Result>::value> {};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<rp2_inter::action::AddDigit_Result>::value> {};

template<>
struct is_message<rp2_inter::action::AddDigit_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rp2_inter::action::AddDigit_GetResult>()
{
  return "rp2_inter::action::AddDigit_GetResult";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_GetResult>()
{
  return "rp2_inter/action/AddDigit_GetResult";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<rp2_inter::action::AddDigit_GetResult_Request>::value &&
    has_fixed_size<rp2_inter::action::AddDigit_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<rp2_inter::action::AddDigit_GetResult_Request>::value &&
    has_bounded_size<rp2_inter::action::AddDigit_GetResult_Response>::value
  >
{
};

template<>
struct is_service<rp2_inter::action::AddDigit_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<rp2_inter::action::AddDigit_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rp2_inter::action::AddDigit_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "rp2_inter/action/detail/add_digit__traits.hpp"

namespace rp2_inter
{

namespace action
{

inline void to_flow_style_yaml(
  const AddDigit_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDigit_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDigit_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::action::AddDigit_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::action::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::action::AddDigit_FeedbackMessage & msg)
{
  return rp2_inter::action::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::action::AddDigit_FeedbackMessage>()
{
  return "rp2_inter::action::AddDigit_FeedbackMessage";
}

template<>
inline const char * name<rp2_inter::action::AddDigit_FeedbackMessage>()
{
  return "rp2_inter/action/AddDigit_FeedbackMessage";
}

template<>
struct has_fixed_size<rp2_inter::action::AddDigit_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<rp2_inter::action::AddDigit_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rp2_inter::action::AddDigit_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<rp2_inter::action::AddDigit_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rp2_inter::action::AddDigit_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<rp2_inter::action::AddDigit>
  : std::true_type
{
};

template<>
struct is_action_goal<rp2_inter::action::AddDigit_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<rp2_inter::action::AddDigit_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<rp2_inter::action::AddDigit_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // RP2_INTER__ACTION__DETAIL__ADD_DIGIT__TRAITS_HPP_
