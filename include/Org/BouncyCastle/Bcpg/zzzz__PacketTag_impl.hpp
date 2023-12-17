#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
constexpr void Org::BouncyCastle::Bcpg::PacketTag::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::PacketTag::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::PacketTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::PacketTag::PacketTag(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::Reserved{static_cast<int32_t>(0x0)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::PublicKeyEncryptedSession{static_cast<int32_t>(0x1)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::Signature{static_cast<int32_t>(0x2)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::SymmetricKeyEncryptedSessionKey{static_cast<int32_t>(0x3)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::OnePassSignature{static_cast<int32_t>(0x4)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::SecretKey{static_cast<int32_t>(0x5)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::PublicKey{static_cast<int32_t>(0x6)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::SecretSubkey{static_cast<int32_t>(0x7)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::CompressedData{static_cast<int32_t>(0x8)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::SymmetricKeyEncrypted{static_cast<int32_t>(0x9)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::Marker{static_cast<int32_t>(0xa)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::LiteralData{static_cast<int32_t>(0xb)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::Trust{static_cast<int32_t>(0xc)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::UserId{static_cast<int32_t>(0xd)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::PublicSubkey{static_cast<int32_t>(0xe)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::UserAttribute{static_cast<int32_t>(0x11)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::SymmetricEncryptedIntegrityProtected{static_cast<int32_t>(0x12)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::ModificationDetectionCode{static_cast<int32_t>(0x13)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::Experimental1{static_cast<int32_t>(0x3c)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::Experimental2{static_cast<int32_t>(0x3d)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::Experimental3{static_cast<int32_t>(0x3e)};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  Org::BouncyCastle::Bcpg::PacketTag::Experimental4{static_cast<int32_t>(0x3f)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
