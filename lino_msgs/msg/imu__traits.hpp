// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef LINO_MSGS__MSG__IMU__TRAITS_HPP_
#define LINO_MSGS__MSG__IMU__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "lino_msgs/msg/imu__struct.hpp"


template<>
struct has_fixed_size<lino_msgs::msg::Imu>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value>{};

template<>
struct has_bounded_size<lino_msgs::msg::Imu>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value>{};

}  // namespace rosidl_generator_traits

#endif  // LINO_MSGS__MSG__IMU__TRAITS_HPP_
