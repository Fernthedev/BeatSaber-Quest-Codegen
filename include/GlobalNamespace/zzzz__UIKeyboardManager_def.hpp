#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIKeyboardManager)
namespace HMUI {
class ModalView;
}
namespace UnityEngine {
class RectTransform;
}
namespace HMUI {
class UIKeyboard;
}
namespace UnityEngine {
class GameObject;
}
namespace VRUIControls {
class VRInputModule;
}
namespace UnityEngine {
class Transform;
}
namespace HMUI {
class InputFieldView;
}
// Forward declare root types
namespace GlobalNamespace {
class UIKeyboardManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIKeyboardManager);
// Type: ::UIKeyboardManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5467))
// CS Name: ::UIKeyboardManager*
class CORDL_TYPE UIKeyboardManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kKeyboardTopOffset offset 0x0
static constexpr float_t  kKeyboardTopOffset{5.0};

/// @brief Field _uiKeyboard offset 0x18
 __declspec(property(get=__get__uiKeyboard, put=__set__uiKeyboard)) ::HMUI::UIKeyboard*  _uiKeyboard;

/// @brief Field _keyboardModalView offset 0x20
 __declspec(property(get=__get__keyboardModalView, put=__set__keyboardModalView)) ::HMUI::ModalView*  _keyboardModalView;

/// @brief Field _keyboardContainerTransform offset 0x28
 __declspec(property(get=__get__keyboardContainerTransform, put=__set__keyboardContainerTransform)) ::UnityEngine::RectTransform*  _keyboardContainerTransform;

/// @brief Field _parentContainerTransform offset 0x30
 __declspec(property(get=__get__parentContainerTransform, put=__set__parentContainerTransform)) ::UnityEngine::Transform*  _parentContainerTransform;

/// @brief Field _vrInputModule offset 0x38
 __declspec(property(get=__get__vrInputModule, put=__set__vrInputModule)) ::VRUIControls::VRInputModule*  _vrInputModule;

/// @brief Field _selectedInput offset 0x40
 __declspec(property(get=__get__selectedInput, put=__set__selectedInput)) ::HMUI::InputFieldView*  _selectedInput;

 __declspec(property(get=get_keyboard)) ::HMUI::UIKeyboard*  keyboard;

constexpr void __set__uiKeyboard(::HMUI::UIKeyboard*  value) ;

constexpr ::HMUI::UIKeyboard* __get__uiKeyboard() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboard*> __get__uiKeyboard() const;

constexpr void __set__keyboardModalView(::HMUI::ModalView*  value) ;

constexpr ::HMUI::ModalView* __get__keyboardModalView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> __get__keyboardModalView() const;

constexpr void __set__keyboardContainerTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__keyboardContainerTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__keyboardContainerTransform() const;

constexpr void __set__parentContainerTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__parentContainerTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__parentContainerTransform() const;

constexpr void __set__vrInputModule(::VRUIControls::VRInputModule*  value) ;

constexpr ::VRUIControls::VRInputModule* __get__vrInputModule() ;

constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRInputModule*> __get__vrInputModule() const;

constexpr void __set__selectedInput(::HMUI::InputFieldView*  value) ;

constexpr ::HMUI::InputFieldView* __get__selectedInput() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> __get__selectedInput() const;

/// @brief Method get_keyboard addr 0x2281570 size 0x8 virtual false final false
inline ::HMUI::UIKeyboard* get_keyboard() ;

/// @brief Method Start addr 0x2281578 size 0x8c virtual false final false
inline void Start() ;

/// @brief Method OnEnable addr 0x2281604 size 0x8c virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2281690 size 0x8c virtual false final false
inline void OnDisable() ;

/// @brief Method OnDestroy addr 0x228171c size 0xd0 virtual false final false
inline void OnDestroy() ;

/// @brief Method OpenKeyboardFor addr 0x22817ec size 0x200 virtual false final false
inline void OpenKeyboardFor(::HMUI::InputFieldView*  input) ;

/// @brief Method CloseKeyboard addr 0x22819ec size 0x98 virtual false final false
inline void CloseKeyboard() ;

/// @brief Method TransferKeyboardTo addr 0x2281a84 size 0x94 virtual false final false
inline void TransferKeyboardTo(::HMUI::InputFieldView*  nextInput) ;

/// @brief Method ShouldCloseKeyboard addr 0x2281b18 size 0x58 virtual false final false
inline bool ShouldCloseKeyboard(::UnityEngine::GameObject*  root) ;

/// @brief Method ProcessMousePress addr 0x2281b70 size 0x168 virtual false final false
inline void ProcessMousePress(::UnityEngine::GameObject*  currentOverGo) ;

/// @brief Method HandleKeyboardOkButton addr 0x2281cd8 size 0x160 virtual false final false
inline void HandleKeyboardOkButton() ;

static inline ::GlobalNamespace::UIKeyboardManager* New_ctor() ;

/// @brief Method .ctor addr 0x2281e38 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboardManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIKeyboardManager(UIKeyboardManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboardManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIKeyboardManager(UIKeyboardManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UIKeyboardManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIKeyboardManager, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIKeyboardManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIKeyboardManager*, "", "UIKeyboardManager");
