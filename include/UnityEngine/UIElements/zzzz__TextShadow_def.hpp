#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextShadow)
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextShadow;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextShadow);
// Type: UnityEngine.UIElements::TextShadow
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6790))
// CS Name: ::UnityEngine.UIElements::TextShadow
struct CORDL_TYPE TextShadow : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field offset offset 0x0
 __declspec(property(get=__get_offset, put=__set_offset)) ::UnityEngine::Vector2  offset;

/// @brief Field blurRadius offset 0x8
 __declspec(property(get=__get_blurRadius, put=__set_blurRadius)) float_t  blurRadius;

/// @brief Field color offset 0xc
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>*() ;

constexpr void __set_offset(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_offset() ;

constexpr ::UnityEngine::Vector2 const& __get_offset() const;

constexpr void __set_blurRadius(float_t  value) ;

constexpr float_t& __get_blurRadius() ;

constexpr float_t const& __get_blurRadius() const;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

/// @brief Method Equals addr 0x2dba92c size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2dba9bc size 0x80 virtual true final true
inline bool Equals(::UnityEngine::UIElements::TextShadow  other) ;

/// @brief Method GetHashCode addr 0x2dbaa3c size 0xd8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2dbab14 size 0x30 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::TextShadow  style1, ::UnityEngine::UIElements::TextShadow  style2) ;

/// @brief Method op_Inequality addr 0x2dbab44 size 0x48 virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::TextShadow  style1, ::UnityEngine::UIElements::TextShadow  style2) ;

/// @brief Method ToString addr 0x2dbab8c size 0xf4 virtual true final false
inline ::StringW ToString() ;

/// @brief Method LerpUnclamped addr 0x2dbac80 size 0x58 virtual false final false
static inline ::UnityEngine::UIElements::TextShadow LerpUnclamped(::UnityEngine::UIElements::TextShadow  a, ::UnityEngine::UIElements::TextShadow  b, float_t  t) ;

// Ctor Parameters [CppParam { name: "offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "blurRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr TextShadow(::UnityEngine::Vector2  offset, float_t  blurRadius, ::UnityEngine::Color  color) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextShadow(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextShadow()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextShadow, 0x1c>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextShadow, "UnityEngine.UIElements", "TextShadow");
