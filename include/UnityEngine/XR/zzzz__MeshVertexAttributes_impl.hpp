#pragma once
#include "UnityEngine/XR/zzzz__MeshVertexAttributes_def.hpp"
constexpr void UnityEngine::XR::MeshVertexAttributes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::XR::MeshVertexAttributes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::XR::MeshVertexAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::MeshVertexAttributes::MeshVertexAttributes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::Normals{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::Tangents{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::UVs{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::Colors{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
