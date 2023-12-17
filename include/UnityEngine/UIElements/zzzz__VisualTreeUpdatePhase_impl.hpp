#pragma once
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdatePhase_def.hpp"
constexpr void UnityEngine::UIElements::VisualTreeUpdatePhase::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeUpdatePhase::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeUpdatePhase::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase::VisualTreeUpdatePhase(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  UnityEngine::UIElements::VisualTreeUpdatePhase::ViewData{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  UnityEngine::UIElements::VisualTreeUpdatePhase::Bindings{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  UnityEngine::UIElements::VisualTreeUpdatePhase::Animation{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  UnityEngine::UIElements::VisualTreeUpdatePhase::Styles{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  UnityEngine::UIElements::VisualTreeUpdatePhase::Layout{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  UnityEngine::UIElements::VisualTreeUpdatePhase::TransformClip{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  UnityEngine::UIElements::VisualTreeUpdatePhase::Repaint{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  UnityEngine::UIElements::VisualTreeUpdatePhase::Count{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
