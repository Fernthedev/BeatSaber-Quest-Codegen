#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_def.hpp"
constexpr void System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::X509KeyUsageFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::EncipherOnly{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::CrlSign{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyCertSign{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyAgreement{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DataEncipherment{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyEncipherment{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::NonRepudiation{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DigitalSignature{static_cast<int32_t>(0x80)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DecipherOnly{static_cast<int32_t>(0x8000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
