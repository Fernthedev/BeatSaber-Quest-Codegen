#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCaptureOutEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureOutEvent);
// Type: UnityEngine.UIElements::PointerCaptureOutEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7150)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7150), inst: 4830 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7151))
// CS Name: ::UnityEngine.UIElements::PointerCaptureOutEvent*
class CORDL_TYPE PointerCaptureOutEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureOutEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureOutEvent*>)]{};

static inline ::UnityEngine::UIElements::PointerCaptureOutEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e47e1c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerCaptureOutEvent(PointerCaptureOutEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerCaptureOutEvent(PointerCaptureOutEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerCaptureOutEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureOutEvent, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureOutEvent*, "UnityEngine.UIElements", "PointerCaptureOutEvent");
