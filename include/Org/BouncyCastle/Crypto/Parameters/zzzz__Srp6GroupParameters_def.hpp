#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Srp6GroupParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Srp6GroupParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1086))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Srp6GroupParameters*
class CORDL_TYPE Srp6GroupParameters : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field n offset 0x10
 __declspec(property(get=__get_n, put=__set_n)) ::Org::BouncyCastle::Math::BigInteger*  n;

/// @brief Field g offset 0x18
 __declspec(property(get=__get_g, put=__set_g)) ::Org::BouncyCastle::Math::BigInteger*  g;

 __declspec(property(get=get_G)) ::Org::BouncyCastle::Math::BigInteger*  G;

 __declspec(property(get=get_N)) ::Org::BouncyCastle::Math::BigInteger*  N;

constexpr void __set_n(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_n() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_n() const;

constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_g() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  N, ::Org::BouncyCastle::Math::BigInteger*  g) ;

/// @brief Method .ctor addr 0xf3b83c size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  N, ::Org::BouncyCastle::Math::BigInteger*  g) ;

/// @brief Method get_G addr 0xf3b868 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_G() ;

/// @brief Method get_N addr 0xf3b870 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_N() ;

// Ctor Parameters [CppParam { name: "", ty: "Srp6GroupParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Srp6GroupParameters(Srp6GroupParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Srp6GroupParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Srp6GroupParameters(Srp6GroupParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Srp6GroupParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, "Org.BouncyCastle.Crypto.Parameters", "Srp6GroupParameters");
