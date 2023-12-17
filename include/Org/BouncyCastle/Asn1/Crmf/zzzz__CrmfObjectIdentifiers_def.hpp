#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CrmfObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CrmfObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Crmf::CrmfObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(110))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CrmfObjectIdentifiers*
class CORDL_TYPE CrmfObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_id_pkix(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_pkix() ;

static inline void setStaticF_id_pkip(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_pkip() ;

static inline void setStaticF_id_regCtrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl() ;

static inline void setStaticF_id_regCtrl_regToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl_regToken() ;

static inline void setStaticF_id_regCtrl_authenticator(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl_authenticator() ;

static inline void setStaticF_id_regCtrl_pkiPublicationInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl_pkiPublicationInfo() ;

static inline void setStaticF_id_regCtrl_pkiArchiveOptions(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl_pkiArchiveOptions() ;

static inline void setStaticF_id_ct_encKeyWithID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ct_encKeyWithID() ;

static inline ::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe85b30 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CrmfObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrmfObjectIdentifiers(CrmfObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrmfObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrmfObjectIdentifiers(CrmfObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CrmfObjectIdentifiers()  = default;
public:


// Fields

// Static field id_pkix

// Static field id_pkip

// Static field id_regCtrl

// Static field id_regCtrl_regToken

// Static field id_regCtrl_authenticator

// Static field id_regCtrl_pkiPublicationInfo

// Static field id_regCtrl_pkiArchiveOptions

// Static field id_ct_encKeyWithID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers*, "Org.BouncyCastle.Asn1.Crmf", "CrmfObjectIdentifiers");
