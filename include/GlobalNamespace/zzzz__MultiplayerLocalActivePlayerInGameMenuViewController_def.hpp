#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerInGameMenuViewController)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class DisconnectPromptView;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController);
// Type: ::MultiplayerLocalActivePlayerInGameMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5058))
// CS Name: ::MultiplayerLocalActivePlayerInGameMenuViewController*
class CORDL_TYPE MultiplayerLocalActivePlayerInGameMenuViewController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kDisabledInteractionDuration offset 0x0
static constexpr float_t  kDisabledInteractionDuration{0.2};

/// @brief Field _disconnectButton offset 0x18
 __declspec(property(get=__get__disconnectButton, put=__set__disconnectButton)) ::UnityEngine::UI::Button*  _disconnectButton;

/// @brief Field _disconnectButtonLocalizedText offset 0x20
 __declspec(property(get=__get__disconnectButtonLocalizedText, put=__set__disconnectButtonLocalizedText)) ::Polyglot::LocalizedTextMeshProUGUI*  _disconnectButtonLocalizedText;

/// @brief Field _giveUpButton offset 0x28
 __declspec(property(get=__get__giveUpButton, put=__set__giveUpButton)) ::UnityEngine::UI::Button*  _giveUpButton;

/// @brief Field _resumeButton offset 0x30
 __declspec(property(get=__get__resumeButton, put=__set__resumeButton)) ::UnityEngine::UI::Button*  _resumeButton;

/// @brief Field _mainBar offset 0x38
 __declspec(property(get=__get__mainBar, put=__set__mainBar)) ::UnityEngine::GameObject*  _mainBar;

/// @brief Field _disconnectPromptView offset 0x40
 __declspec(property(get=__get__disconnectPromptView, put=__set__disconnectPromptView)) ::GlobalNamespace::DisconnectPromptView*  _disconnectPromptView;

/// @brief Field _levelBar offset 0x48
 __declspec(property(get=__get__levelBar, put=__set__levelBar)) ::GlobalNamespace::LevelBar*  _levelBar;

/// @brief Field _menuWrapperGameObject offset 0x50
 __declspec(property(get=__get__menuWrapperGameObject, put=__set__menuWrapperGameObject)) ::UnityEngine::GameObject*  _menuWrapperGameObject;

/// @brief Field _menuControllersGameObject offset 0x58
 __declspec(property(get=__get__menuControllersGameObject, put=__set__menuControllersGameObject)) ::UnityEngine::GameObject*  _menuControllersGameObject;

/// @brief Field _connectedPlayer offset 0x60
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

/// @brief Field _localPlayerInGameMenuInitData offset 0x68
 __declspec(property(get=__get__localPlayerInGameMenuInitData, put=__set__localPlayerInGameMenuInitData)) ::GlobalNamespace::LocalPlayerInGameMenuInitData*  _localPlayerInGameMenuInitData;

/// @brief Field _vrPlatformHelper offset 0x70
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

/// @brief Field _disconnectHelper offset 0x78
 __declspec(property(get=__get__disconnectHelper, put=__set__disconnectHelper)) ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*  _disconnectHelper;

/// @brief Field didPressDisconnectButtonEvent offset 0x80
 __declspec(property(get=__get_didPressDisconnectButtonEvent, put=__set_didPressDisconnectButtonEvent)) ::System::Action*  didPressDisconnectButtonEvent;

/// @brief Field didPressGiveUpButtonEvent offset 0x88
 __declspec(property(get=__get_didPressGiveUpButtonEvent, put=__set_didPressGiveUpButtonEvent)) ::System::Action*  didPressGiveUpButtonEvent;

/// @brief Field didPressResumeButtonEvent offset 0x90
 __declspec(property(get=__get_didPressResumeButtonEvent, put=__set_didPressResumeButtonEvent)) ::System::Action*  didPressResumeButtonEvent;

/// @brief Field _buttonBinder offset 0x98
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

/// @brief Field _disabledInteractionRemainingTime offset 0xa0
 __declspec(property(get=__get__disabledInteractionRemainingTime, put=__set__disabledInteractionRemainingTime)) float_t  _disabledInteractionRemainingTime;

constexpr void __set__disconnectButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__disconnectButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__disconnectButton() const;

constexpr void __set__disconnectButtonLocalizedText(::Polyglot::LocalizedTextMeshProUGUI*  value) ;

constexpr ::Polyglot::LocalizedTextMeshProUGUI* __get__disconnectButtonLocalizedText() ;

constexpr ::cordl_internals::to_const_pointer<::Polyglot::LocalizedTextMeshProUGUI*> __get__disconnectButtonLocalizedText() const;

constexpr void __set__giveUpButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__giveUpButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__giveUpButton() const;

