#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultVerifierResult)
namespace Org::BouncyCastle::Crypto {
class IVerifier;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultVerifierResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult);
// Type: Org.BouncyCastle.Crypto.Operators::DefaultVerifierResult
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1003))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::DefaultVerifierResult*
class CORDL_TYPE DefaultVerifierResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field mSigner offset 0x10
 __declspec(property(get=__get_mSigner, put=__set_mSigner)) ::Org::BouncyCastle::Crypto::ISigner*  mSigner;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifier"
constexpr operator  ::Org::BouncyCastle::Crypto::IVerifier*() noexcept;

constexpr void __set_mSigner(::Org::BouncyCastle::Crypto::ISigner*  value) ;

constexpr ::Org::BouncyCastle::Crypto::ISigner* __get_mSigner() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> __get_mSigner() const;

static inline ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult* New_ctor(::Org::BouncyCastle::Crypto::ISigner*  signer) ;

/// @brief Method .ctor addr 0xf2df28 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::ISigner*  signer) ;

/// @brief Method IsVerified addr 0xf2df50 size 0xac virtual true final true
inline bool IsVerified(::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

/// @brief Method IsVerified addr 0xf2dffc size 0x88 virtual true final true
inline bool IsVerified(::ArrayW<uint8_t,::Array<uint8_t>*>  sig, int32_t  sigOff, int32_t  sigLen) ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultVerifierResult(DefaultVerifierResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultVerifierResult(DefaultVerifierResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultVerifierResult()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*, "Org.BouncyCastle.Crypto.Operators", "DefaultVerifierResult");
