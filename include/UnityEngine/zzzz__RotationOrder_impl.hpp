#pragma once
#include "UnityEngine/zzzz__RotationOrder_def.hpp"
constexpr void UnityEngine::RotationOrder::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::RotationOrder::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::RotationOrder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RotationOrder::RotationOrder(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::RotationOrder  UnityEngine::RotationOrder::OrderXYZ{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RotationOrder  UnityEngine::RotationOrder::OrderXZY{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RotationOrder  UnityEngine::RotationOrder::OrderYZX{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::RotationOrder  UnityEngine::RotationOrder::OrderYXZ{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::RotationOrder  UnityEngine::RotationOrder::OrderZXY{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::RotationOrder  UnityEngine::RotationOrder::OrderZYX{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
