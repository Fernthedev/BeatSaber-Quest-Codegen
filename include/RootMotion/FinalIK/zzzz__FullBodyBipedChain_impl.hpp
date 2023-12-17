#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedChain_def.hpp"
constexpr void RootMotion::FinalIK::FullBodyBipedChain::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::FinalIK::FullBodyBipedChain::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& RootMotion::FinalIK::FullBodyBipedChain::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::FullBodyBipedChain::FullBodyBipedChain(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedChain  RootMotion::FinalIK::FullBodyBipedChain::LeftArm{static_cast<int32_t>(0x0)};
constexpr ::RootMotion::FinalIK::FullBodyBipedChain  RootMotion::FinalIK::FullBodyBipedChain::RightArm{static_cast<int32_t>(0x1)};
constexpr ::RootMotion::FinalIK::FullBodyBipedChain  RootMotion::FinalIK::FullBodyBipedChain::LeftLeg{static_cast<int32_t>(0x2)};
constexpr ::RootMotion::FinalIK::FullBodyBipedChain  RootMotion::FinalIK::FullBodyBipedChain::RightLeg{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
