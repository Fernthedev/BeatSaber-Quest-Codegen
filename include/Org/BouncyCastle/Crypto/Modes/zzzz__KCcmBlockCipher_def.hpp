#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KCcmBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class KCcmBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::KCcmBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(972))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::KCcmBlockCipher*
class CORDL_TYPE KCcmBlockCipher : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field engine offset 0x10
 __declspec(property(get=__get_engine, put=__set_engine)) ::Org::BouncyCastle::Crypto::IBlockCipher*  engine;

/// @brief Field macSize offset 0x18
 __declspec(property(get=__get_macSize, put=__set_macSize)) int32_t  macSize;

/// @brief Field forEncryption offset 0x1c
 __declspec(property(get=__get_forEncryption, put=__set_forEncryption)) bool  forEncryption;

/// @brief Field initialAssociatedText offset 0x20
 __declspec(property(get=__get_initialAssociatedText, put=__set_initialAssociatedText)) ::ArrayW<uint8_t,::Array<uint8_t>*>  initialAssociatedText;

/// @brief Field mac offset 0x28
 __declspec(property(get=__get_mac, put=__set_mac)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mac;

/// @brief Field macBlock offset 0x30
 __declspec(property(get=__get_macBlock, put=__set_macBlock)) ::ArrayW<uint8_t,::Array<uint8_t>*>  macBlock;

/// @brief Field nonce offset 0x38
 __declspec(property(get=__get_nonce, put=__set_nonce)) ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce;

/// @brief Field G1 offset 0x40
 __declspec(property(get=__get_G1, put=__set_G1)) ::ArrayW<uint8_t,::Array<uint8_t>*>  G1;

/// @brief Field buffer offset 0x48
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field s offset 0x50
 __declspec(property(get=__get_s, put=__set_s)) ::ArrayW<uint8_t,::Array<uint8_t>*>  s;

/// @brief Field counter offset 0x58
 __declspec(property(get=__get_counter, put=__set_counter)) ::ArrayW<uint8_t,::Array<uint8_t>*>  counter;

/// @brief Field associatedText offset 0x60
 __declspec(property(get=__get_associatedText, put=__set_associatedText)) ::System::IO::MemoryStream*  associatedText;

/// @brief Field data offset 0x68
 __declspec(property(get=__get_data, put=__set_data)) ::System::IO::MemoryStream*  data;

/// @brief Field Nb_ offset 0x70
 __declspec(property(get=__get_Nb_, put=__set_Nb_)) int32_t  Nb_;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

static inline void setStaticF_BYTES_IN_INT(int32_t  value) ;

static inline int32_t getStaticF_BYTES_IN_INT() ;

static inline void setStaticF_BITS_IN_BYTE(int32_t  value) ;

static inline int32_t getStaticF_BITS_IN_BYTE() ;

static inline void setStaticF_MAX_MAC_BIT_LENGTH(int32_t  value) ;

static inline int32_t getStaticF_MAX_MAC_BIT_LENGTH() ;

static inline void setStaticF_MIN_MAC_BIT_LENGTH(int32_t  value) ;

static inline int32_t getStaticF_MIN_MAC_BIT_LENGTH() ;

constexpr void __set_engine(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* __get_engine() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> __get_engine() const;

constexpr void __set_macSize(int32_t  value) ;

constexpr int32_t& __get_macSize() ;

constexpr int32_t const& __get_macSize() const;

constexpr void __set_forEncryption(bool  value) ;

constexpr bool& __get_forEncryption() ;

constexpr bool const& __get_forEncryption() const;

constexpr void __set_initialAssociatedText(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_initialAssociatedText() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_initialAssociatedText() const;

constexpr void __set_mac(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mac() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mac() const;

constexpr void __set_macBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_macBlock() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_macBlock() const;

constexpr void __set_nonce(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_nonce() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_nonce() const;

constexpr void __set_G1(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_G1() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_G1() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_s(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_s() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_s() const;

constexpr void __set_counter(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_counter() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_counter() const;

constexpr void __set_associatedText(::System::IO::MemoryStream*  value) ;

constexpr ::System::IO::MemoryStream* __get_associatedText() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> __get_associatedText() const;

constexpr void __set_data(::System::IO::MemoryStream*  value) ;

constexpr ::System::IO::MemoryStream* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> __get_data() const;

constexpr void __set_Nb_(int32_t  value) ;

constexpr int32_t& __get_Nb_() ;

constexpr int32_t const& __get_Nb_() const;

/// @brief Method setNb addr 0xf20d60 size 0x78 virtual false final false
inline void setNb(int32_t  Nb) ;

static inline ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  engine) ;

/// @brief Method .ctor addr 0xf20dd8 size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  engine) ;

static inline ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  engine, int32_t  Nb) ;

/// @brief Method .ctor addr 0xf20de0 size 0x4b8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  engine, int32_t  Nb) ;

/// @brief Method Init addr 0xf21298 size 0x408 virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xf216a0 size 0xc0 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetBlockSize addr 0xf21760 size 0xa4 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method GetUnderlyingCipher addr 0xf21804 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher() ;

/// @brief Method ProcessAadByte addr 0xf2180c size 0x24 virtual true final false
inline void ProcessAadByte(uint8_t  input) ;

/// @brief Method ProcessAadBytes addr 0xf21830 size 0x24 virtual true final false
inline void ProcessAadBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  len) ;

/// @brief Method ProcessAAD addr 0xf21854 size 0x8b0 virtual false final false
inline void ProcessAAD(::ArrayW<uint8_t,::Array<uint8_t>*>  assocText, int32_t  assocOff, int32_t  assocLen, int32_t  dataLen) ;

/// @brief Method ProcessByte addr 0xf223c8 size 0x2c virtual true final false
inline int32_t ProcessByte(uint8_t  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method ProcessBytes addr 0xf223f4 size 0xa0 virtual true final false
inline int32_t ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  inLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method ProcessPacket addr 0xf22494 size 0xb60 virtual false final false
inline int32_t ProcessPacket(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  len, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method ProcessBlock addr 0xf2327c size 0x218 virtual false final false
inline void ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  len, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method CalculateMac addr 0xf22ff4 size 0x288 virtual false final false
inline void CalculateMac(::ArrayW<uint8_t,::Array<uint8_t>*>  authText, int32_t  authOff, int32_t  len) ;

/// @brief Method DoFinal addr 0xf23494 size 0x98 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method GetMac addr 0xf2352c size 0x5c virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetMac() ;

/// @brief Method GetUpdateOutputSize addr 0xf23588 size 0x8 virtual true final false
inline int32_t GetUpdateOutputSize(int32_t  len) ;

/// @brief Method GetOutputSize addr 0xf23590 size 0xc virtual true final false
inline int32_t GetOutputSize(int32_t  len) ;

/// @brief Method Reset addr 0xf2359c size 0x118 virtual true final false
inline void Reset() ;

/// @brief Method intToBytes addr 0xf22104 size 0x80 virtual false final false
inline void intToBytes(int32_t  num, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method getFlag addr 0xf22184 size 0x244 virtual false final false
inline uint8_t getFlag(bool  authTextPresents, int32_t  macSize) ;

// Ctor Parameters [CppParam { name: "", ty: "KCcmBlockCipher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KCcmBlockCipher(KCcmBlockCipher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KCcmBlockCipher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KCcmBlockCipher(KCcmBlockCipher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KCcmBlockCipher()  = default;
public:


// Fields

// Static field BYTES_IN_INT

// Static field BITS_IN_BYTE

// Static field MAX_MAC_BIT_LENGTH

// Static field MIN_MAC_BIT_LENGTH


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, 0x78>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "KCcmBlockCipher");
