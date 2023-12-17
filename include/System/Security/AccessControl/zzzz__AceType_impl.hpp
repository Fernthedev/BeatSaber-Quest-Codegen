#pragma once
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
constexpr void System::Security::AccessControl::AceType::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Security::AccessControl::AceType::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Security::AccessControl::AceType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AceType::AceType(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessAllowed{static_cast<uint8_t>(0x0u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessDenied{static_cast<uint8_t>(0x1u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::SystemAudit{static_cast<uint8_t>(0x2u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::SystemAlarm{static_cast<uint8_t>(0x3u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessAllowedCompound{static_cast<uint8_t>(0x4u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessAllowedObject{static_cast<uint8_t>(0x5u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessDeniedObject{static_cast<uint8_t>(0x6u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::SystemAuditObject{static_cast<uint8_t>(0x7u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::SystemAlarmObject{static_cast<uint8_t>(0x8u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessAllowedCallback{static_cast<uint8_t>(0x9u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessDeniedCallback{static_cast<uint8_t>(0xau)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessAllowedCallbackObject{static_cast<uint8_t>(0xbu)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::AccessDeniedCallbackObject{static_cast<uint8_t>(0xcu)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::SystemAuditCallback{static_cast<uint8_t>(0xdu)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::SystemAlarmCallback{static_cast<uint8_t>(0xeu)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::SystemAuditCallbackObject{static_cast<uint8_t>(0xfu)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::SystemAlarmCallbackObject{static_cast<uint8_t>(0x10u)};
constexpr ::System::Security::AccessControl::AceType  System::Security::AccessControl::AceType::MaxDefinedAceType{static_cast<uint8_t>(0x10u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
