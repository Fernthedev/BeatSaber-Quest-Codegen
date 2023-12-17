#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CrlNumber)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlNumber;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CrlNumber);
// Type: Org.BouncyCastle.Asn1.X509::CrlNumber
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(353))
// CS Name: ::Org.BouncyCastle.Asn1.X509::CrlNumber*
class CORDL_TYPE CrlNumber : public ::Org::BouncyCastle::Asn1::DerInteger {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::DerInteger)]{};

 __declspec(property(get=get_Number)) ::Org::BouncyCastle::Math::BigInteger*  Number;

static inline ::Org::BouncyCastle::Asn1::X509::CrlNumber* New_ctor(::Org::BouncyCastle::Math::BigInteger*  number) ;

/// @brief Method .ctor addr 0x118b000 size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  number) ;

/// @brief Method get_Number addr 0x118b008 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Number() ;

/// @brief Method ToString addr 0x118b010 size 0x5c virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "CrlNumber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrlNumber(CrlNumber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrlNumber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrlNumber(CrlNumber const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CrlNumber()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CrlNumber, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CrlNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CrlNumber*, "Org.BouncyCastle.Asn1.X509", "CrlNumber");
