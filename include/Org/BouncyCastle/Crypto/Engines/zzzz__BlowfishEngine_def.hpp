#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlowfishEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class BlowfishEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine);
// Type: Org.BouncyCastle.Crypto.Engines::BlowfishEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(829))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::BlowfishEngine*
class CORDL_TYPE BlowfishEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field BLOCK_SIZE offset 0x0
static constexpr int32_t  BLOCK_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field S0 offset 0x10
 __declspec(property(get=__get_S0, put=__set_S0)) ::ArrayW<uint32_t,::Array<uint32_t>*>  S0;

/// @brief Field S1 offset 0x18
 __declspec(property(get=__get_S1, put=__set_S1)) ::ArrayW<uint32_t,::Array<uint32_t>*>  S1;

/// @brief Field S2 offset 0x20
 __declspec(property(get=__get_S2, put=__set_S2)) ::ArrayW<uint32_t,::Array<uint32_t>*>  S2;

/// @brief Field S3 offset 0x28
 __declspec(property(get=__get_S3, put=__set_S3)) ::ArrayW<uint32_t,::Array<uint32_t>*>  S3;

/// @brief Field P offset 0x30
 __declspec(property(get=__get_P, put=__set_P)) ::ArrayW<uint32_t,::Array<uint32_t>*>  P;

/// @brief Field encrypting offset 0x38
 __declspec(property(get=__get_encrypting, put=__set_encrypting)) bool  encrypting;

/// @brief Field workingKey offset 0x40
 __declspec(property(get=__get_workingKey, put=__set_workingKey)) ::ArrayW<uint8_t,::Array<uint8_t>*>  workingKey;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

static inline void setStaticF_KP(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KP() ;

static inline void setStaticF_KS0(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KS0() ;

static inline void setStaticF_KS1(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KS1() ;

static inline void setStaticF_KS2(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KS2() ;

static inline void setStaticF_KS3(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KS3() ;

static inline void setStaticF_ROUNDS(int32_t  value) ;

static inline int32_t getStaticF_ROUNDS() ;

static inline void setStaticF_SBOX_SK(int32_t  value) ;

static inline int32_t getStaticF_SBOX_SK() ;

static inline void setStaticF_P_SZ(int32_t  value) ;

static inline int32_t getStaticF_P_SZ() ;

constexpr void __set_S0(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_S0() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_S0() const;

constexpr void __set_S1(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_S1() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_S1() const;

constexpr void __set_S2(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_S2() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_S2() const;

constexpr void __set_S3(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_S3() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_S3() const;

constexpr void __set_P(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_P() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_P() const;

constexpr void __set_encrypting(bool  value) ;

constexpr bool& __get_encrypting() ;

constexpr bool const& __get_encrypting() const;

constexpr void __set_workingKey(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_workingKey() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_workingKey() const;

static inline ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine* New_ctor() ;

/// @brief Method .ctor addr 0xebc7f8 size 0xe8 virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0xebc8e0 size 0x144 virtual true final true
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xebcd2c size 0x40 virtual true final true
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xebcd6c size 0x8 virtual true final true
inline bool get_IsPartialBlockOkay() ;

/// @brief Method ProcessBlock addr 0xebcd74 size 0x138 virtual true final true
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xebd1e0 size 0x4 virtual true final true
inline void Reset() ;

/// @brief Method GetBlockSize addr 0xebd1e4 size 0x8 virtual true final true
inline int32_t GetBlockSize() ;

/// @brief Method F addr 0xebd1ec size 0xa0 virtual false final false
inline uint32_t F(uint32_t  x) ;

/// @brief Method ProcessTable addr 0xebd28c size 0x1a8 virtual false final false
inline void ProcessTable(uint32_t  xl, uint32_t  xr, ::ArrayW<uint32_t,::Array<uint32_t>*>  table) ;

/// @brief Method SetKey addr 0xebca24 size 0x308 virtual false final false
inline void SetKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method EncryptBlock addr 0xebceac size 0x1a4 virtual false final false
inline void EncryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  srcIndex, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  dstIndex) ;

/// @brief Method DecryptBlock addr 0xebd050 size 0x190 virtual false final false
inline void DecryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  srcIndex, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  dstIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "BlowfishEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlowfishEngine(BlowfishEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlowfishEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlowfishEngine(BlowfishEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BlowfishEngine()  = default;
public:


// Fields

// Static field KP

// Static field KS0

// Static field KS1

// Static field KS2

// Static field KS3

// Static field ROUNDS

// Static field SBOX_SK

// Static field P_SZ


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*, "Org.BouncyCastle.Crypto.Engines", "BlowfishEngine");
