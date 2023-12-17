#pragma once
#include "UnityEngine/Rendering/zzzz__MeshUpdateFlags_def.hpp"
constexpr void UnityEngine::Rendering::MeshUpdateFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::MeshUpdateFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::MeshUpdateFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MeshUpdateFlags::MeshUpdateFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::DontValidateIndices{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::DontResetBoneBounds{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::DontNotifyMeshUsers{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::DontRecalculateBounds{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
