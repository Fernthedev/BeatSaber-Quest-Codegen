#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
constexpr void Mono::Security::Protocol::Ntlm::NtlmAuthLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::Protocol::Ntlm::NtlmAuthLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Security::Protocol::Ntlm::NtlmAuthLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NtlmAuthLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  Mono::Security::Protocol::Ntlm::NtlmAuthLevel::LM_and_NTLM{static_cast<int32_t>(0x0)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  Mono::Security::Protocol::Ntlm::NtlmAuthLevel::LM_and_NTLM_and_try_NTLMv2_Session{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NTLM_only{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NTLMv2_only{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
