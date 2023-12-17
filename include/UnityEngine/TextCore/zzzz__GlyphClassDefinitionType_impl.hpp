#pragma once
#include "UnityEngine/TextCore/zzzz__GlyphClassDefinitionType_def.hpp"
constexpr void UnityEngine::TextCore::GlyphClassDefinitionType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::GlyphClassDefinitionType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::GlyphClassDefinitionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType::GlyphClassDefinitionType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Undefined{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Base{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Ligature{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Mark{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Component{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
