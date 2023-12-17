#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SmimeAttributes)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeAttributes);
// Type: Org.BouncyCastle.Asn1.Smime::SmimeAttributes
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(291))
// CS Name: ::Org.BouncyCastle.Asn1.Smime::SmimeAttributes*
class CORDL_TYPE SmimeAttributes : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_SmimeCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SmimeCapabilities() ;

static inline void setStaticF_EncrypKeyPref(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EncrypKeyPref() ;

static inline ::Org::BouncyCastle::Asn1::Smime::SmimeAttributes* New_ctor() ;

/// @brief Method .ctor addr 0x107334c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SmimeAttributes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmimeAttributes(SmimeAttributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmimeAttributes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmimeAttributes(SmimeAttributes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SmimeAttributes()  = default;
public:


// Fields

// Static field SmimeCapabilities

// Static field EncrypKeyPref


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeAttributes, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeAttributes*, "Org.BouncyCastle.Asn1.Smime", "SmimeAttributes");
