#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureEvent);
// Type: UnityEngine.UIElements::MouseCaptureEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7153)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7153), inst: 4635 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7155))
// CS Name: ::UnityEngine.UIElements::MouseCaptureEvent*
class CORDL_TYPE MouseCaptureEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent*>)]{};

static inline ::UnityEngine::UIElements::MouseCaptureEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e47ef4 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseCaptureEvent(MouseCaptureEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseCaptureEvent(MouseCaptureEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MouseCaptureEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureEvent, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureEvent*, "UnityEngine.UIElements", "MouseCaptureEvent");
