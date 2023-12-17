#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X448PrivateKeyParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class X448PublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class X448PrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::X448PrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1092))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::X448PrivateKeyParameters*
class CORDL_TYPE X448PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)]{};

/// @brief Field data offset 0x18
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

static inline void setStaticF_KeySize(int32_t  value) ;

static inline int32_t getStaticF_KeySize() ;

static inline void setStaticF_SecretSize(int32_t  value) ;

static inline int32_t getStaticF_SecretSize() ;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method .ctor addr 0xf3c144 size 0xa4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  random) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

/// @brief Method .ctor addr 0xf3c1e8 size 0xbc virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters* New_ctor(::System::IO::Stream*  input) ;

/// @brief Method .ctor addr 0xf3c2a4 size 0x108 virtual false final false
inline void _ctor(::System::IO::Stream*  input) ;

/// @brief Method Encode addr 0xf3c3ac size 0x84 virtual false final false
inline void Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

/// @brief Method GetEncoded addr 0xf3c430 size 0x5c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

/// @brief Method GeneratePublicKey addr 0xf3c48c size 0xac virtual false final false
inline ::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters* GeneratePublicKey() ;

/// @brief Method GenerateSecret addr 0xf3c5f4 size 0xf4 virtual false final false
inline void GenerateSecret(::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters*  publicKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

// Ctor Parameters [CppParam { name: "", ty: "X448PrivateKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X448PrivateKeyParameters(X448PrivateKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X448PrivateKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X448PrivateKeyParameters(X448PrivateKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X448PrivateKeyParameters()  = default;
public:


// Fields

// Static field KeySize

// Static field SecretSize


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "X448PrivateKeyParameters");
