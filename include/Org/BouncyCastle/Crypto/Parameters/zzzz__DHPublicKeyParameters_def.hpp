#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHPublicKeyParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DHPublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1024))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DHPublicKeyParameters*
class CORDL_TYPE DHPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters)]{};

/// @brief Field y offset 0x28
 __declspec(property(get=__get_y, put=__set_y)) ::Org::BouncyCastle::Math::BigInteger*  y;

 __declspec(property(get=get_Y)) ::Org::BouncyCastle::Math::BigInteger*  Y;

constexpr void __set_y(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_y() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_y() const;

/// @brief Method Validate addr 0xf30fb4 size 0x258 virtual false final false
static inline ::Org::BouncyCastle::Math::BigInteger* Validate(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  dhParams) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  parameters) ;

/// @brief Method .ctor addr 0xf313c4 size 0x38 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algorithmOid) ;

/// @brief Method .ctor addr 0xf313fc size 0x4c virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*  parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algorithmOid) ;

/// @brief Method get_Y addr 0xf31448 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Y() ;

/// @brief Method Equals addr 0xf31450 size 0x9c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0xf314ec size 0x58 virtual false final false
inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*  other) ;

/// @brief Method GetHashCode addr 0xf31544 size 0x40 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Legendre addr 0xf3120c size 0x1b8 virtual false final false
static inline int32_t Legendre(::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b) ;

// Ctor Parameters [CppParam { name: "", ty: "DHPublicKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DHPublicKeyParameters(DHPublicKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DHPublicKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DHPublicKeyParameters(DHPublicKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DHPublicKeyParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHPublicKeyParameters");
