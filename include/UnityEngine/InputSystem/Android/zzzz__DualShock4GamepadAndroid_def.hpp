#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/DualShock/zzzz__DualShockGamepad_def.hpp"
CORDL_MODULE_EXPORT(DualShock4GamepadAndroid)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class DualShock4GamepadAndroid;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid);
// Type: UnityEngine.InputSystem.Android::DualShock4GamepadAndroid
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6423))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6430))
// CS Name: ::UnityEngine.InputSystem.Android::DualShock4GamepadAndroid*
class CORDL_TYPE DualShock4GamepadAndroid : public ::UnityEngine::InputSystem::DualShock::DualShockGamepad {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x220};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x220 - sizeof(::UnityEngine::InputSystem::DualShock::DualShockGamepad)]{};

static inline ::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid* New_ctor() ;

/// @brief Method .ctor addr 0x2ae59b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DualShock4GamepadAndroid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualShock4GamepadAndroid(DualShock4GamepadAndroid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualShock4GamepadAndroid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualShock4GamepadAndroid(DualShock4GamepadAndroid const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DualShock4GamepadAndroid()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid, 0x220>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid*, "UnityEngine.InputSystem.Android", "DualShock4GamepadAndroid");
