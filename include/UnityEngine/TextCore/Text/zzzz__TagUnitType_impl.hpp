#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TagUnitType_def.hpp"
constexpr void UnityEngine::TextCore::Text::TagUnitType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TagUnitType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TagUnitType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TagUnitType::TagUnitType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::Text::TagUnitType  UnityEngine::TextCore::Text::TagUnitType::Pixels{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::Text::TagUnitType  UnityEngine::TextCore::Text::TagUnitType::FontUnits{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::Text::TagUnitType  UnityEngine::TextCore::Text::TagUnitType::Percentage{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
