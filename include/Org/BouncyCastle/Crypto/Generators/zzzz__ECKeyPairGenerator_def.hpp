#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ECKeyPairGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class ECKeyPairGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::ECKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(899))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::ECKeyPairGenerator*
class CORDL_TYPE ECKeyPairGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field algorithm offset 0x10
 __declspec(property(get=__get_algorithm, put=__set_algorithm)) ::StringW  algorithm;

/// @brief Field parameters offset 0x18
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*  parameters;

/// @brief Field publicKeyParamSet offset 0x20
 __declspec(property(get=__get_publicKeyParamSet, put=__set_publicKeyParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  publicKeyParamSet;

/// @brief Field random offset 0x28
 __declspec(property(get=__get_random, put=__set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept;

constexpr void __set_algorithm(::StringW  value) ;

constexpr ::StringW& __get_algorithm() ;

constexpr ::StringW const& __get_algorithm() const;

constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*> __get_parameters() const;

constexpr void __set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_publicKeyParamSet() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_publicKeyParamSet() const;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_random() const;

static inline ::Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xef991c size 0x48 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator* New_ctor(::StringW  algorithm) ;

/// @brief Method .ctor addr 0xef9964 size 0xc0 virtual false final false
inline void _ctor(::StringW  algorithm) ;

/// @brief Method Init addr 0xef9a24 size 0x2a8 virtual true final true
inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters*  parameters) ;

/// @brief Method GenerateKeyPair addr 0xef9d40 size 0x314 virtual true final true
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair() ;

/// @brief Method CreateBasePointMultiplier addr 0xefa054 size 0x5c virtual true final false
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier() ;

/// @brief Method FindECCurveByOid addr 0xef9ccc size 0x74 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* FindECCurveByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetCorrespondingPublicKey addr 0xefa0b0 size 0xfc virtual false final false
static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* GetCorrespondingPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  privKey) ;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyPairGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECKeyPairGenerator(ECKeyPairGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyPairGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECKeyPairGenerator(ECKeyPairGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ECKeyPairGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "ECKeyPairGenerator");
