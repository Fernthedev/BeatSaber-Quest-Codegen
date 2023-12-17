#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUserChange)
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUserChange);
// Type: UnityEngine.InputSystem.Users::InputUserChange
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6366))
// CS Name: ::UnityEngine.InputSystem.Users::InputUserChange
struct CORDL_TYPE InputUserChange : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputUserChange_Unwrapped
enum struct __InputUserChange_Unwrapped : int32_t {
__E_Added = static_cast<int32_t>(0x0),
__E_Removed = static_cast<int32_t>(0x1),
__E_DevicePaired = static_cast<int32_t>(0x2),
__E_DeviceUnpaired = static_cast<int32_t>(0x3),
__E_DeviceLost = static_cast<int32_t>(0x4),
__E_DeviceRegained = static_cast<int32_t>(0x5),
__E_AccountChanged = static_cast<int32_t>(0x6),
__E_AccountNameChanged = static_cast<int32_t>(0x7),
__E_AccountSelectionInProgress = static_cast<int32_t>(0x8),
__E_AccountSelectionCanceled = static_cast<int32_t>(0x9),
__E_AccountSelectionComplete = static_cast<int32_t>(0xa),
__E_ControlSchemeChanged = static_cast<int32_t>(0xb),
__E_ControlsChanged = static_cast<int32_t>(0xc),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Added value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::Users::InputUserChange const Added;

/// @brief Field Removed value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::Users::InputUserChange const Removed;

/// @brief Field DevicePaired value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::Users::InputUserChange const DevicePaired;

/// @brief Field DeviceUnpaired value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::Users::InputUserChange const DeviceUnpaired;

/// @brief Field DeviceLost value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::Users::InputUserChange const DeviceLost;

/// @brief Field DeviceRegained value: static_cast<int32_t>(0x5)
static ::UnityEngine::InputSystem::Users::InputUserChange const DeviceRegained;

/// @brief Field AccountChanged value: static_cast<int32_t>(0x6)
static ::UnityEngine::InputSystem::Users::InputUserChange const AccountChanged;

/// @brief Field AccountNameChanged value: static_cast<int32_t>(0x7)
static ::UnityEngine::InputSystem::Users::InputUserChange const AccountNameChanged;

/// @brief Field AccountSelectionInProgress value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionInProgress;

/// @brief Field AccountSelectionCanceled value: static_cast<int32_t>(0x9)
static ::UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionCanceled;

/// @brief Field AccountSelectionComplete value: static_cast<int32_t>(0xa)
static ::UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionComplete;

/// @brief Field ControlSchemeChanged value: static_cast<int32_t>(0xb)
static ::UnityEngine::InputSystem::Users::InputUserChange const ControlSchemeChanged;

/// @brief Field ControlsChanged value: static_cast<int32_t>(0xc)
static ::UnityEngine::InputSystem::Users::InputUserChange const ControlsChanged;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InputUserChange_Unwrapped () const noexcept {
return std::bit_cast<__InputUserChange_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputUserChange(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputUserChange(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputUserChange()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUserChange, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserChange, "UnityEngine.InputSystem.Users", "InputUserChange");
