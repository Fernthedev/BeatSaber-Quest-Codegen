#pragma once
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFiltersInternal_def.hpp"
constexpr void UnityEngine::UIElements::DynamicAtlasFiltersInternal::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::DynamicAtlasFiltersInternal::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::DynamicAtlasFiltersInternal::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::DynamicAtlasFiltersInternal(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  UnityEngine::UIElements::DynamicAtlasFiltersInternal::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  UnityEngine::UIElements::DynamicAtlasFiltersInternal::Readability{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  UnityEngine::UIElements::DynamicAtlasFiltersInternal::Size{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  UnityEngine::UIElements::DynamicAtlasFiltersInternal::Format{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  UnityEngine::UIElements::DynamicAtlasFiltersInternal::ColorSpace{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  UnityEngine::UIElements::DynamicAtlasFiltersInternal::FilterMode{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
