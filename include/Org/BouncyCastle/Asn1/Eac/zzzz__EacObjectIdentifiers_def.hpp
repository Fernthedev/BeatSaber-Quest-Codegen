#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EacObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Eac {
class EacObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Eac::EacObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Eac {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(132))
// CS Name: ::Org.BouncyCastle.Asn1.Eac::EacObjectIdentifiers*
class CORDL_TYPE EacObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_bsi_de(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bsi_de() ;

static inline void setStaticF_id_PK(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_PK() ;

static inline void setStaticF_id_PK_DH(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_PK_DH() ;

static inline void setStaticF_id_PK_ECDH(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_PK_ECDH() ;

static inline void setStaticF_id_CA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA() ;

static inline void setStaticF_id_CA_DH(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA_DH() ;

static inline void setStaticF_id_CA_DH_3DES_CBC_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA_DH_3DES_CBC_CBC() ;

static inline void setStaticF_id_CA_ECDH(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA_ECDH() ;

static inline void setStaticF_id_CA_ECDH_3DES_CBC_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA_ECDH_3DES_CBC_CBC() ;

static inline void setStaticF_id_TA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA() ;

static inline void setStaticF_id_TA_RSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA() ;

static inline void setStaticF_id_TA_RSA_v1_5_SHA_1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA_v1_5_SHA_1() ;

static inline void setStaticF_id_TA_RSA_v1_5_SHA_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA_v1_5_SHA_256() ;

static inline void setStaticF_id_TA_RSA_PSS_SHA_1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA_PSS_SHA_1() ;

static inline void setStaticF_id_TA_RSA_PSS_SHA_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA_PSS_SHA_256() ;

static inline void setStaticF_id_TA_ECDSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA() ;

static inline void setStaticF_id_TA_ECDSA_SHA_1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_1() ;

static inline void setStaticF_id_TA_ECDSA_SHA_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_224() ;

static inline void setStaticF_id_TA_ECDSA_SHA_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_256() ;

static inline void setStaticF_id_TA_ECDSA_SHA_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_384() ;

static inline void setStaticF_id_TA_ECDSA_SHA_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_512() ;

static inline ::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe8e930 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EacObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EacObjectIdentifiers(EacObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EacObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EacObjectIdentifiers(EacObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EacObjectIdentifiers()  = default;
public:


// Fields

// Static field bsi_de

// Static field id_PK

// Static field id_PK_DH

// Static field id_PK_ECDH

// Static field id_CA

// Static field id_CA_DH

// Static field id_CA_DH_3DES_CBC_CBC

// Static field id_CA_ECDH

// Static field id_CA_ECDH_3DES_CBC_CBC

// Static field id_TA

// Static field id_TA_RSA

// Static field id_TA_RSA_v1_5_SHA_1

// Static field id_TA_RSA_v1_5_SHA_256

// Static field id_TA_RSA_PSS_SHA_1

// Static field id_TA_RSA_PSS_SHA_256

// Static field id_TA_ECDSA

// Static field id_TA_ECDSA_SHA_1

// Static field id_TA_ECDSA_SHA_224

// Static field id_TA_ECDSA_SHA_256

// Static field id_TA_ECDSA_SHA_384

// Static field id_TA_ECDSA_SHA_512


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Eac
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers*, "Org.BouncyCastle.Asn1.Eac", "EacObjectIdentifiers");
