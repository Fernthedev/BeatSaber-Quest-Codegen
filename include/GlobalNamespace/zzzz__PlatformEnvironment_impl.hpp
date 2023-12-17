#pragma once
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
constexpr void GlobalNamespace::PlatformEnvironment::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& GlobalNamespace::PlatformEnvironment::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& GlobalNamespace::PlatformEnvironment::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformEnvironment::PlatformEnvironment(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::PlatformEnvironment  GlobalNamespace::PlatformEnvironment::Development{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::PlatformEnvironment  GlobalNamespace::PlatformEnvironment::Certification{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::PlatformEnvironment  GlobalNamespace::PlatformEnvironment::Production{static_cast<uint8_t>(0x2u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
