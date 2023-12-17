#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Shape)
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Shape);
// Type: UnityEngine.ProBuilder.Shapes::Shape
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12233))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Shape*
class CORDL_TYPE Shape : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method UpdateBounds addr 0x2b8dbf4 size 0x4c virtual true final false
inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Bounds  bounds) ;

/// @brief Method RebuildMesh addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method CopyShape addr 0x0 size 0xffffffffffffffff virtual true final false
inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape*  shape) ;

static inline ::UnityEngine::ProBuilder::Shapes::Shape* New_ctor() ;

/// @brief Method .ctor addr 0x2b87ae4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Shape", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Shape(Shape && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shape", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shape(Shape const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Shape()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Shape, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Shape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Shape*, "UnityEngine.ProBuilder.Shapes", "Shape");
