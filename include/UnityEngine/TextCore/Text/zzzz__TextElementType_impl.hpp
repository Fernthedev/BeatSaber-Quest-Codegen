#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
constexpr void UnityEngine::TextCore::Text::TextElementType::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& UnityEngine::TextCore::Text::TextElementType::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& UnityEngine::TextCore::Text::TextElementType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextElementType::TextElementType(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::Text::TextElementType  UnityEngine::TextCore::Text::TextElementType::Character{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::TextCore::Text::TextElementType  UnityEngine::TextCore::Text::TextElementType::Sprite{static_cast<uint8_t>(0x2u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
