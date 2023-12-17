#pragma once
#include "OVR/OpenVR/zzzz__EVRApplicationTransitionState_def.hpp"
constexpr void OVR::OpenVR::EVRApplicationTransitionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRApplicationTransitionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRApplicationTransitionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationTransitionState::EVRApplicationTransitionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_OldAppQuitSent{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_WaitingForExternalLaunch{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_NewAppLaunched{static_cast<int32_t>(0x14)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
