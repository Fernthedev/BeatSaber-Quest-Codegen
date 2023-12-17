#pragma once
#include "OVR/OpenVR/zzzz__EVRState_def.hpp"
constexpr void OVR::OpenVR::EVRState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRState::EVRState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Undefined{static_cast<int32_t>(0xffffffff)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Off{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Searching{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Searching_Alert{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready_Alert{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::NotReady{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Standby{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready_Alert_Low{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
