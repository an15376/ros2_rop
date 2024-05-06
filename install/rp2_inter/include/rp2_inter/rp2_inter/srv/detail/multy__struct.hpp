// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rp2_inter:srv/Multy.idl
// generated code does not contain a copyright notice

#ifndef RP2_INTER__SRV__DETAIL__MULTY__STRUCT_HPP_
#define RP2_INTER__SRV__DETAIL__MULTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rp2_inter__srv__Multy_Request __attribute__((deprecated))
#else
# define DEPRECATED__rp2_inter__srv__Multy_Request __declspec(deprecated)
#endif

namespace rp2_inter
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Multy_Request_
{
  using Type = Multy_Request_<ContainerAllocator>;

  explicit Multy_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit Multy_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rp2_inter::srv::Multy_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rp2_inter::srv::Multy_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rp2_inter::srv::Multy_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rp2_inter::srv::Multy_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rp2_inter::srv::Multy_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rp2_inter::srv::Multy_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rp2_inter::srv::Multy_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rp2_inter::srv::Multy_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rp2_inter::srv::Multy_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rp2_inter::srv::Multy_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rp2_inter__srv__Multy_Request
    std::shared_ptr<rp2_inter::srv::Multy_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rp2_inter__srv__Multy_Request
    std::shared_ptr<rp2_inter::srv::Multy_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Multy_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Multy_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Multy_Request_

// alias to use template instance with default allocator
using Multy_Request =
  rp2_inter::srv::Multy_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rp2_inter


#ifndef _WIN32
# define DEPRECATED__rp2_inter__srv__Multy_Response __attribute__((deprecated))
#else
# define DEPRECATED__rp2_inter__srv__Multy_Response __declspec(deprecated)
#endif

namespace rp2_inter
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Multy_Response_
{
  using Type = Multy_Response_<ContainerAllocator>;

  explicit Multy_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->product = 0ll;
    }
  }

  explicit Multy_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->product = 0ll;
    }
  }

  // field types and members
  using _product_type =
    int64_t;
  _product_type product;

  // setters for named parameter idiom
  Type & set__product(
    const int64_t & _arg)
  {
    this->product = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rp2_inter::srv::Multy_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rp2_inter::srv::Multy_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rp2_inter::srv::Multy_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rp2_inter::srv::Multy_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rp2_inter::srv::Multy_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rp2_inter::srv::Multy_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rp2_inter::srv::Multy_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rp2_inter::srv::Multy_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rp2_inter::srv::Multy_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rp2_inter::srv::Multy_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rp2_inter__srv__Multy_Response
    std::shared_ptr<rp2_inter::srv::Multy_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rp2_inter__srv__Multy_Response
    std::shared_ptr<rp2_inter::srv::Multy_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Multy_Response_ & other) const
  {
    if (this->product != other.product) {
      return false;
    }
    return true;
  }
  bool operator!=(const Multy_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Multy_Response_

// alias to use template instance with default allocator
using Multy_Response =
  rp2_inter::srv::Multy_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rp2_inter

namespace rp2_inter
{

namespace srv
{

struct Multy
{
  using Request = rp2_inter::srv::Multy_Request;
  using Response = rp2_inter::srv::Multy_Response;
};

}  // namespace srv

}  // namespace rp2_inter

#endif  // RP2_INTER__SRV__DETAIL__MULTY__STRUCT_HPP_
