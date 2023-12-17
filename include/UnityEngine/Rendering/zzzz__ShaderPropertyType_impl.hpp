#pragma once
#include "UnityEngine/Rendering/zzzz__ShaderPropertyType_def.hpp"
constexpr void UnityEngine::Rendering::ShaderPropertyType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::ShaderPropertyType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::ShaderPropertyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderPropertyType::ShaderPropertyType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::ShaderPropertyType  UnityEngine::Rendering::ShaderPropertyType::Color{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  UnityEngine::Rendering::ShaderPropertyType::Vector{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  UnityEngine::Rendering::ShaderPropertyType::Float{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  UnityEngine::Rendering::ShaderPropertyType::Range{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  UnityEngine::Rendering::ShaderPropertyType::Texture{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  UnityEngine::Rendering::ShaderPropertyType::Int{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
