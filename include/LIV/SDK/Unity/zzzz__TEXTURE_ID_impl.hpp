#pragma once
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
constexpr void LIV::SDK::Unity::TEXTURE_ID::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& LIV::SDK::Unity::TEXTURE_ID::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& LIV::SDK::Unity::TEXTURE_ID::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_ID::TEXTURE_ID(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::UNDEFINED{static_cast<uint32_t>(0x1e140a00u)};
constexpr ::LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::BACKGROUND_COLOR_BUFFER_ID{static_cast<uint32_t>(0x1e140au)};
constexpr ::LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::FOREGROUND_COLOR_BUFFER_ID{static_cast<uint32_t>(0x1001e14u)};
constexpr ::LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::OPTIMIZED_COLOR_BUFFER_ID{static_cast<uint32_t>(0x1001eu)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
