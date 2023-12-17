#pragma once
#include "UnityEngine/UIElements/zzzz__TextVertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
constexpr void UnityEngine::UIElements::TextVertex::__set_position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::TextVertex::__get_position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::TextVertex::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::TextVertex::__set_color(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::TextVertex::__get_color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::TextVertex::__get_color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::TextVertex::__set_uv0(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::TextVertex::__get_uv0()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::TextVertex::__get_uv0() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv0", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TextVertex::TextVertex(::UnityEngine::Vector3  position, ::UnityEngine::Color32  color, ::UnityEngine::Vector2  uv0) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->position = position;
this->color = color;
this->uv0 = uv0;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
