#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaKeyParameters)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::RsaKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1080))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::RsaKeyParameters*
class CORDL_TYPE RsaKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)]{};

/// @brief Field modulus offset 0x18
 __declspec(property(get=__get_modulus, put=__set_modulus)) ::Org::BouncyCastle::Math::BigInteger*  modulus;

/// @brief Field exponent offset 0x20
 __declspec(property(get=__get_exponent, put=__set_exponent)) ::Org::BouncyCastle::Math::BigInteger*  exponent;

 __declspec(property(get=get_Modulus)) ::Org::BouncyCastle::Math::BigInteger*  Modulus;

 __declspec(property(get=get_Exponent)) ::Org::BouncyCastle::Math::BigInteger*  Exponent;

static inline void setStaticF_SmallPrimesProduct(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_SmallPrimesProduct() ;

constexpr void __set_modulus(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_modulus() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_modulus() const;

constexpr void __set_exponent(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_exponent() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_exponent() const;

/// @brief Method Validate addr 0xf396f0 size 0x16c virtual false final false
static inline ::Org::BouncyCastle::Math::BigInteger* Validate(::Org::BouncyCastle::Math::BigInteger*  modulus) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* New_ctor(bool  isPrivate, ::Org::BouncyCastle::Math::BigInteger*  modulus, ::Org::BouncyCastle::Math::BigInteger*  exponent) ;

/// @brief Method .ctor addr 0xf3985c size 0x1c8 virtual false final false
inline void _ctor(bool  isPrivate, ::Org::BouncyCastle::Math::BigInteger*  modulus, ::Org::BouncyCastle::Math::BigInteger*  exponent) ;

/// @brief Method get_Modulus addr 0xf39a24 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus() ;

/// @brief Method get_Exponent addr 0xf39a2c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Exponent() ;

/// @brief Method Equals addr 0xf39a34 size 0xe0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0xf39b14 size 0x78 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RsaKeyParameters(RsaKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RsaKeyParameters(RsaKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RsaKeyParameters()  = default;
public:


// Fields

// Static field SmallPrimesProduct


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaKeyParameters");
