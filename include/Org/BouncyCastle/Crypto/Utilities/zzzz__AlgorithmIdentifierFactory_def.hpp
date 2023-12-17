#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlgorithmIdentifierFactory)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class AlgorithmIdentifierFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory);
// Type: Org.BouncyCastle.Crypto.Utilities::AlgorithmIdentifierFactory
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1336))
// CS Name: ::Org.BouncyCastle.Crypto.Utilities::AlgorithmIdentifierFactory*
class CORDL_TYPE AlgorithmIdentifierFactory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_IDEA_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IDEA_CBC() ;

static inline void setStaticF_CAST5_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CAST5_CBC() ;

static inline void setStaticF_rc2Table(::ArrayW<int16_t,::Array<int16_t>*>  value) ;

static inline ::ArrayW<int16_t,::Array<int16_t>*> getStaticF_rc2Table() ;

/// @brief Method GenerateEncryptionAlgID addr 0xfc0108 size 0x55c virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GenerateEncryptionAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID, int32_t  keySize, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

static inline ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory* New_ctor() ;

/// @brief Method .ctor addr 0xfc0788 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifierFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AlgorithmIdentifierFactory(AlgorithmIdentifierFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifierFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlgorithmIdentifierFactory(AlgorithmIdentifierFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AlgorithmIdentifierFactory()  = default;
public:


// Fields

// Static field IDEA_CBC

// Static field CAST5_CBC

// Static field rc2Table


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*, "Org.BouncyCastle.Crypto.Utilities", "AlgorithmIdentifierFactory");
