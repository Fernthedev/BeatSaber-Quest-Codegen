#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3410DigestSigner)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Gost3410DigestSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner);
// Type: Org.BouncyCastle.Crypto.Signers::Gost3410DigestSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1140))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::Gost3410DigestSigner*
class CORDL_TYPE Gost3410DigestSigner : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field digest offset 0x10
 __declspec(property(get=__get_digest, put=__set_digest)) ::Org::BouncyCastle::Crypto::IDigest*  digest;

/// @brief Field dsaSigner offset 0x18
 __declspec(property(get=__get_dsaSigner, put=__set_dsaSigner)) ::Org::BouncyCastle::Crypto::IDsa*  dsaSigner;

/// @brief Field size offset 0x20
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field halfSize offset 0x24
 __declspec(property(get=__get_halfSize, put=__set_halfSize)) int32_t  halfSize;

/// @brief Field forSigning offset 0x28
 __declspec(property(get=__get_forSigning, put=__set_forSigning)) bool  forSigning;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr operator  ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest* __get_digest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> __get_digest() const;

constexpr void __set_dsaSigner(::Org::BouncyCastle::Crypto::IDsa*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDsa* __get_dsaSigner() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDsa*> __get_dsaSigner() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set_halfSize(int32_t  value) ;

constexpr int32_t& __get_halfSize() ;

constexpr int32_t const& __get_halfSize() const;

constexpr void __set_forSigning(bool  value) ;

constexpr bool& __get_forSigning() ;

constexpr bool const& __get_forSigning() const;

static inline ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsa*  signer, ::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method .ctor addr 0xf4cfdc size 0xcc virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IDsa*  signer, ::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method get_AlgorithmName addr 0xf4d0a8 size 0x140 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xf4d1e8 size 0x228 virtual true final false
inline void Init(bool  forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method Update addr 0xf4d410 size 0xac virtual true final false
inline void Update(uint8_t  input) ;

/// @brief Method BlockUpdate addr 0xf4d4bc size 0xc4 virtual true final false
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method GenerateSignature addr 0xf4d580 size 0x3b8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xf4d938 size 0x364 virtual true final false
inline bool VerifySignature(::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

/// @brief Method Reset addr 0xf4dc9c size 0xa4 virtual true final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410DigestSigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gost3410DigestSigner(Gost3410DigestSigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410DigestSigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gost3410DigestSigner(Gost3410DigestSigner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Gost3410DigestSigner()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*, "Org.BouncyCastle.Crypto.Signers", "Gost3410DigestSigner");
