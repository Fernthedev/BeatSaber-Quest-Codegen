#pragma once
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
constexpr void UnityEngine::TextCore::Text::FontStyles::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::FontStyles::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::FontStyles::FontStyles(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::Normal{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::Bold{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::Italic{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::Underline{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::LowerCase{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::UpperCase{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::SmallCaps{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::Strikethrough{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::Superscript{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::Subscript{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::TextCore::Text::FontStyles  UnityEngine::TextCore::Text::FontStyles::Highlight{static_cast<int32_t>(0x200)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
