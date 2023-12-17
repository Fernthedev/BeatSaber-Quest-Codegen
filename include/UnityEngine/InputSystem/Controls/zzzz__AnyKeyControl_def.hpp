#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnyKeyControl)
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::AnyKeyControl);
// Type: UnityEngine.InputSystem.Controls::AnyKeyControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6629))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6626))
// CS Name: ::UnityEngine.InputSystem.Controls::AnyKeyControl*
class CORDL_TYPE AnyKeyControl : public ::UnityEngine::InputSystem::Controls::ButtonControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::UnityEngine::InputSystem::Controls::ButtonControl)]{};

static inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* New_ctor() ;

/// @brief Method .ctor addr 0x2b09994 size 0x70 virtual false final false
inline void _ctor() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2b09a8c size 0x28 virtual true final false
inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

// Ctor Parameters [CppParam { name: "", ty: "AnyKeyControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnyKeyControl(AnyKeyControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnyKeyControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnyKeyControl(AnyKeyControl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnyKeyControl()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::AnyKeyControl, 0x120>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::AnyKeyControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::AnyKeyControl*, "UnityEngine.InputSystem.Controls", "AnyKeyControl");
