#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KisaObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Kisa {
class KisaObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Kisa::KisaObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Kisa {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(193))
// CS Name: ::Org.BouncyCastle.Asn1.Kisa::KisaObjectIdentifiers*
class CORDL_TYPE KisaObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_IdSeedCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSeedCbc() ;

static inline void setStaticF_IdNpkiAppCmsSeedWrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdNpkiAppCmsSeedWrap() ;

static inline ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xf7bb0c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "KisaObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KisaObjectIdentifiers(KisaObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KisaObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KisaObjectIdentifiers(KisaObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KisaObjectIdentifiers()  = default;
public:


// Fields

// Static field IdSeedCbc

// Static field IdNpkiAppCmsSeedWrap


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Kisa
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*, "Org.BouncyCastle.Asn1.Kisa", "KisaObjectIdentifiers");
