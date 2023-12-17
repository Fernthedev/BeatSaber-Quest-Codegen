#pragma once
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
constexpr void Mono::Security::Interface::MonoSslPolicyErrors::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::Interface::MonoSslPolicyErrors::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Security::Interface::MonoSslPolicyErrors::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors::MonoSslPolicyErrors(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  Mono::Security::Interface::MonoSslPolicyErrors::None{static_cast<int32_t>(0x0)};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateNotAvailable{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateNameMismatch{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateChainErrors{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
