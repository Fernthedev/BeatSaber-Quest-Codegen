#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDomainParameters)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ECDomainParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1033))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECDomainParameters*
class CORDL_TYPE ECDomainParameters : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field curve offset 0x10
 __declspec(property(get=__get_curve, put=__set_curve)) ::Org::BouncyCastle::Math::EC::ECCurve*  curve;

/// @brief Field seed offset 0x18
 __declspec(property(get=__get_seed, put=__set_seed)) ::ArrayW<uint8_t,::Array<uint8_t>*>  seed;

/// @brief Field g offset 0x20
 __declspec(property(get=__get_g, put=__set_g)) ::Org::BouncyCastle::Math::EC::ECPoint*  g;

/// @brief Field n offset 0x28
 __declspec(property(get=__get_n, put=__set_n)) ::Org::BouncyCastle::Math::BigInteger*  n;

/// @brief Field h offset 0x30
 __declspec(property(get=__get_h, put=__set_h)) ::Org::BouncyCastle::Math::BigInteger*  h;

/// @brief Field hInv offset 0x38
 __declspec(property(get=__get_hInv, put=__set_hInv)) ::Org::BouncyCastle::Math::BigInteger*  hInv;

 __declspec(property(get=get_Curve)) ::Org::BouncyCastle::Math::EC::ECCurve*  Curve;

 __declspec(property(get=get_G)) ::Org::BouncyCastle::Math::EC::ECPoint*  G;

 __declspec(property(get=get_N)) ::Org::BouncyCastle::Math::BigInteger*  N;

 __declspec(property(get=get_H)) ::Org::BouncyCastle::Math::BigInteger*  H;

 __declspec(property(get=get_HInv)) ::Org::BouncyCastle::Math::BigInteger*  HInv;

constexpr void __set_curve(::Org::BouncyCastle::Math::EC::ECCurve*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECCurve* __get_curve() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> __get_curve() const;

constexpr void __set_seed(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_seed() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_seed() const;

constexpr void __set_g(::Org::BouncyCastle::Math::EC::ECPoint*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint* __get_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> __get_g() const;

constexpr void __set_n(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_n() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_n() const;

constexpr void __set_h(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_h() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_h() const;

constexpr void __set_hInv(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_hInv() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_hInv() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters*  x9) ;

/// @brief Method .ctor addr 0xf32624 size 0x48 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters*  x9) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n) ;

/// @brief Method .ctor addr 0xf327b4 size 0x8c virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h) ;

/// @brief Method .ctor addr 0xf32840 size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h, ::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method .ctor addr 0xf3266c size 0x148 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECPoint*  g, ::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  h, ::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method get_Curve addr 0xf32978 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve() ;

/// @brief Method get_G addr 0xf32980 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_G() ;

/// @brief Method get_N addr 0xf32988 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_N() ;

/// @brief Method get_H addr 0xf32990 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_H() ;

/// @brief Method get_HInv addr 0xf32998 size 0xc4 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_HInv() ;

/// @brief Method GetSeed addr 0xf32a5c size 0x5c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetSeed() ;

/// @brief Method Equals addr 0xf32ab8 size 0xa4 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0xf32b5c size 0x88 virtual true final false
inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*  other) ;

/// @brief Method GetHashCode addr 0xf32be4 size 0x7c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ValidatePrivateScalar addr 0xf32c60 size 0x138 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* ValidatePrivateScalar(::Org::BouncyCastle::Math::BigInteger*  d) ;

/// @brief Method ValidatePublicPoint addr 0xf32d98 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePublicPoint(::Org::BouncyCastle::Math::EC::ECPoint*  q) ;

/// @brief Method ValidatePublicPoint addr 0xf32848 size 0x130 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePublicPoint(::Org::BouncyCastle::Math::EC::ECCurve*  c, ::Org::BouncyCastle::Math::EC::ECPoint*  q) ;

// Ctor Parameters [CppParam { name: "", ty: "ECDomainParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECDomainParameters(ECDomainParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECDomainParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECDomainParameters(ECDomainParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ECDomainParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters");
