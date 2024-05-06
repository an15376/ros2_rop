// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rp2_inter:srv/Multy.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__SRV__DETAIL__MULTY__BUILDER_HPP_
#define RP2_INTER__SRV__DETAIL__MULTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rp2_inter/srv/detail/multy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rp2_inter
{

namespace srv
{

namespace builder
{

class Init_Multy_Request_b
{
public:
  explicit Init_Multy_Request_b(::rp2_inter::srv::Multy_Request & msg)
  : msg_(msg)
  {}
  ::rp2_inter::srv::Multy_Request b(::rp2_inter::srv::Multy_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::srv::Multy_Request msg_;
};

class Init_Multy_Request_a
{
public:
  Init_Multy_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Multy_Request_b a(::rp2_inter::srv::Multy_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Multy_Request_b(msg_);
  }

private:
  ::rp2_inter::srv::Multy_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::srv::Multy_Request>()
{
  return rp2_inter::srv::builder::Init_Multy_Request_a();
}

}  // namespace rp2_inter


namespace rp2_inter
{

namespace srv
{

namespace builder
{

class Init_Multy_Response_product
{
public:
  Init_Multy_Response_product()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rp2_inter::srv::Multy_Response product(::rp2_inter::srv::Multy_Response::_product_type arg)
  {
    msg_.product = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::srv::Multy_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::srv::Multy_Response>()
{
  return rp2_inter::srv::builder::Init_Multy_Response_product();
}

}  // namespace rp2_inter

#endif  // RP2_INTER__SRV__DETAIL__MULTY__BUILDER_HPP_
