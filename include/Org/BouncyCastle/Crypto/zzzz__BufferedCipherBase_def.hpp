#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedCipherBase)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedCipherBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::BufferedCipherBase);
// Type: Org.BouncyCastle.Crypto::BufferedCipherBase
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(965))
// CS Name: ::Org.BouncyCastle.Crypto::BufferedCipherBase*
class CORDL_TYPE BufferedCipherBase : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBufferedCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBufferedCipher*() noexcept;

static inline void setStaticF_EmptyBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_EmptyBuffer() ;

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method GetBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method GetOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetOutputSize(int32_t  inputLen) ;

/// @brief Method GetUpdateOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetUpdateOutputSize(int32_t  inputLen) ;

/// @brief Method ProcessByte addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessByte(uint8_t  input) ;

/// @brief Method ProcessByte addr 0xf19c34 size 0xb4 virtual true final false
inline int32_t ProcessByte(uint8_t  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method ProcessBytes addr 0xf19ce8 size 0x28 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method ProcessBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method ProcessBytes addr 0xf19d10 size 0x30 virtual true final false
inline int32_t ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method ProcessBytes addr 0xf19d40 size 0xb4 virtual true final false
inline int32_t ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal() ;

/// @brief Method DoFinal addr 0xf19df4 size 0x28 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method DoFinal addr 0xf19e1c size 0xb8 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method DoFinal addr 0xf19ed4 size 0x30 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method DoFinal addr 0xf19f04 size 0x5c virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Reset() ;

static inline ::Org::BouncyCastle::Crypto::BufferedCipherBase* New_ctor() ;

/// @brief Method .ctor addr 0xf19fc8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BufferedCipherBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedCipherBase(BufferedCipherBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedCipherBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedCipherBase(BufferedCipherBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BufferedCipherBase()  = default;
public:


// Fields

// Static field EmptyBuffer


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::BufferedCipherBase, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedCipherBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedCipherBase*, "Org.BouncyCastle.Crypto", "BufferedCipherBase");
