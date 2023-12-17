#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2WrapEngine)
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithIV;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC2WrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::RC2WrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(855))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RC2WrapEngine*
class CORDL_TYPE RC2WrapEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field engine offset 0x10
 __declspec(property(get=__get_engine, put=__set_engine)) ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*  engine;

/// @brief Field parameters offset 0x18
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters;

/// @brief Field paramPlusIV offset 0x20
 __declspec(property(get=__get_paramPlusIV, put=__set_paramPlusIV)) ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*  paramPlusIV;

/// @brief Field iv offset 0x28
 __declspec(property(get=__get_iv, put=__set_iv)) ::ArrayW<uint8_t,::Array<uint8_t>*>  iv;

/// @brief Field forWrapping offset 0x30
 __declspec(property(get=__get_forWrapping, put=__set_forWrapping)) bool  forWrapping;

/// @brief Field sr offset 0x38
 __declspec(property(get=__get_sr, put=__set_sr)) ::Org::BouncyCastle::Security::SecureRandom*  sr;

/// @brief Field sha1 offset 0x40
 __declspec(property(get=__get_sha1, put=__set_sha1)) ::Org::BouncyCastle::Crypto::IDigest*  sha1;

/// @brief Field digest offset 0x48
 __declspec(property(get=__get_digest, put=__set_digest)) ::ArrayW<uint8_t,::Array<uint8_t>*>  digest;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr operator  ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

constexpr void __set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* __get_engine() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*> __get_engine() const;

constexpr void __set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> __get_parameters() const;

constexpr void __set_paramPlusIV(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* __get_paramPlusIV() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*> __get_paramPlusIV() const;

constexpr void __set_iv(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_iv() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_iv() const;

constexpr void __set_forWrapping(bool  value) ;

constexpr bool& __get_forWrapping() ;

constexpr bool const& __get_forWrapping() const;

constexpr void __set_sr(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_sr() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_sr() const;

static inline void setStaticF_IV2(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_IV2() ;

constexpr void __set_sha1(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest* __get_sha1() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> __get_sha1() const;

constexpr void __set_digest(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_digest() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_digest() const;

/// @brief Method Init addr 0xed95e0 size 0x2c0 virtual true final false
inline void Init(bool  forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xed98a0 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method Wrap addr 0xed98e0 size 0x478 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Wrap(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method Unwrap addr 0xed9ed8 size 0x5c0 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method CalculateCmsKeyChecksum addr 0xed9d58 size 0x180 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> CalculateCmsKeyChecksum(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method CheckCmsKeyChecksum addr 0xeda498 size 0x80 virtual false final false
inline bool CheckCmsKeyChecksum(::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  checksum) ;

static inline ::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine* New_ctor() ;

/// @brief Method .ctor addr 0xeda5ac size 0x8c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RC2WrapEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RC2WrapEngine(RC2WrapEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RC2WrapEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RC2WrapEngine(RC2WrapEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RC2WrapEngine()  = default;
public:


// Fields

// Static field IV2


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, 0x50>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine*, "Org.BouncyCastle.Crypto.Engines", "RC2WrapEngine");
