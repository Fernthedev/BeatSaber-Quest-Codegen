#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteIntermediateRendererInfo)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Experimental::U2D {
struct SpriteIntermediateRendererInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo);
// Type: UnityEngine.Experimental.U2D::SpriteIntermediateRendererInfo
namespace UnityEngine::Experimental::U2D {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10384))
// CS Name: ::UnityEngine.Experimental.U2D::SpriteIntermediateRendererInfo
struct CORDL_TYPE SpriteIntermediateRendererInfo : public ::bs_hook::ValueTypeWrapper<0xa8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field SpriteID offset 0x0
 __declspec(property(get=__get_SpriteID, put=__set_SpriteID)) int32_t  SpriteID;

/// @brief Field TextureID offset 0x4
 __declspec(property(get=__get_TextureID, put=__set_TextureID)) int32_t  TextureID;

/// @brief Field MaterialID offset 0x8
 __declspec(property(get=__get_MaterialID, put=__set_MaterialID)) int32_t  MaterialID;

/// @brief Field Color offset 0xc
 __declspec(property(get=__get_Color, put=__set_Color)) ::UnityEngine::Color  Color;

/// @brief Field Transform offset 0x1c
 __declspec(property(get=__get_Transform, put=__set_Transform)) ::UnityEngine::Matrix4x4  Transform;

/// @brief Field Bounds offset 0x5c
 __declspec(property(get=__get_Bounds, put=__set_Bounds)) ::UnityEngine::Bounds  Bounds;

/// @brief Field Layer offset 0x74
 __declspec(property(get=__get_Layer, put=__set_Layer)) int32_t  Layer;

/// @brief Field SortingLayer offset 0x78
 __declspec(property(get=__get_SortingLayer, put=__set_SortingLayer)) int32_t  SortingLayer;

/// @brief Field SortingOrder offset 0x7c
 __declspec(property(get=__get_SortingOrder, put=__set_SortingOrder)) int32_t  SortingOrder;

/// @brief Field SceneCullingMask offset 0x80
 __declspec(property(get=__get_SceneCullingMask, put=__set_SceneCullingMask)) uint64_t  SceneCullingMask;

/// @brief Field IndexData offset 0x88
 __declspec(property(get=__get_IndexData, put=__set_IndexData)) ::cordl_internals::intptr_t  IndexData;

/// @brief Field VertexData offset 0x90
 __declspec(property(get=__get_VertexData, put=__set_VertexData)) ::cordl_internals::intptr_t  VertexData;

/// @brief Field IndexCount offset 0x98
 __declspec(property(get=__get_IndexCount, put=__set_IndexCount)) int32_t  IndexCount;

/// @brief Field VertexCount offset 0x9c
 __declspec(property(get=__get_VertexCount, put=__set_VertexCount)) int32_t  VertexCount;

/// @brief Field ShaderChannelMask offset 0xa0
 __declspec(property(get=__get_ShaderChannelMask, put=__set_ShaderChannelMask)) int32_t  ShaderChannelMask;

constexpr void __set_SpriteID(int32_t  value) ;

constexpr int32_t& __get_SpriteID() ;

constexpr int32_t const& __get_SpriteID() const;

constexpr void __set_TextureID(int32_t  value) ;

constexpr int32_t& __get_TextureID() ;

constexpr int32_t const& __get_TextureID() const;

constexpr void __set_MaterialID(int32_t  value) ;

constexpr int32_t& __get_MaterialID() ;

constexpr int32_t const& __get_MaterialID() const;

constexpr void __set_Color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_Color() ;

constexpr ::UnityEngine::Color const& __get_Color() const;

constexpr void __set_Transform(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_Transform() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_Transform() const;

constexpr void __set_Bounds(::UnityEngine::Bounds  value) ;

constexpr ::UnityEngine::Bounds& __get_Bounds() ;

constexpr ::UnityEngine::Bounds const& __get_Bounds() const;

constexpr void __set_Layer(int32_t  value) ;

constexpr int32_t& __get_Layer() ;

constexpr int32_t const& __get_Layer() const;

constexpr void __set_SortingLayer(int32_t  value) ;

constexpr int32_t& __get_SortingLayer() ;

constexpr int32_t const& __get_SortingLayer() const;

constexpr void __set_SortingOrder(int32_t  value) ;

constexpr int32_t& __get_SortingOrder() ;

constexpr int32_t const& __get_SortingOrder() const;

constexpr void __set_SceneCullingMask(uint64_t  value) ;

constexpr uint64_t& __get_SceneCullingMask() ;

constexpr uint64_t const& __get_SceneCullingMask() const;

constexpr void __set_IndexData(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_IndexData() ;

constexpr ::cordl_internals::intptr_t const& __get_IndexData() const;

constexpr void __set_VertexData(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_VertexData() ;

constexpr ::cordl_internals::intptr_t const& __get_VertexData() const;

constexpr void __set_IndexCount(int32_t  value) ;

constexpr int32_t& __get_IndexCount() ;

constexpr int32_t const& __get_IndexCount() const;

constexpr void __set_VertexCount(int32_t  value) ;

constexpr int32_t& __get_VertexCount() ;

constexpr int32_t const& __get_VertexCount() const;

constexpr void __set_ShaderChannelMask(int32_t  value) ;

constexpr int32_t& __get_ShaderChannelMask() ;

constexpr int32_t const& __get_ShaderChannelMask() const;

// Ctor Parameters [CppParam { name: "SpriteID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TextureID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MaterialID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "Layer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SortingLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SortingOrder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "IndexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "VertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "IndexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ShaderChannelMask", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpriteIntermediateRendererInfo(int32_t  SpriteID, int32_t  TextureID, int32_t  MaterialID, ::UnityEngine::Color  Color, ::UnityEngine::Matrix4x4  Transform, ::UnityEngine::Bounds  Bounds, int32_t  Layer, int32_t  SortingLayer, int32_t  SortingOrder, uint64_t  SceneCullingMask, ::cordl_internals::intptr_t  IndexData, ::cordl_internals::intptr_t  VertexData, int32_t  IndexCount, int32_t  VertexCount, int32_t  ShaderChannelMask) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SpriteIntermediateRendererInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xa8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SpriteIntermediateRendererInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, 0xa8>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::U2D
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, "UnityEngine.Experimental.U2D", "SpriteIntermediateRendererInfo");
