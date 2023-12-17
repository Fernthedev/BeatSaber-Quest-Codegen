#pragma once
#include "OVR/OpenVR/zzzz__ETrackedDeviceClass_def.hpp"
constexpr void OVR::OpenVR::ETrackedDeviceClass::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::ETrackedDeviceClass::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::ETrackedDeviceClass::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackedDeviceClass::ETrackedDeviceClass(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::Invalid{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::HMD{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::Controller{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::GenericTracker{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::TrackingReference{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::DisplayRedirect{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::Max{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
