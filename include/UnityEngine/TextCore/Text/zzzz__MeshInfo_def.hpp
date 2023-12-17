#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshInfo)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::TextCore::Text {
struct VertexSortingOrder;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MeshInfo);
// Type: UnityEngine.TextCore.Text::MeshInfo
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13730))
// CS Name: ::UnityEngine.TextCore.Text::MeshInfo
struct CORDL_TYPE MeshInfo : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field vertexCount offset 0x0
 __declspec(property(get=__get_vertexCount, put=__set_vertexCount)) int32_t  vertexCount;

/// @brief Field vertices offset 0x8
 __declspec(property(get=__get_vertices, put=__set_vertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices;

/// @brief Field uvs0 offset 0x10
 __declspec(property(get=__get_uvs0, put=__set_uvs0)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs0;

/// @brief Field uvs2 offset 0x18
 __declspec(property(get=__get_uvs2, put=__set_uvs2)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs2;

/// @brief Field colors32 offset 0x20
 __declspec(property(get=__get_colors32, put=__set_colors32)) ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors32;

/// @brief Field triangles offset 0x28
 __declspec(property(get=__get_triangles, put=__set_triangles)) ::ArrayW<int32_t,::Array<int32_t>*>  triangles;

/// @brief Field material offset 0x30
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

static inline void setStaticF_k_DefaultColor(::UnityEngine::Color32  value) ;

static inline ::UnityEngine::Color32 getStaticF_k_DefaultColor() ;

constexpr void __set_vertexCount(int32_t  value) ;

constexpr int32_t& __get_vertexCount() ;

constexpr int32_t const& __get_vertexCount() const;

constexpr void __set_vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_vertices() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_vertices() const;

constexpr void __set_uvs0(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __get_uvs0() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __get_uvs0() const;

constexpr void __set_uvs2(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __get_uvs2() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __get_uvs2() const;

constexpr void __set_colors32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& __get_colors32() ;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& __get_colors32() const;

constexpr void __set_triangles(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_triangles() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_triangles() const;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

/// @brief Method .ctor addr 0x2d4b52c size 0x354 virtual false final false
inline void _ctor(int32_t  size) ;

/// @brief Method ResizeMeshInfo addr 0x2d4b880 size 0x1e8 virtual false final false
inline void ResizeMeshInfo(int32_t  size) ;

/// @brief Method Clear addr 0x2d481b8 size 0x2c virtual false final false
inline void Clear(bool  uploadChanges) ;

/// @brief Method ClearUnusedVertices addr 0x2d4ba68 size 0x3c virtual false final false
inline void ClearUnusedVertices() ;

/// @brief Method SortGeometry addr 0x2d4baa4 size 0x7c virtual false final false
inline void SortGeometry(::UnityEngine::TextCore::Text::VertexSortingOrder  order) ;

/// @brief Method SwapVertexData addr 0x2d4bb20 size 0x58c virtual false final false
inline void SwapVertexData(int32_t  src, int32_t  dst) ;

// Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "uvs0", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty: "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }]
constexpr MeshInfo(int32_t  vertexCount, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs0, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs2, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors32, ::ArrayW<int32_t,::Array<int32_t>*>  triangles, ::UnityEngine::Material*  material) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MeshInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MeshInfo()  = default;


// Fields

// Static field k_DefaultColor


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MeshInfo, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MeshInfo, "UnityEngine.TextCore.Text", "MeshInfo");
