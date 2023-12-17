#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeneralDigest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class GeneralDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::GeneralDigest);
// Type: Org.BouncyCastle.Crypto.Digests::GeneralDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(750))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::GeneralDigest*
class CORDL_TYPE GeneralDigest : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field BYTE_LENGTH offset 0x0
static constexpr int32_t  BYTE_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field xBuf offset 0x10
 __declspec(property(get=__get_xBuf, put=__set_xBuf)) ::ArrayW<uint8_t,::Array<uint8_t>*>  xBuf;

/// @brief Field xBufOff offset 0x18
 __declspec(property(get=__get_xBufOff, put=__set_xBufOff)) int32_t  xBufOff;

/// @brief Field byteCount offset 0x20
 __declspec(property(get=__get_byteCount, put=__set_byteCount)) int64_t  byteCount;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr operator  ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

constexpr void __set_xBuf(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_xBuf() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_xBuf() const;

constexpr void __set_xBufOff(int32_t  value) ;

constexpr int32_t& __get_xBufOff() ;

constexpr int32_t const& __get_xBufOff() const;

constexpr void __set_byteCount(int64_t  value) ;

constexpr int64_t& __get_byteCount() ;

constexpr int64_t const& __get_byteCount() const;

static inline ::Org::BouncyCastle::Crypto::Digests::GeneralDigest* New_ctor() ;

/// @brief Method .ctor addr 0x1221530 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::GeneralDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::GeneralDigest*  t) ;

/// @brief Method .ctor addr 0x122158c size 0x78 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::GeneralDigest*  t) ;

/// @brief Method CopyIn addr 0x1221604 size 0x54 virtual false final false
inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::GeneralDigest*  t) ;

/// @brief Method Update addr 0x1221658 size 0x80 virtual true final true
inline void Update(uint8_t  input) ;

/// @brief Method BlockUpdate addr 0x12216d8 size 0x1c0 virtual true final true
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method Finish addr 0x1221898 size 0x64 virtual false final false
inline void Finish() ;

/// @brief Method Reset addr 0x12218fc size 0x30 virtual true final false
inline void Reset() ;

/// @brief Method GetByteLength addr 0x122192c size 0x8 virtual true final true
inline int32_t GetByteLength() ;

/// @brief Method ProcessWord addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ProcessWord(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff) ;

/// @brief Method ProcessLength addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ProcessLength(int64_t  bitLength) ;

/// @brief Method ProcessBlock addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ProcessBlock() ;

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetDigestSize() ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Utilities::IMemoable* Copy() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Reset(::Org::BouncyCastle::Utilities::IMemoable*  t) ;

// Ctor Parameters [CppParam { name: "", ty: "GeneralDigest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeneralDigest(GeneralDigest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeneralDigest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneralDigest(GeneralDigest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GeneralDigest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::GeneralDigest, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::GeneralDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::GeneralDigest*, "Org.BouncyCastle.Crypto.Digests", "GeneralDigest");
