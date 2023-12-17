#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
CORDL_MODULE_EXPORT(TouchScreenTextEditorEventHandler)
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TouchScreenTextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
// Type: UnityEngine.UIElements::TouchScreenTextEditorEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7094))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7132))
// CS Name: ::UnityEngine.UIElements::TouchScreenTextEditorEventHandler*
class CORDL_TYPE TouchScreenTextEditorEventHandler : public ::UnityEngine::UIElements::TextEditorEventHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::UIElements::TextEditorEventHandler)]{};

/// @brief Field m_TouchKeyboardPoller offset 0x20
 __declspec(property(get=__get_m_TouchKeyboardPoller, put=__set_m_TouchKeyboardPoller)) ::UnityEngine::UIElements::IVisualElementScheduledItem*  m_TouchKeyboardPoller;

/// @brief Field m_LastPointerDownTarget offset 0x28
 __declspec(property(get=__get_m_LastPointerDownTarget, put=__set_m_LastPointerDownTarget)) ::UnityEngine::UIElements::VisualElement*  m_LastPointerDownTarget;

constexpr void __set_m_TouchKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem*  value) ;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* __get_m_TouchKeyboardPoller() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> __get_m_TouchKeyboardPoller() const;

constexpr void __set_m_LastPointerDownTarget(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_LastPointerDownTarget() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_LastPointerDownTarget() const;

static inline void setStaticF_s_KeyboardOnScreen(::UnityEngine::TouchScreenKeyboard*  value) ;

static inline ::UnityEngine::TouchScreenKeyboard* getStaticF_s_KeyboardOnScreen() ;

static inline ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextEditorEngine*  editorEngine, ::UnityEngine::UIElements::ITextInputField*  textInputField) ;

/// @brief Method .ctor addr 0x2e3ab1c size 0x8 virtual false final false
inline void _ctor(::UnityEngine::UIElements::TextEditorEngine*  editorEngine, ::UnityEngine::UIElements::ITextInputField*  textInputField) ;

/// @brief Method PollTouchScreenKeyboard addr 0x2e3ab24 size 0x25c virtual false final false
inline void PollTouchScreenKeyboard() ;

/// @brief Method DoPollTouchScreenKeyboard addr 0x2e3ad80 size 0x728 virtual false final false
inline void DoPollTouchScreenKeyboard() ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2e3b4a8 size 0x550 virtual true final false
inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase*  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenTextEditorEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchScreenTextEditorEventHandler(TouchScreenTextEditorEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenTextEditorEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchScreenTextEditorEventHandler(TouchScreenTextEditorEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TouchScreenTextEditorEventHandler()  = default;
public:


// Fields

// Static field s_KeyboardOnScreen


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*, "UnityEngine.UIElements", "TouchScreenTextEditorEventHandler");
