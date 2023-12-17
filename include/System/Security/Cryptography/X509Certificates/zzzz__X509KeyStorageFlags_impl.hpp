#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
constexpr void System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::X509KeyStorageFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::DefaultKeySet{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::UserKeySet{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::MachineKeySet{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::Exportable{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::UserProtected{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::PersistKeySet{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::EphemeralKeySet{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
