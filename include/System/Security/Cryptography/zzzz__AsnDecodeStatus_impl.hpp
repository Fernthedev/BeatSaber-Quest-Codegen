#pragma once
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
constexpr void System::Security::Cryptography::AsnDecodeStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::AsnDecodeStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Cryptography::AsnDecodeStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::AsnDecodeStatus::AsnDecodeStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::NotDecoded{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::Ok{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadAsn{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadTag{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadLength{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::InformationNotAvailable{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
