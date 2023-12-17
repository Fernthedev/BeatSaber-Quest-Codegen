#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ValidateCommandEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ValidateCommandEvent);
// Type: UnityEngine.UIElements::ValidateCommandEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7229)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 1029 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7230))
// CS Name: ::UnityEngine.UIElements::ValidateCommandEvent*
class CORDL_TYPE ValidateCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ValidateCommandEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ValidateCommandEvent*>)]{};

static inline ::UnityEngine::UIElements::ValidateCommandEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e51edc size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateCommandEvent(ValidateCommandEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateCommandEvent(ValidateCommandEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValidateCommandEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ValidateCommandEvent, 0x88>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ValidateCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ValidateCommandEvent*, "UnityEngine.UIElements", "ValidateCommandEvent");
