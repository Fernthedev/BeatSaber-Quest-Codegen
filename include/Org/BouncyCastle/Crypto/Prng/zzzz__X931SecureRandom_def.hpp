#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X931SecureRandom)
namespace Org::BouncyCastle::Crypto::Prng {
class X931Rng;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandom;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom);
// Type: Org.BouncyCastle.Crypto.Prng::X931SecureRandom
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1111))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1121))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::X931SecureRandom*
class CORDL_TYPE X931SecureRandom : public ::Org::BouncyCastle::Security::SecureRandom {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Org::BouncyCastle::Security::SecureRandom)]{};

/// @brief Field mPredictionResistant offset 0x28
 __declspec(property(get=__get_mPredictionResistant, put=__set_mPredictionResistant)) bool  mPredictionResistant;

/// @brief Field mRandomSource offset 0x30
 __declspec(property(get=__get_mRandomSource, put=__set_mRandomSource)) ::Org::BouncyCastle::Security::SecureRandom*  mRandomSource;

/// @brief Field mDrbg offset 0x38
 __declspec(property(get=__get_mDrbg, put=__set_mDrbg)) ::Org::BouncyCastle::Crypto::Prng::X931Rng*  mDrbg;

constexpr void __set_mPredictionResistant(bool  value) ;

constexpr bool& __get_mPredictionResistant() ;

constexpr bool const& __get_mPredictionResistant() const;

constexpr void __set_mRandomSource(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_mRandomSource() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_mRandomSource() const;

constexpr void __set_mDrbg(::Org::BouncyCastle::Crypto::Prng::X931Rng*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Prng::X931Rng* __get_mDrbg() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Prng::X931Rng*> __get_mDrbg() const;

static inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  randomSource, ::Org::BouncyCastle::Crypto::Prng::X931Rng*  drbg, bool  predictionResistant) ;

/// @brief Method .ctor addr 0xf45d34 size 0x80 virtual false final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  randomSource, ::Org::BouncyCastle::Crypto::Prng::X931Rng*  drbg, bool  predictionResistant) ;

/// @brief Method SetSeed addr 0xf45db4 size 0xb4 virtual true final false
inline void SetSeed(::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method SetSeed addr 0xf45e68 size 0xb4 virtual true final false
inline void SetSeed(int64_t  seed) ;

/// @brief Method NextBytes addr 0xf45f1c size 0xf0 virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method NextBytes addr 0xf4600c size 0x98 virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method GenerateSeed addr 0xf460a4 size 0x1c virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateSeed(int32_t  numBytes) ;

// Ctor Parameters [CppParam { name: "", ty: "X931SecureRandom", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X931SecureRandom(X931SecureRandom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X931SecureRandom", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X931SecureRandom(X931SecureRandom const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X931SecureRandom()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*, "Org.BouncyCastle.Crypto.Prng", "X931SecureRandom");
