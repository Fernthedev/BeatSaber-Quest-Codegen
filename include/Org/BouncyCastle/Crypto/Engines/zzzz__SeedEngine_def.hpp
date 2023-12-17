#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SeedEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SeedEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SeedEngine);
// Type: Org.BouncyCastle.Crypto.Engines::SeedEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(867))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::SeedEngine*
class CORDL_TYPE SeedEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field BlockSize offset 0x0
static constexpr int32_t  BlockSize{static_cast<int32_t>(0x10)};

/// @brief Field wKey offset 0x10
 __declspec(property(get=__get_wKey, put=__set_wKey)) ::ArrayW<int32_t,::Array<int32_t>*>  wKey;

/// @brief Field forEncryption offset 0x18
 __declspec(property(get=__get_forEncryption, put=__set_forEncryption)) bool  forEncryption;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

static inline void setStaticF_SS0(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SS0() ;

static inline void setStaticF_SS1(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SS1() ;

static inline void setStaticF_SS2(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SS2() ;

static inline void setStaticF_SS3(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SS3() ;

static inline void setStaticF_KC(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KC() ;

constexpr void __set_wKey(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_wKey() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_wKey() const;

constexpr void __set_forEncryption(bool  value) ;

constexpr bool& __get_forEncryption() ;

constexpr bool const& __get_forEncryption() const;

/// @brief Method Init addr 0xee118c size 0xac virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xee13e0 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xee1420 size 0x8 virtual true final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xee1428 size 0x8 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xee1430 size 0x1f8 virtual true final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  inBuf, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBuf, int32_t  outOff) ;

/// @brief Method Reset addr 0xee1740 size 0x4 virtual true final false
inline void Reset() ;

/// @brief Method createWorkingKey addr 0xee1238 size 0x1a8 virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> createWorkingKey(::ArrayW<uint8_t,::Array<uint8_t>*>  inKey) ;

/// @brief Method extractW1 addr 0xee174c size 0x8 virtual false final false
inline int32_t extractW1(int64_t  lVal) ;

/// @brief Method extractW0 addr 0xee1744 size 0x8 virtual false final false
inline int32_t extractW0(int64_t  lVal) ;

/// @brief Method rotateLeft8 addr 0xee1848 size 0x8 virtual false final false
inline int64_t rotateLeft8(int64_t  x) ;

/// @brief Method rotateRight8 addr 0xee1840 size 0x8 virtual false final false
inline int64_t rotateRight8(int64_t  x) ;

/// @brief Method bytesToLong addr 0xee1628 size 0x5c virtual false final false
inline int64_t bytesToLong(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  srcOff) ;

/// @brief Method longToBytes addr 0xee16e8 size 0x58 virtual false final false
inline void longToBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  dest, int32_t  destOff, int64_t  value) ;

/// @brief Method G addr 0xee1754 size 0xec virtual false final false
inline int32_t G(int32_t  x) ;

/// @brief Method F addr 0xee1684 size 0x64 virtual false final false
inline int64_t F(int32_t  ki0, int32_t  ki1, int64_t  r) ;

/// @brief Method phaseCalc1 addr 0xee1890 size 0x20 virtual false final false
inline int32_t phaseCalc1(int32_t  r0, int32_t  ki0, int32_t  r1, int32_t  ki1) ;

/// @brief Method phaseCalc2 addr 0xee1850 size 0x40 virtual false final false
inline int32_t phaseCalc2(int32_t  r0, int32_t  ki0, int32_t  r1, int32_t  ki1) ;

static inline ::Org::BouncyCastle::Crypto::Engines::SeedEngine* New_ctor() ;

/// @brief Method .ctor addr 0xee1a44 size 0x1008 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SeedEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SeedEngine(SeedEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeedEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeedEngine(SeedEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SeedEngine()  = default;
public:


// Fields

// Static field SS0

// Static field SS1

// Static field SS2

// Static field SS3

// Static field KC


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SeedEngine, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SeedEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SeedEngine*, "Org.BouncyCastle.Crypto.Engines", "SeedEngine");
