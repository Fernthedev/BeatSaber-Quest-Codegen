#pragma once
#include "TMPro/zzzz__FontWeight_def.hpp"
constexpr void TMPro::FontWeight::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::FontWeight::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::FontWeight::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::FontWeight::FontWeight(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::FontWeight  TMPro::FontWeight::Thin{static_cast<int32_t>(0x64)};
constexpr ::TMPro::FontWeight  TMPro::FontWeight::ExtraLight{static_cast<int32_t>(0xc8)};
constexpr ::TMPro::FontWeight  TMPro::FontWeight::Light{static_cast<int32_t>(0x12c)};
constexpr ::TMPro::FontWeight  TMPro::FontWeight::Regular{static_cast<int32_t>(0x190)};
constexpr ::TMPro::FontWeight  TMPro::FontWeight::Medium{static_cast<int32_t>(0x1f4)};
constexpr ::TMPro::FontWeight  TMPro::FontWeight::SemiBold{static_cast<int32_t>(0x258)};
constexpr ::TMPro::FontWeight  TMPro::FontWeight::Bold{static_cast<int32_t>(0x2bc)};
constexpr ::TMPro::FontWeight  TMPro::FontWeight::Heavy{static_cast<int32_t>(0x320)};
constexpr ::TMPro::FontWeight  TMPro::FontWeight::Black{static_cast<int32_t>(0x384)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
