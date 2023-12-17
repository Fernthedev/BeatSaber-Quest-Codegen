#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultSignatureAlgorithmIdentifierFinder)
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder);
// Type: Org.BouncyCastle.Cms::DefaultSignatureAlgorithmIdentifierFinder
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(658))
// CS Name: ::Org.BouncyCastle.Cms::DefaultSignatureAlgorithmIdentifierFinder*
class CORDL_TYPE DefaultSignatureAlgorithmIdentifierFinder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_algorithms(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_algorithms() ;

static inline void setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_noParams() ;

static inline void setStaticF__params(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF__params() ;

static inline void setStaticF_pkcs15RsaEncryption(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_pkcs15RsaEncryption() ;

static inline void setStaticF_digestOids(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_digestOids() ;

static inline void setStaticF_digestBuilders(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_digestBuilders() ;

static inline void setStaticF_ENCRYPTION_RSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_RSA() ;

static inline void setStaticF_ENCRYPTION_DSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_DSA() ;

static inline void setStaticF_ENCRYPTION_ECDSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_ECDSA() ;

static inline void setStaticF_ENCRYPTION_RSA_PSS(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_RSA_PSS() ;

static inline void setStaticF_ENCRYPTION_GOST3410(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_GOST3410() ;

static inline void setStaticF_ENCRYPTION_ECGOST3410(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_ECGOST3410() ;

static inline void setStaticF_ENCRYPTION_ECGOST3410_2012_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_ECGOST3410_2012_256() ;

static inline void setStaticF_ENCRYPTION_ECGOST3410_2012_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_ECGOST3410_2012_512() ;

/// @brief Method Generate addr 0x11fae30 size 0x6c0 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Generate(::StringW  signatureAlgorithm) ;

/// @brief Method CreatePssParams addr 0x11fad04 size 0x12c virtual false final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  hashAlgId, int32_t  saltSize) ;

/// @brief Method Find addr 0x11fb4f0 size 0x54 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Find(::StringW  sigAlgName) ;

static inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* New_ctor() ;

/// @brief Method .ctor addr 0x11fb544 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureAlgorithmIdentifierFinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultSignatureAlgorithmIdentifierFinder(DefaultSignatureAlgorithmIdentifierFinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureAlgorithmIdentifierFinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultSignatureAlgorithmIdentifierFinder(DefaultSignatureAlgorithmIdentifierFinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultSignatureAlgorithmIdentifierFinder()  = default;
public:


// Fields

// Static field algorithms

// Static field noParams

// Static field _params

// Static field pkcs15RsaEncryption

// Static field digestOids

// Static field digestBuilders

// Static field ENCRYPTION_RSA

// Static field ENCRYPTION_DSA

// Static field ENCRYPTION_ECDSA

// Static field ENCRYPTION_RSA_PSS

// Static field ENCRYPTION_GOST3410

// Static field ENCRYPTION_ECGOST3410

// Static field ENCRYPTION_ECGOST3410_2012_256

// Static field ENCRYPTION_ECGOST3410_2012_512


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "Org.BouncyCastle.Cms", "DefaultSignatureAlgorithmIdentifierFinder");
