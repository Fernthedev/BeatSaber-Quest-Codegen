#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMacSP800Drbg)
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class HMacSP800Drbg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg);
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::HMacSP800Drbg
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1098))
// CS Name: ::Org.BouncyCastle.Crypto.Prng.Drbg::HMacSP800Drbg*
class CORDL_TYPE HMacSP800Drbg : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field mK offset 0x10
 __declspec(property(get=__get_mK, put=__set_mK)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mK;

/// @brief Field mV offset 0x18
 __declspec(property(get=__get_mV, put=__set_mV)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mV;

/// @brief Field mEntropySource offset 0x20
 __declspec(property(get=__get_mEntropySource, put=__set_mEntropySource)) ::Org::BouncyCastle::Crypto::IEntropySource*  mEntropySource;

/// @brief Field mHMac offset 0x28
 __declspec(property(get=__get_mHMac, put=__set_mHMac)) ::Org::BouncyCastle::Crypto::IMac*  mHMac;

/// @brief Field mSecurityStrength offset 0x30
 __declspec(property(get=__get_mSecurityStrength, put=__set_mSecurityStrength)) int32_t  mSecurityStrength;

/// @brief Field mReseedCounter offset 0x38
 __declspec(property(get=__get_mReseedCounter, put=__set_mReseedCounter)) int64_t  mReseedCounter;

 __declspec(property(get=get_BlockSize)) int32_t  BlockSize;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
constexpr operator  ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept;

static inline void setStaticF_RESEED_MAX(int64_t  value) ;

static inline int64_t getStaticF_RESEED_MAX() ;

static inline void setStaticF_MAX_BITS_REQUEST(int32_t  value) ;

static inline int32_t getStaticF_MAX_BITS_REQUEST() ;

constexpr void __set_mK(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mK() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mK() const;

constexpr void __set_mV(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mV() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mV() const;

constexpr void __set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IEntropySource* __get_mEntropySource() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySource*> __get_mEntropySource() const;

constexpr void __set_mHMac(::Org::BouncyCastle::Crypto::IMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IMac* __get_mHMac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> __get_mHMac() const;

constexpr void __set_mSecurityStrength(int32_t  value) ;

constexpr int32_t& __get_mSecurityStrength() ;

constexpr int32_t const& __get_mSecurityStrength() const;

constexpr void __set_mReseedCounter(int64_t  value) ;

constexpr int64_t& __get_mReseedCounter() ;

constexpr int64_t const& __get_mReseedCounter() const;

static inline ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg* New_ctor(::Org::BouncyCastle::Crypto::IMac*  hMac, int32_t  securityStrength, ::Org::BouncyCastle::Crypto::IEntropySource*  entropySource, ::ArrayW<uint8_t,::Array<uint8_t>*>  personalizationString, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce) ;

/// @brief Method .ctor addr 0xf40b60 size 0x354 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IMac*  hMac, int32_t  securityStrength, ::Org::BouncyCastle::Crypto::IEntropySource*  entropySource, ::ArrayW<uint8_t,::Array<uint8_t>*>  personalizationString, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce) ;

/// @brief Method hmac_DRBG_Update addr 0xf40fcc size 0x40 virtual false final false
inline void hmac_DRBG_Update(::ArrayW<uint8_t,::Array<uint8_t>*>  seedMaterial) ;

/// @brief Method hmac_DRBG_Update_Func addr 0xf4100c size 0x434 virtual false final false
inline void hmac_DRBG_Update_Func(::ArrayW<uint8_t,::Array<uint8_t>*>  seedMaterial, uint8_t  vValue) ;

/// @brief Method get_BlockSize addr 0xf41440 size 0x20 virtual true final true
inline int32_t get_BlockSize() ;

/// @brief Method Generate addr 0xf41460 size 0x510 virtual true final true
inline int32_t Generate(::ArrayW<uint8_t,::Array<uint8_t>*>  output, ::ArrayW<uint8_t,::Array<uint8_t>*>  additionalInput, bool  predictionResistant) ;

/// @brief Method Reseed addr 0xf41970 size 0x90 virtual true final true
inline void Reseed(::ArrayW<uint8_t,::Array<uint8_t>*>  additionalInput) ;

/// @brief Method GetEntropy addr 0xf40eb4 size 0x118 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEntropy() ;

// Ctor Parameters [CppParam { name: "", ty: "HMacSP800Drbg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HMacSP800Drbg(HMacSP800Drbg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HMacSP800Drbg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HMacSP800Drbg(HMacSP800Drbg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HMacSP800Drbg()  = default;
public:


// Fields

// Static field RESEED_MAX

// Static field MAX_BITS_REQUEST


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*, "Org.BouncyCastle.Crypto.Prng.Drbg", "HMacSP800Drbg");
