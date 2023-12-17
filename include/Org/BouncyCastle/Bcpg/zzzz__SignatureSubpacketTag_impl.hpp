#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacketTag::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::SignatureSubpacketTag::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::SignatureSubpacketTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignatureSubpacketTag(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::CreationTime{static_cast<int32_t>(0x2)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::ExpireTime{static_cast<int32_t>(0x3)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Exportable{static_cast<int32_t>(0x4)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::TrustSig{static_cast<int32_t>(0x5)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RegExp{static_cast<int32_t>(0x6)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Revocable{static_cast<int32_t>(0x7)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyExpireTime{static_cast<int32_t>(0x9)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Placeholder{static_cast<int32_t>(0xa)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredSymmetricAlgorithms{static_cast<int32_t>(0xb)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RevocationKey{static_cast<int32_t>(0xc)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::IssuerKeyId{static_cast<int32_t>(0x10)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::NotationData{static_cast<int32_t>(0x14)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredHashAlgorithms{static_cast<int32_t>(0x15)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredCompressionAlgorithms{static_cast<int32_t>(0x16)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyServerPreferences{static_cast<int32_t>(0x17)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredKeyServer{static_cast<int32_t>(0x18)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PrimaryUserId{static_cast<int32_t>(0x19)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PolicyUrl{static_cast<int32_t>(0x1a)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyFlags{static_cast<int32_t>(0x1b)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignerUserId{static_cast<int32_t>(0x1c)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RevocationReason{static_cast<int32_t>(0x1d)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Features{static_cast<int32_t>(0x1e)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignatureTarget{static_cast<int32_t>(0x1f)};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::EmbeddedSignature{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
