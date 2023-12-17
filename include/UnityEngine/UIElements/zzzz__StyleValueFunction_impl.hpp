#pragma once
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
constexpr void UnityEngine::UIElements::StyleValueFunction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::StyleValueFunction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::StyleValueFunction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleValueFunction::StyleValueFunction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::StyleValueFunction  UnityEngine::UIElements::StyleValueFunction::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleValueFunction  UnityEngine::UIElements::StyleValueFunction::Var{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleValueFunction  UnityEngine::UIElements::StyleValueFunction::Env{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleValueFunction  UnityEngine::UIElements::StyleValueFunction::LinearGradient{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
