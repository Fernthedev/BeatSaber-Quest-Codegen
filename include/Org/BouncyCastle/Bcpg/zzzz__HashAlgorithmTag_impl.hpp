#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
constexpr void Org::BouncyCastle::Bcpg::HashAlgorithmTag::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::HashAlgorithmTag::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::HashAlgorithmTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::HashAlgorithmTag(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::MD5{static_cast<int32_t>(0x1)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha1{static_cast<int32_t>(0x2)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::RipeMD160{static_cast<int32_t>(0x3)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::DoubleSha{static_cast<int32_t>(0x4)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::MD2{static_cast<int32_t>(0x5)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::Tiger192{static_cast<int32_t>(0x6)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::Haval5pass160{static_cast<int32_t>(0x7)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha256{static_cast<int32_t>(0x8)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha384{static_cast<int32_t>(0x9)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha512{static_cast<int32_t>(0xa)};
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha224{static_cast<int32_t>(0xb)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
