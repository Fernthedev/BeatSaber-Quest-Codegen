#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(KeyDownEvent)
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyDownEvent);
// Type: UnityEngine.UIElements::KeyDownEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7240), inst: 3943 }), TypeDefinitionIndex(TypeDefinitionIndex(7240))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7241))
// CS Name: ::UnityEngine.UIElements::KeyDownEvent*
class CORDL_TYPE KeyDownEvent : public ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyDownEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyDownEvent*>)]{};

/// @brief Method GetEquivalentImguiEvent addr 0x2e52b5c size 0xc0 virtual false final false
inline void GetEquivalentImguiEvent(::UnityEngine::Event*  outImguiEvent) ;

static inline ::UnityEngine::UIElements::KeyDownEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e52c1c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyDownEvent(KeyDownEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyDownEvent(KeyDownEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyDownEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyDownEvent, 0x88>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyDownEvent*, "UnityEngine.UIElements", "KeyDownEvent");
