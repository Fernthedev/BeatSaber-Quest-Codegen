#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
CORDL_MODULE_EXPORT(DsaKeyGenerationParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DsaKeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1026))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DsaKeyGenerationParameters*
class CORDL_TYPE DsaKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Crypto::KeyGenerationParameters)]{};

/// @brief Field parameters offset 0x20
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*  parameters;

 __declspec(property(get=get_Parameters)) ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*  Parameters;

constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::DsaParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DsaParameters*> __get_parameters() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  random, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*  parameters) ;

/// @brief Method .ctor addr 0xf318b4 size 0x4c virtual false final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  random, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters*  parameters) ;

/// @brief Method get_Parameters addr 0xf31900 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* get_Parameters() ;

// Ctor Parameters [CppParam { name: "", ty: "DsaKeyGenerationParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DsaKeyGenerationParameters(DsaKeyGenerationParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DsaKeyGenerationParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DsaKeyGenerationParameters(DsaKeyGenerationParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DsaKeyGenerationParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaKeyGenerationParameters");
