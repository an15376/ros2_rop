// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rp2_inter:srv/Multy.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__SRV__DETAIL__MULTY__TRAITS_HPP_
#define RP2_INTER__SRV__DETAIL__MULTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rp2_inter/srv/detail/multy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rp2_inter
{

namespace srv
{

inline void to_flow_style_yaml(
  const Multy_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Multy_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Multy_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::srv::Multy_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::srv::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::srv::Multy_Request & msg)
{
  return rp2_inter::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::srv::Multy_Request>()
{
  return "rp2_inter::srv::Multy_Request";
}

template<>
inline const char * name<rp2_inter::srv::Multy_Request>()
{
  return "rp2_inter/srv/Multy_Request";
}

template<>
struct has_fixed_size<rp2_inter::srv::Multy_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rp2_inter::srv::Multy_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rp2_inter::srv::Multy_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rp2_inter
{

namespace srv
{

inline void to_flow_style_yaml(
  const Multy_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: product
  {
    out << "product: ";
    rosidl_generator_traits::value_to_yaml(msg.product, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Multy_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: product
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product: ";
    rosidl_generator_traits::value_to_yaml(msg.product, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Multy_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rp2_inter

namespace rosidl_generator_traits
{

[[deprecated("use rp2_inter::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rp2_inter::srv::Multy_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rp2_inter::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rp2_inter::srv::to_yaml() instead")]]
inline std::string to_yaml(const rp2_inter::srv::Multy_Response & msg)
{
  return rp2_inter::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rp2_inter::srv::Multy_Response>()
{
  return "rp2_inter::srv::Multy_Response";
}

template<>
inline const char * name<rp2_inter::srv::Multy_Response>()
{
  return "rp2_inter/srv/Multy_Response";
}

template<>
struct has_fixed_size<rp2_inter::srv::Multy_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rp2_inter::srv::Multy_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rp2_inter::srv::Multy_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rp2_inter::srv::Multy>()
{
  return "rp2_inter::srv::Multy";
}

template<>
inline const char * name<rp2_inter::srv::Multy>()
{
  return "rp2_inter/srv/Multy";
}

template<>
struct has_fixed_size<rp2_inter::srv::Multy>
  : std::integral_constant<
    bool,
    has_fixed_size<rp2_inter::srv::Multy_Request>::value &&
    has_fixed_size<rp2_inter::srv::Multy_Response>::value
  >
{
};

template<>
struct has_bounded_size<rp2_inter::srv::Multy>
  : std::integral_constant<
    bool,
    has_bounded_size<rp2_inter::srv::Multy_Request>::value &&
    has_bounded_size<rp2_inter::srv::Multy_Response>::value
  >
{
};

template<>
struct is_service<rp2_inter::srv::Multy>
  : std::true_type
{
};

template<>
struct is_service_request<rp2_inter::srv::Multy_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rp2_inter::srv::Multy_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RP2_INTER__SRV__DETAIL__MULTY__TRAITS_HPP_
