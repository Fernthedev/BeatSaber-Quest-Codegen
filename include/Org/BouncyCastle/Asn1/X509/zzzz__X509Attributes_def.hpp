#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509Attributes)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Attributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509Attributes);
// Type: Org.BouncyCastle.Asn1.X509::X509Attributes
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(401))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509Attributes*
class CORDL_TYPE X509Attributes : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_RoleSyntax(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RoleSyntax() ;

static inline ::Org::BouncyCastle::Asn1::X509::X509Attributes* New_ctor() ;

/// @brief Method .ctor addr 0x119d330 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X509Attributes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Attributes(X509Attributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Attributes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Attributes(X509Attributes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509Attributes()  = default;
public:


// Fields

// Static field RoleSyntax


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509Attributes, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Attributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Attributes*, "Org.BouncyCastle.Asn1.X509", "X509Attributes");
