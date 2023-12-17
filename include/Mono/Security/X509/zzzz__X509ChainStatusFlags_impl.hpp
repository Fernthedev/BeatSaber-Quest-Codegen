#pragma once
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_def.hpp"
constexpr void Mono::Security::X509::X509ChainStatusFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::X509::X509ChainStatusFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Security::X509::X509ChainStatusFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::X509::X509ChainStatusFlags::X509ChainStatusFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::InvalidBasicConstraints{static_cast<int32_t>(0x400)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NoError{static_cast<int32_t>(0x0)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotSignatureValid{static_cast<int32_t>(0x8)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotTimeNested{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotTimeValid{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::PartialChain{static_cast<int32_t>(0x10000)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::UntrustedRoot{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
