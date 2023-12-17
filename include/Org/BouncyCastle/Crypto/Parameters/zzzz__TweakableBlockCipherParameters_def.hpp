#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TweakableBlockCipherParameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class TweakableBlockCipherParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::TweakableBlockCipherParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1087))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::TweakableBlockCipherParameters*
class CORDL_TYPE TweakableBlockCipherParameters : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field tweak offset 0x10
 __declspec(property(get=__get_tweak, put=__set_tweak)) ::ArrayW<uint8_t,::Array<uint8_t>*>  tweak;

/// @brief Field key offset 0x18
 __declspec(property(get=__get_key, put=__set_key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key;

 __declspec(property(get=get_Key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  Key;

 __declspec(property(get=get_Tweak)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Tweak;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

constexpr void __set_tweak(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_tweak() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_tweak() const;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* __get_key() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> __get_key() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  tweak) ;

/// @brief Method .ctor addr 0xf3b878 size 0x80 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  tweak) ;

/// @brief Method get_Key addr 0xf3b8f8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key() ;

/// @brief Method get_Tweak addr 0xf3b900 size 0x8 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Tweak() ;

// Ctor Parameters [CppParam { name: "", ty: "TweakableBlockCipherParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweakableBlockCipherParameters(TweakableBlockCipherParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweakableBlockCipherParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweakableBlockCipherParameters(TweakableBlockCipherParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TweakableBlockCipherParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*, "Org.BouncyCastle.Crypto.Parameters", "TweakableBlockCipherParameters");
