#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionChange)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputActionChange);
// Type: UnityEngine.InputSystem::InputActionChange
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6140))
// CS Name: ::UnityEngine.InputSystem::InputActionChange
struct CORDL_TYPE InputActionChange : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputActionChange_Unwrapped
enum struct __InputActionChange_Unwrapped : int32_t {
__E_ActionEnabled = static_cast<int32_t>(0x0),
__E_ActionDisabled = static_cast<int32_t>(0x1),
__E_ActionMapEnabled = static_cast<int32_t>(0x2),
__E_ActionMapDisabled = static_cast<int32_t>(0x3),
__E_ActionStarted = static_cast<int32_t>(0x4),
__E_ActionPerformed = static_cast<int32_t>(0x5),
__E_ActionCanceled = static_cast<int32_t>(0x6),
__E_BoundControlsAboutToChange = static_cast<int32_t>(0x7),
__E_BoundControlsChanged = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ActionEnabled value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::InputActionChange const ActionEnabled;

/// @brief Field ActionDisabled value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::InputActionChange const ActionDisabled;

/// @brief Field ActionMapEnabled value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::InputActionChange const ActionMapEnabled;

/// @brief Field ActionMapDisabled value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::InputActionChange const ActionMapDisabled;

/// @brief Field ActionStarted value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::InputActionChange const ActionStarted;

/// @brief Field ActionPerformed value: static_cast<int32_t>(0x5)
static ::UnityEngine::InputSystem::InputActionChange const ActionPerformed;

/// @brief Field ActionCanceled value: static_cast<int32_t>(0x6)
static ::UnityEngine::InputSystem::InputActionChange const ActionCanceled;

/// @brief Field BoundControlsAboutToChange value: static_cast<int32_t>(0x7)
static ::UnityEngine::InputSystem::InputActionChange const BoundControlsAboutToChange;

/// @brief Field BoundControlsChanged value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::InputActionChange const BoundControlsChanged;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InputActionChange_Unwrapped () const noexcept {
return std::bit_cast<__InputActionChange_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputActionChange(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputActionChange(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputActionChange()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionChange, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionChange, "UnityEngine.InputSystem", "InputActionChange");
