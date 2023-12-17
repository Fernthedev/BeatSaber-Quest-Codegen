#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(SelectLanguageViewController)
namespace GlobalNamespace {
class LanguageSettingsController;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectLanguageViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectLanguageViewController);
// Type: ::SelectLanguageViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5748))
// CS Name: ::SelectLanguageViewController*
class CORDL_TYPE SelectLanguageViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _continueButton offset 0x70
 __declspec(property(get=__get__continueButton, put=__set__continueButton)) ::UnityEngine::UI::Button*  _continueButton;

/// @brief Field _languageSettingsController offset 0x78
 __declspec(property(get=__get__languageSettingsController, put=__set__languageSettingsController)) ::GlobalNamespace::LanguageSettingsController*  _languageSettingsController;

/// @brief Field didChangeLanguageEvent offset 0x80
 __declspec(property(get=__get_didChangeLanguageEvent, put=__set_didChangeLanguageEvent)) ::System::Action*  didChangeLanguageEvent;

/// @brief Field didPressContinueButtonEvent offset 0x88
 __declspec(property(get=__get_didPressContinueButtonEvent, put=__set_didPressContinueButtonEvent)) ::System::Action*  didPressContinueButtonEvent;

constexpr void __set__continueButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__continueButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__continueButton() const;

constexpr void __set__languageSettingsController(::GlobalNamespace::LanguageSettingsController*  value) ;

constexpr ::GlobalNamespace::LanguageSettingsController* __get__languageSettingsController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LanguageSettingsController*> __get__languageSettingsController() const;

constexpr void __set_didChangeLanguageEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeLanguageEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeLanguageEvent() const;

constexpr void __set_didPressContinueButtonEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPressContinueButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPressContinueButtonEvent() const;

/// @brief Method add_didChangeLanguageEvent addr 0x22d98c4 size 0x9c virtual false final false
inline void add_didChangeLanguageEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeLanguageEvent addr 0x22d9960 size 0x9c virtual false final false
inline void remove_didChangeLanguageEvent(::System::Action*  value) ;

/// @brief Method add_didPressContinueButtonEvent addr 0x22d99fc size 0x9c virtual false final false
inline void add_didPressContinueButtonEvent(::System::Action*  value) ;

/// @brief Method remove_didPressContinueButtonEvent addr 0x22d9a98 size 0x9c virtual false final false
inline void remove_didPressContinueButtonEvent(::System::Action*  value) ;

/// @brief Method DidActivate addr 0x22d9b34 size 0x100 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method OnDestroy addr 0x22d9c34 size 0xe0 virtual true final false
inline void OnDestroy() ;

/// @brief Method HandleLanguageSettingsControllerOndropDownValueDidChange addr 0x22d9d14 size 0x1c virtual false final false
inline void HandleLanguageSettingsControllerOndropDownValueDidChange() ;

static inline ::GlobalNamespace::SelectLanguageViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d9d30 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__8_0 addr 0x22d9d38 size 0x1c virtual false final false
inline void _DidActivate_b__8_0() ;

// Ctor Parameters [CppParam { name: "", ty: "SelectLanguageViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectLanguageViewController(SelectLanguageViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectLanguageViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectLanguageViewController(SelectLanguageViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectLanguageViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLanguageViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectLanguageViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLanguageViewController*, "", "SelectLanguageViewController");
