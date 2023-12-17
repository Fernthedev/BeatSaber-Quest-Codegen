#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVisualElementPanelActivatable)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualElementPanelActivatable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IVisualElementPanelActivatable);
// Type: UnityEngine.UIElements::IVisualElementPanelActivatable
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6748))
// CS Name: ::UnityEngine.UIElements::IVisualElementPanelActivatable*
class CORDL_TYPE IVisualElementPanelActivatable {
public:
// Declarations
 __declspec(property(get=get_element)) ::UnityEngine::UIElements::VisualElement*  element;

/// @brief Method get_element addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::UIElements::VisualElement* get_element() ;

/// @brief Method CanBeActivated addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CanBeActivated() ;

/// @brief Method OnPanelActivate addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnPanelActivate() ;

/// @brief Method OnPanelDeactivate addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnPanelDeactivate() ;

// Ctor Parameters [CppParam { name: "", ty: "IVisualElementPanelActivatable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IVisualElementPanelActivatable(IVisualElementPanelActivatable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IVisualElementPanelActivatable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVisualElementPanelActivatable(IVisualElementPanelActivatable const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IVisualElementPanelActivatable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualElementPanelActivatable*, "UnityEngine.UIElements", "IVisualElementPanelActivatable");
