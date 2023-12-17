#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRandomGenerator)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator);
// Type: Org.BouncyCastle.Crypto.Prng::IRandomGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1105))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::IRandomGenerator*
class CORDL_TYPE IRandomGenerator {
public:
// Declarations
/// @brief Method AddSeedMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddSeedMaterial(::ArrayW<uint8_t,::Array<uint8_t>*>  seed) ;

/// @brief Method AddSeedMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddSeedMaterial(int64_t  seed) ;

/// @brief Method NextBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method NextBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline void NextBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  start, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "IRandomGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IRandomGenerator(IRandomGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IRandomGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRandomGenerator(IRandomGenerator const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "IRandomGenerator");
