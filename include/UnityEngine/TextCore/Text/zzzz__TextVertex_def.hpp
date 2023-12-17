#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextVertex)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextVertex);
// Type: UnityEngine.TextCore.Text::TextVertex
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13698))
// CS Name: ::UnityEngine.TextCore.Text::TextVertex
struct CORDL_TYPE TextVertex : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field uv offset 0xc
 __declspec(property(get=__get_uv, put=__set_uv)) ::UnityEngine::Vector2  uv;

/// @brief Field uv2 offset 0x14
 __declspec(property(get=__get_uv2, put=__set_uv2)) ::UnityEngine::Vector2  uv2;

/// @brief Field uv4 offset 0x1c
 __declspec(property(get=__get_uv4, put=__set_uv4)) ::UnityEngine::Vector2  uv4;

/// @brief Field color offset 0x24
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color32  color;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_uv(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_uv() ;

constexpr ::UnityEngine::Vector2 const& __get_uv() const;

constexpr void __set_uv2(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_uv2() ;

constexpr ::UnityEngine::Vector2 const& __get_uv2() const;

constexpr void __set_uv4(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_uv4() ;

constexpr ::UnityEngine::Vector2 const& __get_uv4() const;

constexpr void __set_color(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_color() ;

constexpr ::UnityEngine::Color32 const& __get_color() const;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr TextVertex(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  uv, ::UnityEngine::Vector2  uv2, ::UnityEngine::Vector2  uv4, ::UnityEngine::Color32  color) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextVertex(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextVertex()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextVertex, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextVertex, "UnityEngine.TextCore.Text", "TextVertex");
