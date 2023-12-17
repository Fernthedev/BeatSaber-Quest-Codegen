#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventDebugger)
namespace UnityEngine::UIElements {
class PropagationPaths;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDebugger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDebugger);
// Type: UnityEngine.UIElements::EventDebugger
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7354))
// CS Name: ::UnityEngine.UIElements::EventDebugger*
class CORDL_TYPE EventDebugger : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method LogPropagationPaths addr 0x2e83510 size 0x4 virtual false final false
static inline void LogPropagationPaths(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::PropagationPaths*  paths) ;

// Ctor Parameters [CppParam { name: "", ty: "EventDebugger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventDebugger(EventDebugger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventDebugger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventDebugger(EventDebugger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventDebugger()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDebugger, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventDebugger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDebugger*, "UnityEngine.UIElements", "EventDebugger");
