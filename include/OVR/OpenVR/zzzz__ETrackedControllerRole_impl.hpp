#pragma once
#include "OVR/OpenVR/zzzz__ETrackedControllerRole_def.hpp"
constexpr void OVR::OpenVR::ETrackedControllerRole::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::ETrackedControllerRole::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::ETrackedControllerRole::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackedControllerRole::ETrackedControllerRole(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::Invalid{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::LeftHand{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::RightHand{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::OptOut{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::Max{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
