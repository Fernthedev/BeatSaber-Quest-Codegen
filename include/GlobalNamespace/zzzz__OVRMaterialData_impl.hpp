#pragma once
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
constexpr void GlobalNamespace::OVRMaterialData::__set_shader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRMaterialData::__get_shader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRMaterialData::__get_shader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRMaterialData::__set_textureId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRMaterialData::__get_textureId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::OVRMaterialData::__get_textureId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRMaterialData::__set_texture(::GlobalNamespace::OVRTextureData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTextureData, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OVRTextureData>(value));
}
constexpr ::GlobalNamespace::OVRTextureData& GlobalNamespace::OVRMaterialData::__get_texture()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTextureData, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::OVRTextureData const& GlobalNamespace::OVRMaterialData::__get_texture() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTextureData, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRMaterialData::__set_baseColorFactor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRMaterialData::__get_baseColorFactor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRMaterialData::__get_baseColorFactor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "shader", ty: "::UnityEngine::Shader*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "textureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::GlobalNamespace::OVRTextureData", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseColorFactor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMaterialData::OVRMaterialData(::UnityEngine::Shader*  shader, int32_t  textureId, ::GlobalNamespace::OVRTextureData  texture, ::UnityEngine::Color  baseColorFactor) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->shader = shader;
this->textureId = textureId;
this->texture = texture;
this->baseColorFactor = baseColorFactor;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
