#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollViewMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct ScrollViewMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ScrollViewMode);
// Type: UnityEngine.UIElements::ScrollViewMode
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7042))
// CS Name: ::UnityEngine.UIElements::ScrollViewMode
struct CORDL_TYPE ScrollViewMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScrollViewMode_Unwrapped
enum struct __ScrollViewMode_Unwrapped : int32_t {
__E_Vertical = static_cast<int32_t>(0x0),
__E_Horizontal = static_cast<int32_t>(0x1),
__E_VerticalAndHorizontal = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Vertical value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::ScrollViewMode const Vertical;

/// @brief Field Horizontal value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::ScrollViewMode const Horizontal;

/// @brief Field VerticalAndHorizontal value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::ScrollViewMode const VerticalAndHorizontal;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ScrollViewMode_Unwrapped () const noexcept {
return std::bit_cast<__ScrollViewMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScrollViewMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ScrollViewMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ScrollViewMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollViewMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollViewMode, "UnityEngine.UIElements", "ScrollViewMode");
