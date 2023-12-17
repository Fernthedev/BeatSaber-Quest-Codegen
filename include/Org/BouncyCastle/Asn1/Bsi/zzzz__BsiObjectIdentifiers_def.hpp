#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BsiObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Bsi {
class BsiObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Bsi::BsiObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Bsi {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9))
// CS Name: ::Org.BouncyCastle.Asn1.Bsi::BsiObjectIdentifiers*
class CORDL_TYPE BsiObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_bsi_de(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bsi_de() ;

static inline void setStaticF_id_ecc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ecc() ;

static inline void setStaticF_ecdsa_plain_signatures(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_signatures() ;

static inline void setStaticF_ecdsa_plain_SHA1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA1() ;

static inline void setStaticF_ecdsa_plain_SHA224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA224() ;

static inline void setStaticF_ecdsa_plain_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA256() ;

static inline void setStaticF_ecdsa_plain_SHA384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA384() ;

static inline void setStaticF_ecdsa_plain_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_SHA512() ;

static inline void setStaticF_ecdsa_plain_RIPEMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecdsa_plain_RIPEMD160() ;

static inline void setStaticF_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_algorithm() ;

static inline void setStaticF_ecka_eg(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg() ;

static inline void setStaticF_ecka_eg_X963kdf(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf() ;

static inline void setStaticF_ecka_eg_X963kdf_SHA1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA1() ;

static inline void setStaticF_ecka_eg_X963kdf_SHA224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA224() ;

static inline void setStaticF_ecka_eg_X963kdf_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA256() ;

static inline void setStaticF_ecka_eg_X963kdf_SHA384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA384() ;

static inline void setStaticF_ecka_eg_X963kdf_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_SHA512() ;

static inline void setStaticF_ecka_eg_X963kdf_RIPEMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_X963kdf_RIPEMD160() ;

static inline void setStaticF_ecka_eg_SessionKDF(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF() ;

static inline void setStaticF_ecka_eg_SessionKDF_3DES(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF_3DES() ;

static inline void setStaticF_ecka_eg_SessionKDF_AES128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF_AES128() ;

static inline void setStaticF_ecka_eg_SessionKDF_AES192(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF_AES192() ;

static inline void setStaticF_ecka_eg_SessionKDF_AES256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ecka_eg_SessionKDF_AES256() ;

static inline ::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe63e78 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BsiObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsiObjectIdentifiers(BsiObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsiObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsiObjectIdentifiers(BsiObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BsiObjectIdentifiers()  = default;
public:


// Fields

// Static field bsi_de

// Static field id_ecc

// Static field ecdsa_plain_signatures

// Static field ecdsa_plain_SHA1

// Static field ecdsa_plain_SHA224

// Static field ecdsa_plain_SHA256

// Static field ecdsa_plain_SHA384

// Static field ecdsa_plain_SHA512

// Static field ecdsa_plain_RIPEMD160

// Static field algorithm

// Static field ecka_eg

// Static field ecka_eg_X963kdf

// Static field ecka_eg_X963kdf_SHA1

// Static field ecka_eg_X963kdf_SHA224

// Static field ecka_eg_X963kdf_SHA256

// Static field ecka_eg_X963kdf_SHA384

// Static field ecka_eg_X963kdf_SHA512

// Static field ecka_eg_X963kdf_RIPEMD160

// Static field ecka_eg_SessionKDF

// Static field ecka_eg_SessionKDF_3DES

// Static field ecka_eg_SessionKDF_AES128

// Static field ecka_eg_SessionKDF_AES192

// Static field ecka_eg_SessionKDF_AES256


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Bsi
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Bsi::BsiObjectIdentifiers*, "Org.BouncyCastle.Asn1.Bsi", "BsiObjectIdentifiers");
