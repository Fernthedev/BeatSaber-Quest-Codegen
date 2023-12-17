#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmsAttributes)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CmsAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::CmsAttributes);
// Type: Org.BouncyCastle.Asn1.Cms::CmsAttributes
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(62))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::CmsAttributes*
class CORDL_TYPE CmsAttributes : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_ContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ContentType() ;

static inline void setStaticF_MessageDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MessageDigest() ;

static inline void setStaticF_SigningTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SigningTime() ;

static inline void setStaticF_CounterSignature(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CounterSignature() ;

static inline void setStaticF_ContentHint(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ContentHint() ;

static inline ::Org::BouncyCastle::Asn1::Cms::CmsAttributes* New_ctor() ;

/// @brief Method .ctor addr 0xe75590 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsAttributes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsAttributes(CmsAttributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsAttributes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsAttributes(CmsAttributes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsAttributes()  = default;
public:


// Fields

// Static field ContentType

// Static field MessageDigest

// Static field SigningTime

// Static field CounterSignature

// Static field ContentHint


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::CmsAttributes, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CmsAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CmsAttributes*, "Org.BouncyCastle.Asn1.Cms", "CmsAttributes");
