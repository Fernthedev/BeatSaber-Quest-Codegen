#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Plane)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Plane;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Plane);
// Type: UnityEngine.ProBuilder.Shapes::Plane
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12230))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Plane*
class CORDL_TYPE Plane : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::ProBuilder::Shapes::Shape)]{};

/// @brief Field m_HeightSegments offset 0x10
 __declspec(property(get=__get_m_HeightSegments, put=__set_m_HeightSegments)) int32_t  m_HeightSegments;

/// @brief Field m_WidthSegments offset 0x14
 __declspec(property(get=__get_m_WidthSegments, put=__set_m_WidthSegments)) int32_t  m_WidthSegments;

constexpr void __set_m_HeightSegments(int32_t  value) ;

constexpr int32_t& __get_m_HeightSegments() ;

constexpr int32_t const& __get_m_HeightSegments() const;

constexpr void __set_m_WidthSegments(int32_t  value) ;

constexpr int32_t& __get_m_WidthSegments() ;

constexpr int32_t const& __get_m_WidthSegments() const;

/// @brief Method CopyShape addr 0x2b8c09c size 0xac virtual true final false
inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape*  shape) ;

/// @brief Method RebuildMesh addr 0x2b8c148 size 0x24c virtual true final false
inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

static inline ::UnityEngine::ProBuilder::Shapes::Plane* New_ctor() ;

/// @brief Method .ctor addr 0x2b8c394 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Plane", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Plane(Plane && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Plane", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Plane(Plane const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Plane()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Plane, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Plane);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Plane*, "UnityEngine.ProBuilder.Shapes", "Plane");
