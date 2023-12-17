#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaSigner)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class DsaSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::DsaSigner);
// Type: Org.BouncyCastle.Crypto.Signers::DsaSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1127))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::DsaSigner*
class CORDL_TYPE DsaSigner : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field kCalculator offset 0x10
 __declspec(property(get=__get_kCalculator, put=__set_kCalculator)) ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*  kCalculator;

/// @brief Field key offset 0x18
 __declspec(property(get=__get_key, put=__set_key)) ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*  key;

/// @brief Field random offset 0x20
 __declspec(property(get=__get_random, put=__set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_Order)) ::Org::BouncyCastle::Math::BigInteger*  Order;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsaExt"
constexpr operator  ::Org::BouncyCastle::Crypto::IDsaExt*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsa"
constexpr operator  ::Org::BouncyCastle::Crypto::IDsa*() noexcept;

constexpr void __set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* __get_kCalculator() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*> __get_kCalculator() const;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* __get_key() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*> __get_key() const;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_random() const;

static inline ::Org::BouncyCastle::Crypto::Signers::DsaSigner* New_ctor() ;

/// @brief Method .ctor addr 0xf472e8 size 0x70 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Signers::DsaSigner* New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*  kCalculator) ;

/// @brief Method .ctor addr 0xf47358 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*  kCalculator) ;

/// @brief Method get_AlgorithmName addr 0xf47384 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xf473c4 size 0x28c virtual true final false
inline void Init(bool  forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_Order addr 0xf47650 size 0x24 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Order() ;

/// @brief Method GenerateSignature addr 0xf47674 size 0x3b8 virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> GenerateSignature(::ArrayW<uint8_t,::Array<uint8_t>*>  message) ;

/// @brief Method VerifySignature addr 0xf47a2c size 0x21c virtual true final false
inline bool VerifySignature(::ArrayW<uint8_t,::Array<uint8_t>*>  message, ::Org::BouncyCastle::Math::BigInteger*  r, ::Org::BouncyCastle::Math::BigInteger*  s) ;

/// @brief Method CalculateE addr 0xf47c48 size 0xe0 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculateE(::Org::BouncyCastle::Math::BigInteger*  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  message) ;

/// @brief Method InitSecureRandom addr 0xf47d28 size 0x70 virtual true final false
inline ::Org::BouncyCastle::Security::SecureRandom* InitSecureRandom(bool  needed, ::Org::BouncyCastle::Security::SecureRandom*  provided) ;

// Ctor Parameters [CppParam { name: "", ty: "DsaSigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DsaSigner(DsaSigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DsaSigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DsaSigner(DsaSigner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DsaSigner()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::DsaSigner, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::DsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::DsaSigner*, "Org.BouncyCastle.Crypto.Signers", "DsaSigner");
