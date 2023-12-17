#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreName_def.hpp"
constexpr void System::Security::Cryptography::X509Certificates::StoreName::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::X509Certificates::StoreName::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Cryptography::X509Certificates::StoreName::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::StoreName::StoreName(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::AddressBook{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::AuthRoot{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::CertificateAuthority{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::Disallowed{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::My{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::Root{static_cast<int32_t>(0x6)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::TrustedPeople{static_cast<int32_t>(0x7)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::TrustedPublisher{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
