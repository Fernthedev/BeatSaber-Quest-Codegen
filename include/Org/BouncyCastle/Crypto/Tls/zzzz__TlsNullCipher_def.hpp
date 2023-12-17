#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsNullCipher)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNullCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher);
// Type: Org.BouncyCastle.Crypto.Tls::TlsNullCipher
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1313))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsNullCipher*
class CORDL_TYPE TlsNullCipher : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field context offset 0x10
 __declspec(property(get=__get_context, put=__set_context)) ::Org::BouncyCastle::Crypto::Tls::TlsContext*  context;

/// @brief Field writeMac offset 0x18
 __declspec(property(get=__get_writeMac, put=__set_writeMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac*  writeMac;

/// @brief Field readMac offset 0x20
 __declspec(property(get=__get_readMac, put=__set_readMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac*  readMac;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

constexpr void __set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* __get_context() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> __get_context() const;

constexpr void __set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* __get_writeMac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> __get_writeMac() const;

constexpr void __set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* __get_readMac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> __get_readMac() const;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context) ;

/// @brief Method .ctor addr 0xfaed44 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context) ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::IDigest*  clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest*  serverWriteDigest) ;

/// @brief Method .ctor addr 0xfaed70 size 0x458 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::IDigest*  clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest*  serverWriteDigest) ;

/// @brief Method GetPlaintextLimit addr 0xfaf368 size 0x2c virtual true final false
inline int32_t GetPlaintextLimit(int32_t  ciphertextLimit) ;

/// @brief Method EncodePlaintext addr 0xfaf394 size 0x130 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> EncodePlaintext(int64_t  seqNo, uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  plaintext, int32_t  offset, int32_t  len) ;

/// @brief Method DecodeCiphertext addr 0xfaf4c4 size 0x194 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeCiphertext(int64_t  seqNo, uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  ciphertext, int32_t  offset, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "TlsNullCipher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsNullCipher(TlsNullCipher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsNullCipher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsNullCipher(TlsNullCipher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsNullCipher()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*, "Org.BouncyCastle.Crypto.Tls", "TlsNullCipher");
