#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEdeWrapEngine)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithIV;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class DesEdeWrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::DesEdeWrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(841))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::DesEdeWrapEngine*
class CORDL_TYPE DesEdeWrapEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field engine offset 0x10
 __declspec(property(get=__get_engine, put=__set_engine)) ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*  engine;

/// @brief Field param offset 0x18
 __declspec(property(get=__get_param, put=__set_param)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  param;

/// @brief Field paramPlusIV offset 0x20
 __declspec(property(get=__get_paramPlusIV, put=__set_paramPlusIV)) ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*  paramPlusIV;

/// @brief Field iv offset 0x28
 __declspec(property(get=__get_iv, put=__set_iv)) ::ArrayW<uint8_t,::Array<uint8_t>*>  iv;

/// @brief Field forWrapping offset 0x30
 __declspec(property(get=__get_forWrapping, put=__set_forWrapping)) bool  forWrapping;

/// @brief Field sha1 offset 0x38
 __declspec(property(get=__get_sha1, put=__set_sha1)) ::Org::BouncyCastle::Crypto::IDigest*  sha1;

/// @brief Field digest offset 0x40
 __declspec(property(get=__get_digest, put=__set_digest)) ::ArrayW<uint8_t,::Array<uint8_t>*>  digest;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr operator  ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

constexpr void __set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* __get_engine() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*> __get_engine() const;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* __get_param() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> __get_param() const;

constexpr void __set_paramPlusIV(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* __get_paramPlusIV() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*> __get_paramPlusIV() const;

constexpr void __set_iv(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_iv() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_iv() const;

constexpr void __set_forWrapping(bool  value) ;

constexpr bool& __get_forWrapping() ;

constexpr bool const& __get_forWrapping() const;

static inline void setStaticF_IV2(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_IV2() ;

constexpr void __set_sha1(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest* __get_sha1() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> __get_sha1() const;

constexpr void __set_digest(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_digest() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_digest() const;

/// @brief Method Init addr 0xecaa78 size 0x39c virtual true final false
inline void Init(bool  forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xecae14 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method Wrap addr 0xecae54 size 0x338 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Wrap(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method Unwrap addr 0xecb3b4 size 0x430 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method CalculateCmsKeyChecksum addr 0xecb18c size 0x180 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> CalculateCmsKeyChecksum(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method CheckCmsKeyChecksum addr 0xecb7e4 size 0x80 virtual false final false
inline bool CheckCmsKeyChecksum(::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  checksum) ;

/// @brief Method reverse addr 0xecb30c size 0xa8 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> reverse(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

static inline ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine* New_ctor() ;

/// @brief Method .ctor addr 0xecb8f8 size 0x8c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeWrapEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DesEdeWrapEngine(DesEdeWrapEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeWrapEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DesEdeWrapEngine(DesEdeWrapEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DesEdeWrapEngine()  = default;
public:


// Fields

// Static field IV2


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEdeWrapEngine");
