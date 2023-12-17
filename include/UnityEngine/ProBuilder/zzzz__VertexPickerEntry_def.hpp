#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexPickerEntry)
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct VertexPickerEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::VertexPickerEntry);
// Type: UnityEngine.ProBuilder::VertexPickerEntry
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12192))
// CS Name: ::UnityEngine.ProBuilder::VertexPickerEntry
struct CORDL_TYPE VertexPickerEntry : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field mesh offset 0x0
 __declspec(property(get=__get_mesh, put=__set_mesh)) ::UnityEngine::ProBuilder::ProBuilderMesh*  mesh;

/// @brief Field vertex offset 0x8
 __declspec(property(get=__get_vertex, put=__set_vertex)) int32_t  vertex;

/// @brief Field screenDistance offset 0xc
 __declspec(property(get=__get_screenDistance, put=__set_screenDistance)) float_t  screenDistance;

/// @brief Field worldPosition offset 0x10
 __declspec(property(get=__get_worldPosition, put=__set_worldPosition)) ::UnityEngine::Vector3  worldPosition;

constexpr void __set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh*  value) ;

constexpr ::UnityEngine::ProBuilder::ProBuilderMesh* __get_mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> __get_mesh() const;

constexpr void __set_vertex(int32_t  value) ;

constexpr int32_t& __get_vertex() ;

constexpr int32_t const& __get_vertex() const;

constexpr void __set_screenDistance(float_t  value) ;

constexpr float_t& __get_screenDistance() ;

constexpr float_t const& __get_screenDistance() const;

constexpr void __set_worldPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_worldPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_worldPosition() const;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh*", modifiers: "", def_value: None }, CppParam { name: "vertex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "screenDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr VertexPickerEntry(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, int32_t  vertex, float_t  screenDistance, ::UnityEngine::Vector3  worldPosition) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VertexPickerEntry(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VertexPickerEntry()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::VertexPickerEntry, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::VertexPickerEntry, "UnityEngine.ProBuilder", "VertexPickerEntry");
