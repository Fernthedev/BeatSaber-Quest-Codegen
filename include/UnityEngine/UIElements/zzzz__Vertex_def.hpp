#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Vertex)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Vertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Vertex);
// Type: UnityEngine.UIElements::Vertex
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7330))
// CS Name: ::UnityEngine.UIElements::Vertex
struct CORDL_TYPE Vertex : public ::bs_hook::ValueTypeWrapper<0x3c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field tint offset 0xc
 __declspec(property(get=__get_tint, put=__set_tint)) ::UnityEngine::Color32  tint;

/// @brief Field uv offset 0x10
 __declspec(property(get=__get_uv, put=__set_uv)) ::UnityEngine::Vector2  uv;

/// @brief Field xformClipPages offset 0x18
 __declspec(property(get=__get_xformClipPages, put=__set_xformClipPages)) ::UnityEngine::Color32  xformClipPages;

/// @brief Field ids offset 0x1c
 __declspec(property(get=__get_ids, put=__set_ids)) ::UnityEngine::Color32  ids;

/// @brief Field flags offset 0x20
 __declspec(property(get=__get_flags, put=__set_flags)) ::UnityEngine::Color32  flags;

/// @brief Field opacityColorPages offset 0x24
 __declspec(property(get=__get_opacityColorPages, put=__set_opacityColorPages)) ::UnityEngine::Color32  opacityColorPages;

/// @brief Field circle offset 0x28
 __declspec(property(get=__get_circle, put=__set_circle)) ::UnityEngine::Vector4  circle;

/// @brief Field textureId offset 0x38
 __declspec(property(get=__get_textureId, put=__set_textureId)) float_t  textureId;

static inline void setStaticF_nearZ(float_t  value) ;

static inline float_t getStaticF_nearZ() ;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_tint(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_tint() ;

constexpr ::UnityEngine::Color32 const& __get_tint() const;

constexpr void __set_uv(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_uv() ;

constexpr ::UnityEngine::Vector2 const& __get_uv() const;

constexpr void __set_xformClipPages(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_xformClipPages() ;

constexpr ::UnityEngine::Color32 const& __get_xformClipPages() const;

constexpr void __set_ids(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_ids() ;

constexpr ::UnityEngine::Color32 const& __get_ids() const;

constexpr void __set_flags(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_flags() ;

constexpr ::UnityEngine::Color32 const& __get_flags() const;

constexpr void __set_opacityColorPages(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_opacityColorPages() ;

constexpr ::UnityEngine::Color32 const& __get_opacityColorPages() const;

constexpr void __set_circle(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_circle() ;

constexpr ::UnityEngine::Vector4 const& __get_circle() const;

constexpr void __set_textureId(float_t  value) ;

constexpr float_t& __get_textureId() ;

constexpr float_t const& __get_textureId() const;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "xformClipPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "ids", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "opacityColorPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "circle", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "textureId", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vertex(::UnityEngine::Vector3  position, ::UnityEngine::Color32  tint, ::UnityEngine::Vector2  uv, ::UnityEngine::Color32  xformClipPages, ::UnityEngine::Color32  ids, ::UnityEngine::Color32  flags, ::UnityEngine::Color32  opacityColorPages, ::UnityEngine::Vector4  circle, float_t  textureId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vertex(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x3c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vertex()  = default;


// Fields

// Static field nearZ

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vertex, 0x3c>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vertex, "UnityEngine.UIElements", "Vertex");
