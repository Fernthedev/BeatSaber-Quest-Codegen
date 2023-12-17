#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TeleTrusTObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::TeleTrust {
class TeleTrusTObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.TeleTrust::TeleTrusTObjectIdentifiers
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(313))
// CS Name: ::Org.BouncyCastle.Asn1.TeleTrust::TeleTrusTObjectIdentifiers*
class CORDL_TYPE TeleTrusTObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_TeleTrusTAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_TeleTrusTAlgorithm() ;

static inline void setStaticF_RipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RipeMD160() ;

static inline void setStaticF_RipeMD128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RipeMD128() ;

static inline void setStaticF_RipeMD256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RipeMD256() ;

static inline void setStaticF_TeleTrusTRsaSignatureAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_TeleTrusTRsaSignatureAlgorithm() ;

static inline void setStaticF_RsaSignatureWithRipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RsaSignatureWithRipeMD160() ;

static inline void setStaticF_RsaSignatureWithRipeMD128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RsaSignatureWithRipeMD128() ;

static inline void setStaticF_RsaSignatureWithRipeMD256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RsaSignatureWithRipeMD256() ;

static inline void setStaticF_ECSign(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECSign() ;

static inline void setStaticF_ECSignWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECSignWithSha1() ;

static inline void setStaticF_ECSignWithRipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECSignWithRipeMD160() ;

static inline void setStaticF_EccBrainpool(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EccBrainpool() ;

static inline void setStaticF_EllipticCurve(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EllipticCurve() ;

static inline void setStaticF_VersionOne(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_VersionOne() ;

static inline void setStaticF_BrainpoolP160R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP160R1() ;

static inline void setStaticF_BrainpoolP160T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP160T1() ;

static inline void setStaticF_BrainpoolP192R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP192R1() ;

static inline void setStaticF_BrainpoolP192T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP192T1() ;

static inline void setStaticF_BrainpoolP224R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP224R1() ;

static inline void setStaticF_BrainpoolP224T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP224T1() ;

static inline void setStaticF_BrainpoolP256R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP256R1() ;

static inline void setStaticF_BrainpoolP256T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP256T1() ;

static inline void setStaticF_BrainpoolP320R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP320R1() ;

static inline void setStaticF_BrainpoolP320T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP320T1() ;

static inline void setStaticF_BrainpoolP384R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP384R1() ;

static inline void setStaticF_BrainpoolP384T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP384T1() ;

static inline void setStaticF_BrainpoolP512R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP512R1() ;

static inline void setStaticF_BrainpoolP512T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BrainpoolP512T1() ;

static inline ::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0x107806c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TeleTrusTObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleTrusTObjectIdentifiers(TeleTrusTObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleTrusTObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleTrusTObjectIdentifiers(TeleTrusTObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TeleTrusTObjectIdentifiers()  = default;
public:


// Fields

// Static field TeleTrusTAlgorithm

// Static field RipeMD160

// Static field RipeMD128

// Static field RipeMD256

// Static field TeleTrusTRsaSignatureAlgorithm

// Static field RsaSignatureWithRipeMD160

// Static field RsaSignatureWithRipeMD128

// Static field RsaSignatureWithRipeMD256

// Static field ECSign

// Static field ECSignWithSha1

// Static field ECSignWithRipeMD160

// Static field EccBrainpool

// Static field EllipticCurve

// Static field VersionOne

// Static field BrainpoolP160R1

// Static field BrainpoolP160T1

// Static field BrainpoolP192R1

// Static field BrainpoolP192T1

// Static field BrainpoolP224R1

// Static field BrainpoolP224T1

// Static field BrainpoolP256R1

// Static field BrainpoolP256T1

// Static field BrainpoolP320R1

// Static field BrainpoolP320T1

// Static field BrainpoolP384R1

// Static field BrainpoolP384T1

// Static field BrainpoolP512R1

// Static field BrainpoolP512T1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
NEED_NO_BOX(::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTObjectIdentifiers*, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTObjectIdentifiers");
