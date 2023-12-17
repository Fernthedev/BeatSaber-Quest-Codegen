#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaKeyGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::RsaKeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1079))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::RsaKeyGenerationParameters*
class CORDL_TYPE RsaKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Crypto::KeyGenerationParameters)]{};

/// @brief Field publicExponent offset 0x20
 __declspec(property(get=__get_publicExponent, put=__set_publicExponent)) ::Org::BouncyCastle::Math::BigInteger*  publicExponent;

/// @brief Field certainty offset 0x28
 __declspec(property(get=__get_certainty, put=__set_certainty)) int32_t  certainty;

 __declspec(property(get=get_PublicExponent)) ::Org::BouncyCastle::Math::BigInteger*  PublicExponent;

 __declspec(property(get=get_Certainty)) int32_t  Certainty;

constexpr void __set_publicExponent(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_publicExponent() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_publicExponent() const;

constexpr void __set_certainty(int32_t  value) ;

constexpr int32_t& __get_certainty() ;

constexpr int32_t const& __get_certainty() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  publicExponent, ::Org::BouncyCastle::Security::SecureRandom*  random, int32_t  strength, int32_t  certainty) ;

/// @brief Method .ctor addr 0xf395a4 size 0x38 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  publicExponent, ::Org::BouncyCastle::Security::SecureRandom*  random, int32_t  strength, int32_t  certainty) ;

/// @brief Method get_PublicExponent addr 0xf395dc size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent() ;

/// @brief Method get_Certainty addr 0xf395e4 size 0x8 virtual false final false
inline int32_t get_Certainty() ;

/// @brief Method Equals addr 0xf395ec size 0xb4 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0xf396a0 size 0x50 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyGenerationParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RsaKeyGenerationParameters(RsaKeyGenerationParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyGenerationParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RsaKeyGenerationParameters(RsaKeyGenerationParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RsaKeyGenerationParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaKeyGenerationParameters");
