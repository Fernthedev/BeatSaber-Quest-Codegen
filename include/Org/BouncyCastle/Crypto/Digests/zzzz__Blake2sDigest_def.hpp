#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Blake2sDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Blake2sDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest);
// Type: Org.BouncyCastle.Crypto.Digests::Blake2sDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(747))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Blake2sDigest*
class CORDL_TYPE Blake2sDigest : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field ROUNDS offset 0x0
static constexpr int32_t  ROUNDS{static_cast<int32_t>(0xa)};

/// @brief Field BLOCK_LENGTH_BYTES offset 0x0
static constexpr int32_t  BLOCK_LENGTH_BYTES{static_cast<int32_t>(0x40)};

/// @brief Field digestLength offset 0x10
 __declspec(property(get=__get_digestLength, put=__set_digestLength)) int32_t  digestLength;

/// @brief Field keyLength offset 0x14
 __declspec(property(get=__get_keyLength, put=__set_keyLength)) int32_t  keyLength;

/// @brief Field salt offset 0x18
 __declspec(property(get=__get_salt, put=__set_salt)) ::ArrayW<uint8_t,::Array<uint8_t>*>  salt;

/// @brief Field personalization offset 0x20
 __declspec(property(get=__get_personalization, put=__set_personalization)) ::ArrayW<uint8_t,::Array<uint8_t>*>  personalization;

/// @brief Field key offset 0x28
 __declspec(property(get=__get_key, put=__set_key)) ::ArrayW<uint8_t,::Array<uint8_t>*>  key;

/// @brief Field buffer offset 0x30
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field bufferPos offset 0x38
 __declspec(property(get=__get_bufferPos, put=__set_bufferPos)) int32_t  bufferPos;

/// @brief Field internalState offset 0x40
 __declspec(property(get=__get_internalState, put=__set_internalState)) ::ArrayW<uint32_t,::Array<uint32_t>*>  internalState;

/// @brief Field chainValue offset 0x48
 __declspec(property(get=__get_chainValue, put=__set_chainValue)) ::ArrayW<uint32_t,::Array<uint32_t>*>  chainValue;

/// @brief Field t0 offset 0x50
 __declspec(property(get=__get_t0, put=__set_t0)) uint32_t  t0;

/// @brief Field t1 offset 0x54
 __declspec(property(get=__get_t1, put=__set_t1)) uint32_t  t1;

/// @brief Field f0 offset 0x58
 __declspec(property(get=__get_f0, put=__set_f0)) uint32_t  f0;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

static inline void setStaticF_blake2s_IV(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_blake2s_IV() ;

static inline void setStaticF_blake2s_sigma(Il2CppObject*  value) ;

static inline Il2CppObject* getStaticF_blake2s_sigma() ;

constexpr void __set_digestLength(int32_t  value) ;

constexpr int32_t& __get_digestLength() ;

constexpr int32_t const& __get_digestLength() const;

constexpr void __set_keyLength(int32_t  value) ;

constexpr int32_t& __get_keyLength() ;

constexpr int32_t const& __get_keyLength() const;

constexpr void __set_salt(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_salt() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_salt() const;

constexpr void __set_personalization(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_personalization() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_personalization() const;

constexpr void __set_key(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_key() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_key() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_bufferPos(int32_t  value) ;

constexpr int32_t& __get_bufferPos() ;

constexpr int32_t const& __get_bufferPos() const;

constexpr void __set_internalState(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_internalState() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_internalState() const;

constexpr void __set_chainValue(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_chainValue() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_chainValue() const;

constexpr void __set_t0(uint32_t  value) ;

constexpr uint32_t& __get_t0() ;

constexpr uint32_t const& __get_t0() const;

constexpr void __set_t1(uint32_t  value) ;

constexpr uint32_t& __get_t1() ;

constexpr uint32_t const& __get_t1() const;

constexpr void __set_f0(uint32_t  value) ;

constexpr uint32_t& __get_f0() ;

constexpr uint32_t const& __get_f0() const;

static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor() ;

/// @brief Method .ctor addr 0x121ebc8 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest*  digest) ;

/// @brief Method .ctor addr 0x121ece8 size 0x110 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest*  digest) ;

static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor(int32_t  digestBits) ;

/// @brief Method .ctor addr 0x121ebd0 size 0x118 virtual false final false
inline void _ctor(int32_t  digestBits) ;

static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method .ctor addr 0x121f088 size 0x160 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, int32_t  digestBytes, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  personalization) ;

/// @brief Method .ctor addr 0x121f1e8 size 0x264 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, int32_t  digestBytes, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  personalization) ;

/// @brief Method Init addr 0x121edf8 size 0x290 virtual false final false
inline void Init() ;

/// @brief Method InitializeInternalState addr 0x121f44c size 0x13c virtual false final false
inline void InitializeInternalState() ;

/// @brief Method Update addr 0x121f588 size 0xb8 virtual true final false
inline void Update(uint8_t  b) ;

/// @brief Method BlockUpdate addr 0x121fbcc size 0x140 virtual true final false
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  message, int32_t  offset, int32_t  len) ;

/// @brief Method DoFinal addr 0x121fd0c size 0x130 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOffset) ;

/// @brief Method Reset addr 0x121fe3c size 0x64 virtual true final false
inline void Reset() ;

/// @brief Method Compress addr 0x121f640 size 0x58c virtual false final false
inline void Compress(::ArrayW<uint8_t,::Array<uint8_t>*>  message, int32_t  messagePos) ;

/// @brief Method G addr 0x121fea0 size 0xcc virtual false final false
inline void G(uint32_t  m1, uint32_t  m2, int32_t  posA, int32_t  posB, int32_t  posC, int32_t  posD) ;

/// @brief Method rotr32 addr 0x121ff6c size 0x8 virtual false final false
inline uint32_t rotr32(uint32_t  x, int32_t  rot) ;

/// @brief Method get_AlgorithmName addr 0x121ff74 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x121ffb4 size 0x8 virtual true final false
inline int32_t GetDigestSize() ;

/// @brief Method GetByteLength addr 0x121ffbc size 0x8 virtual true final false
inline int32_t GetByteLength() ;

/// @brief Method ClearKey addr 0x121ffc4 size 0x48 virtual true final false
inline void ClearKey() ;

/// @brief Method ClearSalt addr 0x122000c size 0x1c virtual true final false
inline void ClearSalt() ;

// Ctor Parameters [CppParam { name: "", ty: "Blake2sDigest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Blake2sDigest(Blake2sDigest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Blake2sDigest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Blake2sDigest(Blake2sDigest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Blake2sDigest()  = default;
public:


// Fields

// Static field blake2s_IV

// Static field blake2s_sigma


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, 0x60>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest*, "Org.BouncyCastle.Crypto.Digests", "Blake2sDigest");
