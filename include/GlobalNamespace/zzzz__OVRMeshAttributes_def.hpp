#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRMeshAttributes)
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshAttributes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshAttributes);
// Type: ::OVRMeshAttributes
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7569))
// CS Name: ::OVRMeshAttributes
struct CORDL_TYPE OVRMeshAttributes : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field vertices offset 0x0
 __declspec(property(get=__get_vertices, put=__set_vertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices;

/// @brief Field normals offset 0x8
 __declspec(property(get=__get_normals, put=__set_normals)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  normals;

/// @brief Field tangents offset 0x10
 __declspec(property(get=__get_tangents, put=__set_tangents)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  tangents;

/// @brief Field texcoords offset 0x18
 __declspec(property(get=__get_texcoords, put=__set_texcoords)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  texcoords;

/// @brief Field colors offset 0x20
 __declspec(property(get=__get_colors, put=__set_colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors;

/// @brief Field boneWeights offset 0x28
 __declspec(property(get=__get_boneWeights, put=__set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  boneWeights;

constexpr void __set_vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_vertices() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_vertices() const;

constexpr void __set_normals(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_normals() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_normals() const;

constexpr void __set_tangents(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __get_tangents() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __get_tangents() const;

constexpr void __set_texcoords(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __get_texcoords() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __get_texcoords() const;

constexpr void __set_colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __get_colors() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __get_colors() const;

constexpr void __set_boneWeights(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  value) ;

constexpr ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>& __get_boneWeights() ;

constexpr ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*> const& __get_boneWeights() const;

// Ctor Parameters [CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "texcoords", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors", ty: "::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>", modifiers: "", def_value: None }, CppParam { name: "boneWeights", ty: "::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>", modifiers: "", def_value: None }]
constexpr OVRMeshAttributes(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  normals, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  tangents, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  texcoords, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  boneWeights) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRMeshAttributes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRMeshAttributes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshAttributes, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshAttributes, "", "OVRMeshAttributes");
