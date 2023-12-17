#pragma once
#include "UnityEngine/zzzz__RenderTextureCreationFlags_def.hpp"
constexpr void UnityEngine::RenderTextureCreationFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::RenderTextureCreationFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::RenderTextureCreationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderTextureCreationFlags::RenderTextureCreationFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::MipMap{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::AutoGenerateMips{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::SRGB{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::EyeTexture{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::EnableRandomWrite{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::CreatedFromScript{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::AllowVerticalFlip{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::NoResolvedColorSurface{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::DynamicallyScalable{static_cast<int32_t>(0x400)};
constexpr ::UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::BindMS{static_cast<int32_t>(0x800)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
