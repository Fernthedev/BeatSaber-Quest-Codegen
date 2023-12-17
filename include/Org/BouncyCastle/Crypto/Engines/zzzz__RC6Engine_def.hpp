#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC6Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC6Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC6Engine);
// Type: Org.BouncyCastle.Crypto.Engines::RC6Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(859))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RC6Engine*
class CORDL_TYPE RC6Engine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _S offset 0x10
 __declspec(property(get=__get__S, put=__set__S)) ::ArrayW<int32_t,::Array<int32_t>*>  _S;

/// @brief Field forEncryption offset 0x18
 __declspec(property(get=__get_forEncryption, put=__set_forEncryption)) bool  forEncryption;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

static inline void setStaticF_wordSize(int32_t  value) ;

static inline int32_t getStaticF_wordSize() ;

static inline void setStaticF_bytesPerWord(int32_t  value) ;

static inline int32_t getStaticF_bytesPerWord() ;

static inline void setStaticF__noRounds(int32_t  value) ;

static inline int32_t getStaticF__noRounds() ;

constexpr void __set__S(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__S() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__S() const;

static inline void setStaticF_P32(int32_t  value) ;

static inline int32_t getStaticF_P32() ;

static inline void setStaticF_Q32(int32_t  value) ;

static inline int32_t getStaticF_Q32() ;

static inline void setStaticF_LGW(int32_t  value) ;

static inline int32_t getStaticF_LGW() ;

constexpr void __set_forEncryption(bool  value) ;

constexpr bool& __get_forEncryption() ;

constexpr bool const& __get_forEncryption() const;

static inline ::Org::BouncyCastle::Crypto::Engines::RC6Engine* New_ctor() ;

/// @brief Method .ctor addr 0xedc01c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xedc024 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xedc064 size 0x8 virtual true final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xedc06c size 0x5c virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method Init addr 0xedc0c8 size 0x140 virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method ProcessBlock addr 0xedc4bc size 0x150 virtual true final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xedcbbc size 0x4 virtual true final false
inline void Reset() ;

/// @brief Method SetKey addr 0xedc208 size 0x2b4 virtual false final false
inline void SetKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method EncryptBlock addr 0xedc8e0 size 0x2dc virtual false final false
inline int32_t EncryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method DecryptBlock addr 0xedc60c size 0x2d4 virtual false final false
inline int32_t DecryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method RotateLeft addr 0xedcbc0 size 0x80 virtual false final false
inline int32_t RotateLeft(int32_t  x, int32_t  y) ;

/// @brief Method RotateRight addr 0xedcdb0 size 0x80 virtual false final false
inline int32_t RotateRight(int32_t  x, int32_t  y) ;

/// @brief Method BytesToWord addr 0xedcc40 size 0xb0 virtual false final false
inline int32_t BytesToWord(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  srcOff) ;

/// @brief Method WordToBytes addr 0xedccf0 size 0xc0 virtual false final false
inline void WordToBytes(int32_t  word, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  dstOff) ;

// Ctor Parameters [CppParam { name: "", ty: "RC6Engine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RC6Engine(RC6Engine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RC6Engine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RC6Engine(RC6Engine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RC6Engine()  = default;
public:


// Fields

// Static field wordSize

// Static field bytesPerWord

// Static field _noRounds

// Static field P32

// Static field Q32

// Static field LGW


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC6Engine, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC6Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC6Engine*, "Org.BouncyCastle.Crypto.Engines", "RC6Engine");
