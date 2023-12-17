#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyParameters_def.hpp"
CORDL_MODULE_EXPORT(Gost3410PrivateKeyParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410PrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410PrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1052))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1054))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Gost3410PrivateKeyParameters*
class CORDL_TYPE Gost3410PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters)]{};

/// @brief Field x offset 0x28
 __declspec(property(get=__get_x, put=__set_x)) ::Org::BouncyCastle::Math::BigInteger*  x;

 __declspec(property(get=get_X)) ::Org::BouncyCastle::Math::BigInteger*  X;

constexpr void __set_x(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_x() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_x() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  x, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*  parameters) ;

/// @brief Method .ctor addr 0xf3641c size 0xdc virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  x, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  x, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  publicKeyParamSet) ;

/// @brief Method .ctor addr 0xf364f8 size 0xe4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  x, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  publicKeyParamSet) ;

/// @brief Method get_X addr 0xf365dc size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_X() ;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410PrivateKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gost3410PrivateKeyParameters(Gost3410PrivateKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410PrivateKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gost3410PrivateKeyParameters(Gost3410PrivateKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Gost3410PrivateKeyParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410PrivateKeyParameters");
