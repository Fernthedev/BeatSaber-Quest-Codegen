#pragma once
#include "UnityEngine/zzzz__CollisionDetectionMode_def.hpp"
constexpr void UnityEngine::CollisionDetectionMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::CollisionDetectionMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::CollisionDetectionMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionDetectionMode::CollisionDetectionMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::CollisionDetectionMode  UnityEngine::CollisionDetectionMode::Discrete{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CollisionDetectionMode  UnityEngine::CollisionDetectionMode::Continuous{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CollisionDetectionMode  UnityEngine::CollisionDetectionMode::ContinuousDynamic{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CollisionDetectionMode  UnityEngine::CollisionDetectionMode::ContinuousSpeculative{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
