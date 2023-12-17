#pragma once
#include "UnityEngine/ProBuilder/zzzz__RefreshMask_def.hpp"
constexpr void UnityEngine::ProBuilder::RefreshMask::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ProBuilder::RefreshMask::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::ProBuilder::RefreshMask::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::RefreshMask::RefreshMask(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::ProBuilder::RefreshMask  UnityEngine::ProBuilder::RefreshMask::UV{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ProBuilder::RefreshMask  UnityEngine::ProBuilder::RefreshMask::Colors{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ProBuilder::RefreshMask  UnityEngine::ProBuilder::RefreshMask::Normals{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::ProBuilder::RefreshMask  UnityEngine::ProBuilder::RefreshMask::Tangents{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::ProBuilder::RefreshMask  UnityEngine::ProBuilder::RefreshMask::Collisions{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::ProBuilder::RefreshMask  UnityEngine::ProBuilder::RefreshMask::Bounds{static_cast<int32_t>(0x16)};
constexpr ::UnityEngine::ProBuilder::RefreshMask  UnityEngine::ProBuilder::RefreshMask::All{static_cast<int32_t>(0x1f)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
