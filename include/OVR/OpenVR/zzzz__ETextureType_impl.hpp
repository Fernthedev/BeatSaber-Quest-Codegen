#pragma once
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
constexpr void OVR::OpenVR::ETextureType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::ETextureType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::ETextureType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETextureType::ETextureType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::Invalid{static_cast<int32_t>(0xffffffff)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::DirectX{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::OpenGL{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::Vulkan{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::IOSurface{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::DirectX12{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::DXGISharedHandle{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::Metal{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
