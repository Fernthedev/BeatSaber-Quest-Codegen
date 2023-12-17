#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Poly1305)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class Poly1305;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::Poly1305);
// Type: Org.BouncyCastle.Crypto.Macs::Poly1305
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(945))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::Poly1305*
class CORDL_TYPE Poly1305 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field BlockSize offset 0x0
static constexpr int32_t  BlockSize{static_cast<int32_t>(0x10)};

/// @brief Field cipher offset 0x10
 __declspec(property(get=__get_cipher, put=__set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher*  cipher;

/// @brief Field singleByte offset 0x18
 __declspec(property(get=__get_singleByte, put=__set_singleByte)) ::ArrayW<uint8_t,::Array<uint8_t>*>  singleByte;

/// @brief Field r0 offset 0x20
 __declspec(property(get=__get_r0, put=__set_r0)) uint32_t  r0;

/// @brief Field r1 offset 0x24
 __declspec(property(get=__get_r1, put=__set_r1)) uint32_t  r1;

/// @brief Field r2 offset 0x28
 __declspec(property(get=__get_r2, put=__set_r2)) uint32_t  r2;

/// @brief Field r3 offset 0x2c
 __declspec(property(get=__get_r3, put=__set_r3)) uint32_t  r3;

/// @brief Field r4 offset 0x30
 __declspec(property(get=__get_r4, put=__set_r4)) uint32_t  r4;

/// @brief Field s1 offset 0x34
 __declspec(property(get=__get_s1, put=__set_s1)) uint32_t  s1;

/// @brief Field s2 offset 0x38
 __declspec(property(get=__get_s2, put=__set_s2)) uint32_t  s2;

/// @brief Field s3 offset 0x3c
 __declspec(property(get=__get_s3, put=__set_s3)) uint32_t  s3;

/// @brief Field s4 offset 0x40
 __declspec(property(get=__get_s4, put=__set_s4)) uint32_t  s4;

/// @brief Field k0 offset 0x44
 __declspec(property(get=__get_k0, put=__set_k0)) uint32_t  k0;

/// @brief Field k1 offset 0x48
 __declspec(property(get=__get_k1, put=__set_k1)) uint32_t  k1;

/// @brief Field k2 offset 0x4c
 __declspec(property(get=__get_k2, put=__set_k2)) uint32_t  k2;

/// @brief Field k3 offset 0x50
 __declspec(property(get=__get_k3, put=__set_k3)) uint32_t  k3;

/// @brief Field currentBlock offset 0x58
 __declspec(property(get=__get_currentBlock, put=__set_currentBlock)) ::ArrayW<uint8_t,::Array<uint8_t>*>  currentBlock;

/// @brief Field currentBlockOffset offset 0x60
 __declspec(property(get=__get_currentBlockOffset, put=__set_currentBlockOffset)) int32_t  currentBlockOffset;

/// @brief Field h0 offset 0x64
 __declspec(property(get=__get_h0, put=__set_h0)) uint32_t  h0;

/// @brief Field h1 offset 0x68
 __declspec(property(get=__get_h1, put=__set_h1)) uint32_t  h1;

/// @brief Field h2 offset 0x6c
 __declspec(property(get=__get_h2, put=__set_h2)) uint32_t  h2;

/// @brief Field h3 offset 0x70
 __declspec(property(get=__get_h3, put=__set_h3)) uint32_t  h3;

/// @brief Field h4 offset 0x74
 __declspec(property(get=__get_h4, put=__set_h4)) uint32_t  h4;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr operator  ::Org::BouncyCastle::Crypto::IMac*() noexcept;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* __get_cipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> __get_cipher() const;

constexpr void __set_singleByte(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_singleByte() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_singleByte() const;

constexpr void __set_r0(uint32_t  value) ;

constexpr uint32_t& __get_r0() ;

constexpr uint32_t const& __get_r0() const;

constexpr void __set_r1(uint32_t  value) ;

constexpr uint32_t& __get_r1() ;

constexpr uint32_t const& __get_r1() const;

constexpr void __set_r2(uint32_t  value) ;

constexpr uint32_t& __get_r2() ;

constexpr uint32_t const& __get_r2() const;

constexpr void __set_r3(uint32_t  value) ;

constexpr uint32_t& __get_r3() ;

constexpr uint32_t const& __get_r3() const;

constexpr void __set_r4(uint32_t  value) ;

constexpr uint32_t& __get_r4() ;

constexpr uint32_t const& __get_r4() const;

constexpr void __set_s1(uint32_t  value) ;

constexpr uint32_t& __get_s1() ;

constexpr uint32_t const& __get_s1() const;

constexpr void __set_s2(uint32_t  value) ;

constexpr uint32_t& __get_s2() ;

constexpr uint32_t const& __get_s2() const;

constexpr void __set_s3(uint32_t  value) ;

constexpr uint32_t& __get_s3() ;

constexpr uint32_t const& __get_s3() const;

constexpr void __set_s4(uint32_t  value) ;

constexpr uint32_t& __get_s4() ;

constexpr uint32_t const& __get_s4() const;

constexpr void __set_k0(uint32_t  value) ;

constexpr uint32_t& __get_k0() ;

constexpr uint32_t const& __get_k0() const;

constexpr void __set_k1(uint32_t  value) ;

constexpr uint32_t& __get_k1() ;

constexpr uint32_t const& __get_k1() const;

constexpr void __set_k2(uint32_t  value) ;

constexpr uint32_t& __get_k2() ;

constexpr uint32_t const& __get_k2() const;

constexpr void __set_k3(uint32_t  value) ;

constexpr uint32_t& __get_k3() ;

constexpr uint32_t const& __get_k3() const;

constexpr void __set_currentBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_currentBlock() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_currentBlock() const;

constexpr void __set_currentBlockOffset(int32_t  value) ;

constexpr int32_t& __get_currentBlockOffset() ;

constexpr int32_t const& __get_currentBlockOffset() const;

constexpr void __set_h0(uint32_t  value) ;

constexpr uint32_t& __get_h0() ;

constexpr uint32_t const& __get_h0() const;

constexpr void __set_h1(uint32_t  value) ;

constexpr uint32_t& __get_h1() ;

constexpr uint32_t const& __get_h1() const;

constexpr void __set_h2(uint32_t  value) ;

constexpr uint32_t& __get_h2() ;

constexpr uint32_t const& __get_h2() const;

constexpr void __set_h3(uint32_t  value) ;

constexpr uint32_t& __get_h3() ;

constexpr uint32_t const& __get_h3() const;

constexpr void __set_h4(uint32_t  value) ;

constexpr uint32_t& __get_h4() ;

constexpr uint32_t const& __get_h4() const;

static inline ::Org::BouncyCastle::Crypto::Macs::Poly1305* New_ctor() ;

/// @brief Method .ctor addr 0xf0fb24 size 0x74 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Macs::Poly1305* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher) ;

/// @brief Method .ctor addr 0xf0fb98 size 0x14c virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher) ;

/// @brief Method Init addr 0xf0fce4 size 0x19c virtual true final true
inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method SetKey addr 0xf0fe80 size 0x344 virtual false final false
inline void SetKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce) ;

/// @brief Method get_AlgorithmName addr 0xf101d0 size 0xe8 virtual true final true
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0xf102b8 size 0x8 virtual true final true
inline int32_t GetMacSize() ;

/// @brief Method Update addr 0xf102c0 size 0x34 virtual true final true
inline void Update(uint8_t  input) ;

/// @brief Method BlockUpdate addr 0xf102f4 size 0xe8 virtual true final true
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  len) ;

/// @brief Method ProcessBlock addr 0xf103dc size 0x21c virtual false final false
inline void ProcessBlock() ;

/// @brief Method DoFinal addr 0xf10600 size 0x1e0 virtual true final true
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xf101c4 size 0xc virtual true final true
inline void Reset() ;

/// @brief Method mul32x32_64 addr 0xf105f8 size 0x8 virtual false final false
static inline uint64_t mul32x32_64(uint32_t  i1, uint32_t  i2) ;

// Ctor Parameters [CppParam { name: "", ty: "Poly1305", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Poly1305(Poly1305 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Poly1305", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Poly1305(Poly1305 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Poly1305()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::Poly1305, 0x78>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Poly1305);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Poly1305*, "Org.BouncyCastle.Crypto.Macs", "Poly1305");
