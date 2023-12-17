#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClickEvent)
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickEvent);
// Type: UnityEngine.UIElements::ClickEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 4833 }), TypeDefinitionIndex(TypeDefinitionIndex(7198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7204))
// CS Name: ::UnityEngine.UIElements::ClickEvent*
class CORDL_TYPE ClickEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::ClickEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::ClickEvent*>)]{};

/// @brief Method Init addr 0x2e505dc size 0x54 virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x2e50630 size 0xc virtual false final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::ClickEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e5063c size 0x54 virtual false final false
inline void _ctor() ;

/// @brief Method GetPooled addr 0x2e50690 size 0x70 virtual false final false
static inline ::UnityEngine::UIElements::ClickEvent* GetPooled(::UnityEngine::UIElements::PointerUpEvent*  pointerEvent, int32_t  clickCount) ;

// Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClickEvent(ClickEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClickEvent(ClickEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ClickEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickEvent, 0xf0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ClickEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickEvent*, "UnityEngine.UIElements", "ClickEvent");
