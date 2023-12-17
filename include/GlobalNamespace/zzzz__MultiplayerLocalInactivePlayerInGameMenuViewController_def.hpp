#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerInGameMenuViewController)
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class DisconnectPromptView;
}
namespace HMUI {
class ToggleBinder;
}
namespace Tweening {
class Tween;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class ButtonBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerInGameMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController);
// Type: ::MultiplayerLocalInactivePlayerInGameMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5059))
// CS Name: ::MultiplayerLocalInactivePlayerInGameMenuViewController*
class CORDL_TYPE MultiplayerLocalInactivePlayerInGameMenuViewController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _disconnectButton offset 0x18
 __declspec(property(get=__get__disconnectButton, put=__set__disconnectButton)) ::UnityEngine::UI::Button*  _disconnectButton;

/// @brief Field _disconnectButtonLocalizedText offset 0x20
 __declspec(property(get=__get__disconnectButtonLocalizedText, put=__set__disconnectButtonLocalizedText)) ::Polyglot::LocalizedTextMeshProUGUI*  _disconnectButtonLocalizedText;

/// @brief Field _detailsToggle offset 0x28
 __declspec(property(get=__get__detailsToggle, put=__set__detailsToggle)) ::UnityEngine::UI::Toggle*  _detailsToggle;

/// @brief Field _globalCanvasGroup offset 0x30
 __declspec(property(get=__get__globalCanvasGroup, put=__set__globalCanvasGroup)) ::UnityEngine::CanvasGroup*  _globalCanvasGroup;

/// @brief Field _mainBar offset 0x38
 __declspec(property(get=__get__mainBar, put=__set__mainBar)) ::UnityEngine::GameObject*  _mainBar;

/// @brief Field _disconnectPromptView offset 0x40
 __declspec(property(get=__get__disconnectPromptView, put=__set__disconnectPromptView)) ::GlobalNamespace::DisconnectPromptView*  _disconnectPromptView;

/// @brief Field _levelBar offset 0x48
 __declspec(property(get=__get__levelBar, put=__set__levelBar)) ::GlobalNamespace::LevelBar*  _levelBar;

/// @brief Field _dontOwnSongGameObject offset 0x50
 __declspec(property(get=__get__dontOwnSongGameObject, put=__set__dontOwnSongGameObject)) ::UnityEngine::GameObject*  _dontOwnSongGameObject;

/// @brief Field _detailsGameObject offset 0x58
 __declspec(property(get=__get__detailsGameObject, put=__set__detailsGameObject)) ::UnityEngine::GameObject*  _detailsGameObject;

/// @brief Field _localPlayerInGameMenuInitData offset 0x60
 __declspec(property(get=__get__localPlayerInGameMenuInitData, put=__set__localPlayerInGameMenuInitData)) ::GlobalNamespace::LocalPlayerInGameMenuInitData*  _localPlayerInGameMenuInitData;

/// @brief Field _disconnectHelper offset 0x68
 __declspec(property(get=__get__disconnectHelper, put=__set__disconnectHelper)) ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*  _disconnectHelper;

/// @brief Field _multiplayerController offset 0x70
 __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController)) ::GlobalNamespace::MultiplayerController*  _multiplayerController;

/// @brief Field _tweeningManager offset 0x78
 __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager)) ::Tweening::TimeTweeningManager*  _tweeningManager;

/// @brief Field _buttonBinder offset 0x80
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

/// @brief Field _toggleBinder offset 0x88
 __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder)) ::HMUI::ToggleBinder*  _toggleBinder;

/// @brief Field _fadeOutTween offset 0x90
 __declspec(property(get=__get__fadeOutTween, put=__set__fadeOutTween)) ::Tweening::Tween*  _fadeOutTween;

constexpr void __set__disconnectButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__disconnectButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__disconnectButton() const;

constexpr void __set__disconnectButtonLocalizedText(::Polyglot::LocalizedTextMeshProUGUI*  value) ;

constexpr ::Polyglot::LocalizedTextMeshProUGUI* __get__disconnectButtonLocalizedText() ;

