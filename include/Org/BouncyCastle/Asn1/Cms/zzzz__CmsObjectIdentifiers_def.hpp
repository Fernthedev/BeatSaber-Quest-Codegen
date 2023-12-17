#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmsObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CmsObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Cms::CmsObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(63))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::CmsObjectIdentifiers*
class CORDL_TYPE CmsObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Data(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Data() ;

static inline void setStaticF_SignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignedData() ;

static inline void setStaticF_EnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EnvelopedData() ;

static inline void setStaticF_SignedAndEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignedAndEnvelopedData() ;

static inline void setStaticF_DigestedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DigestedData() ;

static inline void setStaticF_EncryptedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EncryptedData() ;

static inline void setStaticF_AuthenticatedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthenticatedData() ;

static inline void setStaticF_CompressedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CompressedData() ;

static inline void setStaticF_AuthEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthEnvelopedData() ;

static inline void setStaticF_timestampedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_timestampedData() ;

static inline void setStaticF_id_ri(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ri() ;

static inline void setStaticF_id_ri_ocsp_response(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ri_ocsp_response() ;

static inline void setStaticF_id_ri_scvp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ri_scvp() ;

static inline ::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe75714 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsObjectIdentifiers(CmsObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsObjectIdentifiers(CmsObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsObjectIdentifiers()  = default;
public:


// Fields

// Static field Data

// Static field SignedData

// Static field EnvelopedData

// Static field SignedAndEnvelopedData

// Static field DigestedData

// Static field EncryptedData

// Static field AuthenticatedData

// Static field CompressedData

// Static field AuthEnvelopedData

// Static field timestampedData

// Static field id_ri

// Static field id_ri_ocsp_response

// Static field id_ri_scvp


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CmsObjectIdentifiers*, "Org.BouncyCastle.Asn1.Cms", "CmsObjectIdentifiers");
