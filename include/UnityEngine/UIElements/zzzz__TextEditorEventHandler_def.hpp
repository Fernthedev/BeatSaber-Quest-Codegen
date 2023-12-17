#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextEditorEventHandler)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextEditorEventHandler);
// Type: UnityEngine.UIElements::TextEditorEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7094))
// CS Name: ::UnityEngine.UIElements::TextEditorEventHandler*
class CORDL_TYPE TextEditorEventHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <editorEngine>k__BackingField offset 0x10
 __declspec(property(get=__get__editorEngine_k__BackingField, put=__set__editorEngine_k__BackingField)) ::UnityEngine::UIElements::TextEditorEngine*  _editorEngine_k__BackingField;

/// @brief Field <textInputField>k__BackingField offset 0x18
 __declspec(property(get=__get__textInputField_k__BackingField, put=__set__textInputField_k__BackingField)) ::UnityEngine::UIElements::ITextInputField*  _textInputField_k__BackingField;

 __declspec(property(get=get_editorEngine, put=set_editorEngine)) ::UnityEngine::UIElements::TextEditorEngine*  editorEngine;

 __declspec(property(get=get_textInputField, put=set_textInputField)) ::UnityEngine::UIElements::ITextInputField*  textInputField;

constexpr void __set__editorEngine_k__BackingField(::UnityEngine::UIElements::TextEditorEngine*  value) ;

constexpr ::UnityEngine::UIElements::TextEditorEngine* __get__editorEngine_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextEditorEngine*> __get__editorEngine_k__BackingField() const;

constexpr void __set__textInputField_k__BackingField(::UnityEngine::UIElements::ITextInputField*  value) ;

constexpr ::UnityEngine::UIElements::ITextInputField* __get__textInputField_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITextInputField*> __get__textInputField_k__BackingField() const;

/// @brief Method get_editorEngine addr 0x2e33aa8 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::TextEditorEngine* get_editorEngine() ;

/// @brief Method set_editorEngine addr 0x2e33ab0 size 0x8 virtual false final false
inline void set_editorEngine(::UnityEngine::UIElements::TextEditorEngine*  value) ;

/// @brief Method get_textInputField addr 0x2e33ab8 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::ITextInputField* get_textInputField() ;

/// @brief Method set_textInputField addr 0x2e33ac0 size 0x8 virtual false final false
inline void set_textInputField(::UnityEngine::UIElements::ITextInputField*  value) ;

static inline ::UnityEngine::UIElements::TextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextEditorEngine*  editorEngine, ::UnityEngine::UIElements::ITextInputField*  textInputField) ;

/// @brief Method .ctor addr 0x2e33ac8 size 0xc0 virtual false final false
inline void _ctor(::UnityEngine::UIElements::TextEditorEngine*  editorEngine, ::UnityEngine::UIElements::ITextInputField*  textInputField) ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2e33b88 size 0x4 virtual true final false
inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method ExecuteDefaultAction addr 0x2e33b8c size 0x158 virtual true final false
inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "TextEditorEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextEditorEventHandler(TextEditorEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextEditorEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextEditorEventHandler(TextEditorEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextEditorEventHandler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextEditorEventHandler, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextEditorEventHandler*, "UnityEngine.UIElements", "TextEditorEventHandler");
