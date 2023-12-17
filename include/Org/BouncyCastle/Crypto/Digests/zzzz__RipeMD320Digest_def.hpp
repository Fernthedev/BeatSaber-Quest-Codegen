#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RipeMD320Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class RipeMD320Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest);
// Type: Org.BouncyCastle.Crypto.Digests::RipeMD320Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(765))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::RipeMD320Digest*
class CORDL_TYPE RipeMD320Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest)]{};

/// @brief Field DigestLength offset 0x0
static constexpr int32_t  DigestLength{static_cast<int32_t>(0x28)};

/// @brief Field H0 offset 0x28
 __declspec(property(get=__get_H0, put=__set_H0)) int32_t  H0;

/// @brief Field H1 offset 0x2c
 __declspec(property(get=__get_H1, put=__set_H1)) int32_t  H1;

/// @brief Field H2 offset 0x30
 __declspec(property(get=__get_H2, put=__set_H2)) int32_t  H2;

/// @brief Field H3 offset 0x34
 __declspec(property(get=__get_H3, put=__set_H3)) int32_t  H3;

/// @brief Field H4 offset 0x38
 __declspec(property(get=__get_H4, put=__set_H4)) int32_t  H4;

/// @brief Field H5 offset 0x3c
 __declspec(property(get=__get_H5, put=__set_H5)) int32_t  H5;

/// @brief Field H6 offset 0x40
 __declspec(property(get=__get_H6, put=__set_H6)) int32_t  H6;

/// @brief Field H7 offset 0x44
 __declspec(property(get=__get_H7, put=__set_H7)) int32_t  H7;

/// @brief Field H8 offset 0x48
 __declspec(property(get=__get_H8, put=__set_H8)) int32_t  H8;

/// @brief Field H9 offset 0x4c
 __declspec(property(get=__get_H9, put=__set_H9)) int32_t  H9;

/// @brief Field X offset 0x50
 __declspec(property(get=__get_X, put=__set_X)) ::ArrayW<int32_t,::Array<int32_t>*>  X;

/// @brief Field xOff offset 0x58
 __declspec(property(get=__get_xOff, put=__set_xOff)) int32_t  xOff;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

constexpr void __set_H0(int32_t  value) ;

constexpr int32_t& __get_H0() ;

constexpr int32_t const& __get_H0() const;

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

constexpr void __set_H5(int32_t  value) ;

constexpr int32_t& __get_H5() ;

constexpr int32_t const& __get_H5() const;

constexpr void __set_H6(int32_t  value) ;

constexpr int32_t& __get_H6() ;

constexpr int32_t const& __get_H6() const;

constexpr void __set_H7(int32_t  value) ;

constexpr int32_t& __get_H7() ;

constexpr int32_t const& __get_H7() const;

constexpr void __set_H8(int32_t  value) ;

constexpr int32_t& __get_H8() ;

constexpr int32_t const& __get_H8() const;

constexpr void __set_H9(int32_t  value) ;

constexpr int32_t& __get_H9() ;

constexpr int32_t const& __get_H9() const;

constexpr void __set_X(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_X() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_X() const;

constexpr void __set_xOff(int32_t  value) ;

constexpr int32_t& __get_xOff() ;

constexpr int32_t const& __get_xOff() const;

/// @brief Method get_AlgorithmName addr 0xea04f4 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xea0534 size 0x8 virtual true final false
inline int32_t GetDigestSize() ;

static inline ::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest* New_ctor() ;

/// @brief Method .ctor addr 0xea053c size 0x6c virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*  t) ;

/// @brief Method .ctor addr 0xea05a8 size 0x74 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*  t) ;

/// @brief Method CopyIn addr 0xea061c size 0x74 virtual false final false
inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*  t) ;

/// @brief Method ProcessWord addr 0xea0690 size 0xbc virtual true final false
inline void ProcessWord(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff) ;

/// @brief Method ProcessLength addr 0xea074c size 0x6c virtual true final false
inline void ProcessLength(int64_t  bitLength) ;

/// @brief Method UnpackWord addr 0xea07b8 size 0x80 virtual false final false
inline void UnpackWord(int32_t  word, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method DoFinal addr 0xea0838 size 0xe0 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xea0918 size 0x80 virtual true final false
inline void Reset() ;

/// @brief Method RL addr 0xea0998 size 0xc virtual false final false
inline int32_t RL(int32_t  x, int32_t  n) ;

/// @brief Method F1 addr 0xea09a4 size 0xc virtual false final false
inline int32_t F1(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method F2 addr 0xea09b0 size 0x10 virtual false final false
inline int32_t F2(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method F3 addr 0xea09c0 size 0xc virtual false final false
inline int32_t F3(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method F4 addr 0xea09cc size 0x10 virtual false final false
inline int32_t F4(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method F5 addr 0xea09dc size 0xc virtual false final false
inline int32_t F5(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method ProcessBlock addr 0xea09e8 size 0x180c virtual true final false
inline void ProcessBlock() ;

/// @brief Method Copy addr 0xea21f4 size 0x60 virtual true final false
inline ::Org::BouncyCastle::Utilities::IMemoable* Copy() ;

/// @brief Method Reset addr 0xea2254 size 0x84 virtual true final false
inline void Reset(::Org::BouncyCastle::Utilities::IMemoable*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD320Digest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RipeMD320Digest(RipeMD320Digest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD320Digest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RipeMD320Digest(RipeMD320Digest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RipeMD320Digest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest, 0x60>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD320Digest");
