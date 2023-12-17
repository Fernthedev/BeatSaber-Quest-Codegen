#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionCancelEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionCancelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionCancelEvent);
// Type: UnityEngine.UIElements::TransitionCancelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7188)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7188), inst: 5154 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7192))
// CS Name: ::UnityEngine.UIElements::TransitionCancelEvent*
class CORDL_TYPE TransitionCancelEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionCancelEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionCancelEvent*>)]{};

static inline ::UnityEngine::UIElements::TransitionCancelEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e4e9e0 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransitionCancelEvent(TransitionCancelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransitionCancelEvent(TransitionCancelEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TransitionCancelEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionCancelEvent, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionCancelEvent*, "UnityEngine.UIElements", "TransitionCancelEvent");
