#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PresentHiddenSettingsAfterNClicks)
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class ButtonBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class PresentHiddenSettingsAfterNClicks;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PresentHiddenSettingsAfterNClicks);
// Type: ::PresentHiddenSettingsAfterNClicks
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5609))
// CS Name: ::PresentHiddenSettingsAfterNClicks*
class CORDL_TYPE PresentHiddenSettingsAfterNClicks : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _hiddenSettingsButton offset 0x18
 __declspec(property(get=__get__hiddenSettingsButton, put=__set__hiddenSettingsButton)) ::UnityEngine::UI::Button*  _hiddenSettingsButton;

/// @brief Field _hiddenSettingsViewController offset 0x20
 __declspec(property(get=__get__hiddenSettingsViewController, put=__set__hiddenSettingsViewController)) ::HMUI::ViewController*  _hiddenSettingsViewController;

/// @brief Field _numberOfClicksRequired offset 0x28
 __declspec(property(get=__get__numberOfClicksRequired, put=__set__numberOfClicksRequired)) int32_t  _numberOfClicksRequired;

/// @brief Field _settingsFlowCoordinator offset 0x30
 __declspec(property(get=__get__settingsFlowCoordinator, put=__set__settingsFlowCoordinator)) ::GlobalNamespace::SettingsFlowCoordinator*  _settingsFlowCoordinator;

/// @brief Field _currentNumberOfClicks offset 0x38
 __declspec(property(get=__get__currentNumberOfClicks, put=__set__currentNumberOfClicks)) int32_t  _currentNumberOfClicks;

/// @brief Field _buttonBinder offset 0x40
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

constexpr void __set__hiddenSettingsButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__hiddenSettingsButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__hiddenSettingsButton() const;

constexpr void __set__hiddenSettingsViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__hiddenSettingsViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__hiddenSettingsViewController() const;

constexpr void __set__numberOfClicksRequired(int32_t  value) ;

constexpr int32_t& __get__numberOfClicksRequired() ;

constexpr int32_t const& __get__numberOfClicksRequired() const;

constexpr void __set__settingsFlowCoordinator(::GlobalNamespace::SettingsFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::SettingsFlowCoordinator* __get__settingsFlowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsFlowCoordinator*> __get__settingsFlowCoordinator() const;

constexpr void __set__currentNumberOfClicks(int32_t  value) ;

constexpr int32_t& __get__currentNumberOfClicks() ;

constexpr int32_t const& __get__currentNumberOfClicks() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

/// @brief Method OnEnable addr 0x22abe84 size 0x9c virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x22abf20 size 0x1c virtual false final false
inline void OnDisable() ;

static inline ::GlobalNamespace::PresentHiddenSettingsAfterNClicks* New_ctor() ;

/// @brief Method .ctor addr 0x22abf3c size 0x70 virtual false final false
inline void _ctor() ;

/// @brief Method <OnEnable>b__6_0 addr 0x22abfac size 0x48 virtual false final false
inline void _OnEnable_b__6_0() ;

// Ctor Parameters [CppParam { name: "", ty: "PresentHiddenSettingsAfterNClicks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PresentHiddenSettingsAfterNClicks(PresentHiddenSettingsAfterNClicks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PresentHiddenSettingsAfterNClicks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PresentHiddenSettingsAfterNClicks(PresentHiddenSettingsAfterNClicks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PresentHiddenSettingsAfterNClicks()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PresentHiddenSettingsAfterNClicks, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PresentHiddenSettingsAfterNClicks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PresentHiddenSettingsAfterNClicks*, "", "PresentHiddenSettingsAfterNClicks");
