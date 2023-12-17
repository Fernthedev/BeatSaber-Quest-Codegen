#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredHash)
namespace Org::BouncyCastle::Crypto::Tls {
class DigestInputBuffer;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DeferredHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DeferredHash);
// Type: Org.BouncyCastle.Crypto.Tls::DeferredHash
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1218))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DeferredHash*
class CORDL_TYPE DeferredHash : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field BUFFERING_HASH_LIMIT offset 0x0
static constexpr int32_t  BUFFERING_HASH_LIMIT{static_cast<int32_t>(0x4)};

/// @brief Field mContext offset 0x10
 __declspec(property(get=__get_mContext, put=__set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsContext*  mContext;

/// @brief Field mBuf offset 0x18
 __declspec(property(get=__get_mBuf, put=__set_mBuf)) ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*  mBuf;

/// @brief Field mHashes offset 0x20
 __declspec(property(get=__get_mHashes, put=__set_mHashes)) ::System::Collections::IDictionary*  mHashes;

/// @brief Field mPrfHashAlgorithm offset 0x28
 __declspec(property(get=__get_mPrfHashAlgorithm, put=__set_mPrfHashAlgorithm)) int32_t  mPrfHashAlgorithm;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* __get_mContext() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> __get_mContext() const;

constexpr void __set_mBuf(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* __get_mBuf() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*> __get_mBuf() const;

constexpr void __set_mHashes(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_mHashes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_mHashes() const;

constexpr void __set_mPrfHashAlgorithm(int32_t  value) ;

constexpr int32_t& __get_mPrfHashAlgorithm() ;

constexpr int32_t const& __get_mPrfHashAlgorithm() const;

static inline ::Org::BouncyCastle::Crypto::Tls::DeferredHash* New_ctor() ;

/// @brief Method .ctor addr 0xf66974 size 0xa4 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Tls::DeferredHash* New_ctor(uint8_t  prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest*  prfHash) ;

/// @brief Method .ctor addr 0xf66a20 size 0x138 virtual false final false
inline void _ctor(uint8_t  prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest*  prfHash) ;

/// @brief Method Init addr 0xf66b58 size 0x8 virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context) ;

/// @brief Method NotifyPrfDetermined addr 0xf66b60 size 0x180 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined() ;

/// @brief Method TrackHashAlgorithm addr 0xf66d58 size 0x6c virtual true final false
inline void TrackHashAlgorithm(uint8_t  hashAlgorithm) ;

/// @brief Method SealHashAlgorithms addr 0xf66dc4 size 0x10 virtual true final false
inline void SealHashAlgorithms() ;

/// @brief Method StopTracking addr 0xf66dd4 size 0x1c4 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking() ;

/// @brief Method ForkPrfHash addr 0xf66f98 size 0x1b4 virtual true final false
inline ::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash() ;

/// @brief Method GetFinalHash addr 0xf6714c size 0x220 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetFinalHash(uint8_t  hashAlgorithm) ;

/// @brief Method get_AlgorithmName addr 0xf6736c size 0x50 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetByteLength addr 0xf673bc size 0x50 virtual true final false
inline int32_t GetByteLength() ;

/// @brief Method GetDigestSize addr 0xf6740c size 0x50 virtual true final false
inline int32_t GetDigestSize() ;

/// @brief Method Update addr 0xf6745c size 0x43c virtual true final false
inline void Update(uint8_t  input) ;

/// @brief Method BlockUpdate addr 0xf67898 size 0x460 virtual true final false
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  len) ;

/// @brief Method DoFinal addr 0xf67cf8 size 0x50 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xf67d48 size 0x428 virtual true final false
inline void Reset() ;

/// @brief Method CheckStopBuffering addr 0xf68170 size 0x454 virtual true final false
inline void CheckStopBuffering() ;

/// @brief Method CheckTrackingHash addr 0xf685c4 size 0x1a0 virtual true final false
inline void CheckTrackingHash(uint8_t  hashAlgorithm) ;

// Ctor Parameters [CppParam { name: "", ty: "DeferredHash", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeferredHash(DeferredHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeferredHash", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeferredHash(DeferredHash const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DeferredHash()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DeferredHash, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DeferredHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DeferredHash*, "Org.BouncyCastle.Crypto.Tls", "DeferredHash");
