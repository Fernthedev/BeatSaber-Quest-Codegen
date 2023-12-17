#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ExecuteCommandEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ExecuteCommandEvent);
// Type: UnityEngine.UIElements::ExecuteCommandEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7229)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 1028 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7231))
// CS Name: ::UnityEngine.UIElements::ExecuteCommandEvent*
class CORDL_TYPE ExecuteCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ExecuteCommandEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ExecuteCommandEvent*>)]{};

static inline ::UnityEngine::UIElements::ExecuteCommandEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e51f24 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExecuteCommandEvent(ExecuteCommandEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExecuteCommandEvent(ExecuteCommandEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExecuteCommandEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ExecuteCommandEvent, 0x88>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ExecuteCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ExecuteCommandEvent*, "UnityEngine.UIElements", "ExecuteCommandEvent");
