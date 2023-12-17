#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseOverEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseOverEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseOverEvent);
// Type: UnityEngine.UIElements::MouseOverEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7215), inst: 4648 }), TypeDefinitionIndex(TypeDefinitionIndex(7215))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7225))
// CS Name: ::UnityEngine.UIElements::MouseOverEvent*
class CORDL_TYPE MouseOverEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOverEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOverEvent*>)]{};

static inline ::UnityEngine::UIElements::MouseOverEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e51c88 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseOverEvent(MouseOverEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseOverEvent(MouseOverEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MouseOverEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseOverEvent, 0xb0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseOverEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOverEvent*, "UnityEngine.UIElements", "MouseOverEvent");
