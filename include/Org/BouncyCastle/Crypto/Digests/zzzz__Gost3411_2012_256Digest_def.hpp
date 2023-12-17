#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__Gost3411_2012Digest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3411_2012_256Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411_2012_256Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Gost3411_2012_256Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(752))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(753))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Gost3411_2012_256Digest*
class CORDL_TYPE Gost3411_2012_256Digest : public ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest)]{};

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

static inline void setStaticF_IV(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_IV() ;

/// @brief Method get_AlgorithmName addr 0x1224e64 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* New_ctor() ;

/// @brief Method .ctor addr 0x1224ea4 size 0x8c virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*  other) ;

/// @brief Method .ctor addr 0x1224f30 size 0xa4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*  other) ;

/// @brief Method GetDigestSize addr 0x1224fd4 size 0x8 virtual true final false
inline int32_t GetDigestSize() ;

/// @brief Method DoFinal addr 0x1224fdc size 0x90 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Copy addr 0x122506c size 0x60 virtual true final false
inline ::Org::BouncyCastle::Utilities::IMemoable* Copy() ;

// Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012_256Digest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gost3411_2012_256Digest(Gost3411_2012_256Digest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012_256Digest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gost3411_2012_256Digest(Gost3411_2012_256Digest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Gost3411_2012_256Digest()  = default;
public:


// Fields

// Static field IV


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest, 0x58>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_256Digest");
