#pragma once
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
constexpr void UnityEngine::UIElements::FlexDirection::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::FlexDirection::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::FlexDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::FlexDirection::FlexDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::FlexDirection  UnityEngine::UIElements::FlexDirection::Column{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::FlexDirection  UnityEngine::UIElements::FlexDirection::ColumnReverse{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::FlexDirection  UnityEngine::UIElements::FlexDirection::Row{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::FlexDirection  UnityEngine::UIElements::FlexDirection::RowReverse{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
