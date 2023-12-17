#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD2Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class MD2Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::MD2Digest);
// Type: Org.BouncyCastle.Crypto.Digests::MD2Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(757))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::MD2Digest*
class CORDL_TYPE MD2Digest : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field DigestLength offset 0x0
static constexpr int32_t  DigestLength{static_cast<int32_t>(0x10)};

/// @brief Field BYTE_LENGTH offset 0x0
static constexpr int32_t  BYTE_LENGTH{static_cast<int32_t>(0x10)};

/// @brief Field X offset 0x10
 __declspec(property(get=__get_X, put=__set_X)) ::ArrayW<uint8_t,::Array<uint8_t>*>  X;

/// @brief Field xOff offset 0x18
 __declspec(property(get=__get_xOff, put=__set_xOff)) int32_t  xOff;

/// @brief Field M offset 0x20
 __declspec(property(get=__get_M, put=__set_M)) ::ArrayW<uint8_t,::Array<uint8_t>*>  M;

/// @brief Field mOff offset 0x28
 __declspec(property(get=__get_mOff, put=__set_mOff)) int32_t  mOff;

/// @brief Field C offset 0x30
 __declspec(property(get=__get_C, put=__set_C)) ::ArrayW<uint8_t,::Array<uint8_t>*>  C;

/// @brief Field COff offset 0x38
 __declspec(property(get=__get_COff, put=__set_COff)) int32_t  COff;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr operator  ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

constexpr void __set_X(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_X() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_X() const;

constexpr void __set_xOff(int32_t  value) ;

constexpr int32_t& __get_xOff() ;

constexpr int32_t const& __get_xOff() const;

constexpr void __set_M(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_M() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_M() const;

constexpr void __set_mOff(int32_t  value) ;

constexpr int32_t& __get_mOff() ;

constexpr int32_t const& __get_mOff() const;

constexpr void __set_C(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_C() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_C() const;

constexpr void __set_COff(int32_t  value) ;

constexpr int32_t& __get_COff() ;

constexpr int32_t const& __get_COff() const;

static inline void setStaticF_S(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_S() ;

static inline ::Org::BouncyCastle::Crypto::Digests::MD2Digest* New_ctor() ;

/// @brief Method .ctor addr 0x12272f4 size 0x80 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::MD2Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::MD2Digest*  t) ;

/// @brief Method .ctor addr 0x122742c size 0x90 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::MD2Digest*  t) ;

/// @brief Method CopyIn addr 0x12274bc size 0x9c virtual false final false
inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::MD2Digest*  t) ;

/// @brief Method get_AlgorithmName addr 0x1227558 size 0x40 virtual true final true
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x1227598 size 0x8 virtual true final true
inline int32_t GetDigestSize() ;

/// @brief Method GetByteLength addr 0x12275a0 size 0x8 virtual true final true
inline int32_t GetByteLength() ;

/// @brief Method DoFinal addr 0x12275a8 size 0xb8 virtual true final true
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0x1227374 size 0xb8 virtual true final true
inline void Reset() ;

/// @brief Method Update addr 0x1227918 size 0x68 virtual true final true
inline void Update(uint8_t  input) ;

/// @brief Method BlockUpdate addr 0x1227980 size 0x128 virtual true final true
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method ProcessChecksum addr 0x1227660 size 0x124 virtual false final false
inline void ProcessChecksum(::ArrayW<uint8_t,::Array<uint8_t>*>  m) ;

/// @brief Method ProcessBlock addr 0x1227784 size 0x194 virtual false final false
inline void ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  m) ;

/// @brief Method Copy addr 0x1227aa8 size 0x60 virtual true final true
inline ::Org::BouncyCastle::Utilities::IMemoable* Copy() ;

/// @brief Method Reset addr 0x1227b08 size 0x84 virtual true final true
inline void Reset(::Org::BouncyCastle::Utilities::IMemoable*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "MD2Digest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MD2Digest(MD2Digest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MD2Digest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MD2Digest(MD2Digest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MD2Digest()  = default;
public:


// Fields

// Static field S


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::MD2Digest, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::MD2Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::MD2Digest*, "Org.BouncyCastle.Crypto.Digests", "MD2Digest");
