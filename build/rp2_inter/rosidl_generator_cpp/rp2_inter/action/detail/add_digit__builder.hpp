// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rp2_inter:action/AddDigit.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__ACTION__DETAIL__ADD_DIGIT__BUILDER_HPP_
#define RP2_INTER__ACTION__DETAIL__ADD_DIGIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rp2_inter/action/detail/add_digit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rp2_inter
{

namespace action
{

namespace builder
{

class Init_AddDigit_Goal_uid
{
public:
  Init_AddDigit_Goal_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rp2_inter::action::AddDigit_Goal uid(::rp2_inter::action::AddDigit_Goal::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::action::AddDigit_Goal>()
{
  return rp2_inter::action::builder::Init_AddDigit_Goal_uid();
}

}  // namespace rp2_inter


namespace rp2_inter
{

namespace action
{

namespace builder
{

class Init_AddDigit_Result_result_uid
{
public:
  Init_AddDigit_Result_result_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rp2_inter::action::AddDigit_Result result_uid(::rp2_inter::action::AddDigit_Result::_result_uid_type arg)
  {
    msg_.result_uid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::action::AddDigit_Result>()
{
  return rp2_inter::action::builder::Init_AddDigit_Result_result_uid();
}

}  // namespace rp2_inter


namespace rp2_inter
{

namespace action
{

namespace builder
{

class Init_AddDigit_Feedback_intermediate_uid
{
public:
  Init_AddDigit_Feedback_intermediate_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rp2_inter::action::AddDigit_Feedback intermediate_uid(::rp2_inter::action::AddDigit_Feedback::_intermediate_uid_type arg)
  {
    msg_.intermediate_uid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::action::AddDigit_Feedback>()
{
  return rp2_inter::action::builder::Init_AddDigit_Feedback_intermediate_uid();
}

}  // namespace rp2_inter


namespace rp2_inter
{

namespace action
{

namespace builder
{

class Init_AddDigit_SendGoal_Request_goal
{
public:
  explicit Init_AddDigit_SendGoal_Request_goal(::rp2_inter::action::AddDigit_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rp2_inter::action::AddDigit_SendGoal_Request goal(::rp2_inter::action::AddDigit_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_SendGoal_Request msg_;
};

class Init_AddDigit_SendGoal_Request_goal_id
{
public:
  Init_AddDigit_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddDigit_SendGoal_Request_goal goal_id(::rp2_inter::action::AddDigit_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AddDigit_SendGoal_Request_goal(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::action::AddDigit_SendGoal_Request>()
{
  return rp2_inter::action::builder::Init_AddDigit_SendGoal_Request_goal_id();
}

}  // namespace rp2_inter


namespace rp2_inter
{

namespace action
{

namespace builder
{

class Init_AddDigit_SendGoal_Response_stamp
{
public:
  explicit Init_AddDigit_SendGoal_Response_stamp(::rp2_inter::action::AddDigit_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rp2_inter::action::AddDigit_SendGoal_Response stamp(::rp2_inter::action::AddDigit_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_SendGoal_Response msg_;
};

class Init_AddDigit_SendGoal_Response_accepted
{
public:
  Init_AddDigit_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddDigit_SendGoal_Response_stamp accepted(::rp2_inter::action::AddDigit_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AddDigit_SendGoal_Response_stamp(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::action::AddDigit_SendGoal_Response>()
{
  return rp2_inter::action::builder::Init_AddDigit_SendGoal_Response_accepted();
}

}  // namespace rp2_inter


namespace rp2_inter
{

namespace action
{

namespace builder
{

class Init_AddDigit_GetResult_Request_goal_id
{
public:
  Init_AddDigit_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rp2_inter::action::AddDigit_GetResult_Request goal_id(::rp2_inter::action::AddDigit_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::action::AddDigit_GetResult_Request>()
{
  return rp2_inter::action::builder::Init_AddDigit_GetResult_Request_goal_id();
}

}  // namespace rp2_inter


namespace rp2_inter
{

namespace action
{

namespace builder
{

class Init_AddDigit_GetResult_Response_result
{
public:
  explicit Init_AddDigit_GetResult_Response_result(::rp2_inter::action::AddDigit_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rp2_inter::action::AddDigit_GetResult_Response result(::rp2_inter::action::AddDigit_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_GetResult_Response msg_;
};

class Init_AddDigit_GetResult_Response_status
{
public:
  Init_AddDigit_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddDigit_GetResult_Response_result status(::rp2_inter::action::AddDigit_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AddDigit_GetResult_Response_result(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::action::AddDigit_GetResult_Response>()
{
  return rp2_inter::action::builder::Init_AddDigit_GetResult_Response_status();
}

}  // namespace rp2_inter


namespace rp2_inter
{

namespace action
{

namespace builder
{

class Init_AddDigit_FeedbackMessage_feedback
{
public:
  explicit Init_AddDigit_FeedbackMessage_feedback(::rp2_inter::action::AddDigit_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rp2_inter::action::AddDigit_FeedbackMessage feedback(::rp2_inter::action::AddDigit_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_FeedbackMessage msg_;
};

class Init_AddDigit_FeedbackMessage_goal_id
{
public:
  Init_AddDigit_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddDigit_FeedbackMessage_feedback goal_id(::rp2_inter::action::AddDigit_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AddDigit_FeedbackMessage_feedback(msg_);
  }

private:
  ::rp2_inter::action::AddDigit_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rp2_inter::action::AddDigit_FeedbackMessage>()
{
  return rp2_inter::action::builder::Init_AddDigit_FeedbackMessage_goal_id();
}

}  // namespace rp2_inter

#endif  // RP2_INTER__ACTION__DETAIL__ADD_DIGIT__BUILDER_HPP_
