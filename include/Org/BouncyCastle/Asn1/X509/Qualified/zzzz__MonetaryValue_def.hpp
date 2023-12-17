#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonetaryValue)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class Iso4217CurrencyCode;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class MonetaryValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::MonetaryValue
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(330))
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::MonetaryValue*
class CORDL_TYPE MonetaryValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field currency offset 0x10
 __declspec(property(get=__get_currency, put=__set_currency)) ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*  currency;

/// @brief Field amount offset 0x18
 __declspec(property(get=__get_amount, put=__set_amount)) ::Org::BouncyCastle::Asn1::DerInteger*  amount;

/// @brief Field exponent offset 0x20
 __declspec(property(get=__get_exponent, put=__set_exponent)) ::Org::BouncyCastle::Asn1::DerInteger*  exponent;

 __declspec(property(get=get_Currency)) ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*  Currency;

 __declspec(property(get=get_Amount)) ::Org::BouncyCastle::Math::BigInteger*  Amount;

 __declspec(property(get=get_Exponent)) ::Org::BouncyCastle::Math::BigInteger*  Exponent;

constexpr void __set_currency(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* __get_currency() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*> __get_currency() const;

constexpr void __set_amount(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_amount() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_amount() const;

constexpr void __set_exponent(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_exponent() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_exponent() const;

/// @brief Method GetInstance addr 0x10810e4 size 0x168 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x108124c size 0x13c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue* New_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*  currency, int32_t  amount, int32_t  exponent) ;

/// @brief Method .ctor addr 0x1081388 size 0xb0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*  currency, int32_t  amount, int32_t  exponent) ;

/// @brief Method get_Currency addr 0x1081438 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* get_Currency() ;

/// @brief Method get_Amount addr 0x1081440 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Amount() ;

/// @brief Method get_Exponent addr 0x108145c size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Exponent() ;

/// @brief Method ToAsn1Object addr 0x1081478 size 0x11c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "MonetaryValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonetaryValue(MonetaryValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonetaryValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonetaryValue(MonetaryValue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonetaryValue()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue*, "Org.BouncyCastle.Asn1.X509.Qualified", "MonetaryValue");
