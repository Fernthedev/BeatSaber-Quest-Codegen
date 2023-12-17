#pragma once
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
constexpr void UnityEngine::UIElements::VersionChangeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::VersionChangeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::VersionChangeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VersionChangeType::VersionChangeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Bindings{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::ViewData{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Hierarchy{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Layout{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::StyleSheet{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Styles{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Overflow{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::BorderRadius{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::BorderWidth{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Transform{static_cast<int32_t>(0x200)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Size{static_cast<int32_t>(0x400)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Repaint{static_cast<int32_t>(0x800)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Opacity{static_cast<int32_t>(0x1000)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Color{static_cast<int32_t>(0x2000)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::RenderHints{static_cast<int32_t>(0x4000)};
constexpr ::UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::TransitionProperty{static_cast<int32_t>(0x8000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
