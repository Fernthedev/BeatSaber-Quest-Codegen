#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3394WrapEngine_def.hpp"
CORDL_MODULE_EXPORT(CamelliaWrapEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class CamelliaWrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::CamelliaWrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(827))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(832))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::CamelliaWrapEngine*
class CORDL_TYPE CamelliaWrapEngine : public ::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine)]{};

static inline ::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine* New_ctor() ;

/// @brief Method .ctor addr 0xec1c8c size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaWrapEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CamelliaWrapEngine(CamelliaWrapEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaWrapEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CamelliaWrapEngine(CamelliaWrapEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CamelliaWrapEngine()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine*, "Org.BouncyCastle.Crypto.Engines", "CamelliaWrapEngine");
