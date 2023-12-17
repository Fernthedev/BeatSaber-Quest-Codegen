#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmpObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Cmp::CmpObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(20))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CmpObjectIdentifiers*
class CORDL_TYPE CmpObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_passwordBasedMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_passwordBasedMac() ;

static inline void setStaticF_dhBasedMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dhBasedMac() ;

static inline void setStaticF_it_caProtEncCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_caProtEncCert() ;

static inline void setStaticF_it_signKeyPairTypes(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_signKeyPairTypes() ;

static inline void setStaticF_it_encKeyPairTypes(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_encKeyPairTypes() ;

static inline void setStaticF_it_preferredSymAlg(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_preferredSymAlg() ;

static inline void setStaticF_it_caKeyUpdateInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_caKeyUpdateInfo() ;

static inline void setStaticF_it_currentCRL(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_currentCRL() ;

static inline void setStaticF_it_unsupportedOIDs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_unsupportedOIDs() ;

static inline void setStaticF_it_keyPairParamReq(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_keyPairParamReq() ;

static inline void setStaticF_it_keyPairParamRep(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_keyPairParamRep() ;

static inline void setStaticF_it_revPassphrase(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_revPassphrase() ;

static inline void setStaticF_it_implicitConfirm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_implicitConfirm() ;

static inline void setStaticF_it_confirmWaitTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_confirmWaitTime() ;

static inline void setStaticF_it_origPKIMessage(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_origPKIMessage() ;

static inline void setStaticF_it_suppLangTags(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_suppLangTags() ;

static inline void setStaticF_regCtrl_regToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_regToken() ;

static inline void setStaticF_regCtrl_authenticator(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_authenticator() ;

static inline void setStaticF_regCtrl_pkiPublicationInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_pkiPublicationInfo() ;

static inline void setStaticF_regCtrl_pkiArchiveOptions(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_pkiArchiveOptions() ;

static inline void setStaticF_regCtrl_oldCertID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_oldCertID() ;

static inline void setStaticF_regCtrl_protocolEncrKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_protocolEncrKey() ;

static inline void setStaticF_regCtrl_altCertTemplate(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_altCertTemplate() ;

static inline void setStaticF_regInfo_utf8Pairs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regInfo_utf8Pairs() ;

static inline void setStaticF_regInfo_certReq(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regInfo_certReq() ;

static inline void setStaticF_ct_encKeyWithID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ct_encKeyWithID() ;

static inline ::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe66c7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CmpObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmpObjectIdentifiers(CmpObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmpObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmpObjectIdentifiers(CmpObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmpObjectIdentifiers()  = default;
public:


// Fields

// Static field passwordBasedMac

// Static field dhBasedMac

// Static field it_caProtEncCert

// Static field it_signKeyPairTypes

// Static field it_encKeyPairTypes

// Static field it_preferredSymAlg

// Static field it_caKeyUpdateInfo

// Static field it_currentCRL

// Static field it_unsupportedOIDs

// Static field it_keyPairParamReq

// Static field it_keyPairParamRep

// Static field it_revPassphrase

// Static field it_implicitConfirm

// Static field it_confirmWaitTime

// Static field it_origPKIMessage

// Static field it_suppLangTags

// Static field regCtrl_regToken

// Static field regCtrl_authenticator

// Static field regCtrl_pkiPublicationInfo

// Static field regCtrl_pkiArchiveOptions

// Static field regCtrl_oldCertID

// Static field regCtrl_protocolEncrKey

// Static field regCtrl_altCertTemplate

// Static field regInfo_utf8Pairs

// Static field regInfo_certReq

// Static field ct_encKeyWithID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers*, "Org.BouncyCastle.Asn1.Cmp", "CmpObjectIdentifiers");
