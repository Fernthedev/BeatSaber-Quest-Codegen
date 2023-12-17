#pragma once
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
constexpr void UnityEngine::UIElements::PanelClearSettings::__set_clearDepthStencil(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::PanelClearSettings::__get_clearDepthStencil()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::UIElements::PanelClearSettings::__get_clearDepthStencil() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::PanelClearSettings::__set_clearColor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::PanelClearSettings::__get_clearColor()  {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::UIElements::PanelClearSettings::__get_clearColor() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::PanelClearSettings::__set_color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::UIElements::PanelClearSettings::__get_color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& UnityEngine::UIElements::PanelClearSettings::__get_color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "clearDepthStencil", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearColor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PanelClearSettings::PanelClearSettings(bool  clearDepthStencil, bool  clearColor, ::UnityEngine::Color  color) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->clearDepthStencil = clearDepthStencil;
this->clearColor = clearColor;
this->color = color;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
