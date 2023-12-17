#pragma once
#include "System/Security/Cryptography/zzzz__CspProviderFlags_def.hpp"
constexpr void System::Security::Cryptography::CspProviderFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::CspProviderFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Cryptography::CspProviderFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::CspProviderFlags::CspProviderFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::NoFlags{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseMachineKeyStore{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseDefaultKeyContainer{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseNonExportableKey{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseExistingKey{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseArchivableKey{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseUserProtectedKey{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::NoPrompt{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::CreateEphemeralKey{static_cast<int32_t>(0x80)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
