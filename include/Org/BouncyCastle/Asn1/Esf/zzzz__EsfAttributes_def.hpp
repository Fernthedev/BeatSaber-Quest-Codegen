#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EsfAttributes)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class EsfAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::EsfAttributes);
// Type: Org.BouncyCastle.Asn1.Esf::EsfAttributes
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(144))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::EsfAttributes*
class CORDL_TYPE EsfAttributes : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_SigPolicyId(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SigPolicyId() ;

static inline void setStaticF_CommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CommitmentType() ;

static inline void setStaticF_SignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignerLocation() ;

static inline void setStaticF_SignerAttr(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignerAttr() ;

static inline void setStaticF_OtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_OtherSigCert() ;

static inline void setStaticF_ContentTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ContentTimestamp() ;

static inline void setStaticF_CertificateRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertificateRefs() ;

static inline void setStaticF_RevocationRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RevocationRefs() ;

static inline void setStaticF_CertValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertValues() ;

static inline void setStaticF_RevocationValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RevocationValues() ;

static inline void setStaticF_EscTimeStamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EscTimeStamp() ;

static inline void setStaticF_CertCrlTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertCrlTimestamp() ;

static inline void setStaticF_ArchiveTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ArchiveTimestamp() ;

static inline void setStaticF_ArchiveTimestampV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ArchiveTimestampV2() ;

static inline ::Org::BouncyCastle::Asn1::Esf::EsfAttributes* New_ctor() ;

/// @brief Method .ctor addr 0xe93430 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EsfAttributes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EsfAttributes(EsfAttributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EsfAttributes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EsfAttributes(EsfAttributes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EsfAttributes()  = default;
public:


// Fields

// Static field SigPolicyId

// Static field CommitmentType

// Static field SignerLocation

// Static field SignerAttr

// Static field OtherSigCert

// Static field ContentTimestamp

// Static field CertificateRefs

// Static field RevocationRefs

// Static field CertValues

// Static field RevocationValues

// Static field EscTimeStamp

// Static field CertCrlTimestamp

// Static field ArchiveTimestamp

// Static field ArchiveTimestampV2


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::EsfAttributes, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::EsfAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::EsfAttributes*, "Org.BouncyCastle.Asn1.Esf", "EsfAttributes");
