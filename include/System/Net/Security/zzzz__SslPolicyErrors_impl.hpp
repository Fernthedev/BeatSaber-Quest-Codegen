#pragma once
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
constexpr void System::Net::Security::SslPolicyErrors::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Security::SslPolicyErrors::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Security::SslPolicyErrors::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Security::SslPolicyErrors::SslPolicyErrors(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::Security::SslPolicyErrors  System::Net::Security::SslPolicyErrors::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Security::SslPolicyErrors  System::Net::Security::SslPolicyErrors::RemoteCertificateNotAvailable{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Security::SslPolicyErrors  System::Net::Security::SslPolicyErrors::RemoteCertificateNameMismatch{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Security::SslPolicyErrors  System::Net::Security::SslPolicyErrors::RemoteCertificateChainErrors{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
