#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__LongDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Sha512Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha512Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Sha512Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Sha512Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(771))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Sha512Digest*
class CORDL_TYPE Sha512Digest : public ::Org::BouncyCastle::Crypto::Digests::LongDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::Org::BouncyCastle::Crypto::Digests::LongDigest)]{};

/// @brief Field DigestLength offset 0x0
static constexpr int32_t  DigestLength{static_cast<int32_t>(0x40)};

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

static inline ::Org::BouncyCastle::Crypto::Digests::Sha512Digest* New_ctor() ;

/// @brief Method .ctor addr 0xea491c size 0x58 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::Sha512Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha512Digest*  t) ;

/// @brief Method .ctor addr 0xea4974 size 0x68 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Sha512Digest*  t) ;

/// @brief Method get_AlgorithmName addr 0xea49dc size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xea4a1c size 0x8 virtual true final false
inline int32_t GetDigestSize() ;

/// @brief Method DoFinal addr 0xea4a24 size 0xe0 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xea4b04 size 0x48 virtual true final false
inline void Reset() ;

/// @brief Method Copy addr 0xea4b4c size 0x60 virtual true final false
inline ::Org::BouncyCastle::Utilities::IMemoable* Copy() ;

/// @brief Method Reset addr 0xea4bac size 0x88 virtual true final false
inline void Reset(::Org::BouncyCastle::Utilities::IMemoable*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "Sha512Digest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sha512Digest(Sha512Digest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sha512Digest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sha512Digest(Sha512Digest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Sha512Digest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Sha512Digest, 0x88>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha512Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha512Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha512Digest");
