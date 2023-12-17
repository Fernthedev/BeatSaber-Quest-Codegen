#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsViewController)
namespace HMUI {
class TextPageScrollView;
}
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsViewController);
// Type: ::RecordingToolSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5740))
// CS Name: ::RecordingToolSettingsViewController*
class CORDL_TYPE RecordingToolSettingsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _continueButton offset 0x70
 __declspec(property(get=__get__continueButton, put=__set__continueButton)) ::UnityEngine::UI::Button*  _continueButton;

/// @brief Field _textPageScrollView offset 0x78
 __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView)) ::HMUI::TextPageScrollView*  _textPageScrollView;

/// @brief Field _recordingToolManager offset 0x80
 __declspec(property(get=__get__recordingToolManager, put=__set__recordingToolManager)) ::GlobalNamespace::RecordingToolManager*  _recordingToolManager;

/// @brief Field didFinishEvent offset 0x88
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action*  didFinishEvent;

constexpr void __set__continueButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__continueButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__continueButton() const;

constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView*  value) ;

constexpr ::HMUI::TextPageScrollView* __get__textPageScrollView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> __get__textPageScrollView() const;

constexpr void __set__recordingToolManager(::GlobalNamespace::RecordingToolManager*  value) ;

constexpr ::GlobalNamespace::RecordingToolManager* __get__recordingToolManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> __get__recordingToolManager() const;

constexpr void __set_didFinishEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didFinishEvent() const;

/// @brief Method add_didFinishEvent addr 0x22d5fd0 size 0x9c virtual false final false
inline void add_didFinishEvent(::System::Action*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22d606c size 0x9c virtual false final false
inline void remove_didFinishEvent(::System::Action*  value) ;

/// @brief Method DidActivate addr 0x22d6108 size 0x120 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::RecordingToolSettingsViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d6228 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__6_0 addr 0x22d6230 size 0x1c virtual false final false
inline void _DidActivate_b__6_0() ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolSettingsViewController(RecordingToolSettingsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolSettingsViewController(RecordingToolSettingsViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolSettingsViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsViewController*, "", "RecordingToolSettingsViewController");
