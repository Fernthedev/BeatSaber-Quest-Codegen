#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9ECParameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9Curve;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9ECParameters);
// Type: Org.BouncyCastle.Asn1.X9::X9ECParameters
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(443))
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9ECParameters*
class CORDL_TYPE X9ECParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field fieldID offset 0x10
 __declspec(property(get=__get_fieldID, put=__set_fieldID)) ::Org::BouncyCastle::Asn1::X9::X9FieldID*  fieldID;

/// @brief Field curve offset 0x18
 __declspec(property(get=__get_curve, put=__set_curve)) ::Org::BouncyCastle::Math::EC::ECCurve*  curve;

/// @brief Field g offset 0x20
 __declspec(property(get=__get_g, put=__set_g)) ::Org::BouncyCastle::Asn1::X9::X9ECPoint*  g;

/// @brief Field n offset 0x28
 __declspec(property(get=__get_n, put=__set_n)) ::Org::BouncyCastle::Math::BigInteger*  n;

/// @brief Field h offset 0x30
 __declspec(property(get=__get_h, put=__set_h)) ::Org::BouncyCastle::Math::BigInteger*  h;

/// @brief Field seed offset 0x38
 __declspec(property(get=__get_seed, put=__set_seed)) ::ArrayW<uint8_t,::Array<uint8_t>*>  seed;

 __declspec(property(get=get_Curve)) ::Org::BouncyCastle::Math::EC::ECCurve*  Curve;

 __declspec(property(get=get_G)) ::Org::BouncyCastle::Math::EC::ECPoint*  G;

 __declspec(property(get=get_N)) ::Org::BouncyCastle::Math::BigInteger*  N;

 __declspec(property(get=get_H)) ::Org::BouncyCastle::Math::BigInteger*  H;

 __declspec(property(get=get_CurveEntry)) ::Org::BouncyCastle::Asn1::X9::X9Curve*  CurveEntry;

 __declspec(property(get=get_FieldIDEntry)) ::Org::BouncyCastle::Asn1::X9::X9FieldID*  FieldIDEntry;

 __declspec(property(get=get_BaseEntry)) ::Org::BouncyCastle::Asn1::X9::X9ECPoint*  BaseEntry;

constexpr void __set_fieldID(::Org::BouncyCastle::Asn1::X9::X9FieldID*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X9::X9FieldID* __get_fieldID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::X9FieldID*> __get_fieldID() const;

constexpr void __set_curve(::Org::BouncyCastle::Math::EC::ECCurve*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECCurve* __get_curve() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> __get_curve() const;

constexpr void __set_g(::Org::BouncyCastle::Asn1::X9::X9ECPoint*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X9::X9ECPoint* __get_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::X9ECPoint*> __get_g() const;

constexpr void __set_n(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_n() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_n() const;

constexpr void __set_h(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_h() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_h() const;

constexpr void __set_seed(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_seed() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_seed() const;

/// @brief Method GetInstance addr 0x11b0d04 size 0xa0 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x11b113c size 0x3dc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n) ;

/// @brief Method .ctor addr 0x11b15f8 size 0xc virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Asn1::X9::X9ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h) ;

/// @brief Method .ctor addr 0x11adbcc size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Asn1::X9::X9ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h) ;

/// @brief Method .ctor addr 0x11b16a8 size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h, ::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method .ctor addr 0x11b1604 size 0xa4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h, ::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Asn1::X9::X9ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h, ::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method .ctor addr 0x11ac454 size 0x354 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Asn1::X9::X9ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h, ::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method get_Curve addr 0x11b1b58 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve() ;

/// @brief Method get_G addr 0x11b1b60 size 0x18 virtual false final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_G() ;

/// @brief Method get_N addr 0x11b1b78 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_N() ;

/// @brief Method get_H addr 0x11b1b80 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_H() ;

/// @brief Method GetSeed addr 0x11b1b88 size 0x8 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetSeed() ;

/// @brief Method get_CurveEntry addr 0x11b1b90 size 0x6c virtual false final false
inline ::Org::BouncyCastle::Asn1::X9::X9Curve* get_CurveEntry() ;

/// @brief Method get_FieldIDEntry addr 0x11b1bfc size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* get_FieldIDEntry() ;

/// @brief Method get_BaseEntry addr 0x11b1c04 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* get_BaseEntry() ;

/// @brief Method ToAsn1Object addr 0x11b1c0c size 0x28c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "X9ECParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X9ECParameters(X9ECParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X9ECParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X9ECParameters(X9ECParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X9ECParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9ECParameters, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9ECParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9ECParameters*, "Org.BouncyCastle.Asn1.X9", "X9ECParameters");
