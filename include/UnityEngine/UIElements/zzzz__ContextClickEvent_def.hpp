#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ContextClickEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextClickEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextClickEvent);
// Type: UnityEngine.UIElements::ContextClickEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7215)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7215), inst: 4639 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7219))
// CS Name: ::UnityEngine.UIElements::ContextClickEvent*
class CORDL_TYPE ContextClickEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextClickEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextClickEvent*>)]{};

static inline ::UnityEngine::UIElements::ContextClickEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e51368 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextClickEvent(ContextClickEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextClickEvent(ContextClickEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContextClickEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextClickEvent, 0xb0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextClickEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextClickEvent*, "UnityEngine.UIElements", "ContextClickEvent");
