#pragma once
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
constexpr void System::Net::Security::EncryptionPolicy::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Security::EncryptionPolicy::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Security::EncryptionPolicy::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Security::EncryptionPolicy::EncryptionPolicy(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::Security::EncryptionPolicy  System::Net::Security::EncryptionPolicy::RequireEncryption{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Security::EncryptionPolicy  System::Net::Security::EncryptionPolicy::AllowNoEncryption{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Security::EncryptionPolicy  System::Net::Security::EncryptionPolicy::NoEncryption{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
