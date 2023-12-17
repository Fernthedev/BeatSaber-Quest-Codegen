#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MouseEventsHelper)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEventsHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEventsHelper);
// Type: UnityEngine.UIElements::MouseEventsHelper
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7169))
// CS Name: ::UnityEngine.UIElements::MouseEventsHelper*
class CORDL_TYPE MouseEventsHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SendEnterLeave addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TLeaveEvent,typename TEnterEvent>
static inline void SendEnterLeave(::UnityEngine::UIElements::VisualElement*  previousTopElementUnderMouse, ::UnityEngine::UIElements::VisualElement*  currentTopElementUnderMouse, ::UnityEngine::UIElements::IMouseEvent*  triggerEvent, ::UnityEngine::Vector2  mousePosition) ;

/// @brief Method SendMouseOverMouseOut addr 0x2e495a8 size 0x374 virtual false final false
static inline void SendMouseOverMouseOut(::UnityEngine::UIElements::VisualElement*  previousTopElementUnderMouse, ::UnityEngine::UIElements::VisualElement*  currentTopElementUnderMouse, ::UnityEngine::UIElements::IMouseEvent*  triggerEvent, ::UnityEngine::Vector2  mousePosition) ;

// Ctor Parameters [CppParam { name: "", ty: "MouseEventsHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseEventsHelper(MouseEventsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseEventsHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseEventsHelper(MouseEventsHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MouseEventsHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEventsHelper, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEventsHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEventsHelper*, "UnityEngine.UIElements", "MouseEventsHelper");
