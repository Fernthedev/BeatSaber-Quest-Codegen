#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OiwObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Oiw {
class OiwObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Oiw::OiwObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Oiw {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(225))
// CS Name: ::Org.BouncyCastle.Asn1.Oiw::OiwObjectIdentifiers*
class CORDL_TYPE OiwObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_MD4WithRsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD4WithRsa() ;

static inline void setStaticF_MD5WithRsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD5WithRsa() ;

static inline void setStaticF_MD4WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD4WithRsaEncryption() ;

static inline void setStaticF_DesEcb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEcb() ;

static inline void setStaticF_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCbc() ;

static inline void setStaticF_DesOfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesOfb() ;

static inline void setStaticF_DesCfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCfb() ;

static inline void setStaticF_DesEde(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde() ;

static inline void setStaticF_IdSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha1() ;

static inline void setStaticF_DsaWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha1() ;

static inline void setStaticF_Sha1WithRsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha1WithRsa() ;

static inline void setStaticF_ElGamalAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ElGamalAlgorithm() ;

static inline ::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xf855ec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OiwObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OiwObjectIdentifiers(OiwObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OiwObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OiwObjectIdentifiers(OiwObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OiwObjectIdentifiers()  = default;
public:


// Fields

// Static field MD4WithRsa

// Static field MD5WithRsa

// Static field MD4WithRsaEncryption

// Static field DesEcb

// Static field DesCbc

// Static field DesOfb

// Static field DesCfb

// Static field DesEde

// Static field IdSha1

// Static field DsaWithSha1

// Static field Sha1WithRsa

// Static field ElGamalAlgorithm


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Oiw
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers*, "Org.BouncyCastle.Asn1.Oiw", "OiwObjectIdentifiers");
