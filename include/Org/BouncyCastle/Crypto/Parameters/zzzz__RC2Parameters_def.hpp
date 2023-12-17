#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2Parameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RC2Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RC2Parameters);
// Type: Org.BouncyCastle.Crypto.Parameters::RC2Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1015))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1076))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::RC2Parameters*
class CORDL_TYPE RC2Parameters : public ::Org::BouncyCastle::Crypto::Parameters::KeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Crypto::Parameters::KeyParameter)]{};

/// @brief Field bits offset 0x18
 __declspec(property(get=__get_bits, put=__set_bits)) int32_t  bits;

 __declspec(property(get=get_EffectiveKeyBits)) int32_t  EffectiveKeyBits;

constexpr void __set_bits(int32_t  value) ;

constexpr int32_t& __get_bits() ;

constexpr int32_t const& __get_bits() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method .ctor addr 0xf393ac size 0x40 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, int32_t  keyOff, int32_t  keyLen) ;

/// @brief Method .ctor addr 0xf39414 size 0x34 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, int32_t  keyOff, int32_t  keyLen) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, int32_t  bits) ;

/// @brief Method .ctor addr 0xf393ec size 0x28 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, int32_t  bits) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, int32_t  keyOff, int32_t  keyLen, int32_t  bits) ;

/// @brief Method .ctor addr 0xf39448 size 0x28 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, int32_t  keyOff, int32_t  keyLen, int32_t  bits) ;

/// @brief Method get_EffectiveKeyBits addr 0xf39470 size 0x8 virtual false final false
inline int32_t get_EffectiveKeyBits() ;

// Ctor Parameters [CppParam { name: "", ty: "RC2Parameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RC2Parameters(RC2Parameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RC2Parameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RC2Parameters(RC2Parameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RC2Parameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RC2Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*, "Org.BouncyCastle.Crypto.Parameters", "RC2Parameters");
