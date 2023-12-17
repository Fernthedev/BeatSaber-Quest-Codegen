#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(DetachFromPanelEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DetachFromPanelEvent);
// Type: UnityEngine.UIElements::DetachFromPanelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7243)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7243), inst: 4820 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7245))
// CS Name: ::UnityEngine.UIElements::DetachFromPanelEvent*
class CORDL_TYPE DetachFromPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::DetachFromPanelEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::DetachFromPanelEvent*>)]{};

static inline ::UnityEngine::UIElements::DetachFromPanelEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e52cf4 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetachFromPanelEvent(DetachFromPanelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetachFromPanelEvent(DetachFromPanelEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DetachFromPanelEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DetachFromPanelEvent, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DetachFromPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DetachFromPanelEvent*, "UnityEngine.UIElements", "DetachFromPanelEvent");
