// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rp2_inter:msg/Uid.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__MSG__DETAIL__UID__STRUCT_HPP_
#define RP2_INTER__MSG__DETAIL__UID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rp2_inter__msg__Uid __attribute__((deprecated))
#else
# define DEPRECATED__rp2_inter__msg__Uid __declspec(deprecated)
#endif

namespace rp2_inter
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Uid_
{
  using Type = Uid_<ContainerAllocator>;

  explicit Uid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
    }
  }

  explicit Uid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
    }
  }

  // field types and members
  using _uid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uid_type uid;

  // setters for named parameter idiom
  Type & set__uid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rp2_inter::msg::Uid_<ContainerAllocator> *;
  using ConstRawPtr =
    const rp2_inter::msg::Uid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rp2_inter::msg::Uid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rp2_inter::msg::Uid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rp2_inter::msg::Uid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rp2_inter::msg::Uid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rp2_inter::msg::Uid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rp2_inter::msg::Uid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rp2_inter::msg::Uid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rp2_inter::msg::Uid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rp2_inter__msg__Uid
    std::shared_ptr<rp2_inter::msg::Uid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rp2_inter__msg__Uid
    std::shared_ptr<rp2_inter::msg::Uid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Uid_ & other) const
  {
    if (this->uid != other.uid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Uid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Uid_

// alias to use template instance with default allocator
using Uid =
  rp2_inter::msg::Uid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rp2_inter

#endif  // RP2_INTER__MSG__DETAIL__UID__STRUCT_HPP_
