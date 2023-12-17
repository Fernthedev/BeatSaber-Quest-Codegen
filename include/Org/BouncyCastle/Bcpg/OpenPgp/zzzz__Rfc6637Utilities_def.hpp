#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc6637Utilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Rfc6637Utilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::Rfc6637Utilities
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1675))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::Rfc6637Utilities*
class CORDL_TYPE Rfc6637Utilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_ANONYMOUS_SENDER(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ANONYMOUS_SENDER() ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities* New_ctor() ;

/// @brief Method .ctor addr 0x10cf2e0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method GetAgreementAlgorithm addr 0x10cf2e8 size 0x174 virtual false final false
static inline ::StringW GetAgreementAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyPacket*  pubKeyData) ;

/// @brief Method GetKeyEncryptionOID addr 0x10cf45c size 0x128 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetKeyEncryptionOID(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  algID) ;

/// @brief Method GetKeyLength addr 0x10cf584 size 0x98 virtual false final false
static inline int32_t GetKeyLength(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  algID) ;

/// @brief Method CreateKey addr 0x10b9b2c size 0x108 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> CreateKey(::Org::BouncyCastle::Bcpg::PublicKeyPacket*  pubKeyData, ::Org::BouncyCastle::Math::EC::ECPoint*  s) ;

/// @brief Method CreateUserKeyingMaterial addr 0x10cf61c size 0x268 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> CreateUserKeyingMaterial(::Org::BouncyCastle::Bcpg::PublicKeyPacket*  pubKeyData) ;

/// @brief Method Kdf addr 0x10cf884 size 0x37c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Kdf(::Org::BouncyCastle::Bcpg::HashAlgorithmTag  digestAlg, ::Org::BouncyCastle::Math::EC::ECPoint*  s, int32_t  keyLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  parameters) ;

// Ctor Parameters [CppParam { name: "", ty: "Rfc6637Utilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rfc6637Utilities(Rfc6637Utilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rfc6637Utilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rfc6637Utilities(Rfc6637Utilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Rfc6637Utilities()  = default;
public:


// Fields

// Static field ANONYMOUS_SENDER


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*, "Org.BouncyCastle.Bcpg.OpenPgp", "Rfc6637Utilities");
