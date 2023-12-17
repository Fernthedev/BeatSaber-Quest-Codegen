#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ed25519phSigner)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Ed25519phSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner);
// Type: Org.BouncyCastle.Crypto.Signers::Ed25519phSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1133))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::Ed25519phSigner*
class CORDL_TYPE Ed25519phSigner : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field prehash offset 0x10
 __declspec(property(get=__get_prehash, put=__set_prehash)) ::Org::BouncyCastle::Crypto::IDigest*  prehash;

/// @brief Field context offset 0x18
 __declspec(property(get=__get_context, put=__set_context)) ::ArrayW<uint8_t,::Array<uint8_t>*>  context;

/// @brief Field forSigning offset 0x20
 __declspec(property(get=__get_forSigning, put=__set_forSigning)) bool  forSigning;

/// @brief Field privateKey offset 0x28
 __declspec(property(get=__get_privateKey, put=__set_privateKey)) ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*  privateKey;

/// @brief Field publicKey offset 0x30
 __declspec(property(get=__get_publicKey, put=__set_publicKey)) ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*  publicKey;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr operator  ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

constexpr void __set_prehash(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest* __get_prehash() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> __get_prehash() const;

constexpr void __set_context(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_context() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_context() const;

constexpr void __set_forSigning(bool  value) ;

constexpr bool& __get_forSigning() ;

constexpr bool const& __get_forSigning() const;

constexpr void __set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* __get_privateKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*> __get_privateKey() const;

constexpr void __set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* __get_publicKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*> __get_publicKey() const;

static inline ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  context) ;

/// @brief Method .ctor addr 0xf4a588 size 0xa8 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  context) ;

/// @brief Method get_AlgorithmName addr 0xf4a630 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xf4a670 size 0xd4 virtual true final false
inline void Init(bool  forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method Update addr 0xf4a7e8 size 0xac virtual true final false
inline void Update(uint8_t  b) ;

/// @brief Method BlockUpdate addr 0xf4a894 size 0xc4 virtual true final false
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method GenerateSignature addr 0xf4a958 size 0x23c virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xf4ab94 size 0x1ac virtual true final false
inline bool VerifySignature(::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

/// @brief Method Reset addr 0xf4a744 size 0xa4 virtual true final true
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519phSigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ed25519phSigner(Ed25519phSigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519phSigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ed25519phSigner(Ed25519phSigner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Ed25519phSigner()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*, "Org.BouncyCastle.Crypto.Signers", "Ed25519phSigner");
