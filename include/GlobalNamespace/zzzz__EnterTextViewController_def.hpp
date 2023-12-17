#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnterTextViewController)
namespace GlobalNamespace {
class VRTextEntryController;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class EnterTextViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnterTextViewController);
// Type: ::EnterTextViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5625))
// CS Name: ::EnterTextViewController*
class CORDL_TYPE EnterTextViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _textEntryController offset 0x70
 __declspec(property(get=__get__textEntryController, put=__set__textEntryController)) ::GlobalNamespace::VRTextEntryController*  _textEntryController;

/// @brief Field _titleText offset 0x78
 __declspec(property(get=__get__titleText, put=__set__titleText)) ::TMPro::TextMeshProUGUI*  _titleText;

/// @brief Field _okButton offset 0x80
 __declspec(property(get=__get__okButton, put=__set__okButton)) ::UnityEngine::UI::Button*  _okButton;

/// @brief Field didFinishEvent offset 0x88
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::EnterTextViewController*,::StringW>*  didFinishEvent;

constexpr void __set__textEntryController(::GlobalNamespace::VRTextEntryController*  value) ;

constexpr ::GlobalNamespace::VRTextEntryController* __get__textEntryController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRTextEntryController*> __get__textEntryController() const;

constexpr void __set__titleText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__titleText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__titleText() const;

constexpr void __set__okButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__okButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__okButton() const;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::EnterTextViewController*,::StringW>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::EnterTextViewController*,::StringW>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::EnterTextViewController*,::StringW>*> __get_didFinishEvent() const;

/// @brief Method add_didFinishEvent addr 0x22afbd0 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::EnterTextViewController*,::StringW>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22afc80 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::EnterTextViewController*,::StringW>*  value) ;

/// @brief Method Init addr 0x22afd30 size 0x24 virtual false final false
inline void Init(::StringW  titleText) ;

/// @brief Method DidActivate addr 0x22afd54 size 0xe4 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method OkButtonPressed addr 0x22afe38 size 0x98 virtual false final false
inline void OkButtonPressed() ;

static inline ::GlobalNamespace::EnterTextViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22afed0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnterTextViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnterTextViewController(EnterTextViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnterTextViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnterTextViewController(EnterTextViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnterTextViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnterTextViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnterTextViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterTextViewController*, "", "EnterTextViewController");
