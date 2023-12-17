#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
CORDL_MODULE_EXPORT(KeyDerivationFunc)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class KeyDerivationFunc;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc);
// Type: Org.BouncyCastle.Asn1.Pkcs::KeyDerivationFunc
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(235))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(238))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::KeyDerivationFunc*
class CORDL_TYPE KeyDerivationFunc : public ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)]{};

static inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf88eb0 size 0x4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  id, ::Org::BouncyCastle::Asn1::Asn1Encodable*  parameters) ;

/// @brief Method .ctor addr 0xf88eb4 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  id, ::Org::BouncyCastle::Asn1::Asn1Encodable*  parameters) ;

// Ctor Parameters [CppParam { name: "", ty: "KeyDerivationFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyDerivationFunc(KeyDerivationFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyDerivationFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyDerivationFunc(KeyDerivationFunc const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyDerivationFunc()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*, "Org.BouncyCastle.Asn1.Pkcs", "KeyDerivationFunc");
