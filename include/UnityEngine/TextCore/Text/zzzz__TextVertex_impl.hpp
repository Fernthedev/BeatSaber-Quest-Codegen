#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
constexpr void UnityEngine::TextCore::Text::TextVertex::__set_position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::TextCore::Text::TextVertex::__get_position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::TextCore::Text::TextVertex::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::Text::TextVertex::__set_uv(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextCore::Text::TextVertex::__get_uv()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextCore::Text::TextVertex::__get_uv() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::Text::TextVertex::__set_uv2(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextCore::Text::TextVertex::__get_uv2()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextCore::Text::TextVertex::__get_uv2() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::Text::TextVertex::__set_uv4(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextCore::Text::TextVertex::__get_uv4()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextCore::Text::TextVertex::__get_uv4() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::Text::TextVertex::__set_color(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextVertex::__get_color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextVertex::__get_color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextVertex::TextVertex(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  uv, ::UnityEngine::Vector2  uv2, ::UnityEngine::Vector2  uv4, ::UnityEngine::Color32  color) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->position = position;
this->uv = uv;
this->uv2 = uv2;
this->uv4 = uv4;
this->color = color;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
