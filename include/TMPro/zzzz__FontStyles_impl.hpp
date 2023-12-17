#pragma once
#include "TMPro/zzzz__FontStyles_def.hpp"
constexpr void TMPro::FontStyles::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::FontStyles::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::FontStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::FontStyles::FontStyles(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Normal{static_cast<int32_t>(0x0)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Bold{static_cast<int32_t>(0x1)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Italic{static_cast<int32_t>(0x2)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Underline{static_cast<int32_t>(0x4)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::LowerCase{static_cast<int32_t>(0x8)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::UpperCase{static_cast<int32_t>(0x10)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::SmallCaps{static_cast<int32_t>(0x20)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Strikethrough{static_cast<int32_t>(0x40)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Superscript{static_cast<int32_t>(0x80)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Subscript{static_cast<int32_t>(0x100)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Highlight{static_cast<int32_t>(0x200)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
