#pragma once
#include "OVR/OpenVR/zzzz__EIOBufferMode_def.hpp"
constexpr void OVR::OpenVR::EIOBufferMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EIOBufferMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EIOBufferMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EIOBufferMode::EIOBufferMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EIOBufferMode  OVR::OpenVR::EIOBufferMode::Read{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EIOBufferMode  OVR::OpenVR::EIOBufferMode::Write{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EIOBufferMode  OVR::OpenVR::EIOBufferMode::Create{static_cast<int32_t>(0x200)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
