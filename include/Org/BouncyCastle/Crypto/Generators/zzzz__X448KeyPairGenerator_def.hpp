#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X448KeyPairGenerator)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class X448KeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::X448KeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(926))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::X448KeyPairGenerator*
class CORDL_TYPE X448KeyPairGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field random offset 0x10
 __declspec(property(get=__get_random, put=__set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_random() const;

/// @brief Method Init addr 0xf07024 size 0x1c virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters*  parameters) ;

/// @brief Method GenerateKeyPair addr 0xf07040 size 0xb0 virtual true final false
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair() ;

static inline ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xf070f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X448KeyPairGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X448KeyPairGenerator(X448KeyPairGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X448KeyPairGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X448KeyPairGenerator(X448KeyPairGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X448KeyPairGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "X448KeyPairGenerator");
