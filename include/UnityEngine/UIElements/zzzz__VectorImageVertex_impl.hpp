#pragma once
#include "UnityEngine/UIElements/zzzz__VectorImageVertex_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
constexpr void UnityEngine::UIElements::VectorImageVertex::__set_position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::VectorImageVertex::__get_position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::VectorImageVertex::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::VectorImageVertex::__set_tint(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::VectorImageVertex::__get_tint()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::VectorImageVertex::__get_tint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::VectorImageVertex::__set_uv(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::VectorImageVertex::__get_uv()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::VectorImageVertex::__get_uv() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::VectorImageVertex::__set_settingIndex(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::UIElements::VectorImageVertex::__get_settingIndex()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::UIElements::VectorImageVertex::__get_settingIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "settingIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VectorImageVertex::VectorImageVertex(::UnityEngine::Vector3  position, ::UnityEngine::Color32  tint, ::UnityEngine::Vector2  uv, uint32_t  settingIndex) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>() {this->position = position;
this->tint = tint;
this->uv = uv;
this->settingIndex = settingIndex;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
