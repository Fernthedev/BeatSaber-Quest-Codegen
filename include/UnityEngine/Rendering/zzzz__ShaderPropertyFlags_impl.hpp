#pragma once
#include "UnityEngine/Rendering/zzzz__ShaderPropertyFlags_def.hpp"
constexpr void UnityEngine::Rendering::ShaderPropertyFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::ShaderPropertyFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::ShaderPropertyFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags::ShaderPropertyFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::HideInInspector{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::PerRendererData{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::NoScaleOffset{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::Normal{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::HDR{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::Gamma{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::NonModifiableTextureData{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::MainTexture{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::MainColor{static_cast<int32_t>(0x100)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
