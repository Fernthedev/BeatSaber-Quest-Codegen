#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UIVertex)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine {
struct UIVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIVertex);
// Type: UnityEngine::UIVertex
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15907))
// CS Name: ::UnityEngine::UIVertex
struct CORDL_TYPE UIVertex : public ::bs_hook::ValueTypeWrapper<0x6c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x6c};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field normal offset 0xc
 __declspec(property(get=__get_normal, put=__set_normal)) ::UnityEngine::Vector3  normal;

/// @brief Field tangent offset 0x18
 __declspec(property(get=__get_tangent, put=__set_tangent)) ::UnityEngine::Vector4  tangent;

/// @brief Field color offset 0x28
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color32  color;

/// @brief Field uv0 offset 0x2c
 __declspec(property(get=__get_uv0, put=__set_uv0)) ::UnityEngine::Vector4  uv0;

/// @brief Field uv1 offset 0x3c
 __declspec(property(get=__get_uv1, put=__set_uv1)) ::UnityEngine::Vector4  uv1;

/// @brief Field uv2 offset 0x4c
 __declspec(property(get=__get_uv2, put=__set_uv2)) ::UnityEngine::Vector4  uv2;

/// @brief Field uv3 offset 0x5c
 __declspec(property(get=__get_uv3, put=__set_uv3)) ::UnityEngine::Vector4  uv3;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_normal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_normal() ;

constexpr ::UnityEngine::Vector3 const& __get_normal() const;

constexpr void __set_tangent(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_tangent() ;

constexpr ::UnityEngine::Vector4 const& __get_tangent() const;

constexpr void __set_color(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_color() ;

constexpr ::UnityEngine::Color32 const& __get_color() const;

constexpr void __set_uv0(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_uv0() ;

constexpr ::UnityEngine::Vector4 const& __get_uv0() const;

constexpr void __set_uv1(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_uv1() ;

constexpr ::UnityEngine::Vector4 const& __get_uv1() const;

constexpr void __set_uv2(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_uv2() ;

constexpr ::UnityEngine::Vector4 const& __get_uv2() const;

constexpr void __set_uv3(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_uv3() ;

constexpr ::UnityEngine::Vector4 const& __get_uv3() const;

static inline void setStaticF_s_DefaultColor(::UnityEngine::Color32  value) ;

static inline ::UnityEngine::Color32 getStaticF_s_DefaultColor() ;

static inline void setStaticF_s_DefaultTangent(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_s_DefaultTangent() ;

static inline void setStaticF_simpleVert(::UnityEngine::UIVertex  value) ;

static inline ::UnityEngine::UIVertex getStaticF_simpleVert() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangent", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "uv0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "uv1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "uv2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "uv3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr UIVertex(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector4  tangent, ::UnityEngine::Color32  color, ::UnityEngine::Vector4  uv0, ::UnityEngine::Vector4  uv1, ::UnityEngine::Vector4  uv2, ::UnityEngine::Vector4  uv3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UIVertex(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x6c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UIVertex()  = default;


// Fields

// Static field s_DefaultColor

// Static field s_DefaultTangent

// Static field simpleVert


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIVertex, 0x6c>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIVertex, "UnityEngine", "UIVertex");
