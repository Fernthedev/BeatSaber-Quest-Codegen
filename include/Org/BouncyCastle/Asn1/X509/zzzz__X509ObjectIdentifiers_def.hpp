#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509ObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509ObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.X509::X509ObjectIdentifiers
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(410))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509ObjectIdentifiers*
class CORDL_TYPE X509ObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field ID offset 0x0
static constexpr ::ConstString  _cordl_ID{u"2.5.4"};

static inline void setStaticF_CommonName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CommonName() ;

static inline void setStaticF_CountryName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CountryName() ;

static inline void setStaticF_LocalityName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_LocalityName() ;

static inline void setStaticF_StateOrProvinceName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_StateOrProvinceName() ;

static inline void setStaticF_Organization(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Organization() ;

static inline void setStaticF_OrganizationalUnitName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_OrganizationalUnitName() ;

static inline void setStaticF_id_at_telephoneNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_at_telephoneNumber() ;

static inline void setStaticF_id_at_name(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_at_name() ;

static inline void setStaticF_id_at_organizationIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_at_organizationIdentifier() ;

static inline void setStaticF_IdSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha1() ;

static inline void setStaticF_RipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RipeMD160() ;

static inline void setStaticF_RipeMD160WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RipeMD160WithRsaEncryption() ;

static inline void setStaticF_IdEARsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEARsa() ;

static inline void setStaticF_IdPkix(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPkix() ;

static inline void setStaticF_IdPE(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPE() ;

static inline void setStaticF_IdAD(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAD() ;

static inline void setStaticF_IdADCAIssuers(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdADCAIssuers() ;

static inline void setStaticF_IdADOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdADOcsp() ;

static inline void setStaticF_OcspAccessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_OcspAccessMethod() ;

static inline void setStaticF_CrlAccessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlAccessMethod() ;

static inline ::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0x11a7cfc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X509ObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509ObjectIdentifiers(X509ObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509ObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509ObjectIdentifiers(X509ObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509ObjectIdentifiers()  = default;
public:


// Fields

// Static field CommonName

// Static field CountryName

// Static field LocalityName

// Static field StateOrProvinceName

// Static field Organization

// Static field OrganizationalUnitName

// Static field id_at_telephoneNumber

// Static field id_at_name

// Static field id_at_organizationIdentifier

// Static field IdSha1

// Static field RipeMD160

// Static field RipeMD160WithRsaEncryption

// Static field IdEARsa

// Static field IdPkix

// Static field IdPE

// Static field IdAD

// Static field IdADCAIssuers

// Static field IdADOcsp

// Static field OcspAccessMethod

// Static field CrlAccessMethod


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers*, "Org.BouncyCastle.Asn1.X509", "X509ObjectIdentifiers");
