#pragma once
#include "OVR/OpenVR/zzzz__EVRApplicationError_def.hpp"
constexpr void OVR::OpenVR::EVRApplicationError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRApplicationError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRApplicationError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationError::EVRApplicationError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::AppKeyAlreadyExists{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::NoManifest{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::NoApplication{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::InvalidIndex{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::UnknownApplication{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::IPCFailed{static_cast<int32_t>(0x69)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::ApplicationAlreadyRunning{static_cast<int32_t>(0x6a)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::InvalidManifest{static_cast<int32_t>(0x6b)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::InvalidApplication{static_cast<int32_t>(0x6c)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::LaunchFailed{static_cast<int32_t>(0x6d)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::ApplicationAlreadyStarting{static_cast<int32_t>(0x6e)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::LaunchInProgress{static_cast<int32_t>(0x6f)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::OldApplicationQuitting{static_cast<int32_t>(0x70)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::TransitionAborted{static_cast<int32_t>(0x71)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::IsTemplate{static_cast<int32_t>(0x72)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::SteamVRIsExiting{static_cast<int32_t>(0x73)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::BufferTooSmall{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::PropertyNotSet{static_cast<int32_t>(0xc9)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::UnknownProperty{static_cast<int32_t>(0xca)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::InvalidParameter{static_cast<int32_t>(0xcb)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
