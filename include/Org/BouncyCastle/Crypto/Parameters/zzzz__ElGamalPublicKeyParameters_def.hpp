#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalPublicKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalPublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalPublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1047))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1050))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ElGamalPublicKeyParameters*
class CORDL_TYPE ElGamalPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters)]{};

/// @brief Field y offset 0x20
 __declspec(property(get=__get_y, put=__set_y)) ::Org::BouncyCastle::Math::BigInteger*  y;

 __declspec(property(get=get_Y)) ::Org::BouncyCastle::Math::BigInteger*  Y;

constexpr void __set_y(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_y() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_y() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*  parameters) ;

/// @brief Method .ctor addr 0xf35bc8 size 0x84 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*  parameters) ;

/// @brief Method get_Y addr 0xf35c4c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Y() ;

/// @brief Method Equals addr 0xf35c54 size 0x9c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0xf35cf0 size 0x58 virtual false final false
inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*  other) ;

/// @brief Method GetHashCode addr 0xf35d48 size 0x40 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ElGamalPublicKeyParameters(ElGamalPublicKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElGamalPublicKeyParameters(ElGamalPublicKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ElGamalPublicKeyParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalPublicKeyParameters");
