#pragma once
#include "UnityEngine/Rendering/zzzz__VertexAttribute_def.hpp"
constexpr void UnityEngine::Rendering::VertexAttribute::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::VertexAttribute::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::VertexAttribute::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::VertexAttribute::VertexAttribute(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::Position{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::Normal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::Tangent{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::Color{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord0{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord1{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord2{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord3{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord4{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord5{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord6{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord7{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::BlendWeight{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::BlendIndices{static_cast<int32_t>(0xd)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
