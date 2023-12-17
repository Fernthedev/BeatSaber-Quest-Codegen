#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacCFBBlockCipher)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class MacCFBBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher);
// Type: Org.BouncyCastle.Crypto.Macs::MacCFBBlockCipher
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(936))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::MacCFBBlockCipher*
class CORDL_TYPE MacCFBBlockCipher : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field IV offset 0x10
 __declspec(property(get=__get_IV, put=__set_IV)) ::ArrayW<uint8_t,::Array<uint8_t>*>  IV;

/// @brief Field cfbV offset 0x18
 __declspec(property(get=__get_cfbV, put=__set_cfbV)) ::ArrayW<uint8_t,::Array<uint8_t>*>  cfbV;

/// @brief Field cfbOutV offset 0x20
 __declspec(property(get=__get_cfbOutV, put=__set_cfbOutV)) ::ArrayW<uint8_t,::Array<uint8_t>*>  cfbOutV;

/// @brief Field blockSize offset 0x28
 __declspec(property(get=__get_blockSize, put=__set_blockSize)) int32_t  blockSize;

/// @brief Field cipher offset 0x30
 __declspec(property(get=__get_cipher, put=__set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher*  cipher;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

constexpr void __set_IV(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_IV() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_IV() const;

constexpr void __set_cfbV(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_cfbV() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_cfbV() const;

constexpr void __set_cfbOutV(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_cfbOutV() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_cfbOutV() const;

constexpr void __set_blockSize(int32_t  value) ;

constexpr int32_t& __get_blockSize() ;

constexpr int32_t const& __get_blockSize() const;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* __get_cipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> __get_cipher() const;

static inline ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, int32_t  bitBlockSize) ;

/// @brief Method .ctor addr 0xf09de4 size 0x1e0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, int32_t  bitBlockSize) ;

/// @brief Method Init addr 0xf09fc4 size 0x13c virtual true final true
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xf0a1bc size 0x104 virtual true final true
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xf0a2c0 size 0x8 virtual true final true
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xf0a2c8 size 0x8 virtual true final true
inline int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xf0a2d0 size 0x258 virtual true final true
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method Reset addr 0xf0a100 size 0xbc virtual true final true
inline void Reset() ;

/// @brief Method GetMacBlock addr 0xf0a528 size 0xbc virtual false final false
inline void GetMacBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  mac) ;

// Ctor Parameters [CppParam { name: "", ty: "MacCFBBlockCipher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacCFBBlockCipher(MacCFBBlockCipher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacCFBBlockCipher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacCFBBlockCipher(MacCFBBlockCipher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MacCFBBlockCipher()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*, "Org.BouncyCastle.Crypto.Macs", "MacCFBBlockCipher");
