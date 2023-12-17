#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(NavigationCancelEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationCancelEvent);
// Type: UnityEngine.UIElements::NavigationCancelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7248), inst: 4701 }), TypeDefinitionIndex(TypeDefinitionIndex(7248))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7253))
// CS Name: ::UnityEngine.UIElements::NavigationCancelEvent*
class CORDL_TYPE NavigationCancelEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationCancelEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationCancelEvent*>)]{};

static inline ::UnityEngine::UIElements::NavigationCancelEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e53238 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NavigationCancelEvent(NavigationCancelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavigationCancelEvent(NavigationCancelEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NavigationCancelEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationCancelEvent, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigationCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationCancelEvent*, "UnityEngine.UIElements", "NavigationCancelEvent");
