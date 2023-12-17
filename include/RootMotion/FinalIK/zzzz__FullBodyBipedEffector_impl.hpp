#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
constexpr void RootMotion::FinalIK::FullBodyBipedEffector::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::FinalIK::FullBodyBipedEffector::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& RootMotion::FinalIK::FullBodyBipedEffector::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector::FullBodyBipedEffector(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::Body{static_cast<int32_t>(0x0)};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::LeftShoulder{static_cast<int32_t>(0x1)};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::RightShoulder{static_cast<int32_t>(0x2)};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::LeftThigh{static_cast<int32_t>(0x3)};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::RightThigh{static_cast<int32_t>(0x4)};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::LeftHand{static_cast<int32_t>(0x5)};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::RightHand{static_cast<int32_t>(0x6)};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::LeftFoot{static_cast<int32_t>(0x7)};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector  RootMotion::FinalIK::FullBodyBipedEffector::RightFoot{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
