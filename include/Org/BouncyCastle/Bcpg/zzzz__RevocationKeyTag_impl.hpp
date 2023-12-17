#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationKeyTag_def.hpp"
constexpr void Org::BouncyCastle::Bcpg::RevocationKeyTag::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& Org::BouncyCastle::Bcpg::RevocationKeyTag::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& Org::BouncyCastle::Bcpg::RevocationKeyTag::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag::RevocationKeyTag(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag  Org::BouncyCastle::Bcpg::RevocationKeyTag::ClassDefault{static_cast<uint8_t>(0x80u)};
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag  Org::BouncyCastle::Bcpg::RevocationKeyTag::ClassSensitive{static_cast<uint8_t>(0x40u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