constexpr ::cordl_internals::to_const_pointer<::Polyglot::LocalizedTextMeshProUGUI*> __get__disconnectButtonLocalizedText() const;

constexpr void __set__detailsToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__detailsToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__detailsToggle() const;

constexpr void __set__globalCanvasGroup(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__globalCanvasGroup() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__globalCanvasGroup() const;

constexpr void __set__mainBar(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__mainBar() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__mainBar() const;

constexpr void __set__disconnectPromptView(::GlobalNamespace::DisconnectPromptView*  value) ;

constexpr ::GlobalNamespace::DisconnectPromptView* __get__disconnectPromptView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DisconnectPromptView*> __get__disconnectPromptView() const;

constexpr void __set__levelBar(::GlobalNamespace::LevelBar*  value) ;

constexpr ::GlobalNamespace::LevelBar* __get__levelBar() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> __get__levelBar() const;

constexpr void __set__dontOwnSongGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__dontOwnSongGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__dontOwnSongGameObject() const;

constexpr void __set__detailsGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__detailsGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__detailsGameObject() const;

constexpr void __set__localPlayerInGameMenuInitData(::GlobalNamespace::LocalPlayerInGameMenuInitData*  value) ;

constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData* __get__localPlayerInGameMenuInitData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalPlayerInGameMenuInitData*> __get__localPlayerInGameMenuInitData() const;

constexpr void __set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*  value) ;

constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* __get__disconnectHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*> __get__disconnectHelper() const;

constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController*  value) ;

constexpr ::GlobalNamespace::MultiplayerController* __get__multiplayerController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> __get__multiplayerController() const;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager*  value) ;

constexpr ::Tweening::TimeTweeningManager* __get__tweeningManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> __get__tweeningManager() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

constexpr void __set__toggleBinder(::HMUI::ToggleBinder*  value) ;

constexpr ::HMUI::ToggleBinder* __get__toggleBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> __get__toggleBinder() const;

constexpr void __set__fadeOutTween(::Tweening::Tween*  value) ;

constexpr ::Tweening::Tween* __get__fadeOutTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween*> __get__fadeOutTween() const;

/// @brief Method OnEnable addr 0x23c607c size 0x150 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x23c61cc size 0xac virtual false final false
inline void OnDisable() ;

/// @brief Method Start addr 0x23c6278 size 0x14c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23c63c4 size 0x12c virtual false final false
inline void OnDestroy() ;

/// @brief Method DisconnectButtonPressed addr 0x23c64f0 size 0x34 virtual false final false
inline void DisconnectButtonPressed() ;

/// @brief Method DetailsToggleValueChanged addr 0x23c6524 size 0x20 virtual false final false
inline void DetailsToggleValueChanged(bool  isOn) ;

/// @brief Method HandleDisconnectPromptViewDidViewFinish addr 0x23c6544 size 0xc4 virtual false final false
inline void HandleDisconnectPromptViewDidViewFinish(bool  disconnect) ;

/// @brief Method HandleStateChanged addr 0x23c6608 size 0x1c4 virtual false final false
inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State  state) ;

static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController* New_ctor() ;

/// @brief Method .ctor addr 0x23c67cc size 0x98 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleDisconnectPromptViewDidViewFinish>b__22_0 addr 0x23c6864 size 0x20 virtual false final false
inline void _HandleDisconnectPromptViewDidViewFinish_b__22_0() ;

/// @brief Method <HandleStateChanged>b__23_0 addr 0x23c6884 size 0x1c virtual false final false
inline void _HandleStateChanged_b__23_0(float_t  val) ;

/// @brief Method <HandleStateChanged>b__23_1 addr 0x23c68a0 size 0x24 virtual false final false
inline void _HandleStateChanged_b__23_1() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInGameMenuViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalInactivePlayerInGameMenuViewController(MultiplayerLocalInactivePlayerInGameMenuViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInGameMenuViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalInactivePlayerInGameMenuViewController(MultiplayerLocalInactivePlayerInGameMenuViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalInactivePlayerInGameMenuViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*, "", "MultiplayerLocalInactivePlayerInGameMenuViewController");
