#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RichPresenceManager)
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class InMultiplayerRichPresenceData;
}
namespace GlobalNamespace {
class LobbyGameStateModel;
}
namespace GlobalNamespace {
class BrowsingMenusRichPresenceData;
}
namespace GlobalNamespace {
class PlayingTutorialPresenceData;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PlayingCampaignRichPresenceData;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RichPresenceManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RichPresenceManager);
// Type: ::RichPresenceManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4678))
// CS Name: ::RichPresenceManager*
class CORDL_TYPE RichPresenceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _standardLevelScenesTransitionSetupData offset 0x18
 __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  _standardLevelScenesTransitionSetupData;

/// @brief Field _tutorialScenesTransitionSetupData offset 0x20
 __declspec(property(get=__get__tutorialScenesTransitionSetupData, put=__set__tutorialScenesTransitionSetupData)) ::GlobalNamespace::ScenesTransitionSetupDataSO*  _tutorialScenesTransitionSetupData;

/// @brief Field _missionLevelScenesTransitionSetupData offset 0x28
 __declspec(property(get=__get__missionLevelScenesTransitionSetupData, put=__set__missionLevelScenesTransitionSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  _missionLevelScenesTransitionSetupData;

/// @brief Field _multiplayerLevelScenesTransitionSetupData offset 0x30
 __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData)) ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  _multiplayerLevelScenesTransitionSetupData;

/// @brief Field _menuScenesTransitionSetupData offset 0x38
 __declspec(property(get=__get__menuScenesTransitionSetupData, put=__set__menuScenesTransitionSetupData)) ::GlobalNamespace::MenuScenesTransitionSetupDataSO*  _menuScenesTransitionSetupData;

/// @brief Field _richPresencePlatformHandler offset 0x40
 __declspec(property(get=__get__richPresencePlatformHandler, put=__set__richPresencePlatformHandler)) ::GlobalNamespace::IRichPresencePlatformHandler*  _richPresencePlatformHandler;

/// @brief Field _gameScenesManager offset 0x48
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _lobbyGameStateModel offset 0x50
 __declspec(property(get=__get__lobbyGameStateModel, put=__set__lobbyGameStateModel)) ::GlobalNamespace::LobbyGameStateModel*  _lobbyGameStateModel;

/// @brief Field _unifiedNetworkPlayerModel offset 0x58
 __declspec(property(get=__get__unifiedNetworkPlayerModel, put=__set__unifiedNetworkPlayerModel)) ::GlobalNamespace::IUnifiedNetworkPlayerModel*  _unifiedNetworkPlayerModel;

/// @brief Field _lobbyPlayerPermissionsModel offset 0x60
 __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel)) ::GlobalNamespace::LobbyPlayerPermissionsModel*  _lobbyPlayerPermissionsModel;

/// @brief Field _menuWasLoaded offset 0x68
 __declspec(property(get=__get__menuWasLoaded, put=__set__menuWasLoaded)) bool  _menuWasLoaded;

/// @brief Field _isInMultiplayerLobby offset 0x69
 __declspec(property(get=__get__isInMultiplayerLobby, put=__set__isInMultiplayerLobby)) bool  _isInMultiplayerLobby;

/// @brief Field _browsingMenusRichPresenceData offset 0x70
 __declspec(property(get=__get__browsingMenusRichPresenceData, put=__set__browsingMenusRichPresenceData)) ::GlobalNamespace::BrowsingMenusRichPresenceData*  _browsingMenusRichPresenceData;

/// @brief Field _inMultiplayerRichPresenceData offset 0x78
 __declspec(property(get=__get__inMultiplayerRichPresenceData, put=__set__inMultiplayerRichPresenceData)) ::GlobalNamespace::InMultiplayerRichPresenceData*  _inMultiplayerRichPresenceData;

/// @brief Field _playingCampaignRichPresenceData offset 0x80
 __declspec(property(get=__get__playingCampaignRichPresenceData, put=__set__playingCampaignRichPresenceData)) ::GlobalNamespace::PlayingCampaignRichPresenceData*  _playingCampaignRichPresenceData;

/// @brief Field _playingTutorialPresenceData offset 0x88
 __declspec(property(get=__get__playingTutorialPresenceData, put=__set__playingTutorialPresenceData)) ::GlobalNamespace::PlayingTutorialPresenceData*  _playingTutorialPresenceData;

/// @brief Field _currentPresenceData offset 0x90
 __declspec(property(get=__get__currentPresenceData, put=__set__currentPresenceData)) ::GlobalNamespace::IRichPresenceData*  _currentPresenceData;

constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* __get__standardLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> __get__standardLevelScenesTransitionSetupData() const;

