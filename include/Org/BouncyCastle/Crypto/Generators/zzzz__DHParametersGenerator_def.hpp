#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHParametersGenerator)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::DHParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(895))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DHParametersGenerator*
class CORDL_TYPE DHParametersGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field size offset 0x10
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field certainty offset 0x14
 __declspec(property(get=__get_certainty, put=__set_certainty)) int32_t  certainty;

/// @brief Field random offset 0x18
 __declspec(property(get=__get_random, put=__set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set_certainty(int32_t  value) ;

constexpr int32_t& __get_certainty() ;

constexpr int32_t const& __get_certainty() const;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_random() const;

/// @brief Method Init addr 0xef7880 size 0xc virtual true final false
inline void Init(int32_t  size, int32_t  certainty, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method GenerateParameters addr 0xef788c size 0x118 virtual true final false
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GenerateParameters() ;

static inline ::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xef7f70 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DHParametersGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DHParametersGenerator(DHParametersGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DHParametersGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DHParametersGenerator(DHParametersGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DHParametersGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "DHParametersGenerator");
