#pragma once
#include "OVR/OpenVR/zzzz__EGamepadTextInputLineMode_def.hpp"
constexpr void OVR::OpenVR::EGamepadTextInputLineMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EGamepadTextInputLineMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EGamepadTextInputLineMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EGamepadTextInputLineMode::EGamepadTextInputLineMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EGamepadTextInputLineMode  OVR::OpenVR::EGamepadTextInputLineMode::k_EGamepadTextInputLineModeSingleLine{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EGamepadTextInputLineMode  OVR::OpenVR::EGamepadTextInputLineMode::k_EGamepadTextInputLineModeMultipleLines{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
