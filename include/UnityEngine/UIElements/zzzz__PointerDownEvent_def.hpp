#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerDownEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerDownEvent);
// Type: UnityEngine.UIElements::PointerDownEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7198)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 4835 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7199))
// CS Name: ::UnityEngine.UIElements::PointerDownEvent*
class CORDL_TYPE PointerDownEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerDownEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerDownEvent*>)]{};

/// @brief Method Init addr 0x2e4ee68 size 0x50 virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x2e4eeb8 size 0x104 virtual false final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::PointerDownEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e4efbc size 0x50 virtual false final false
inline void _ctor() ;

/// @brief Method PostDispatch addr 0x2e4f00c size 0x264 virtual true final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

// Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerDownEvent(PointerDownEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerDownEvent(PointerDownEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerDownEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDownEvent, 0xf0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDownEvent*, "UnityEngine.UIElements", "PointerDownEvent");
