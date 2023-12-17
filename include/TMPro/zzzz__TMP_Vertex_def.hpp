#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_Vertex)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TMPro {
struct TMP_Vertex;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_Vertex);
// Type: TMPro::TMP_Vertex
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12329))
// CS Name: ::TMPro::TMP_Vertex
struct CORDL_TYPE TMP_Vertex : public ::bs_hook::ValueTypeWrapper<0x28> {
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

static inline void setStaticF_k_Zero(::TMPro::TMP_Vertex  value) ;

static inline ::TMPro::TMP_Vertex getStaticF_k_Zero() ;

/// @brief Method get_zero addr 0x2c01800 size 0x68 virtual false final false
static inline ::TMPro::TMP_Vertex get_zero() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr TMP_Vertex(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  uv, ::UnityEngine::Vector2  uv2, ::UnityEngine::Vector2  uv4, ::UnityEngine::Color32  color) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_Vertex(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_Vertex()  = default;


// Fields

// Static field k_Zero


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Vertex, 0x28>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Vertex, "TMPro", "TMP_Vertex");
