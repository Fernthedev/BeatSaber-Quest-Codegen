#pragma once
#include "GlobalNamespace/zzzz__NodeStatePropertyType_def.hpp"
constexpr void GlobalNamespace::NodeStatePropertyType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NodeStatePropertyType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::NodeStatePropertyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NodeStatePropertyType::NodeStatePropertyType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::Acceleration{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::AngularAcceleration{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::Velocity{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::AngularVelocity{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::Position{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NodeStatePropertyType  GlobalNamespace::NodeStatePropertyType::Orientation{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
