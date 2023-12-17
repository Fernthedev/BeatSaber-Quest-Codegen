#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureSubpacketTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag);
// Type: Org.BouncyCastle.Bcpg::SignatureSubpacketTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(591))
// CS Name: ::Org.BouncyCastle.Bcpg::SignatureSubpacketTag
struct CORDL_TYPE SignatureSubpacketTag : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SignatureSubpacketTag_Unwrapped
enum struct __SignatureSubpacketTag_Unwrapped : int32_t {
__E_CreationTime = static_cast<int32_t>(0x2),
__E_ExpireTime = static_cast<int32_t>(0x3),
__E_Exportable = static_cast<int32_t>(0x4),
__E_TrustSig = static_cast<int32_t>(0x5),
__E_RegExp = static_cast<int32_t>(0x6),
__E_Revocable = static_cast<int32_t>(0x7),
__E_KeyExpireTime = static_cast<int32_t>(0x9),
__E_Placeholder = static_cast<int32_t>(0xa),
__E_PreferredSymmetricAlgorithms = static_cast<int32_t>(0xb),
__E_RevocationKey = static_cast<int32_t>(0xc),
__E_IssuerKeyId = static_cast<int32_t>(0x10),
__E_NotationData = static_cast<int32_t>(0x14),
__E_PreferredHashAlgorithms = static_cast<int32_t>(0x15),
__E_PreferredCompressionAlgorithms = static_cast<int32_t>(0x16),
__E_KeyServerPreferences = static_cast<int32_t>(0x17),
__E_PreferredKeyServer = static_cast<int32_t>(0x18),
__E_PrimaryUserId = static_cast<int32_t>(0x19),
__E_PolicyUrl = static_cast<int32_t>(0x1a),
__E_KeyFlags = static_cast<int32_t>(0x1b),
__E_SignerUserId = static_cast<int32_t>(0x1c),
__E_RevocationReason = static_cast<int32_t>(0x1d),
__E_Features = static_cast<int32_t>(0x1e),
__E_SignatureTarget = static_cast<int32_t>(0x1f),
__E_EmbeddedSignature = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field CreationTime value: static_cast<int32_t>(0x2)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const CreationTime;

/// @brief Field ExpireTime value: static_cast<int32_t>(0x3)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const ExpireTime;

/// @brief Field Exportable value: static_cast<int32_t>(0x4)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Exportable;

/// @brief Field TrustSig value: static_cast<int32_t>(0x5)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const TrustSig;

/// @brief Field RegExp value: static_cast<int32_t>(0x6)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RegExp;

/// @brief Field Revocable value: static_cast<int32_t>(0x7)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Revocable;

/// @brief Field KeyExpireTime value: static_cast<int32_t>(0x9)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyExpireTime;

/// @brief Field Placeholder value: static_cast<int32_t>(0xa)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Placeholder;

/// @brief Field PreferredSymmetricAlgorithms value: static_cast<int32_t>(0xb)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredSymmetricAlgorithms;

/// @brief Field RevocationKey value: static_cast<int32_t>(0xc)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RevocationKey;

/// @brief Field IssuerKeyId value: static_cast<int32_t>(0x10)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const IssuerKeyId;

/// @brief Field NotationData value: static_cast<int32_t>(0x14)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const NotationData;

/// @brief Field PreferredHashAlgorithms value: static_cast<int32_t>(0x15)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredHashAlgorithms;

/// @brief Field PreferredCompressionAlgorithms value: static_cast<int32_t>(0x16)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredCompressionAlgorithms;

/// @brief Field KeyServerPreferences value: static_cast<int32_t>(0x17)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyServerPreferences;

/// @brief Field PreferredKeyServer value: static_cast<int32_t>(0x18)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredKeyServer;

/// @brief Field PrimaryUserId value: static_cast<int32_t>(0x19)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PrimaryUserId;

/// @brief Field PolicyUrl value: static_cast<int32_t>(0x1a)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PolicyUrl;

/// @brief Field KeyFlags value: static_cast<int32_t>(0x1b)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyFlags;

/// @brief Field SignerUserId value: static_cast<int32_t>(0x1c)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const SignerUserId;

/// @brief Field RevocationReason value: static_cast<int32_t>(0x1d)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RevocationReason;

/// @brief Field Features value: static_cast<int32_t>(0x1e)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Features;

/// @brief Field SignatureTarget value: static_cast<int32_t>(0x1f)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const SignatureTarget;

/// @brief Field EmbeddedSignature value: static_cast<int32_t>(0x20)
static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const EmbeddedSignature;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SignatureSubpacketTag_Unwrapped () const noexcept {
return std::bit_cast<__SignatureSubpacketTag_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SignatureSubpacketTag(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SignatureSubpacketTag(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SignatureSubpacketTag()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, "Org.BouncyCastle.Bcpg", "SignatureSubpacketTag");
