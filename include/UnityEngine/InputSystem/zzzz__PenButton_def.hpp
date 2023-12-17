#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PenButton)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct PenButton;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::PenButton);
// Type: UnityEngine.InputSystem::PenButton
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6245))
// CS Name: ::UnityEngine.InputSystem::PenButton
struct CORDL_TYPE PenButton : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PenButton_Unwrapped
enum struct __PenButton_Unwrapped : int32_t {
__E_Tip = static_cast<int32_t>(0x0),
__E_Eraser = static_cast<int32_t>(0x1),
__E_BarrelFirst = static_cast<int32_t>(0x2),
__E_BarrelSecond = static_cast<int32_t>(0x3),
__E_InRange = static_cast<int32_t>(0x4),
__E_BarrelThird = static_cast<int32_t>(0x5),
__E_BarrelFourth = static_cast<int32_t>(0x6),
__E_Barrel1 = static_cast<int32_t>(0x2),
__E_Barrel2 = static_cast<int32_t>(0x3),
__E_Barrel3 = static_cast<int32_t>(0x5),
__E_Barrel4 = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Tip value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::PenButton const Tip;

/// @brief Field Eraser value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::PenButton const Eraser;

/// @brief Field BarrelFirst value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::PenButton const BarrelFirst;

/// @brief Field BarrelSecond value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::PenButton const BarrelSecond;

/// @brief Field InRange value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::PenButton const InRange;

/// @brief Field BarrelThird value: static_cast<int32_t>(0x5)
static ::UnityEngine::InputSystem::PenButton const BarrelThird;

/// @brief Field BarrelFourth value: static_cast<int32_t>(0x6)
static ::UnityEngine::InputSystem::PenButton const BarrelFourth;

/// @brief Field Barrel1 value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::PenButton const Barrel1;

/// @brief Field Barrel2 value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::PenButton const Barrel2;

/// @brief Field Barrel3 value: static_cast<int32_t>(0x5)
static ::UnityEngine::InputSystem::PenButton const Barrel3;

/// @brief Field Barrel4 value: static_cast<int32_t>(0x6)
static ::UnityEngine::InputSystem::PenButton const Barrel4;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PenButton_Unwrapped () const noexcept {
return std::bit_cast<__PenButton_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PenButton(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PenButton(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PenButton()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PenButton, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PenButton, "UnityEngine.InputSystem", "PenButton");
