#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SecObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Sec {
class SecObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Sec::SecObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(290))
// CS Name: ::Org.BouncyCastle.Asn1.Sec::SecObjectIdentifiers*
class CORDL_TYPE SecObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_EllipticCurve(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EllipticCurve() ;

static inline void setStaticF_SecT163k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT163k1() ;

static inline void setStaticF_SecT163r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT163r1() ;

static inline void setStaticF_SecT239k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT239k1() ;

static inline void setStaticF_SecT113r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT113r1() ;

static inline void setStaticF_SecT113r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT113r2() ;

static inline void setStaticF_SecP112r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP112r1() ;

static inline void setStaticF_SecP112r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP112r2() ;

static inline void setStaticF_SecP160r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP160r1() ;

static inline void setStaticF_SecP160k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP160k1() ;

static inline void setStaticF_SecP256k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP256k1() ;

static inline void setStaticF_SecT163r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT163r2() ;

static inline void setStaticF_SecT283k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT283k1() ;

static inline void setStaticF_SecT283r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT283r1() ;

static inline void setStaticF_SecT131r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT131r1() ;

static inline void setStaticF_SecT131r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT131r2() ;

static inline void setStaticF_SecT193r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT193r1() ;

static inline void setStaticF_SecT193r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT193r2() ;

static inline void setStaticF_SecT233k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT233k1() ;

static inline void setStaticF_SecT233r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT233r1() ;

static inline void setStaticF_SecP128r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP128r1() ;

static inline void setStaticF_SecP128r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP128r2() ;

static inline void setStaticF_SecP160r2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP160r2() ;

static inline void setStaticF_SecP192k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP192k1() ;

static inline void setStaticF_SecP224k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP224k1() ;

static inline void setStaticF_SecP224r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP224r1() ;

static inline void setStaticF_SecP384r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP384r1() ;

static inline void setStaticF_SecP521r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP521r1() ;

static inline void setStaticF_SecT409k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT409k1() ;

static inline void setStaticF_SecT409r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT409r1() ;

static inline void setStaticF_SecT571k1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT571k1() ;

static inline void setStaticF_SecT571r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecT571r1() ;

static inline void setStaticF_SecP192r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP192r1() ;

static inline void setStaticF_SecP256r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SecP256r1() ;

static inline ::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0x10732b4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SecObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecObjectIdentifiers(SecObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecObjectIdentifiers(SecObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SecObjectIdentifiers()  = default;
public:


// Fields

// Static field EllipticCurve

// Static field SecT163k1

// Static field SecT163r1

// Static field SecT239k1

// Static field SecT113r1

// Static field SecT113r2

// Static field SecP112r1

// Static field SecP112r2

// Static field SecP160r1

// Static field SecP160k1

// Static field SecP256k1

// Static field SecT163r2

// Static field SecT283k1

// Static field SecT283r1

// Static field SecT131r1

// Static field SecT131r2

// Static field SecT193r1

// Static field SecT193r2

// Static field SecT233k1

// Static field SecT233r1

// Static field SecP128r1

// Static field SecP128r2

// Static field SecP160r2

// Static field SecP192k1

// Static field SecP224k1

// Static field SecP224r1

// Static field SecP384r1

// Static field SecP521r1

// Static field SecT409k1

// Static field SecT409r1

// Static field SecT571k1

// Static field SecT571r1

// Static field SecP192r1

// Static field SecP256r1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Sec
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers*, "Org.BouncyCastle.Asn1.Sec", "SecObjectIdentifiers");
