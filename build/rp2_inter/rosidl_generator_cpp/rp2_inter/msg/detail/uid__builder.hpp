// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rp2_inter:msg/Uid.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__MSG__DETAIL__UID__BUILDER_HPP_
#define RP2_INTER__MSG__DETAIL__UID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rp2_inter/msg/detail/uid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rp2_inter
{

namespace msg
{

namespace builder
{

class Init_Uid_uid
{
public:
  Init_Uid_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rp2_inter::msg::Uid uid(::rp2_inter::msg::Uid::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::msg::Uid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::msg::Uid>()
{
  return rp2_inter::msg::builder::Init_Uid_uid();
}

}  // namespace rp2_inter

#endif  // RP2_INTER__MSG__DETAIL__UID__BUILDER_HPP_
