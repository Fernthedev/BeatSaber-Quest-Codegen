#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_def.hpp"
CORDL_MODULE_EXPORT(AndroidGamepadWithDpadButtons)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepadWithDpadButtons;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons);
// Type: UnityEngine.InputSystem.Android::AndroidGamepadWithDpadButtons
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6426))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6428))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidGamepadWithDpadButtons*
class CORDL_TYPE AndroidGamepadWithDpadButtons : public ::UnityEngine::InputSystem::Android::AndroidGamepad {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1d8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1d8 - sizeof(::UnityEngine::InputSystem::Android::AndroidGamepad)]{};

static inline ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons* New_ctor() ;

/// @brief Method .ctor addr 0x2ae59a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadButtons", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidGamepadWithDpadButtons(AndroidGamepadWithDpadButtons && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadButtons", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidGamepadWithDpadButtons(AndroidGamepadWithDpadButtons const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidGamepadWithDpadButtons()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons, 0x1d8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons*, "UnityEngine.InputSystem.Android", "AndroidGamepadWithDpadButtons");
