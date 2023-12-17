#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Arch)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Arch;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Arch);
// Type: UnityEngine.ProBuilder.Shapes::Arch
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12224))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Arch*
class CORDL_TYPE Arch : public ::UnityEngine::ProBuilder::Shapes::Shape {
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

/// @brief Field m_ArchDegrees offset 0x18
 __declspec(property(get=__get_m_ArchDegrees, put=__set_m_ArchDegrees)) float_t  m_ArchDegrees;

/// @brief Field m_EndCaps offset 0x1c
 __declspec(property(get=__get_m_EndCaps, put=__set_m_EndCaps)) bool  m_EndCaps;

/// @brief Field m_Smooth offset 0x1d
 __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth)) bool  m_Smooth;

constexpr void __set_m_Thickness(float_t  value) ;

constexpr float_t& __get_m_Thickness() ;

constexpr float_t const& __get_m_Thickness() const;

constexpr void __set_m_NumberOfSides(int32_t  value) ;

constexpr int32_t& __get_m_NumberOfSides() ;

constexpr int32_t const& __get_m_NumberOfSides() const;

constexpr void __set_m_ArchDegrees(float_t  value) ;

constexpr float_t& __get_m_ArchDegrees() ;

constexpr float_t const& __get_m_ArchDegrees() const;

constexpr void __set_m_EndCaps(bool  value) ;

constexpr bool& __get_m_EndCaps() ;

constexpr bool const& __get_m_EndCaps() const;

constexpr void __set_m_Smooth(bool  value) ;

constexpr bool& __get_m_Smooth() ;

constexpr bool const& __get_m_Smooth() const;

/// @brief Method CopyShape addr 0x2b86d64 size 0x94 virtual true final false
inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape*  shape) ;

/// @brief Method GetFace addr 0x2b86df8 size 0xc4 virtual false final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> GetFace(::UnityEngine::Vector2  vertex1, ::UnityEngine::Vector2  vertex2, float_t  depth) ;

/// @brief Method RebuildMesh addr 0x2b86ebc size 0xc00 virtual true final false
inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation) ;

static inline ::UnityEngine::ProBuilder::Shapes::Arch* New_ctor() ;

/// @brief Method .ctor addr 0x2b87abc size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Arch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Arch(Arch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Arch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Arch(Arch const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Arch()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Arch, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Arch);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Arch*, "UnityEngine.ProBuilder.Shapes", "Arch");
