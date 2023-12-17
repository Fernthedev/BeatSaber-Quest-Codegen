#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(PlayerOptionsViewController)
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
namespace HMUI {
class ViewController;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerOptionsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerOptionsViewController);
// Type: ::PlayerOptionsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5640))
// CS Name: ::PlayerOptionsViewController*
class CORDL_TYPE PlayerOptionsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _playerSettingsPanelController offset 0x70
 __declspec(property(get=__get__playerSettingsPanelController, put=__set__playerSettingsPanelController)) ::GlobalNamespace::PlayerSettingsPanelController*  _playerSettingsPanelController;

/// @brief Field _okButton offset 0x78
 __declspec(property(get=__get__okButton, put=__set__okButton)) ::UnityEngine::UI::Button*  _okButton;

/// @brief Field _playerDataModel offset 0x80
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field didFinishEvent offset 0x88
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::HMUI::ViewController*>*  didFinishEvent;

constexpr void __set__playerSettingsPanelController(::GlobalNamespace::PlayerSettingsPanelController*  value) ;

constexpr ::GlobalNamespace::PlayerSettingsPanelController* __get__playerSettingsPanelController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSettingsPanelController*> __get__playerSettingsPanelController() const;

constexpr void __set__okButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__okButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__okButton() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set_didFinishEvent(::System::Action_1<::HMUI::ViewController*>*  value) ;

constexpr ::System::Action_1<::HMUI::ViewController*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::ViewController*>*> __get_didFinishEvent() const;

/// @brief Method add_didFinishEvent addr 0x22b3574 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::HMUI::ViewController*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22b3624 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::HMUI::ViewController*>*  value) ;

/// @brief Method DidActivate addr 0x22b36d4 size 0xec virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22b3b08 size 0xb0 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

static inline ::GlobalNamespace::PlayerOptionsViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22b3bb8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__6_0 addr 0x22b3bc0 size 0x20 virtual false final false
inline void _DidActivate_b__6_0() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerOptionsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerOptionsViewController(PlayerOptionsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerOptionsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerOptionsViewController(PlayerOptionsViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerOptionsViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerOptionsViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerOptionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerOptionsViewController*, "", "PlayerOptionsViewController");
