#pragma once
#include "OVR/OpenVR/zzzz__ChaperoneCalibrationState_def.hpp"
constexpr void OVR::OpenVR::ChaperoneCalibrationState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::ChaperoneCalibrationState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::ChaperoneCalibrationState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ChaperoneCalibrationState::ChaperoneCalibrationState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::OK{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_BaseStationMayHaveMoved{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_BaseStationRemoved{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_SeatedBoundsInvalid{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_BaseStationUninitialized{static_cast<int32_t>(0xc9)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_BaseStationConflict{static_cast<int32_t>(0xca)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_PlayAreaInvalid{static_cast<int32_t>(0xcb)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_CollisionBoundsInvalid{static_cast<int32_t>(0xcc)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
