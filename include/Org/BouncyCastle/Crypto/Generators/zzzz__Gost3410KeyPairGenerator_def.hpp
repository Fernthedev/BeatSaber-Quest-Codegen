#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Gost3410KeyPairGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Gost3410KeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::Gost3410KeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(904))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::Gost3410KeyPairGenerator*
class CORDL_TYPE Gost3410KeyPairGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field param offset 0x10
 __declspec(property(get=__get_param, put=__set_param)) ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*  param;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters* __get_param() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*> __get_param() const;

/// @brief Method Init addr 0xefa688 size 0x120 virtual true final true
inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters*  parameters) ;

/// @brief Method GenerateKeyPair addr 0xefa7a8 size 0x224 virtual true final true
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair() ;

static inline ::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xefa9cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyPairGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gost3410KeyPairGenerator(Gost3410KeyPairGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyPairGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gost3410KeyPairGenerator(Gost3410KeyPairGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Gost3410KeyPairGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "Gost3410KeyPairGenerator");
