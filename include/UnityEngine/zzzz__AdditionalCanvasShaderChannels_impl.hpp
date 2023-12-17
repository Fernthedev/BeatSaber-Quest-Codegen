#pragma once
#include "UnityEngine/zzzz__AdditionalCanvasShaderChannels_def.hpp"
constexpr void UnityEngine::AdditionalCanvasShaderChannels::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AdditionalCanvasShaderChannels::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AdditionalCanvasShaderChannels::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdditionalCanvasShaderChannels::AdditionalCanvasShaderChannels(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::TexCoord1{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::TexCoord2{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::TexCoord3{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::Normal{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::Tangent{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
