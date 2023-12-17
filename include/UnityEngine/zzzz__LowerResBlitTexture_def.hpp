#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LowerResBlitTexture)
// Forward declare root types
namespace UnityEngine {
class LowerResBlitTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LowerResBlitTexture);
// Type: UnityEngine::LowerResBlitTexture
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10272))
// CS Name: ::UnityEngine::LowerResBlitTexture*
class CORDL_TYPE LowerResBlitTexture : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Object)]{};

/// @brief Method LowerResBlitTextureDontStripMe addr 0x2cdfdd4 size 0x4 virtual false final false
inline void LowerResBlitTextureDontStripMe() ;

// Ctor Parameters [CppParam { name: "", ty: "LowerResBlitTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LowerResBlitTexture(LowerResBlitTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LowerResBlitTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LowerResBlitTexture(LowerResBlitTexture const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LowerResBlitTexture()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowerResBlitTexture, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::LowerResBlitTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowerResBlitTexture*, "UnityEngine", "LowerResBlitTexture");
