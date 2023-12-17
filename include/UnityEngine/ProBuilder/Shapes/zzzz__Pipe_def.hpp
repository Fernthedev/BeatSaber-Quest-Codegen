#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Pipe)
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
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
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Pipe;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Pipe);
// Type: UnityEngine.ProBuilder.Shapes::Pipe
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12229))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Pipe*
class CORDL_TYPE Pipe : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ProBuilder::Shapes::Shape)]{};

/// @brief Field m_Thickness offset 0x10
 __declspec(property(get=__get_m_Thickness, put=__set_m_Thickness)) float_t  m_Thickness;

/// @brief Field m_NumberOfSides offset 0x14
 __declspec(property(get=__get_m_NumberOfSides, put=__set_m_NumberOfSides)) int32_t  m_NumberOfSides;

/// @brief Field m_HeightCuts offset 0x18
 __declspec(property(get=__get_m_HeightCuts, put=__set_m_HeightCuts)) int32_t  m_HeightCuts;

/// @brief Field m_Smooth offset 0x1c
 __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth)) bool  m_Smooth;

constexpr void __set_m_Thickness(float_t  value) ;

constexpr float_t& __get_m_Thickness() ;

constexpr float_t const& __get_m_Thickness() const;

constexpr void __set_m_NumberOfSides(int32_t  value) ;

constexpr int32_t& __get_m_NumberOfSides() ;

constexpr int32_t const& __get_m_NumberOfSides() const;

constexpr void __set_m_HeightCuts(int32_t  value) ;

constexpr int32_t& __get_m_HeightCuts() ;

constexpr int32_t const& __get_m_HeightCuts() const;

constexpr void __set_m_Smooth(bool  value) ;

constexpr bool& __get_m_Smooth() ;

constexpr bool const& __get_m_Smooth() const;

/// @brief Method CopyShape addr 0x2b8b54c size 0x8c virtual true final false
inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape*  shape) ;

/// @brief Method UpdateBounds addr 0x2b8b5d8 size 0x38 virtual true final false
inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Bounds  bounds) ;

/// @brief Method RebuildMesh addr 0x2b8b610 size 0xa70 virtual true final false
inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

static inline ::UnityEngine::ProBuilder::Shapes::Pipe* New_ctor() ;

/// @brief Method .ctor addr 0x2b8c080 size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Pipe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pipe(Pipe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pipe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pipe(Pipe const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Pipe()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Pipe, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Pipe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Pipe*, "UnityEngine.ProBuilder.Shapes", "Pipe");
