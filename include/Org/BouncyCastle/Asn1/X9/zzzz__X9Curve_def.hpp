#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9Curve)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9Curve;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9Curve);
// Type: Org.BouncyCastle.Asn1.X9::X9Curve
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(442))
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9Curve*
class CORDL_TYPE X9Curve : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field curve offset 0x10
 __declspec(property(get=__get_curve, put=__set_curve)) ::Org::BouncyCastle::Math::EC::ECCurve*  curve;

/// @brief Field seed offset 0x18
 __declspec(property(get=__get_seed, put=__set_seed)) ::ArrayW<uint8_t,::Array<uint8_t>*>  seed;

/// @brief Field fieldIdentifier offset 0x20
 __declspec(property(get=__get_fieldIdentifier, put=__set_fieldIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  fieldIdentifier;

 __declspec(property(get=get_Curve)) ::Org::BouncyCastle::Math::EC::ECCurve*  Curve;

constexpr void __set_curve(::Org::BouncyCastle::Math::EC::ECCurve*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECCurve* __get_curve() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> __get_curve() const;

constexpr void __set_seed(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_seed() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_seed() const;

constexpr void __set_fieldIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_fieldIdentifier() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_fieldIdentifier() const;

static inline ::Org::BouncyCastle::Asn1::X9::X9Curve* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve) ;

/// @brief Method .ctor addr 0x11afeb0 size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9Curve* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method .ctor addr 0x11afeb8 size 0x17c virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9Curve* New_ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID*  fieldID, ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x11b0034 size 0x10 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID*  fieldID, ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9Curve* New_ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID*  fieldID, ::Org::BouncyCastle::Math::BigInteger*  order, ::Org::BouncyCastle::Math::BigInteger*  cofactor, ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x11b0044 size 0x75c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID*  fieldID, ::Org::BouncyCastle::Math::BigInteger*  order, ::Org::BouncyCastle::Math::BigInteger*  cofactor, ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_Curve addr 0x11b0a58 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve() ;

/// @brief Method GetSeed addr 0x11b0a60 size 0x5c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetSeed() ;

/// @brief Method ToAsn1Object addr 0x11b0abc size 0x218 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "X9Curve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X9Curve(X9Curve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X9Curve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X9Curve(X9Curve const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X9Curve()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9Curve, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9Curve*, "Org.BouncyCastle.Asn1.X9", "X9Curve");
