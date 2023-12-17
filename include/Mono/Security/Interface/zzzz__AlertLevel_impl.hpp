#pragma once
#include "Mono/Security/Interface/zzzz__AlertLevel_def.hpp"
constexpr void Mono::Security::Interface::AlertLevel::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& Mono::Security::Interface::AlertLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& Mono::Security::Interface::AlertLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::AlertLevel::AlertLevel(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::Mono::Security::Interface::AlertLevel  Mono::Security::Interface::AlertLevel::Warning{static_cast<uint8_t>(0x1u)};
constexpr ::Mono::Security::Interface::AlertLevel  Mono::Security::Interface::AlertLevel::Fatal{static_cast<uint8_t>(0x2u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
