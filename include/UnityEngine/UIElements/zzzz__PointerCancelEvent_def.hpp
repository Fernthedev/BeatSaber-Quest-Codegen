#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCancelEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCancelEvent);
// Type: UnityEngine.UIElements::PointerCancelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7198)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 4834 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7203))
// CS Name: ::UnityEngine.UIElements::PointerCancelEvent*
class CORDL_TYPE PointerCancelEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent*>)]{};

/// @brief Method Init addr 0x2e50104 size 0x50 virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x2e50154 size 0x104 virtual false final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::PointerCancelEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e50258 size 0x50 virtual false final false
inline void _ctor() ;

/// @brief Method PostDispatch addr 0x2e502a8 size 0x330 virtual true final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

// Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerCancelEvent(PointerCancelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerCancelEvent(PointerCancelEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerCancelEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCancelEvent, 0xf0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCancelEvent*, "UnityEngine.UIElements", "PointerCancelEvent");
