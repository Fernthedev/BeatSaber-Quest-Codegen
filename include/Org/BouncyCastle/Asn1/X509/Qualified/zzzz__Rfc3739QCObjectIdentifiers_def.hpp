#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Rfc3739QCObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class Rfc3739QCObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::Rfc3739QCObjectIdentifiers
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(332))
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::Rfc3739QCObjectIdentifiers*
class CORDL_TYPE Rfc3739QCObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_IdQcs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdQcs() ;

static inline void setStaticF_IdQcsPkixQCSyntaxV1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdQcsPkixQCSyntaxV1() ;

static inline void setStaticF_IdQcsPkixQCSyntaxV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdQcsPkixQCSyntaxV2() ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0x108196c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3739QCObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rfc3739QCObjectIdentifiers(Rfc3739QCObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3739QCObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rfc3739QCObjectIdentifiers(Rfc3739QCObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Rfc3739QCObjectIdentifiers()  = default;
public:


// Fields

// Static field IdQcs

// Static field IdQcsPkixQCSyntaxV1

// Static field IdQcsPkixQCSyntaxV2


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers*, "Org.BouncyCastle.Asn1.X509.Qualified", "Rfc3739QCObjectIdentifiers");
