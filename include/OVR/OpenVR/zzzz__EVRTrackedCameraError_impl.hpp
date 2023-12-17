#pragma once
#include "OVR/OpenVR/zzzz__EVRTrackedCameraError_def.hpp"
constexpr void OVR::OpenVR::EVRTrackedCameraError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRTrackedCameraError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRTrackedCameraError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRTrackedCameraError::EVRTrackedCameraError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::OperationFailed{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidHandle{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidFrameHeaderVersion{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::OutOfHandles{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::IPCFailure{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::NotSupportedForThisDevice{static_cast<int32_t>(0x69)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::SharedMemoryFailure{static_cast<int32_t>(0x6a)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::FrameBufferingFailure{static_cast<int32_t>(0x6b)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::StreamSetupFailure{static_cast<int32_t>(0x6c)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidGLTextureId{static_cast<int32_t>(0x6d)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidSharedTextureHandle{static_cast<int32_t>(0x6e)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::FailedToGetGLTextureId{static_cast<int32_t>(0x6f)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::SharedTextureFailure{static_cast<int32_t>(0x70)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::NoFrameAvailable{static_cast<int32_t>(0x71)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidArgument{static_cast<int32_t>(0x72)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidFrameBufferSize{static_cast<int32_t>(0x73)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
