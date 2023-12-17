#pragma once
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
constexpr void GlobalNamespace::ServiceEnvironment::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ServiceEnvironment::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::ServiceEnvironment::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ServiceEnvironment::ServiceEnvironment(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::Production{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::ReleaseCandidate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::InternalPlayTest{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::QATesting{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::Development{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::ProductionA{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::ProductionB{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::DevelopmentA{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::DevelopmentB{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ServiceEnvironment  GlobalNamespace::ServiceEnvironment::ProductionC{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
