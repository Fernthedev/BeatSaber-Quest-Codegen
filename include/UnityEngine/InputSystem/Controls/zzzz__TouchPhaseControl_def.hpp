#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
CORDL_MODULE_EXPORT(TouchPhaseControl)
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::TouchPhaseControl);
// Type: UnityEngine.InputSystem.Controls::TouchPhaseControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3895 }), TypeDefinitionIndex(TypeDefinitionIndex(6287))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6642))
// CS Name: ::UnityEngine.InputSystem.Controls::TouchPhaseControl*
class CORDL_TYPE TouchPhaseControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::TouchPhase> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::TouchPhase>)]{};

static inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* New_ctor() ;

/// @brief Method .ctor addr 0x2b0bbe4 size 0x88 virtual false final false
inline void _ctor() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2b0bc6c size 0x28 virtual true final false
inline ::UnityEngine::InputSystem::TouchPhase ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2b0bc94 size 0xc virtual true final false
inline void WriteValueIntoState(::UnityEngine::InputSystem::TouchPhase  value, ::cordl_internals::Ptr<void>  statePtr) ;

// Ctor Parameters [CppParam { name: "", ty: "TouchPhaseControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchPhaseControl(TouchPhaseControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchPhaseControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchPhaseControl(TouchPhaseControl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TouchPhaseControl()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::TouchPhaseControl, 0xf0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::TouchPhaseControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::TouchPhaseControl*, "UnityEngine.InputSystem.Controls", "TouchPhaseControl");
