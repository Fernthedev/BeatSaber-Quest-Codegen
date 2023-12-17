#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Spacing)
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Spacing;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Spacing);
// Type: UnityEngine.UIElements::Spacing
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6798))
// CS Name: ::UnityEngine.UIElements::Spacing
struct CORDL_TYPE Spacing : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field left offset 0x0
 __declspec(property(get=__get_left, put=__set_left)) float_t  left;

/// @brief Field top offset 0x4
 __declspec(property(get=__get_top, put=__set_top)) float_t  top;

/// @brief Field right offset 0x8
 __declspec(property(get=__get_right, put=__set_right)) float_t  right;

/// @brief Field bottom offset 0xc
 __declspec(property(get=__get_bottom, put=__set_bottom)) float_t  bottom;

 __declspec(property(get=get_horizontal)) float_t  horizontal;

 __declspec(property(get=get_vertical)) float_t  vertical;

constexpr void __set_left(float_t  value) ;

constexpr float_t& __get_left() ;

constexpr float_t const& __get_left() const;

constexpr void __set_top(float_t  value) ;

constexpr float_t& __get_top() ;

constexpr float_t const& __get_top() const;

constexpr void __set_right(float_t  value) ;

constexpr float_t& __get_right() ;

constexpr float_t const& __get_right() const;

constexpr void __set_bottom(float_t  value) ;

constexpr float_t& __get_bottom() ;

constexpr float_t const& __get_bottom() const;

/// @brief Method get_horizontal addr 0x2dbce0c size 0x10 virtual false final false
inline float_t get_horizontal() ;

/// @brief Method get_vertical addr 0x2dbce1c size 0x10 virtual false final false
inline float_t get_vertical() ;

/// @brief Method .ctor addr 0x2dbce2c size 0xc virtual false final false
inline void _ctor(float_t  left, float_t  top, float_t  right, float_t  bottom) ;

/// @brief Method op_Subtraction addr 0x2dbce38 size 0xc8 virtual false final false
static inline ::UnityEngine::Rect op_Subtraction(::UnityEngine::Rect  r, ::UnityEngine::UIElements::Spacing  a) ;

// Ctor Parameters [CppParam { name: "left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "top", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "right", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottom", ty: "float_t", modifiers: "", def_value: None }]
constexpr Spacing(float_t  left, float_t  top, float_t  right, float_t  bottom) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Spacing(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Spacing()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Spacing, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Spacing, "UnityEngine.UIElements", "Spacing");
