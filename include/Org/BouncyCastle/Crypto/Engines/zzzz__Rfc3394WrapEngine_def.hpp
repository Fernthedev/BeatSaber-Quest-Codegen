#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc3394WrapEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Rfc3394WrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::Rfc3394WrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(827))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Rfc3394WrapEngine*
class CORDL_TYPE Rfc3394WrapEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field engine offset 0x10
 __declspec(property(get=__get_engine, put=__set_engine)) ::Org::BouncyCastle::Crypto::IBlockCipher*  engine;

/// @brief Field param offset 0x18
 __declspec(property(get=__get_param, put=__set_param)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  param;

/// @brief Field forWrapping offset 0x20
 __declspec(property(get=__get_forWrapping, put=__set_forWrapping)) bool  forWrapping;

/// @brief Field iv offset 0x28
 __declspec(property(get=__get_iv, put=__set_iv)) ::ArrayW<uint8_t,::Array<uint8_t>*>  iv;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr operator  ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

constexpr void __set_engine(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* __get_engine() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> __get_engine() const;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* __get_param() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> __get_param() const;

constexpr void __set_forWrapping(bool  value) ;

constexpr bool& __get_forWrapping() ;

constexpr bool const& __get_forWrapping() const;

constexpr void __set_iv(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_iv() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_iv() const;

static inline ::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  engine) ;

/// @brief Method .ctor addr 0xebbc74 size 0x90 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  engine) ;

/// @brief Method Init addr 0xebbd04 size 0x214 virtual true final false
inline void Init(bool  forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xebbf18 size 0xa0 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method Wrap addr 0xebbfb8 size 0x3a0 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Wrap(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  inLen) ;

/// @brief Method Unwrap addr 0xebc358 size 0x438 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  inLen) ;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3394WrapEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rfc3394WrapEngine(Rfc3394WrapEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3394WrapEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rfc3394WrapEngine(Rfc3394WrapEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Rfc3394WrapEngine()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine*, "Org.BouncyCastle.Crypto.Engines", "Rfc3394WrapEngine");
