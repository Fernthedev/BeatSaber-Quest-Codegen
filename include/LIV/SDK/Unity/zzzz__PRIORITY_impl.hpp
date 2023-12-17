#pragma once
#include "LIV/SDK/Unity/zzzz__PRIORITY_def.hpp"
constexpr void LIV::SDK::Unity::PRIORITY::__set_value__(int8_t  value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int8_t>(value));
}
constexpr int8_t& LIV::SDK::Unity::PRIORITY::__get_value__()  {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int8_t const& LIV::SDK::Unity::PRIORITY::__get_value__() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::PRIORITY::PRIORITY(int8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::LIV::SDK::Unity::PRIORITY  LIV::SDK::Unity::PRIORITY::NONE{static_cast<int8_t>(0x0)};
constexpr ::LIV::SDK::Unity::PRIORITY  LIV::SDK::Unity::PRIORITY::GAME{static_cast<int8_t>(0x3f)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
