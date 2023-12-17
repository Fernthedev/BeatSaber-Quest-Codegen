#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
constexpr void UnityEngine::TextCore::Text::TextOverflowMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextOverflowMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextOverflowMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode::TextOverflowMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Overflow{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Ellipsis{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Masking{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Truncate{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::ScrollRect{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Page{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Linked{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
