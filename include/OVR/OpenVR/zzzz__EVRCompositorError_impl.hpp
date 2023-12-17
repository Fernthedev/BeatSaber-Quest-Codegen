#pragma once
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
constexpr void OVR::OpenVR::EVRCompositorError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRCompositorError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRCompositorError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRCompositorError::EVRCompositorError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::RequestFailed{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::IncompatibleVersion{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::DoNotHaveFocus{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::InvalidTexture{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::IsNotSceneApplication{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::TextureIsOnWrongDevice{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::TextureUsesUnsupportedFormat{static_cast<int32_t>(0x69)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::SharedTexturesNotSupported{static_cast<int32_t>(0x6a)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::IndexOutOfRange{static_cast<int32_t>(0x6b)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::AlreadySubmitted{static_cast<int32_t>(0x6c)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::InvalidBounds{static_cast<int32_t>(0x6d)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
