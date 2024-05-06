// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rp2_inter:msg/Uid.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__MSG__DETAIL__UID__TRAITS_HPP_
#define RP2_INTER__MSG__DETAIL__UID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rp2_inter/msg/detail/uid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rp2_inter
{

namespace msg
{

inline void to_flow_style_yaml(
  const Uid & msg,
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
  const Uid & msg,
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

inline std::string to_yaml(const Uid & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::msg::Uid & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::msg::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::msg::Uid & msg)
{
  return rp2_inter::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::msg::Uid>()
{
  return "rp2_inter::msg::Uid";
}

template<>
inline const char * name<rp2_inter::msg::Uid>()
{
  return "rp2_inter/msg/Uid";
}

template<>
struct has_fixed_size<rp2_inter::msg::Uid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rp2_inter::msg::Uid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rp2_inter::msg::Uid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RP2_INTER__MSG__DETAIL__UID__TRAITS_HPP_
