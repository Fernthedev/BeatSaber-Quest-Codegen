#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
CORDL_MODULE_EXPORT(Sprite)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Sprite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Sprite);
// Type: UnityEngine.ProBuilder.Shapes::Sprite
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12236))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Sprite*
class CORDL_TYPE Sprite : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::ProBuilder::Shapes::Shape)]{};

/// @brief Method CopyShape addr 0x2b8ee7c size 0x4 virtual true final false
inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape*  shape) ;

/// @brief Method RebuildMesh addr 0x2b8ee80 size 0x32c virtual true final false
inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

static inline ::UnityEngine::ProBuilder::Shapes::Sprite* New_ctor() ;

/// @brief Method .ctor addr 0x2b8f1ac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sprite(Sprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sprite(Sprite const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Sprite()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Sprite, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Sprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Sprite*, "UnityEngine.ProBuilder.Shapes", "Sprite");
