#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_MeshInfo)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Bounds;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace TMPro {
struct VertexSortingOrder;
}
// Forward declare root types
namespace TMPro {
struct TMP_MeshInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_MeshInfo);
// Type: TMPro::TMP_MeshInfo
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12405))
// CS Name: ::TMPro::TMP_MeshInfo
struct CORDL_TYPE TMP_MeshInfo : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field mesh offset 0x0
 __declspec(property(get=__get_mesh, put=__set_mesh)) ::UnityEngine::Mesh*  mesh;

/// @brief Field vertexCount offset 0x8
 __declspec(property(get=__get_vertexCount, put=__set_vertexCount)) int32_t  vertexCount;

/// @brief Field vertices offset 0x10
 __declspec(property(get=__get_vertices, put=__set_vertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices;

/// @brief Field normals offset 0x18
 __declspec(property(get=__get_normals, put=__set_normals)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  normals;

/// @brief Field tangents offset 0x20
 __declspec(property(get=__get_tangents, put=__set_tangents)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  tangents;

/// @brief Field uvs0 offset 0x28
 __declspec(property(get=__get_uvs0, put=__set_uvs0)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs0;

/// @brief Field uvs2 offset 0x30
 __declspec(property(get=__get_uvs2, put=__set_uvs2)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs2;

/// @brief Field colors32 offset 0x38
 __declspec(property(get=__get_colors32, put=__set_colors32)) ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors32;

/// @brief Field triangles offset 0x40
 __declspec(property(get=__get_triangles, put=__set_triangles)) ::ArrayW<int32_t,::Array<int32_t>*>  triangles;

/// @brief Field material offset 0x48
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

static inline void setStaticF_s_DefaultColor(::UnityEngine::Color32  value) ;

static inline ::UnityEngine::Color32 getStaticF_s_DefaultColor() ;

static inline void setStaticF_s_DefaultNormal(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_s_DefaultNormal() ;

static inline void setStaticF_s_DefaultTangent(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_s_DefaultTangent() ;

static inline void setStaticF_s_DefaultBounds(::UnityEngine::Bounds  value) ;

static inline ::UnityEngine::Bounds getStaticF_s_DefaultBounds() ;

constexpr void __set_mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get_mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get_mesh() const;

constexpr void __set_vertexCount(int32_t  value) ;

constexpr int32_t& __get_vertexCount() ;

constexpr int32_t const& __get_vertexCount() const;

constexpr void __set_vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_vertices() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_vertices() const;

constexpr void __set_normals(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_normals() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_normals() const;

constexpr void __set_tangents(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __get_tangents() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __get_tangents() const;

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

/// @brief Method .ctor addr 0x2c3cf54 size 0x4f8 virtual false final false
inline void _ctor(::UnityEngine::Mesh*  mesh, int32_t  size) ;

/// @brief Method .ctor addr 0x2c3d44c size 0x784 virtual false final false
inline void _ctor(::UnityEngine::Mesh*  mesh, int32_t  size, bool  isVolumetric) ;

/// @brief Method ResizeMeshInfo addr 0x2c3dbd0 size 0x474 virtual false final false
inline void ResizeMeshInfo(int32_t  size) ;

/// @brief Method ResizeMeshInfo addr 0x2c3e044 size 0x8d4 virtual false final false
inline void ResizeMeshInfo(int32_t  size, bool  isVolumetric) ;

/// @brief Method Clear addr 0x2c3e918 size 0xa4 virtual false final false
inline void Clear() ;

/// @brief Method Clear addr 0x2c3e9bc size 0x138 virtual false final false
inline void Clear(bool  uploadChanges) ;

/// @brief Method ClearUnusedVertices addr 0x2c3eaf4 size 0x3c virtual false final false
inline void ClearUnusedVertices() ;

/// @brief Method ClearUnusedVertices addr 0x2c3eb30 size 0x34 virtual false final false
inline void ClearUnusedVertices(int32_t  startIndex) ;

/// @brief Method ClearUnusedVertices addr 0x2c3eb64 size 0xc4 virtual false final false
inline void ClearUnusedVertices(int32_t  startIndex, bool  updateMesh) ;

/// @brief Method SortGeometry addr 0x2c3ec28 size 0x7c virtual false final false
inline void SortGeometry(::TMPro::VertexSortingOrder  order) ;

/// @brief Method SortGeometry addr 0x2c3f230 size 0x1d4 virtual false final false
inline void SortGeometry(::System::Collections::Generic::IList_1<int32_t>*  sortingOrder) ;

/// @brief Method SwapVertexData addr 0x2c3eca4 size 0x58c virtual false final false
inline void SwapVertexData(int32_t  src, int32_t  dst) ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "uvs0", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty: "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }]
constexpr TMP_MeshInfo(::UnityEngine::Mesh*  mesh, int32_t  vertexCount, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  normals, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  tangents, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs0, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs2, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors32, ::ArrayW<int32_t,::Array<int32_t>*>  triangles, ::UnityEngine::Material*  material) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_MeshInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_MeshInfo()  = default;


// Fields

// Static field s_DefaultColor

// Static field s_DefaultNormal

// Static field s_DefaultTangent

// Static field s_DefaultBounds


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MeshInfo, 0x50>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MeshInfo, "TMPro", "TMP_MeshInfo");
