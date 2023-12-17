#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUserPairingOptions)
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUserPairingOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUserPairingOptions);
// Type: UnityEngine.InputSystem.Users::InputUserPairingOptions
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6367))
// CS Name: ::UnityEngine.InputSystem.Users::InputUserPairingOptions
struct CORDL_TYPE InputUserPairingOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputUserPairingOptions_Unwrapped
enum struct __InputUserPairingOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ForcePlatformUserAccountSelection = static_cast<int32_t>(0x1),
__E_ForceNoPlatformUserAccountSelection = static_cast<int32_t>(0x2),
__E_UnpairCurrentDevicesFromUser = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const None;

/// @brief Field ForcePlatformUserAccountSelection value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const ForcePlatformUserAccountSelection;

/// @brief Field ForceNoPlatformUserAccountSelection value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const ForceNoPlatformUserAccountSelection;

/// @brief Field UnpairCurrentDevicesFromUser value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const UnpairCurrentDevicesFromUser;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InputUserPairingOptions_Unwrapped () const noexcept {
return std::bit_cast<__InputUserPairingOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputUserPairingOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputUserPairingOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputUserPairingOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUserPairingOptions, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserPairingOptions, "UnityEngine.InputSystem.Users", "InputUserPairingOptions");
