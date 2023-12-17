#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DHKeyPairGenerator)
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHKeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::DHKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(894))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DHKeyPairGenerator*
class CORDL_TYPE DHKeyPairGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field param offset 0x10
 __declspec(property(get=__get_param, put=__set_param)) ::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*  param;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* __get_param() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*> __get_param() const;

/// @brief Method Init addr 0xef7698 size 0xa4 virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters*  parameters) ;

/// @brief Method GenerateKeyPair addr 0xef773c size 0x13c virtual true final false
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair() ;

static inline ::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xef7878 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyPairGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DHKeyPairGenerator(DHKeyPairGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyPairGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DHKeyPairGenerator(DHKeyPairGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DHKeyPairGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "DHKeyPairGenerator");
