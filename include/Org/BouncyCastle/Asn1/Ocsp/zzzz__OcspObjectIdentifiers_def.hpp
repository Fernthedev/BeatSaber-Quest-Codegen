#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OcspObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Ocsp::OcspObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(210))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::OcspObjectIdentifiers*
class CORDL_TYPE OcspObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field PkixOcspId offset 0x0
static constexpr ::ConstString  PkixOcspId{u"1.3.6.1.5.5.7.48.1"};

static inline void setStaticF_PkixOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcsp() ;

static inline void setStaticF_PkixOcspBasic(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspBasic() ;

static inline void setStaticF_PkixOcspNonce(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspNonce() ;

static inline void setStaticF_PkixOcspCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspCrl() ;

static inline void setStaticF_PkixOcspResponse(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspResponse() ;

static inline void setStaticF_PkixOcspNocheck(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspNocheck() ;

static inline void setStaticF_PkixOcspArchiveCutoff(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspArchiveCutoff() ;

static inline void setStaticF_PkixOcspServiceLocator(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PkixOcspServiceLocator() ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xf80aac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OcspObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcspObjectIdentifiers(OcspObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcspObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcspObjectIdentifiers(OcspObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OcspObjectIdentifiers()  = default;
public:


// Fields

// Static field PkixOcsp

// Static field PkixOcspBasic

// Static field PkixOcspNonce

// Static field PkixOcspCrl

// Static field PkixOcspResponse

// Static field PkixOcspNocheck

// Static field PkixOcspArchiveCutoff

// Static field PkixOcspServiceLocator


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspObjectIdentifiers*, "Org.BouncyCastle.Asn1.Ocsp", "OcspObjectIdentifiers");
