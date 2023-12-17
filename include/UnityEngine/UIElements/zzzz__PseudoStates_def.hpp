#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PseudoStates)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PseudoStates);
// Type: UnityEngine.UIElements::PseudoStates
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6821))
// CS Name: ::UnityEngine.UIElements::PseudoStates
struct CORDL_TYPE PseudoStates : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PseudoStates_Unwrapped
enum struct __PseudoStates_Unwrapped : int32_t {
__E_Active = static_cast<int32_t>(0x1),
__E_Hover = static_cast<int32_t>(0x2),
__E_Checked = static_cast<int32_t>(0x8),
__E_Disabled = static_cast<int32_t>(0x20),
__E_Focus = static_cast<int32_t>(0x40),
__E_Root = static_cast<int32_t>(0x80),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Active value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::PseudoStates const Active;

/// @brief Field Hover value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::PseudoStates const Hover;

/// @brief Field Checked value: static_cast<int32_t>(0x8)
static ::UnityEngine::UIElements::PseudoStates const Checked;

/// @brief Field Disabled value: static_cast<int32_t>(0x20)
static ::UnityEngine::UIElements::PseudoStates const Disabled;

/// @brief Field Focus value: static_cast<int32_t>(0x40)
static ::UnityEngine::UIElements::PseudoStates const Focus;

/// @brief Field Root value: static_cast<int32_t>(0x80)
static ::UnityEngine::UIElements::PseudoStates const Root;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PseudoStates_Unwrapped () const noexcept {
return std::bit_cast<__PseudoStates_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PseudoStates(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PseudoStates(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PseudoStates()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PseudoStates, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PseudoStates, "UnityEngine.UIElements", "PseudoStates");
