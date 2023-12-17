#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NaccacheSternKeyPairGenerator)
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class NaccacheSternKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::NaccacheSternKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(914))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::NaccacheSternKeyPairGenerator*
class CORDL_TYPE NaccacheSternKeyPairGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field param offset 0x10
 __declspec(property(get=__get_param, put=__set_param)) ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*  param;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

static inline void setStaticF_smallPrimes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_smallPrimes() ;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters* __get_param() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*> __get_param() const;

/// @brief Method Init addr 0xeffa58 size 0xa4 virtual true final true
inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters*  parameters) ;

/// @brief Method GenerateKeyPair addr 0xeffafc size 0xf74 virtual true final true
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair() ;

/// @brief Method generatePrime addr 0xf01098 size 0x7c virtual false final false
static inline ::Org::BouncyCastle::Math::BigInteger* generatePrime(int32_t  bitLength, int32_t  certainty, ::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method permuteList addr 0xf00bf4 size 0x4a4 virtual false final false
static inline ::System::Collections::IList* permuteList(::System::Collections::IList*  arr, ::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method findFirstPrimes addr 0xf00a70 size 0x184 virtual false final false
static inline ::System::Collections::IList* findFirstPrimes(int32_t  count) ;

static inline ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xf011a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyPairGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NaccacheSternKeyPairGenerator(NaccacheSternKeyPairGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyPairGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NaccacheSternKeyPairGenerator(NaccacheSternKeyPairGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NaccacheSternKeyPairGenerator()  = default;
public:


// Fields

// Static field smallPrimes


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "NaccacheSternKeyPairGenerator");