constexpr void __set__resumeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__resumeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__resumeButton() const;

constexpr void __set__mainBar(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__mainBar() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__mainBar() const;

constexpr void __set__disconnectPromptView(::GlobalNamespace::DisconnectPromptView*  value) ;

constexpr ::GlobalNamespace::DisconnectPromptView* __get__disconnectPromptView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DisconnectPromptView*> __get__disconnectPromptView() const;

constexpr void __set__levelBar(::GlobalNamespace::LevelBar*  value) ;

constexpr ::GlobalNamespace::LevelBar* __get__levelBar() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> __get__levelBar() const;

constexpr void __set__menuWrapperGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__menuWrapperGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__menuWrapperGameObject() const;

constexpr void __set__menuControllersGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__menuControllersGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__menuControllersGameObject() const;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

constexpr void __set__localPlayerInGameMenuInitData(::GlobalNamespace::LocalPlayerInGameMenuInitData*  value) ;

constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData* __get__localPlayerInGameMenuInitData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalPlayerInGameMenuInitData*> __get__localPlayerInGameMenuInitData() const;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

constexpr void __set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*  value) ;

constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* __get__disconnectHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*> __get__disconnectHelper() const;

constexpr void __set_didPressDisconnectButtonEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPressDisconnectButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPressDisconnectButtonEvent() const;

constexpr void __set_didPressGiveUpButtonEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPressGiveUpButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPressGiveUpButtonEvent() const;

constexpr void __set_didPressResumeButtonEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPressResumeButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPressResumeButtonEvent() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

constexpr void __set__disabledInteractionRemainingTime(float_t  value) ;

constexpr float_t& __get__disabledInteractionRemainingTime() ;

constexpr float_t const& __get__disabledInteractionRemainingTime() const;

/// @brief Method add_didPressDisconnectButtonEvent addr 0x23c5008 size 0x9c virtual false final false
inline void add_didPressDisconnectButtonEvent(::System::Action*  value) ;

/// @brief Method remove_didPressDisconnectButtonEvent addr 0x23c5530 size 0x9c virtual false final false
inline void remove_didPressDisconnectButtonEvent(::System::Action*  value) ;

/// @brief Method add_didPressGiveUpButtonEvent addr 0x23c5140 size 0x9c virtual false final false
inline void add_didPressGiveUpButtonEvent(::System::Action*  value) ;

/// @brief Method remove_didPressGiveUpButtonEvent addr 0x23c5668 size 0x9c virtual false final false
inline void remove_didPressGiveUpButtonEvent(::System::Action*  value) ;

/// @brief Method add_didPressResumeButtonEvent addr 0x23c50a4 size 0x9c virtual false final false
inline void add_didPressResumeButtonEvent(::System::Action*  value) ;

/// @brief Method remove_didPressResumeButtonEvent addr 0x23c55cc size 0x9c virtual false final false
inline void remove_didPressResumeButtonEvent(::System::Action*  value) ;

/// @brief Method Awake addr 0x23c5af0 size 0x1cc virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x23c5cbc size 0x8c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23c5d48 size 0x9c virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x23c5de4 size 0xe8 virtual false final false
inline void Update() ;

/// @brief Method ShowMenu addr 0x23c5810 size 0x50 virtual false final false
inline void ShowMenu() ;

/// @brief Method HideMenu addr 0x23c5860 size 0x44 virtual false final false
inline void HideMenu() ;

/// @brief Method DisconnectButtonPressed addr 0x23c5f04 size 0x34 virtual false final false
inline void DisconnectButtonPressed() ;

/// @brief Method HandleDisconnectPromptViewDidViewFinish addr 0x23c5f38 size 0xd0 virtual false final false
inline void HandleDisconnectPromptViewDidViewFinish(bool  disconnect) ;

/// @brief Method GiveUpButtonPressed addr 0x23c6008 size 0x4c virtual false final false
inline void GiveUpButtonPressed() ;

/// @brief Method ResumeButtonPressed addr 0x23c5ecc size 0x38 virtual false final false
inline void ResumeButtonPressed() ;

static inline ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController* New_ctor() ;

/// @brief Method .ctor addr 0x23c6054 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleDisconnectPromptViewDidViewFinish>b__32_0 addr 0x23c605c size 0x20 virtual false final false
inline void _HandleDisconnectPromptViewDidViewFinish_b__32_0() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalActivePlayerInGameMenuViewController(MultiplayerLocalActivePlayerInGameMenuViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalActivePlayerInGameMenuViewController(MultiplayerLocalActivePlayerInGameMenuViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalActivePlayerInGameMenuViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, 0xa8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*, "", "MultiplayerLocalActivePlayerInGameMenuViewController");
