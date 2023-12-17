#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerpentEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SerpentEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SerpentEngine);
// Type: Org.BouncyCastle.Crypto.Engines::SerpentEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(870))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::SerpentEngine*
class CORDL_TYPE SerpentEngine : public ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase)]{};

/// @brief Method MakeWorkingKey addr 0xee3470 size 0x1590 virtual true final false
inline ::ArrayW<int32_t,::Array<int32_t>*> MakeWorkingKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method EncryptBlock addr 0xee4a00 size 0x1544 virtual true final false
inline void EncryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method DecryptBlock addr 0xee5f44 size 0x1734 virtual true final false
inline void DecryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

static inline ::Org::BouncyCastle::Crypto::Engines::SerpentEngine* New_ctor() ;

/// @brief Method .ctor addr 0xee7678 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerpentEngine(SerpentEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerpentEngine(SerpentEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerpentEngine()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SerpentEngine, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SerpentEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SerpentEngine*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngine");
