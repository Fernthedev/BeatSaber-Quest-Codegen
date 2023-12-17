#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedNameFlags_def.hpp"
constexpr void System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::X500DistinguishedNameFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::Reversed{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseSemicolons{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::DoNotUsePlusSign{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::DoNotUseQuotes{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseCommas{static_cast<int32_t>(0x80)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseNewLines{static_cast<int32_t>(0x100)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseUTF8Encoding{static_cast<int32_t>(0x1000)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseT61Encoding{static_cast<int32_t>(0x2000)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::ForceUTF8Encoding{static_cast<int32_t>(0x4000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
