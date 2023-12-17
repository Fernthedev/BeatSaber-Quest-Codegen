#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionRunEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionRunEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionRunEvent);
// Type: UnityEngine.UIElements::TransitionRunEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7188), inst: 5156 }), TypeDefinitionIndex(TypeDefinitionIndex(7188))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7189))
// CS Name: ::UnityEngine.UIElements::TransitionRunEvent*
class CORDL_TYPE TransitionRunEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionRunEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionRunEvent*>)]{};

static inline ::UnityEngine::UIElements::TransitionRunEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e4e908 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TransitionRunEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransitionRunEvent(TransitionRunEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransitionRunEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransitionRunEvent(TransitionRunEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TransitionRunEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionRunEvent, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionRunEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionRunEvent*, "UnityEngine.UIElements", "TransitionRunEvent");
