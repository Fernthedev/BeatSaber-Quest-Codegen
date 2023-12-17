#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RevocationDetails)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class RevocationDetails;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::RevocationDetails);
// Type: Org.BouncyCastle.Cmp::RevocationDetails
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(608))
// CS Name: ::Org.BouncyCastle.Cmp::RevocationDetails*
class CORDL_TYPE RevocationDetails : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field revDetails offset 0x10
 __declspec(property(get=__get_revDetails, put=__set_revDetails)) ::Org::BouncyCastle::Asn1::Cmp::RevDetails*  revDetails;

 __declspec(property(get=get_Subject)) ::Org::BouncyCastle::Asn1::X509::X509Name*  Subject;

 __declspec(property(get=get_Issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name*  Issuer;

 __declspec(property(get=get_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger*  SerialNumber;

constexpr void __set_revDetails(::Org::BouncyCastle::Asn1::Cmp::RevDetails*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails* __get_revDetails() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::RevDetails*> __get_revDetails() const;

static inline ::Org::BouncyCastle::Cmp::RevocationDetails* New_ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails*  revDetails) ;

/// @brief Method .ctor addr 0x11d7ea4 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails*  revDetails) ;

/// @brief Method get_Subject addr 0x11d7ecc size 0x30 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject() ;

/// @brief Method get_Issuer addr 0x11d7efc size 0x30 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer() ;

/// @brief Method get_SerialNumber addr 0x11d7f2c size 0x3c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber() ;

/// @brief Method ToASN1Structure addr 0x11d7f68 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* ToASN1Structure() ;

// Ctor Parameters [CppParam { name: "", ty: "RevocationDetails", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RevocationDetails(RevocationDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevocationDetails", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevocationDetails(RevocationDetails const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RevocationDetails()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::RevocationDetails, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::RevocationDetails);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::RevocationDetails*, "Org.BouncyCastle.Cmp", "RevocationDetails");
