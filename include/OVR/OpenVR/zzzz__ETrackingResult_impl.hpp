#pragma once
#include "OVR/OpenVR/zzzz__ETrackingResult_def.hpp"
constexpr void OVR::OpenVR::ETrackingResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::ETrackingResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::ETrackingResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackingResult::ETrackingResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Uninitialized{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Calibrating_InProgress{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Calibrating_OutOfRange{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Running_OK{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Running_OutOfRange{static_cast<int32_t>(0xc9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
