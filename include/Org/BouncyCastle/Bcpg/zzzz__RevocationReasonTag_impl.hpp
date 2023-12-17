#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationReasonTag_def.hpp"
constexpr void Org::BouncyCastle::Bcpg::RevocationReasonTag::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& Org::BouncyCastle::Bcpg::RevocationReasonTag::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& Org::BouncyCastle::Bcpg::RevocationReasonTag::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag::RevocationReasonTag(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::NoReason{static_cast<uint8_t>(0x0u)};
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::KeySuperseded{static_cast<uint8_t>(0x1u)};
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::KeyCompromised{static_cast<uint8_t>(0x2u)};
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::KeyRetired{static_cast<uint8_t>(0x3u)};
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag  Org::BouncyCastle::Bcpg::RevocationReasonTag::UserNoLongerValid{static_cast<uint8_t>(0x20u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
