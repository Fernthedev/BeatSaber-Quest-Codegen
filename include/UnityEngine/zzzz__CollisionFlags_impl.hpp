#pragma once
#include "UnityEngine/zzzz__CollisionFlags_def.hpp"
constexpr void UnityEngine::CollisionFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::CollisionFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::CollisionFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionFlags::CollisionFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::Sides{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::Above{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::Below{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::CollidedSides{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::CollidedAbove{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::CollidedBelow{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
