#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD4Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class MD4Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::MD4Digest);
// Type: Org.BouncyCastle.Crypto.Digests::MD4Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(758))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::MD4Digest*
class CORDL_TYPE MD4Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest)]{};

/// @brief Field DigestLength offset 0x0
static constexpr int32_t  DigestLength{static_cast<int32_t>(0x10)};

/// @brief Field S11 offset 0x0
static constexpr int32_t  S11{static_cast<int32_t>(0x3)};

/// @brief Field S12 offset 0x0
static constexpr int32_t  S12{static_cast<int32_t>(0x7)};

/// @brief Field S13 offset 0x0
static constexpr int32_t  S13{static_cast<int32_t>(0xb)};

/// @brief Field S14 offset 0x0
static constexpr int32_t  S14{static_cast<int32_t>(0x13)};

/// @brief Field S21 offset 0x0
static constexpr int32_t  S21{static_cast<int32_t>(0x3)};

/// @brief Field S22 offset 0x0
static constexpr int32_t  S22{static_cast<int32_t>(0x5)};

/// @brief Field S23 offset 0x0
static constexpr int32_t  S23{static_cast<int32_t>(0x9)};

/// @brief Field S24 offset 0x0
static constexpr int32_t  S24{static_cast<int32_t>(0xd)};

/// @brief Field S31 offset 0x0
static constexpr int32_t  S31{static_cast<int32_t>(0x3)};

/// @brief Field S32 offset 0x0
static constexpr int32_t  S32{static_cast<int32_t>(0x9)};

/// @brief Field S33 offset 0x0
static constexpr int32_t  S33{static_cast<int32_t>(0xb)};

/// @brief Field S34 offset 0x0
static constexpr int32_t  S34{static_cast<int32_t>(0xf)};

/// @brief Field H1 offset 0x28
 __declspec(property(get=__get_H1, put=__set_H1)) int32_t  H1;

/// @brief Field H2 offset 0x2c
 __declspec(property(get=__get_H2, put=__set_H2)) int32_t  H2;

/// @brief Field H3 offset 0x30
 __declspec(property(get=__get_H3, put=__set_H3)) int32_t  H3;

/// @brief Field H4 offset 0x34
 __declspec(property(get=__get_H4, put=__set_H4)) int32_t  H4;

/// @brief Field X offset 0x38
 __declspec(property(get=__get_X, put=__set_X)) ::ArrayW<int32_t,::Array<int32_t>*>  X;

/// @brief Field xOff offset 0x40
 __declspec(property(get=__get_xOff, put=__set_xOff)) int32_t  xOff;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

constexpr void __set_H1(int32_t  value) ;

constexpr int32_t& __get_H1() ;

constexpr int32_t const& __get_H1() const;

constexpr void __set_H2(int32_t  value) ;

constexpr int32_t& __get_H2() ;

constexpr int32_t const& __get_H2() const;

constexpr void __set_H3(int32_t  value) ;

constexpr int32_t& __get_H3() ;

constexpr int32_t const& __get_H3() const;

constexpr void __set_H4(int32_t  value) ;

constexpr int32_t& __get_H4() ;

constexpr int32_t const& __get_H4() const;

constexpr void __set_X(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_X() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_X() const;

constexpr void __set_xOff(int32_t  value) ;

constexpr int32_t& __get_xOff() ;

constexpr int32_t const& __get_xOff() const;

static inline ::Org::BouncyCastle::Crypto::Digests::MD4Digest* New_ctor() ;

/// @brief Method .ctor addr 0x1227c20 size 0x6c virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::MD4Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::MD4Digest*  t) ;

/// @brief Method .ctor addr 0x1227c8c size 0x74 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::MD4Digest*  t) ;

/// @brief Method CopyIn addr 0x1227d00 size 0x5c virtual false final false
inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::MD4Digest*  t) ;

/// @brief Method get_AlgorithmName addr 0x1227d5c size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x1227d9c size 0x8 virtual true final false
inline int32_t GetDigestSize() ;

/// @brief Method ProcessWord addr 0x1227da4 size 0xbc virtual true final false
inline void ProcessWord(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff) ;

/// @brief Method ProcessLength addr 0x1227e60 size 0x6c virtual true final false
inline void ProcessLength(int64_t  bitLength) ;

/// @brief Method UnpackWord addr 0x1227ecc size 0x80 virtual false final false
inline void UnpackWord(int32_t  word, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method DoFinal addr 0x1227f4c size 0x80 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0x1227fcc size 0x60 virtual true final false
inline void Reset() ;

/// @brief Method RotateLeft addr 0x122802c size 0xc virtual false final false
inline int32_t RotateLeft(int32_t  x, int32_t  n) ;

/// @brief Method F addr 0x1228038 size 0x10 virtual false final false
inline int32_t F(int32_t  u, int32_t  v, int32_t  w) ;

/// @brief Method G addr 0x1228048 size 0x14 virtual false final false
inline int32_t G(int32_t  u, int32_t  v, int32_t  w) ;

/// @brief Method H addr 0x122805c size 0xc virtual false final false
inline int32_t H(int32_t  u, int32_t  v, int32_t  w) ;

/// @brief Method ProcessBlock addr 0x1228068 size 0x648 virtual true final false
inline void ProcessBlock() ;

/// @brief Method Copy addr 0x12286b0 size 0x60 virtual true final false
inline ::Org::BouncyCastle::Utilities::IMemoable* Copy() ;

/// @brief Method Reset addr 0x1228710 size 0x84 virtual true final false
inline void Reset(::Org::BouncyCastle::Utilities::IMemoable*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "MD4Digest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MD4Digest(MD4Digest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MD4Digest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MD4Digest(MD4Digest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MD4Digest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::MD4Digest, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::MD4Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::MD4Digest*, "Org.BouncyCastle.Crypto.Digests", "MD4Digest");
