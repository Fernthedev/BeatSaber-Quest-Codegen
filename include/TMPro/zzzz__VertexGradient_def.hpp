#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VertexGradient)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace TMPro {
struct VertexGradient;
}
// Write type traits
MARK_VAL_T(::TMPro::VertexGradient);
// Type: TMPro::VertexGradient
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12317))
// CS Name: ::TMPro::VertexGradient
struct CORDL_TYPE VertexGradient : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field topLeft offset 0x0
 __declspec(property(get=__get_topLeft, put=__set_topLeft)) ::UnityEngine::Color  topLeft;

/// @brief Field topRight offset 0x10
 __declspec(property(get=__get_topRight, put=__set_topRight)) ::UnityEngine::Color  topRight;

/// @brief Field bottomLeft offset 0x20
 __declspec(property(get=__get_bottomLeft, put=__set_bottomLeft)) ::UnityEngine::Color  bottomLeft;

/// @brief Field bottomRight offset 0x30
 __declspec(property(get=__get_bottomRight, put=__set_bottomRight)) ::UnityEngine::Color  bottomRight;

constexpr void __set_topLeft(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_topLeft() ;

constexpr ::UnityEngine::Color const& __get_topLeft() const;

constexpr void __set_topRight(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_topRight() ;

constexpr ::UnityEngine::Color const& __get_topRight() const;

constexpr void __set_bottomLeft(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_bottomLeft() ;

constexpr ::UnityEngine::Color const& __get_bottomLeft() const;

constexpr void __set_bottomRight(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_bottomRight() ;

constexpr ::UnityEngine::Color const& __get_bottomRight() const;

/// @brief Method .ctor addr 0x2c00d3c size 0x24 virtual false final false
inline void _ctor(::UnityEngine::Color  color) ;

/// @brief Method .ctor addr 0x2c00d60 size 0x1c virtual false final false
inline void _ctor(::UnityEngine::Color  color0, ::UnityEngine::Color  color1, ::UnityEngine::Color  color2, ::UnityEngine::Color  color3) ;

// Ctor Parameters [CppParam { name: "topLeft", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomLeft", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomRight", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr VertexGradient(::UnityEngine::Color  topLeft, ::UnityEngine::Color  topRight, ::UnityEngine::Color  bottomLeft, ::UnityEngine::Color  bottomRight) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VertexGradient(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VertexGradient()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::VertexGradient, 0x40>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::VertexGradient, "TMPro", "VertexGradient");
