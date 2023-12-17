#pragma once
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
constexpr void OVR::OpenVR::EVRTrackedCameraFrameType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRTrackedCameraFrameType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRTrackedCameraFrameType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType::EVRTrackedCameraFrameType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType  OVR::OpenVR::EVRTrackedCameraFrameType::Distorted{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType  OVR::OpenVR::EVRTrackedCameraFrameType::Undistorted{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType  OVR::OpenVR::EVRTrackedCameraFrameType::MaximumUndistorted{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType  OVR::OpenVR::EVRTrackedCameraFrameType::MAX_CAMERA_FRAME_TYPES{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
