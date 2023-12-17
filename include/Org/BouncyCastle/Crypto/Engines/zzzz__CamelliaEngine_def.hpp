#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CamelliaEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class CamelliaEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::CamelliaEngine);
// Type: Org.BouncyCastle.Crypto.Engines::CamelliaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(830))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::CamelliaEngine*
class CORDL_TYPE CamelliaEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field BLOCK_SIZE offset 0x0
static constexpr int32_t  BLOCK_SIZE{static_cast<int32_t>(0x10)};

/// @brief Field initialised offset 0x10
 __declspec(property(get=__get_initialised, put=__set_initialised)) bool  initialised;

/// @brief Field _keyIs128 offset 0x11
 __declspec(property(get=__get__keyIs128, put=__set__keyIs128)) bool  _keyIs128;

/// @brief Field subkey offset 0x18
 __declspec(property(get=__get_subkey, put=__set_subkey)) ::ArrayW<uint32_t,::Array<uint32_t>*>  subkey;

/// @brief Field kw offset 0x20
 __declspec(property(get=__get_kw, put=__set_kw)) ::ArrayW<uint32_t,::Array<uint32_t>*>  kw;

/// @brief Field ke offset 0x28
 __declspec(property(get=__get_ke, put=__set_ke)) ::ArrayW<uint32_t,::Array<uint32_t>*>  ke;

/// @brief Field state offset 0x30
 __declspec(property(get=__get_state, put=__set_state)) ::ArrayW<uint32_t,::Array<uint32_t>*>  state;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

constexpr void __set_initialised(bool  value) ;

constexpr bool& __get_initialised() ;

constexpr bool const& __get_initialised() const;

constexpr void __set__keyIs128(bool  value) ;

constexpr bool& __get__keyIs128() ;

constexpr bool const& __get__keyIs128() const;

constexpr void __set_subkey(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_subkey() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_subkey() const;

constexpr void __set_kw(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_kw() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_kw() const;

constexpr void __set_ke(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_ke() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_ke() const;

constexpr void __set_state(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_state() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_state() const;

static inline void setStaticF_SIGMA(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SIGMA() ;

static inline void setStaticF_SBOX1_1110(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SBOX1_1110() ;

static inline void setStaticF_SBOX4_4404(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SBOX4_4404() ;

static inline void setStaticF_SBOX2_0222(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SBOX2_0222() ;

static inline void setStaticF_SBOX3_3033(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_SBOX3_3033() ;

/// @brief Method rightRotate addr 0xebd5dc size 0x14 virtual false final false
static inline uint32_t rightRotate(uint32_t  x, int32_t  s) ;

/// @brief Method leftRotate addr 0xebd5f0 size 0x14 virtual false final false
static inline uint32_t leftRotate(uint32_t  x, int32_t  s) ;

/// @brief Method roldq addr 0xebd604 size 0x128 virtual false final false
static inline void roldq(int32_t  rot, ::ArrayW<uint32_t,::Array<uint32_t>*>  ki, int32_t  ioff, ::ArrayW<uint32_t,::Array<uint32_t>*>  ko, int32_t  ooff) ;

/// @brief Method decroldq addr 0xebd72c size 0x128 virtual false final false
static inline void decroldq(int32_t  rot, ::ArrayW<uint32_t,::Array<uint32_t>*>  ki, int32_t  ioff, ::ArrayW<uint32_t,::Array<uint32_t>*>  ko, int32_t  ooff) ;

/// @brief Method roldqo32 addr 0xebd854 size 0x128 virtual false final false
static inline void roldqo32(int32_t  rot, ::ArrayW<uint32_t,::Array<uint32_t>*>  ki, int32_t  ioff, ::ArrayW<uint32_t,::Array<uint32_t>*>  ko, int32_t  ooff) ;

/// @brief Method decroldqo32 addr 0xebd97c size 0x128 virtual false final false
static inline void decroldqo32(int32_t  rot, ::ArrayW<uint32_t,::Array<uint32_t>*>  ki, int32_t  ioff, ::ArrayW<uint32_t,::Array<uint32_t>*>  ko, int32_t  ooff) ;

/// @brief Method bytes2uint addr 0xebdaa4 size 0x60 virtual false final false
static inline uint32_t bytes2uint(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  offset) ;

/// @brief Method uint2bytes addr 0xebdb04 size 0x48 virtual false final false
static inline void uint2bytes(uint32_t  word, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  offset) ;

/// @brief Method camelliaF2 addr 0xebdb4c size 0x2e8 virtual false final false
static inline void camelliaF2(::ArrayW<uint32_t,::Array<uint32_t>*>  s, ::ArrayW<uint32_t,::Array<uint32_t>*>  skey, int32_t  keyoff) ;

/// @brief Method camelliaFLs addr 0xebde34 size 0x134 virtual false final false
static inline void camelliaFLs(::ArrayW<uint32_t,::Array<uint32_t>*>  s, ::ArrayW<uint32_t,::Array<uint32_t>*>  fkey, int32_t  keyoff) ;

/// @brief Method setKey addr 0xebdf68 size 0xf0c virtual false final false
inline void setKey(bool  forEncryption, ::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method processBlock128 addr 0xebee74 size 0x2b0 virtual false final false
inline int32_t processBlock128(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method processBlock192or256 addr 0xebf124 size 0x2ec virtual false final false
inline int32_t processBlock192or256(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

static inline ::Org::BouncyCastle::Crypto::Engines::CamelliaEngine* New_ctor() ;

/// @brief Method .ctor addr 0xebf410 size 0x8c virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0xebf49c size 0xf0 virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xebf58c size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xebf5cc size 0x8 virtual true final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xebf5d4 size 0x8 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xebf5dc size 0x138 virtual true final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xebf714 size 0x4 virtual true final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CamelliaEngine(CamelliaEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CamelliaEngine(CamelliaEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CamelliaEngine()  = default;
public:


// Fields

// Static field SIGMA

// Static field SBOX1_1110

// Static field SBOX4_4404

// Static field SBOX2_0222

// Static field SBOX3_3033


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::CamelliaEngine, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::CamelliaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::CamelliaEngine*, "Org.BouncyCastle.Crypto.Engines", "CamelliaEngine");
