#pragma once
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
constexpr void Mono::Security::Interface::TlsProtocols::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::Interface::TlsProtocols::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Security::Interface::TlsProtocols::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::TlsProtocols::TlsProtocols(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Zero{static_cast<int32_t>(0x0)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls10Client{static_cast<int32_t>(0x80)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls10Server{static_cast<int32_t>(0x40)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls10{static_cast<int32_t>(0xc0)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls11Client{static_cast<int32_t>(0x200)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls11Server{static_cast<int32_t>(0x100)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls11{static_cast<int32_t>(0x300)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls12Client{static_cast<int32_t>(0x800)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls12Server{static_cast<int32_t>(0x400)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls12{static_cast<int32_t>(0xc00)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::ClientMask{static_cast<int32_t>(0xa80)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::ServerMask{static_cast<int32_t>(0x540)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
