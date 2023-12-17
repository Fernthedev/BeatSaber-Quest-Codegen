#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventDispatchUtilities)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatchUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDispatchUtilities);
// Type: UnityEngine.UIElements::EventDispatchUtilities
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7258))
// CS Name: ::UnityEngine.UIElements::EventDispatchUtilities*
class CORDL_TYPE EventDispatchUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method PropagateEvent addr 0x2e4bd94 size 0x74c virtual false final false
static inline void PropagateEvent(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method PropagateToIMGUIContainer addr 0x2e4c4ec size 0x224 virtual false final false
static inline void PropagateToIMGUIContainer(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method ExecuteDefaultAction addr 0x2e53680 size 0x1a8 virtual false final false
static inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel) ;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventDispatchUtilities(EventDispatchUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventDispatchUtilities(EventDispatchUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventDispatchUtilities()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatchUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventDispatchUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatchUtilities*, "UnityEngine.UIElements", "EventDispatchUtilities");
