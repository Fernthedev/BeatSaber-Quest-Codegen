#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalPrivateKeyParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalPrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalPrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1047))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1049))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ElGamalPrivateKeyParameters*
class CORDL_TYPE ElGamalPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters)]{};

/// @brief Field x offset 0x20
 __declspec(property(get=__get_x, put=__set_x)) ::Org::BouncyCastle::Math::BigInteger*  x;

 __declspec(property(get=get_X)) ::Org::BouncyCastle::Math::BigInteger*  X;

constexpr void __set_x(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_x() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_x() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  x, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*  parameters) ;

/// @brief Method .ctor addr 0xf35a04 size 0x88 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  x, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*  parameters) ;

/// @brief Method get_X addr 0xf35a8c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_X() ;

/// @brief Method Equals addr 0xf35a94 size 0x9c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0xf35b30 size 0x58 virtual false final false
inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*  other) ;

/// @brief Method GetHashCode addr 0xf35b88 size 0x40 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPrivateKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ElGamalPrivateKeyParameters(ElGamalPrivateKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPrivateKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElGamalPrivateKeyParameters(ElGamalPrivateKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ElGamalPrivateKeyParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalPrivateKeyParameters");
