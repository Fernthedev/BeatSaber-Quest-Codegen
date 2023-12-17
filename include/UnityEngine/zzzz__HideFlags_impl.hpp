#pragma once
#include "UnityEngine/zzzz__HideFlags_def.hpp"
constexpr void UnityEngine::HideFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::HideFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::HideFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HideFlags::HideFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::HideInHierarchy{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::HideInInspector{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::DontSaveInEditor{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::NotEditable{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::DontSaveInBuild{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::DontUnloadUnusedAsset{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::DontSave{static_cast<int32_t>(0x34)};
constexpr ::UnityEngine::HideFlags  UnityEngine::HideFlags::HideAndDontSave{static_cast<int32_t>(0x3d)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
