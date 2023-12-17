#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_def.hpp"
constexpr void Mono::Security::Protocol::Ntlm::NtlmFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::Protocol::Ntlm::NtlmFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Security::Protocol::Ntlm::NtlmFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags::NtlmFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateUnicode{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateOem{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::RequestTarget{static_cast<int32_t>(0x4)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateNtlm{static_cast<int32_t>(0x200)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateDomainSupplied{static_cast<int32_t>(0x1000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateWorkstationSupplied{static_cast<int32_t>(0x2000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateAlwaysSign{static_cast<int32_t>(0x8000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateNtlm2Key{static_cast<int32_t>(0x80000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::Negotiate128{static_cast<int32_t>(0x20000000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::Negotiate56{static_cast<int32_t>(0x80000000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
