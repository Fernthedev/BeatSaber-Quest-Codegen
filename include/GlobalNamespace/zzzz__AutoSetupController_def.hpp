#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AutoSetupController)
namespace HMUI {
class ButtonBinder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class AutoSetupData;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class AutoSetupController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutoSetupController);
// Type: ::AutoSetupController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5556))
// CS Name: ::AutoSetupController*
class CORDL_TYPE AutoSetupController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _closeButton offset 0x18
 __declspec(property(get=__get__closeButton, put=__set__closeButton)) ::UnityEngine::UI::Button*  _closeButton;

/// @brief Field _selectBasedOnSuggestionsToggle offset 0x20
 __declspec(property(get=__get__selectBasedOnSuggestionsToggle, put=__set__selectBasedOnSuggestionsToggle)) ::UnityEngine::UI::Toggle*  _selectBasedOnSuggestionsToggle;

/// @brief Field _autoStartWhenAllReadyToggle offset 0x28
 __declspec(property(get=__get__autoStartWhenAllReadyToggle, put=__set__autoStartWhenAllReadyToggle)) ::UnityEngine::UI::Toggle*  _autoStartWhenAllReadyToggle;

/// @brief Field _forceAutoStartAfterSongSelectionToggle offset 0x30
 __declspec(property(get=__get__forceAutoStartAfterSongSelectionToggle, put=__set__forceAutoStartAfterSongSelectionToggle)) ::UnityEngine::UI::Toggle*  _forceAutoStartAfterSongSelectionToggle;

/// @brief Field _randomSongIfNoneSuggestedToggle offset 0x38
 __declspec(property(get=__get__randomSongIfNoneSuggestedToggle, put=__set__randomSongIfNoneSuggestedToggle)) ::UnityEngine::UI::Toggle*  _randomSongIfNoneSuggestedToggle;

/// @brief Field didFinishEvent offset 0x40
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::AutoSetupData*>*  didFinishEvent;

/// @brief Field _buttonBinder offset 0x48
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

/// @brief Field _toggleBinder offset 0x50
 __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder)) ::HMUI::ToggleBinder*  _toggleBinder;

/// @brief Field _autoSetupData offset 0x58
 __declspec(property(get=__get__autoSetupData, put=__set__autoSetupData)) ::GlobalNamespace::AutoSetupData*  _autoSetupData;

constexpr void __set__closeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__closeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__closeButton() const;

constexpr void __set__selectBasedOnSuggestionsToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__selectBasedOnSuggestionsToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__selectBasedOnSuggestionsToggle() const;

constexpr void __set__autoStartWhenAllReadyToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__autoStartWhenAllReadyToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__autoStartWhenAllReadyToggle() const;

constexpr void __set__forceAutoStartAfterSongSelectionToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__forceAutoStartAfterSongSelectionToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__forceAutoStartAfterSongSelectionToggle() const;

constexpr void __set__randomSongIfNoneSuggestedToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__randomSongIfNoneSuggestedToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__randomSongIfNoneSuggestedToggle() const;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::AutoSetupData*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::AutoSetupData*>*> __get_didFinishEvent() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

constexpr void __set__toggleBinder(::HMUI::ToggleBinder*  value) ;

constexpr ::HMUI::ToggleBinder* __get__toggleBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> __get__toggleBinder() const;

constexpr void __set__autoSetupData(::GlobalNamespace::AutoSetupData*  value) ;

constexpr ::GlobalNamespace::AutoSetupData* __get__autoSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AutoSetupData*> __get__autoSetupData() const;

/// @brief Method add_didFinishEvent addr 0x22a2a60 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22a2b10 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>*  value) ;

/// @brief Method Setup addr 0x22a2bc0 size 0x8 virtual false final false
inline void Setup(::GlobalNamespace::AutoSetupData*  autoSetupData) ;

/// @brief Method OnEnable addr 0x22a2bc8 size 0x200 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x22a2dc8 size 0x1c virtual false final false
inline void OnDisable() ;

static inline ::GlobalNamespace::AutoSetupController* New_ctor() ;

/// @brief Method .ctor addr 0x22a2de4 size 0xc8 virtual false final false
inline void _ctor() ;

/// @brief Method <OnEnable>b__12_0 addr 0x22a2eb4 size 0x20 virtual false final false
inline void _OnEnable_b__12_0() ;

/// @brief Method <OnEnable>b__12_1 addr 0x22a2ed4 size 0x20 virtual false final false
inline void _OnEnable_b__12_1(bool  isOn) ;

/// @brief Method <OnEnable>b__12_2 addr 0x22a2ef4 size 0x20 virtual false final false
inline void _OnEnable_b__12_2(bool  isOn) ;

/// @brief Method <OnEnable>b__12_3 addr 0x22a2f14 size 0x20 virtual false final false
inline void _OnEnable_b__12_3(bool  isOn) ;

/// @brief Method <OnEnable>b__12_4 addr 0x22a2f34 size 0x20 virtual false final false
inline void _OnEnable_b__12_4(bool  isOn) ;

// Ctor Parameters [CppParam { name: "", ty: "AutoSetupController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoSetupController(AutoSetupController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoSetupController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoSetupController(AutoSetupController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AutoSetupController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutoSetupController, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutoSetupController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoSetupController*, "", "AutoSetupController");
