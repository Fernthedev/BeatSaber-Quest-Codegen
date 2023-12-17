#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoekeonEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class NoekeonEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::NoekeonEngine);
// Type: Org.BouncyCastle.Crypto.Engines::NoekeonEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(852))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::NoekeonEngine*
class CORDL_TYPE NoekeonEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Size offset 0x0
static constexpr int32_t  Size{static_cast<int32_t>(0x10)};

/// @brief Field k offset 0x10
 __declspec(property(get=__get_k, put=__set_k)) ::ArrayW<uint32_t,::Array<uint32_t>*>  k;

/// @brief Field _initialised offset 0x18
 __declspec(property(get=__get__initialised, put=__set__initialised)) bool  _initialised;

/// @brief Field _forEncryption offset 0x19
 __declspec(property(get=__get__forEncryption, put=__set__forEncryption)) bool  _forEncryption;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

static inline void setStaticF_RoundConstants(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_RoundConstants() ;

constexpr void __set_k(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_k() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_k() const;

constexpr void __set__initialised(bool  value) ;

constexpr bool& __get__initialised() ;

constexpr bool const& __get__initialised() const;

constexpr void __set__forEncryption(bool  value) ;

constexpr bool& __get__forEncryption() ;

constexpr bool const& __get__forEncryption() const;

static inline ::Org::BouncyCastle::Crypto::Engines::NoekeonEngine* New_ctor() ;

/// @brief Method .ctor addr 0xed7970 size 0x60 virtual false final false
inline void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xed79d0 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xed7a10 size 0x8 virtual true final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xed7a18 size 0x8 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method Init addr 0xed7a20 size 0x268 virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method ProcessBlock addr 0xed7c88 size 0x160 virtual true final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xed83d8 size 0x4 virtual true final false
inline void Reset() ;

/// @brief Method EncryptBlock addr 0xed8100 size 0x2d8 virtual false final false
inline int32_t EncryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method DecryptBlock addr 0xed7de8 size 0x318 virtual false final false
inline int32_t DecryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

// Ctor Parameters [CppParam { name: "", ty: "NoekeonEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoekeonEngine(NoekeonEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoekeonEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoekeonEngine(NoekeonEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoekeonEngine()  = default;
public:


// Fields

// Static field RoundConstants


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::NoekeonEngine, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::NoekeonEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::NoekeonEngine*, "Org.BouncyCastle.Crypto.Engines", "NoekeonEngine");
