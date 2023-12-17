#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CMac)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class CMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::CMac);
// Type: Org.BouncyCastle.Crypto.Macs::CMac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(938))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::CMac*
class CORDL_TYPE CMac : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field CONSTANT_128 offset 0x0
static constexpr uint8_t  CONSTANT_128{static_cast<uint8_t>(0x87u)};

/// @brief Field CONSTANT_64 offset 0x0
static constexpr uint8_t  CONSTANT_64{static_cast<uint8_t>(0x1bu)};

/// @brief Field ZEROES offset 0x10
 __declspec(property(get=__get_ZEROES, put=__set_ZEROES)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ZEROES;

/// @brief Field mac offset 0x18
 __declspec(property(get=__get_mac, put=__set_mac)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mac;

/// @brief Field buf offset 0x20
 __declspec(property(get=__get_buf, put=__set_buf)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buf;

/// @brief Field bufOff offset 0x28
 __declspec(property(get=__get_bufOff, put=__set_bufOff)) int32_t  bufOff;

/// @brief Field cipher offset 0x30
 __declspec(property(get=__get_cipher, put=__set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher*  cipher;

/// @brief Field macSize offset 0x38
 __declspec(property(get=__get_macSize, put=__set_macSize)) int32_t  macSize;

/// @brief Field L offset 0x40
 __declspec(property(get=__get_L, put=__set_L)) ::ArrayW<uint8_t,::Array<uint8_t>*>  L;

/// @brief Field Lu offset 0x48
 __declspec(property(get=__get_Lu, put=__set_Lu)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Lu;

/// @brief Field Lu2 offset 0x50
 __declspec(property(get=__get_Lu2, put=__set_Lu2)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Lu2;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr operator  ::Org::BouncyCastle::Crypto::IMac*() noexcept;

constexpr void __set_ZEROES(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_ZEROES() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_ZEROES() const;

constexpr void __set_mac(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mac() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mac() const;

constexpr void __set_buf(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buf() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buf() const;

constexpr void __set_bufOff(int32_t  value) ;

constexpr int32_t& __get_bufOff() ;

constexpr int32_t const& __get_bufOff() const;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* __get_cipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> __get_cipher() const;

constexpr void __set_macSize(int32_t  value) ;

constexpr int32_t& __get_macSize() ;

constexpr int32_t const& __get_macSize() const;

constexpr void __set_L(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_L() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_L() const;

constexpr void __set_Lu(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Lu() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Lu() const;

constexpr void __set_Lu2(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Lu2() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Lu2() const;

static inline ::Org::BouncyCastle::Crypto::Macs::CMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher) ;

/// @brief Method .ctor addr 0xf0ad00 size 0xb4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher) ;

static inline ::Org::BouncyCastle::Crypto::Macs::CMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, int32_t  macSizeInBits) ;

/// @brief Method .ctor addr 0xf0adb4 size 0x454 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, int32_t  macSizeInBits) ;

/// @brief Method get_AlgorithmName addr 0xf0b208 size 0xa0 virtual true final true
inline ::StringW get_AlgorithmName() ;

/// @brief Method ShiftLeft addr 0xf0b2a8 size 0x84 virtual false final false
static inline int32_t ShiftLeft(::ArrayW<uint8_t,::Array<uint8_t>*>  block, ::ArrayW<uint8_t,::Array<uint8_t>*>  output) ;

/// @brief Method DoubleLu addr 0xf0b32c size 0xb8 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoubleLu(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method Init addr 0xf0b3e4 size 0x220 virtual true final true
inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method GetMacSize addr 0xf0b6c4 size 0x8 virtual true final true
inline int32_t GetMacSize() ;

/// @brief Method Update addr 0xf0b6cc size 0x118 virtual true final true
inline void Update(uint8_t  input) ;

/// @brief Method BlockUpdate addr 0xf0b7e4 size 0x294 virtual true final true
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  inBytes, int32_t  inOff, int32_t  len) ;

/// @brief Method DoFinal addr 0xf0ba78 size 0x220 virtual true final true
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method Reset addr 0xf0b604 size 0xc0 virtual true final true
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "CMac", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CMac(CMac && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMac", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMac(CMac const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CMac()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::CMac, 0x58>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::CMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::CMac*, "Org.BouncyCastle.Crypto.Macs", "CMac");
