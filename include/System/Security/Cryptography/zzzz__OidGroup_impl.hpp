#pragma once
#include "System/Security/Cryptography/zzzz__OidGroup_def.hpp"
constexpr void System::Security::Cryptography::OidGroup::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::OidGroup::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Cryptography::OidGroup::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::OidGroup::OidGroup(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::All{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::HashAlgorithm{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::EncryptionAlgorithm{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::PublicKeyAlgorithm{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::SignatureAlgorithm{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::Attribute{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::ExtensionOrAttribute{static_cast<int32_t>(0x6)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::EnhancedKeyUsage{static_cast<int32_t>(0x7)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::Policy{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::Template{static_cast<int32_t>(0x9)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::KeyDerivationFunction{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
