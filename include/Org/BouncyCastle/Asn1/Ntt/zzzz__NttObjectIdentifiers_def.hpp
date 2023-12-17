#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NttObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ntt {
class NttObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Ntt::NttObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Ntt {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(205))
// CS Name: ::Org.BouncyCastle.Asn1.Ntt::NttObjectIdentifiers*
class CORDL_TYPE NttObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_IdCamellia128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia128Cbc() ;

static inline void setStaticF_IdCamellia192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia192Cbc() ;

static inline void setStaticF_IdCamellia256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia256Cbc() ;

static inline void setStaticF_IdCamellia128Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia128Wrap() ;

static inline void setStaticF_IdCamellia192Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia192Wrap() ;

static inline void setStaticF_IdCamellia256Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia256Wrap() ;

static inline ::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xf7f3a4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NttObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NttObjectIdentifiers(NttObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NttObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NttObjectIdentifiers(NttObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NttObjectIdentifiers()  = default;
public:


// Fields

// Static field IdCamellia128Cbc

// Static field IdCamellia192Cbc

// Static field IdCamellia256Cbc

// Static field IdCamellia128Wrap

// Static field IdCamellia192Wrap

// Static field IdCamellia256Wrap


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ntt
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers*, "Org.BouncyCastle.Asn1.Ntt", "NttObjectIdentifiers");
