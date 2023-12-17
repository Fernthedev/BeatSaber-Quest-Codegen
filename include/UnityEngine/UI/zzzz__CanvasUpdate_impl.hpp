#pragma once
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
constexpr void UnityEngine::UI::CanvasUpdate::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::CanvasUpdate::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::CanvasUpdate::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CanvasUpdate::CanvasUpdate(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::Prelayout{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::Layout{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::PostLayout{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::PreRender{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::LatePreRender{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::MaxUpdateValue{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
