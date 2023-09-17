#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/X509Certificates/zzzz__X509NameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType::X509NameType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::X509Certificates::X509NameType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::X509Certificates::X509NameType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  ::System::Security::Cryptography::X509Certificates::X509NameType::SimpleName{0};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  ::System::Security::Cryptography::X509Certificates::X509NameType::EmailName{1};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  ::System::Security::Cryptography::X509Certificates::X509NameType::UpnName{2};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  ::System::Security::Cryptography::X509Certificates::X509NameType::DnsName{3};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  ::System::Security::Cryptography::X509Certificates::X509NameType::DnsFromAlternativeName{4};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  ::System::Security::Cryptography::X509Certificates::X509NameType::UrlName{5};
} // end anonymous namespace
