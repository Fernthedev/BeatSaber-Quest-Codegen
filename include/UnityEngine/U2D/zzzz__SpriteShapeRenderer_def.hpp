#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(SpriteShapeRenderer)
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteShapeRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::SpriteShapeRenderer);
// Type: UnityEngine.U2D::SpriteShapeRenderer
namespace UnityEngine::U2D {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16200))
// CS Name: ::UnityEngine.U2D::SpriteShapeRenderer*
class CORDL_TYPE SpriteShapeRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Renderer)]{};

// Ctor Parameters [CppParam { name: "", ty: "SpriteShapeRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteShapeRenderer(SpriteShapeRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteShapeRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteShapeRenderer(SpriteShapeRenderer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpriteShapeRenderer()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteShapeRenderer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::SpriteShapeRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteShapeRenderer*, "UnityEngine.U2D", "SpriteShapeRenderer");
