#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerMoveEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerMoveEvent);
// Type: UnityEngine.UIElements::PointerMoveEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 1733 }), TypeDefinitionIndex(TypeDefinitionIndex(7198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7200))
// CS Name: ::UnityEngine.UIElements::PointerMoveEvent*
class CORDL_TYPE PointerMoveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerMoveEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerMoveEvent*>)]{};

/// @brief Field <isHandledByDraggable>k__BackingField offset 0xea
 __declspec(property(get=__get__isHandledByDraggable_k__BackingField, put=__set__isHandledByDraggable_k__BackingField)) bool  _isHandledByDraggable_k__BackingField;

 __declspec(property(get=get_isHandledByDraggable, put=set_isHandledByDraggable)) bool  isHandledByDraggable;

constexpr void __set__isHandledByDraggable_k__BackingField(bool  value) ;

constexpr bool& __get__isHandledByDraggable_k__BackingField() ;

constexpr bool const& __get__isHandledByDraggable_k__BackingField() const;

/// @brief Method get_isHandledByDraggable addr 0x2e4f274 size 0x8 virtual false final false
inline bool get_isHandledByDraggable() ;

/// @brief Method set_isHandledByDraggable addr 0x2e4f27c size 0xc virtual false final false
inline void set_isHandledByDraggable(bool  value) ;

/// @brief Method Init addr 0x2e4f288 size 0x50 virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x2e4f2d8 size 0x10c virtual false final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::PointerMoveEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e4f3e4 size 0x50 virtual false final false
inline void _ctor() ;

/// @brief Method PostDispatch addr 0x2e4f434 size 0x608 virtual true final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

// Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerMoveEvent(PointerMoveEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerMoveEvent(PointerMoveEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerMoveEvent()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerMoveEvent, 0xf0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerMoveEvent*, "UnityEngine.UIElements", "PointerMoveEvent");