constexpr void __set__tutorialScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* __get__tutorialScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> __get__tutorialScenesTransitionSetupData() const;

constexpr void __set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* __get__missionLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> __get__missionLevelScenesTransitionSetupData() const;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* __get__multiplayerLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> __get__multiplayerLevelScenesTransitionSetupData() const;

constexpr void __set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO* __get__menuScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuScenesTransitionSetupDataSO*> __get__menuScenesTransitionSetupData() const;

constexpr void __set__richPresencePlatformHandler(::GlobalNamespace::IRichPresencePlatformHandler*  value) ;

constexpr ::GlobalNamespace::IRichPresencePlatformHandler* __get__richPresencePlatformHandler() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRichPresencePlatformHandler*> __get__richPresencePlatformHandler() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel*  value) ;

constexpr ::GlobalNamespace::LobbyGameStateModel* __get__lobbyGameStateModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> __get__lobbyGameStateModel() const;

constexpr void __set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* __get__unifiedNetworkPlayerModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> __get__unifiedNetworkPlayerModel() const;

constexpr void __set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel*  value) ;

constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* __get__lobbyPlayerPermissionsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> __get__lobbyPlayerPermissionsModel() const;

constexpr void __set__menuWasLoaded(bool  value) ;

constexpr bool& __get__menuWasLoaded() ;

constexpr bool const& __get__menuWasLoaded() const;

constexpr void __set__isInMultiplayerLobby(bool  value) ;

constexpr bool& __get__isInMultiplayerLobby() ;

constexpr bool const& __get__isInMultiplayerLobby() const;

constexpr void __set__browsingMenusRichPresenceData(::GlobalNamespace::BrowsingMenusRichPresenceData*  value) ;

constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData* __get__browsingMenusRichPresenceData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BrowsingMenusRichPresenceData*> __get__browsingMenusRichPresenceData() const;

constexpr void __set__inMultiplayerRichPresenceData(::GlobalNamespace::InMultiplayerRichPresenceData*  value) ;

constexpr ::GlobalNamespace::InMultiplayerRichPresenceData* __get__inMultiplayerRichPresenceData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::InMultiplayerRichPresenceData*> __get__inMultiplayerRichPresenceData() const;

constexpr void __set__playingCampaignRichPresenceData(::GlobalNamespace::PlayingCampaignRichPresenceData*  value) ;

constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData* __get__playingCampaignRichPresenceData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayingCampaignRichPresenceData*> __get__playingCampaignRichPresenceData() const;

constexpr void __set__playingTutorialPresenceData(::GlobalNamespace::PlayingTutorialPresenceData*  value) ;

constexpr ::GlobalNamespace::PlayingTutorialPresenceData* __get__playingTutorialPresenceData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayingTutorialPresenceData*> __get__playingTutorialPresenceData() const;

constexpr void __set__currentPresenceData(::GlobalNamespace::IRichPresenceData*  value) ;

constexpr ::GlobalNamespace::IRichPresenceData* __get__currentPresenceData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRichPresenceData*> __get__currentPresenceData() const;

/// @brief Method Awake addr 0x2374340 size 0x29c virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x23745dc size 0x264 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleLobbyGameStateModelDidChange addr 0x2374840 size 0x1c virtual false final false
inline void HandleLobbyGameStateModelDidChange(::GlobalNamespace::MultiplayerGameState  newGameState) ;

/// @brief Method SetMenuPresence addr 0x237485c size 0x22c virtual false final false
inline void SetMenuPresence() ;

/// @brief Method HandleGameScenesManagerTransitionDidFinish addr 0x2374b34 size 0x324 virtual false final false
inline void HandleGameScenesManagerTransitionDidFinish(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, ::Zenject::DiContainer*  diContainer) ;

/// @brief Method HandleMultiplayerPartySizeChanged addr 0x2374f00 size 0x1d0 virtual false final false
inline void HandleMultiplayerPartySizeChanged(int32_t  currentPartySize) ;

/// @brief Method HandleLobbyPlayerPermissionChanged addr 0x23750d0 size 0x154 virtual false final false
inline void HandleLobbyPlayerPermissionChanged() ;

/// @brief Method SetPresence addr 0x2374a88 size 0xac virtual false final false
inline void SetPresence(::GlobalNamespace::IRichPresenceData*  presenceData) ;

/// @brief Method Clear addr 0x2374e58 size 0xa8 virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::RichPresenceManager* New_ctor() ;

/// @brief Method .ctor addr 0x2375224 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RichPresenceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RichPresenceManager(RichPresenceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichPresenceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichPresenceManager(RichPresenceManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RichPresenceManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RichPresenceManager, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RichPresenceManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RichPresenceManager*, "", "RichPresenceManager");
