#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IdeaEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class IdeaEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::IdeaEngine);
// Type: Org.BouncyCastle.Crypto.Engines::IdeaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(848))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::IdeaEngine*
class CORDL_TYPE IdeaEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field BLOCK_SIZE offset 0x0
static constexpr int32_t  BLOCK_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field workingKey offset 0x10
 __declspec(property(get=__get_workingKey, put=__set_workingKey)) ::ArrayW<int32_t,::Array<int32_t>*>  workingKey;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

constexpr void __set_workingKey(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_workingKey() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_workingKey() const;

static inline void setStaticF_MASK(int32_t  value) ;

static inline int32_t getStaticF_MASK() ;

static inline void setStaticF_BASE(int32_t  value) ;

static inline int32_t getStaticF_BASE() ;

static inline ::Org::BouncyCastle::Crypto::Engines::IdeaEngine* New_ctor() ;

/// @brief Method .ctor addr 0xed35e0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0xed35e8 size 0x120 virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xed3730 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xed3770 size 0x8 virtual true final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xed3778 size 0x8 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xed3780 size 0x118 virtual true final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xed3b30 size 0x4 virtual true final false
inline void Reset() ;

/// @brief Method BytesToWord addr 0xed3b34 size 0x40 virtual false final false
inline int32_t BytesToWord(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff) ;

/// @brief Method WordToBytes addr 0xed3b74 size 0x48 virtual false final false
inline void WordToBytes(int32_t  word, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method Mul addr 0xed3bbc size 0xdc virtual false final false
inline int32_t Mul(int32_t  x, int32_t  y) ;

/// @brief Method IdeaFunc addr 0xed3898 size 0x298 virtual false final false
inline void IdeaFunc(::ArrayW<int32_t,::Array<int32_t>*>  workingKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method ExpandKey addr 0xed3c98 size 0x1f8 virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> ExpandKey(::ArrayW<uint8_t,::Array<uint8_t>*>  uKey) ;

/// @brief Method MulInv addr 0xed3e90 size 0x118 virtual false final false
inline int32_t MulInv(int32_t  x) ;

/// @brief Method AddInv addr 0xed3fa8 size 0x64 virtual false final false
inline int32_t AddInv(int32_t  x) ;

/// @brief Method InvertKey addr 0xed400c size 0x288 virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> InvertKey(::ArrayW<int32_t,::Array<int32_t>*>  inKey) ;

/// @brief Method GenerateWorkingKey addr 0xed3708 size 0x28 virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GenerateWorkingKey(bool  forEncryption, ::ArrayW<uint8_t,::Array<uint8_t>*>  userKey) ;

// Ctor Parameters [CppParam { name: "", ty: "IdeaEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IdeaEngine(IdeaEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdeaEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdeaEngine(IdeaEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IdeaEngine()  = default;
public:


// Fields

// Static field MASK

// Static field BASE


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::IdeaEngine, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::IdeaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::IdeaEngine*, "Org.BouncyCastle.Crypto.Engines", "IdeaEngine");
