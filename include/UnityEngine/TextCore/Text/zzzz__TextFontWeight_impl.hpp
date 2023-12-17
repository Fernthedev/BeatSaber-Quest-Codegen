#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
constexpr void UnityEngine::TextCore::Text::TextFontWeight::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextFontWeight::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextFontWeight::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextFontWeight::TextFontWeight(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Thin{static_cast<int32_t>(0x64)};
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::ExtraLight{static_cast<int32_t>(0xc8)};
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Light{static_cast<int32_t>(0x12c)};
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Regular{static_cast<int32_t>(0x190)};
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Medium{static_cast<int32_t>(0x1f4)};
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::SemiBold{static_cast<int32_t>(0x258)};
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Bold{static_cast<int32_t>(0x2bc)};
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Heavy{static_cast<int32_t>(0x320)};
constexpr ::UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Black{static_cast<int32_t>(0x384)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
