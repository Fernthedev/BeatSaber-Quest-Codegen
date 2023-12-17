#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sphere)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Sphere;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Sphere);
// Type: UnityEngine.ProBuilder.Shapes::Sphere
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12235))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Sphere*
class CORDL_TYPE Sphere : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ProBuilder::Shapes::Shape)]{};

/// @brief Field m_Subdivisions offset 0x10
 __declspec(property(get=__get_m_Subdivisions, put=__set_m_Subdivisions)) int32_t  m_Subdivisions;

/// @brief Field m_BottomMostVertexIndex offset 0x14
 __declspec(property(get=__get_m_BottomMostVertexIndex, put=__set_m_BottomMostVertexIndex)) int32_t  m_BottomMostVertexIndex;

/// @brief Field m_Smooth offset 0x18
 __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth)) bool  m_Smooth;

static inline void setStaticF_k_IcosphereVertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> getStaticF_k_IcosphereVertices() ;

static inline void setStaticF_k_IcosphereTriangles(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_k_IcosphereTriangles() ;

constexpr void __set_m_Subdivisions(int32_t  value) ;

constexpr int32_t& __get_m_Subdivisions() ;

constexpr int32_t const& __get_m_Subdivisions() const;

constexpr void __set_m_BottomMostVertexIndex(int32_t  value) ;

constexpr int32_t& __get_m_BottomMostVertexIndex() ;

constexpr int32_t const& __get_m_BottomMostVertexIndex() const;

constexpr void __set_m_Smooth(bool  value) ;

constexpr bool& __get_m_Smooth() ;

constexpr bool const& __get_m_Smooth() const;

/// @brief Method CopyShape addr 0x2b8dc68 size 0x84 virtual true final false
inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape*  shape) ;

/// @brief Method UpdateBounds addr 0x2b8dcec size 0x6c virtual true final false
inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Bounds  bounds) ;

/// @brief Method RebuildMesh addr 0x2b8dd58 size 0x8fc virtual true final false
inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SubdivideIcosahedron addr 0x2b8e654 size 0x62c virtual false final false
static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> SubdivideIcosahedron(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices, float_t  radius) ;

static inline ::UnityEngine::ProBuilder::Shapes::Sphere* New_ctor() ;

/// @brief Method .ctor addr 0x2b8ec80 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sphere(Sphere && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sphere(Sphere const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Sphere()  = default;
public:


// Fields

// Static field k_IcosphereVertices

// Static field k_IcosphereTriangles


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Sphere, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Sphere);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Sphere*, "UnityEngine.ProBuilder.Shapes", "Sphere");
