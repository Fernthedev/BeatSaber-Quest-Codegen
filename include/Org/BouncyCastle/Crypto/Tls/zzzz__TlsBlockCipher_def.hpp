#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsBlockCipher)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher);
// Type: Org.BouncyCastle.Crypto.Tls::TlsBlockCipher
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1288))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsBlockCipher*
class CORDL_TYPE TlsBlockCipher : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field context offset 0x10
 __declspec(property(get=__get_context, put=__set_context)) ::Org::BouncyCastle::Crypto::Tls::TlsContext*  context;

/// @brief Field randomData offset 0x18
 __declspec(property(get=__get_randomData, put=__set_randomData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  randomData;

/// @brief Field useExplicitIV offset 0x20
 __declspec(property(get=__get_useExplicitIV, put=__set_useExplicitIV)) bool  useExplicitIV;

/// @brief Field encryptThenMac offset 0x21
 __declspec(property(get=__get_encryptThenMac, put=__set_encryptThenMac)) bool  encryptThenMac;

/// @brief Field encryptCipher offset 0x28
 __declspec(property(get=__get_encryptCipher, put=__set_encryptCipher)) ::Org::BouncyCastle::Crypto::IBlockCipher*  encryptCipher;

/// @brief Field decryptCipher offset 0x30
 __declspec(property(get=__get_decryptCipher, put=__set_decryptCipher)) ::Org::BouncyCastle::Crypto::IBlockCipher*  decryptCipher;

/// @brief Field mWriteMac offset 0x38
 __declspec(property(get=__get_mWriteMac, put=__set_mWriteMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac*  mWriteMac;

/// @brief Field mReadMac offset 0x40
 __declspec(property(get=__get_mReadMac, put=__set_mReadMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac*  mReadMac;

 __declspec(property(get=get_WriteMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac*  WriteMac;

 __declspec(property(get=get_ReadMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac*  ReadMac;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

constexpr void __set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* __get_context() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> __get_context() const;

constexpr void __set_randomData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_randomData() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_randomData() const;

constexpr void __set_useExplicitIV(bool  value) ;

constexpr bool& __get_useExplicitIV() ;

constexpr bool const& __get_useExplicitIV() const;

constexpr void __set_encryptThenMac(bool  value) ;

constexpr bool& __get_encryptThenMac() ;

constexpr bool const& __get_encryptThenMac() const;

constexpr void __set_encryptCipher(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* __get_encryptCipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> __get_encryptCipher() const;

constexpr void __set_decryptCipher(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* __get_decryptCipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> __get_decryptCipher() const;

constexpr void __set_mWriteMac(::Org::BouncyCastle::Crypto::Tls::TlsMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* __get_mWriteMac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> __get_mWriteMac() const;

constexpr void __set_mReadMac(::Org::BouncyCastle::Crypto::Tls::TlsMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* __get_mReadMac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> __get_mReadMac() const;

/// @brief Method get_WriteMac addr 0xf99d50 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsMac* get_WriteMac() ;

/// @brief Method get_ReadMac addr 0xf99d58 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsMac* get_ReadMac() ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::IBlockCipher*  clientWriteCipher, ::Org::BouncyCastle::Crypto::IBlockCipher*  serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest*  clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest*  serverWriteDigest, int32_t  cipherKeySize) ;

/// @brief Method .ctor addr 0xf99d60 size 0xb9c virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::IBlockCipher*  clientWriteCipher, ::Org::BouncyCastle::Crypto::IBlockCipher*  serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest*  clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest*  serverWriteDigest, int32_t  cipherKeySize) ;

/// @brief Method GetPlaintextLimit addr 0xf9a8fc size 0x100 virtual true final false
inline int32_t GetPlaintextLimit(int32_t  ciphertextLimit) ;

/// @brief Method EncodePlaintext addr 0xf9a9fc size 0x654 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> EncodePlaintext(int64_t  seqNo, uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  plaintext, int32_t  offset, int32_t  len) ;

/// @brief Method DecodeCiphertext addr 0xf9b050 size 0x4b0 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeCiphertext(int64_t  seqNo, uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  ciphertext, int32_t  offset, int32_t  len) ;

/// @brief Method CheckPaddingConstantTime addr 0xf9b500 size 0x16c virtual true final false
inline int32_t CheckPaddingConstantTime(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len, int32_t  blockSize, int32_t  macSize) ;

/// @brief Method ChooseExtraPadBlocks addr 0xf9b66c size 0xa8 virtual true final false
inline int32_t ChooseExtraPadBlocks(::Org::BouncyCastle::Security::SecureRandom*  r, int32_t  max) ;

/// @brief Method LowestBitSet addr 0xf9b714 size 0x28 virtual true final false
inline int32_t LowestBitSet(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "TlsBlockCipher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsBlockCipher(TlsBlockCipher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsBlockCipher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsBlockCipher(TlsBlockCipher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsBlockCipher()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*, "Org.BouncyCastle.Crypto.Tls", "TlsBlockCipher");
