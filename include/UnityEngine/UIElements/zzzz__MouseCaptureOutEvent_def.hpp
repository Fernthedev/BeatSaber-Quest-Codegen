#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureOutEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureOutEvent);
// Type: UnityEngine.UIElements::MouseCaptureOutEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7153)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7153), inst: 4636 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7154))
// CS Name: ::UnityEngine.UIElements::MouseCaptureOutEvent*
class CORDL_TYPE MouseCaptureOutEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureOutEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureOutEvent*>)]{};

static inline ::UnityEngine::UIElements::MouseCaptureOutEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e47eac size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseCaptureOutEvent(MouseCaptureOutEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseCaptureOutEvent(MouseCaptureOutEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MouseCaptureOutEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureOutEvent, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureOutEvent*, "UnityEngine.UIElements", "MouseCaptureOutEvent");
