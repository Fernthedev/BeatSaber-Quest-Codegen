#pragma once
#include "UnityEngine/zzzz__PrimitiveType_def.hpp"
constexpr void UnityEngine::PrimitiveType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::PrimitiveType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::PrimitiveType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PrimitiveType::PrimitiveType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Sphere{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Capsule{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Cylinder{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Cube{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Plane{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Quad{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
