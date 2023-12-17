#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelScreenMatchMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelScreenMatchMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PanelScreenMatchMode);
// Type: UnityEngine.UIElements::PanelScreenMatchMode
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7024))
// CS Name: ::UnityEngine.UIElements::PanelScreenMatchMode
struct CORDL_TYPE PanelScreenMatchMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PanelScreenMatchMode_Unwrapped
enum struct __PanelScreenMatchMode_Unwrapped : int32_t {
__E_MatchWidthOrHeight = static_cast<int32_t>(0x0),
__E_Shrink = static_cast<int32_t>(0x1),
__E_Expand = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field MatchWidthOrHeight value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::PanelScreenMatchMode const MatchWidthOrHeight;

/// @brief Field Shrink value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::PanelScreenMatchMode const Shrink;

/// @brief Field Expand value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::PanelScreenMatchMode const Expand;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PanelScreenMatchMode_Unwrapped () const noexcept {
return std::bit_cast<__PanelScreenMatchMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PanelScreenMatchMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PanelScreenMatchMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PanelScreenMatchMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelScreenMatchMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelScreenMatchMode, "UnityEngine.UIElements", "PanelScreenMatchMode");
