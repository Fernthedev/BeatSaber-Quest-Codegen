#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X931Rng)
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931Rng;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::X931Rng);
// Type: Org.BouncyCastle.Crypto.Prng::X931Rng
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1120))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::X931Rng*
class CORDL_TYPE X931Rng : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field BLOCK64_RESEED_MAX offset 0x0
static constexpr int64_t  BLOCK64_RESEED_MAX{static_cast<int64_t>(0x8000)};

/// @brief Field BLOCK128_RESEED_MAX offset 0x0
static constexpr int64_t  BLOCK128_RESEED_MAX{static_cast<int64_t>(0x800000)};

/// @brief Field BLOCK64_MAX_BITS_REQUEST offset 0x0
static constexpr int32_t  BLOCK64_MAX_BITS_REQUEST{static_cast<int32_t>(0x1000)};

/// @brief Field BLOCK128_MAX_BITS_REQUEST offset 0x0
static constexpr int32_t  BLOCK128_MAX_BITS_REQUEST{static_cast<int32_t>(0x40000)};

/// @brief Field mEngine offset 0x10
 __declspec(property(get=__get_mEngine, put=__set_mEngine)) ::Org::BouncyCastle::Crypto::IBlockCipher*  mEngine;

/// @brief Field mEntropySource offset 0x18
 __declspec(property(get=__get_mEntropySource, put=__set_mEntropySource)) ::Org::BouncyCastle::Crypto::IEntropySource*  mEntropySource;

/// @brief Field mDT offset 0x20
 __declspec(property(get=__get_mDT, put=__set_mDT)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mDT;

/// @brief Field mI offset 0x28
 __declspec(property(get=__get_mI, put=__set_mI)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mI;

/// @brief Field mR offset 0x30
 __declspec(property(get=__get_mR, put=__set_mR)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mR;

/// @brief Field mV offset 0x38
 __declspec(property(get=__get_mV, put=__set_mV)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mV;

/// @brief Field mReseedCounter offset 0x40
 __declspec(property(get=__get_mReseedCounter, put=__set_mReseedCounter)) int64_t  mReseedCounter;

 __declspec(property(get=get_EntropySource)) ::Org::BouncyCastle::Crypto::IEntropySource*  EntropySource;

constexpr void __set_mEngine(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* __get_mEngine() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> __get_mEngine() const;

constexpr void __set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IEntropySource* __get_mEntropySource() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySource*> __get_mEntropySource() const;

constexpr void __set_mDT(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mDT() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mDT() const;

constexpr void __set_mI(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mI() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mI() const;

constexpr void __set_mR(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mR() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mR() const;

constexpr void __set_mV(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mV() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mV() const;

constexpr void __set_mReseedCounter(int64_t  value) ;

constexpr int64_t& __get_mReseedCounter() ;

constexpr int64_t const& __get_mReseedCounter() const;

static inline ::Org::BouncyCastle::Crypto::Prng::X931Rng* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  engine, ::ArrayW<uint8_t,::Array<uint8_t>*>  dateTimeVector, ::Org::BouncyCastle::Crypto::IEntropySource*  entropySource) ;

/// @brief Method .ctor addr 0xf45390 size 0x1f8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  engine, ::ArrayW<uint8_t,::Array<uint8_t>*>  dateTimeVector, ::Org::BouncyCastle::Crypto::IEntropySource*  entropySource) ;

/// @brief Method Generate addr 0xf45588 size 0x488 virtual false final false
inline int32_t Generate(::ArrayW<uint8_t,::Array<uint8_t>*>  output, bool  predictionResistant) ;

/// @brief Method Reseed addr 0xf45ba0 size 0x18c virtual false final false
inline void Reseed() ;

/// @brief Method get_EntropySource addr 0xf45d2c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Crypto::IEntropySource* get_EntropySource() ;

/// @brief Method Process addr 0xf45a24 size 0x134 virtual false final false
inline void Process(::ArrayW<uint8_t,::Array<uint8_t>*>  res, ::ArrayW<uint8_t,::Array<uint8_t>*>  a, ::ArrayW<uint8_t,::Array<uint8_t>*>  b) ;

/// @brief Method Increment addr 0xf45b58 size 0x48 virtual false final false
inline void Increment(::ArrayW<uint8_t,::Array<uint8_t>*>  val) ;

/// @brief Method IsTooLarge addr 0xf45a10 size 0x14 virtual false final false
static inline bool IsTooLarge(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  maxBytes) ;

// Ctor Parameters [CppParam { name: "", ty: "X931Rng", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X931Rng(X931Rng && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X931Rng", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X931Rng(X931Rng const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X931Rng()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::X931Rng, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::X931Rng);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::X931Rng*, "Org.BouncyCastle.Crypto.Prng", "X931Rng");
