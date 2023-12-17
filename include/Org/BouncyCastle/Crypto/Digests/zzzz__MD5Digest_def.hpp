#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD5Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class MD5Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::MD5Digest);
// Type: Org.BouncyCastle.Crypto.Digests::MD5Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(759))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::MD5Digest*
class CORDL_TYPE MD5Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Org::BouncyCastle::Crypto::Digests::GeneralDigest)]{};

/// @brief Field DigestLength offset 0x0
static constexpr int32_t  DigestLength{static_cast<int32_t>(0x10)};

/// @brief Field H1 offset 0x28
 __declspec(property(get=__get_H1, put=__set_H1)) uint32_t  H1;

/// @brief Field H2 offset 0x2c
 __declspec(property(get=__get_H2, put=__set_H2)) uint32_t  H2;

/// @brief Field H3 offset 0x30
 __declspec(property(get=__get_H3, put=__set_H3)) uint32_t  H3;

/// @brief Field H4 offset 0x34
 __declspec(property(get=__get_H4, put=__set_H4)) uint32_t  H4;

/// @brief Field X offset 0x38
 __declspec(property(get=__get_X, put=__set_X)) ::ArrayW<uint32_t,::Array<uint32_t>*>  X;

/// @brief Field xOff offset 0x40
 __declspec(property(get=__get_xOff, put=__set_xOff)) int32_t  xOff;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

constexpr void __set_H1(uint32_t  value) ;

constexpr uint32_t& __get_H1() ;

constexpr uint32_t const& __get_H1() const;

constexpr void __set_H2(uint32_t  value) ;

constexpr uint32_t& __get_H2() ;

constexpr uint32_t const& __get_H2() const;

constexpr void __set_H3(uint32_t  value) ;

constexpr uint32_t& __get_H3() ;

constexpr uint32_t const& __get_H3() const;

constexpr void __set_H4(uint32_t  value) ;

constexpr uint32_t& __get_H4() ;

constexpr uint32_t const& __get_H4() const;

constexpr void __set_X(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_X() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_X() const;

constexpr void __set_xOff(int32_t  value) ;

constexpr int32_t& __get_xOff() ;

constexpr int32_t const& __get_xOff() const;

static inline void setStaticF_S11(int32_t  value) ;

static inline int32_t getStaticF_S11() ;

static inline void setStaticF_S12(int32_t  value) ;

static inline int32_t getStaticF_S12() ;

static inline void setStaticF_S13(int32_t  value) ;

static inline int32_t getStaticF_S13() ;

static inline void setStaticF_S14(int32_t  value) ;

static inline int32_t getStaticF_S14() ;

static inline void setStaticF_S21(int32_t  value) ;

static inline int32_t getStaticF_S21() ;

static inline void setStaticF_S22(int32_t  value) ;

static inline int32_t getStaticF_S22() ;

static inline void setStaticF_S23(int32_t  value) ;

static inline int32_t getStaticF_S23() ;

static inline void setStaticF_S24(int32_t  value) ;

static inline int32_t getStaticF_S24() ;

static inline void setStaticF_S31(int32_t  value) ;

static inline int32_t getStaticF_S31() ;

static inline void setStaticF_S32(int32_t  value) ;

static inline int32_t getStaticF_S32() ;

static inline void setStaticF_S33(int32_t  value) ;

static inline int32_t getStaticF_S33() ;

static inline void setStaticF_S34(int32_t  value) ;

static inline int32_t getStaticF_S34() ;

static inline void setStaticF_S41(int32_t  value) ;

static inline int32_t getStaticF_S41() ;

static inline void setStaticF_S42(int32_t  value) ;

static inline int32_t getStaticF_S42() ;

static inline void setStaticF_S43(int32_t  value) ;

static inline int32_t getStaticF_S43() ;

static inline void setStaticF_S44(int32_t  value) ;

static inline int32_t getStaticF_S44() ;

static inline ::Org::BouncyCastle::Crypto::Digests::MD5Digest* New_ctor() ;

/// @brief Method .ctor addr 0x1228794 size 0x6c virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::MD5Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::MD5Digest*  t) ;

/// @brief Method .ctor addr 0x1228800 size 0x74 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::MD5Digest*  t) ;

/// @brief Method CopyIn addr 0x1228874 size 0x5c virtual false final false
inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::MD5Digest*  t) ;

/// @brief Method get_AlgorithmName addr 0x12288d0 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x1228910 size 0x8 virtual true final false
inline int32_t GetDigestSize() ;

/// @brief Method ProcessWord addr 0x1228918 size 0x80 virtual true final false
inline void ProcessWord(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff) ;

/// @brief Method ProcessLength addr 0x1228998 size 0xb8 virtual true final false
inline void ProcessLength(int64_t  bitLength) ;

/// @brief Method DoFinal addr 0x1228a50 size 0x90 virtual true final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0x1228ae0 size 0x60 virtual true final false
inline void Reset() ;

/// @brief Method RotateLeft addr 0x1228b40 size 0xc virtual false final false
static inline uint32_t RotateLeft(uint32_t  x, int32_t  n) ;

/// @brief Method F addr 0x1228b4c size 0x10 virtual false final false
static inline uint32_t F(uint32_t  u, uint32_t  v, uint32_t  w) ;

/// @brief Method G addr 0x1228b5c size 0x10 virtual false final false
static inline uint32_t G(uint32_t  u, uint32_t  v, uint32_t  w) ;

/// @brief Method H addr 0x1228b6c size 0xc virtual false final false
static inline uint32_t H(uint32_t  u, uint32_t  v, uint32_t  w) ;

/// @brief Method K addr 0x1228b78 size 0xc virtual false final false
static inline uint32_t K(uint32_t  u, uint32_t  v, uint32_t  w) ;

/// @brief Method ProcessBlock addr 0x1228b84 size 0xb68 virtual true final false
inline void ProcessBlock() ;

/// @brief Method Copy addr 0x12296ec size 0x60 virtual true final false
inline ::Org::BouncyCastle::Utilities::IMemoable* Copy() ;

/// @brief Method Reset addr 0x122974c size 0x84 virtual true final false
inline void Reset(::Org::BouncyCastle::Utilities::IMemoable*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "MD5Digest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MD5Digest(MD5Digest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MD5Digest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MD5Digest(MD5Digest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MD5Digest()  = default;
public:


// Fields

// Static field S11

// Static field S12

// Static field S13

// Static field S14

// Static field S21

// Static field S22

// Static field S23

// Static field S24

// Static field S31

// Static field S32

// Static field S33

// Static field S34

// Static field S41

// Static field S42

// Static field S43

// Static field S44


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::MD5Digest, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::MD5Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::MD5Digest*, "Org.BouncyCastle.Crypto.Digests", "MD5Digest");
