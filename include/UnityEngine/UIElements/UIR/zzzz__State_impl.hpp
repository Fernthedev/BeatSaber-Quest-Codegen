#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
constexpr void UnityEngine::UIElements::UIR::State::__set_material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* UnityEngine::UIElements::UIR::State::__get_material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> UnityEngine::UIElements::UIR::State::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::State::__set_font(::UnityEngine::Texture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Texture*>(value));
}
constexpr ::UnityEngine::Texture* UnityEngine::UIElements::UIR::State::__get_font()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> UnityEngine::UIElements::UIR::State::__get_font() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::State::__set_fontTexSDFScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::UIR::State::__get_fontTexSDFScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::UIElements::UIR::State::__get_fontTexSDFScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::State::__set_texture(::UnityEngine::UIElements::TextureId  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextureId, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::TextureId>(value));
}
constexpr ::UnityEngine::UIElements::TextureId& UnityEngine::UIElements::UIR::State::__get_texture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextureId, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UIElements::TextureId const& UnityEngine::UIElements::UIR::State::__get_texture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextureId, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::State::__set_stencilRef(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::UIR::State::__get_stencilRef()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::UIR::State::__get_stencilRef() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "font", ty: "::UnityEngine::Texture*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::State::State(::UnityEngine::Material*  material, ::UnityEngine::Texture*  font, float_t  fontTexSDFScale, ::UnityEngine::UIElements::TextureId  texture, int32_t  stencilRef) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->material = material;
this->font = font;
this->fontTexSDFScale = fontTexSDFScale;
this->texture = texture;
this->stencilRef = stencilRef;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
