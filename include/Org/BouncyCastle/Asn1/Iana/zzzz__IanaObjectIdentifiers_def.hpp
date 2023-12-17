#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IanaObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Iana {
class IanaObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Iana::IanaObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Iana {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(173))
// CS Name: ::Org.BouncyCastle.Asn1.Iana::IanaObjectIdentifiers*
class CORDL_TYPE IanaObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_IsakmpOakley(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IsakmpOakley() ;

static inline void setStaticF_HmacMD5(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HmacMD5() ;

static inline void setStaticF_HmacSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HmacSha1() ;

static inline void setStaticF_HmacTiger(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HmacTiger() ;

static inline void setStaticF_HmacRipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HmacRipeMD160() ;

static inline ::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe9eecc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IanaObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IanaObjectIdentifiers(IanaObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IanaObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IanaObjectIdentifiers(IanaObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IanaObjectIdentifiers()  = default;
public:


// Fields

// Static field IsakmpOakley

// Static field HmacMD5

// Static field HmacSha1

// Static field HmacTiger

// Static field HmacRipeMD160


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Iana
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers*, "Org.BouncyCastle.Asn1.Iana", "IanaObjectIdentifiers");
