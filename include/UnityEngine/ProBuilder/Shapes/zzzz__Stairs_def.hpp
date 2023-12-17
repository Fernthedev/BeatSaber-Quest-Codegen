#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Stairs)
namespace UnityEngine::ProBuilder::Shapes {
struct StepGenerationType;
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
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Stairs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Stairs);
// Type: UnityEngine.ProBuilder.Shapes::Stairs
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12238))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Stairs*
class CORDL_TYPE Stairs : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::ProBuilder::Shapes::Shape)]{};

/// @brief Field m_StepGenerationType offset 0x10
 __declspec(property(get=__get_m_StepGenerationType, put=__set_m_StepGenerationType)) ::UnityEngine::ProBuilder::Shapes::StepGenerationType  m_StepGenerationType;

/// @brief Field m_StepsHeight offset 0x14
 __declspec(property(get=__get_m_StepsHeight, put=__set_m_StepsHeight)) float_t  m_StepsHeight;

/// @brief Field m_StepsCount offset 0x18
 __declspec(property(get=__get_m_StepsCount, put=__set_m_StepsCount)) int32_t  m_StepsCount;

/// @brief Field m_HomogeneousSteps offset 0x1c
 __declspec(property(get=__get_m_HomogeneousSteps, put=__set_m_HomogeneousSteps)) bool  m_HomogeneousSteps;

/// @brief Field m_Circumference offset 0x20
 __declspec(property(get=__get_m_Circumference, put=__set_m_Circumference)) float_t  m_Circumference;

/// @brief Field m_Sides offset 0x24
 __declspec(property(get=__get_m_Sides, put=__set_m_Sides)) bool  m_Sides;

/// @brief Field m_InnerRadius offset 0x28
 __declspec(property(get=__get_m_InnerRadius, put=__set_m_InnerRadius)) float_t  m_InnerRadius;

 __declspec(property(get=get_sides, put=set_sides)) bool  sides;

constexpr void __set_m_StepGenerationType(::UnityEngine::ProBuilder::Shapes::StepGenerationType  value) ;

constexpr ::UnityEngine::ProBuilder::Shapes::StepGenerationType& __get_m_StepGenerationType() ;

constexpr ::UnityEngine::ProBuilder::Shapes::StepGenerationType const& __get_m_StepGenerationType() const;

constexpr void __set_m_StepsHeight(float_t  value) ;

constexpr float_t& __get_m_StepsHeight() ;

constexpr float_t const& __get_m_StepsHeight() const;

constexpr void __set_m_StepsCount(int32_t  value) ;

constexpr int32_t& __get_m_StepsCount() ;

constexpr int32_t const& __get_m_StepsCount() const;

constexpr void __set_m_HomogeneousSteps(bool  value) ;

constexpr bool& __get_m_HomogeneousSteps() ;

constexpr bool const& __get_m_HomogeneousSteps() const;

constexpr void __set_m_Circumference(float_t  value) ;

constexpr float_t& __get_m_Circumference() ;

constexpr float_t const& __get_m_Circumference() const;

constexpr void __set_m_Sides(bool  value) ;

constexpr bool& __get_m_Sides() ;

constexpr bool const& __get_m_Sides() const;

constexpr void __set_m_InnerRadius(float_t  value) ;

constexpr float_t& __get_m_InnerRadius() ;

constexpr float_t const& __get_m_InnerRadius() const;

/// @brief Method get_sides addr 0x2b8f1b4 size 0x8 virtual false final false
inline bool get_sides() ;

/// @brief Method set_sides addr 0x2b8f1bc size 0xc virtual false final false
inline void set_sides(bool  value) ;

/// @brief Method CopyShape addr 0x2b8f1c8 size 0x9c virtual true final false
inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape*  shape) ;

/// @brief Method RebuildMesh addr 0x2b8f264 size 0x60 virtual true final false
inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method UpdateBounds addr 0x2b91360 size 0x164 virtual true final false
inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Bounds  bounds) ;

/// @brief Method BuildStairs addr 0x2b90438 size 0xf28 virtual false final false
inline ::UnityEngine::Bounds BuildStairs(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method BuildCurvedStairs addr 0x2b8f2c4 size 0x1174 virtual false final false
inline ::UnityEngine::Bounds BuildCurvedStairs(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

static inline ::UnityEngine::ProBuilder::Shapes::Stairs* New_ctor() ;

/// @brief Method .ctor addr 0x2b914c4 size 0x2c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Stairs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stairs(Stairs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stairs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stairs(Stairs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stairs()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Stairs, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Stairs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Stairs*, "UnityEngine.ProBuilder.Shapes", "Stairs");
