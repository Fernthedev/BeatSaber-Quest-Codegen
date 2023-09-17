#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ServiceEnvironment::ServiceEnvironment(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::ServiceEnvironment::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ServiceEnvironment::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::ServiceEnvironment  ::GlobalNamespace::ServiceEnvironment::Production{0};
constexpr ::GlobalNamespace::ServiceEnvironment  ::GlobalNamespace::ServiceEnvironment::ReleaseCandidate{1};
constexpr ::GlobalNamespace::ServiceEnvironment  ::GlobalNamespace::ServiceEnvironment::InternalPlayTest{2};
constexpr ::GlobalNamespace::ServiceEnvironment  ::GlobalNamespace::ServiceEnvironment::QATesting{3};
constexpr ::GlobalNamespace::ServiceEnvironment  ::GlobalNamespace::ServiceEnvironment::Development{4};
constexpr ::GlobalNamespace::ServiceEnvironment  ::GlobalNamespace::ServiceEnvironment::ProductionA{5};
constexpr ::GlobalNamespace::ServiceEnvironment  ::GlobalNamespace::ServiceEnvironment::ProductionB{6};
} // end anonymous namespace
