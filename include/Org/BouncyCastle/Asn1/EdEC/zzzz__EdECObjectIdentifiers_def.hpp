#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EdECObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::EdEC {
class EdECObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.EdEC::EdECObjectIdentifiers
namespace Org::BouncyCastle::Asn1::EdEC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(133))
// CS Name: ::Org.BouncyCastle.Asn1.EdEC::EdECObjectIdentifiers*
class CORDL_TYPE EdECObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_id_edwards_curve_algs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_edwards_curve_algs() ;

static inline void setStaticF_id_X25519(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_X25519() ;

static inline void setStaticF_id_X448(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_X448() ;

static inline void setStaticF_id_Ed25519(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_Ed25519() ;

static inline void setStaticF_id_Ed448(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_Ed448() ;

static inline ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe8eabc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EdECObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EdECObjectIdentifiers(EdECObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdECObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdECObjectIdentifiers(EdECObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EdECObjectIdentifiers()  = default;
public:


// Fields

// Static field id_edwards_curve_algs

// Static field id_X25519

// Static field id_X448

// Static field id_Ed25519

// Static field id_Ed448


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::EdEC
NEED_NO_BOX(::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*, "Org.BouncyCastle.Asn1.EdEC", "EdECObjectIdentifiers");
