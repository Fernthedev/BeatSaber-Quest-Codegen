#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyGenerationParameters;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ECKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1037))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECKeyParameters*
class CORDL_TYPE ECKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)]{};

/// @brief Field algorithm offset 0x18
 __declspec(property(get=__get_algorithm, put=__set_algorithm)) ::StringW  algorithm;

/// @brief Field parameters offset 0x20
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*  parameters;

/// @brief Field publicKeyParamSet offset 0x28
 __declspec(property(get=__get_publicKeyParamSet, put=__set_publicKeyParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  publicKeyParamSet;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_Parameters)) ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*  Parameters;

 __declspec(property(get=get_PublicKeyParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  PublicKeyParamSet;

static inline void setStaticF_algorithms(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_algorithms() ;

constexpr void __set_algorithm(::StringW  value) ;

constexpr ::StringW& __get_algorithm() ;

constexpr ::StringW const& __get_algorithm() const;

constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*> __get_parameters() const;

constexpr void __set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_publicKeyParamSet() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_publicKeyParamSet() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* New_ctor(::StringW  algorithm, bool  isPrivate, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*  parameters) ;

/// @brief Method .ctor addr 0xf331d4 size 0xfc virtual false final false
inline void _ctor(::StringW  algorithm, bool  isPrivate, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* New_ctor(::StringW  algorithm, bool  isPrivate, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  publicKeyParamSet) ;

/// @brief Method .ctor addr 0xf333f4 size 0x108 virtual false final false
inline void _ctor(::StringW  algorithm, bool  isPrivate, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  publicKeyParamSet) ;

/// @brief Method get_AlgorithmName addr 0xf334fc size 0x8 virtual false final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_Parameters addr 0xf33504 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* get_Parameters() ;

/// @brief Method get_PublicKeyParamSet addr 0xf3350c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet() ;

/// @brief Method Equals addr 0xf33514 size 0xa4 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0xf335b8 size 0x58 virtual false final false
inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*  other) ;

/// @brief Method GetHashCode addr 0xf33610 size 0x4c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method CreateKeyGenerationParameters addr 0xf3365c size 0x94 virtual false final false
inline ::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters* CreateKeyGenerationParameters(::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method VerifyAlgorithmName addr 0xf332d0 size 0x124 virtual false final false
static inline ::StringW VerifyAlgorithmName(::StringW  algorithm) ;

/// @brief Method LookupParameters addr 0xf330b4 size 0x110 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* LookupParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  publicKeyParamSet) ;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECKeyParameters(ECKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECKeyParameters(ECKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ECKeyParameters()  = default;
public:


// Fields

// Static field algorithms


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECKeyParameters");
