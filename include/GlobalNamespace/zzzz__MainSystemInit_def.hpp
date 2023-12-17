#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainSystemInit)
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace GlobalNamespace {
class PS5LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class SonyAchievementIdsModelSO;
}
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class ExternalCamerasManager;
}
namespace GlobalNamespace {
class UnityXRHelper;
}
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
class BloomPrePassLightsUpdateSystem;
}
namespace GlobalNamespace {
class DevicelessVRHelper;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelSO;
}
namespace GlobalNamespace {
class PS4LevelProductsModelSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class TimeHelper;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelSO;
}
namespace GlobalNamespace {
class PS4NetworkPlayerModel;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class PS5ActivityIdsModelSO;
}
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
namespace GlobalNamespace {
class VoipManager;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class OculusVRHelper;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class PS5NetworkPlayerModel;
}
namespace GlobalNamespace {
class NetworkConfigSO;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class CustomLevelLoader;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class PS4LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class NetworkPlayerEntitlementChecker;
}
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
class SongPackMasksModelSO;
}
namespace GlobalNamespace {
class PSVRHelper;
}
namespace GlobalNamespace {
class PSVR2Helper;
}
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class SteamNetworkPlayerModel;
}
namespace GlobalNamespace {
class EnvironmentCommandLineArgsProvider;
}
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
namespace GlobalNamespace {
class CoroutineStarter;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class RichPresenceManager;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class CachedMediaAsyncLoader;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSystemInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSystemInit);
// Type: ::MainSystemInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4029))
// CS Name: ::MainSystemInit*
class CORDL_TYPE MainSystemInit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x230};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x230 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _mainSettingsModel offset 0x18
 __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel)) ::GlobalNamespace::MainSettingsModelSO*  _mainSettingsModel;

/// @brief Field _audioManager offset 0x20
 __declspec(property(get=__get__audioManager, put=__set__audioManager)) ::GlobalNamespace::AudioManagerSO*  _audioManager;

/// @brief Field _perceivedLoudnessPerLevel offset 0x28
 __declspec(property(get=__get__perceivedLoudnessPerLevel, put=__set__perceivedLoudnessPerLevel)) ::GlobalNamespace::PerceivedLoudnessPerLevelSO*  _perceivedLoudnessPerLevel;

/// @brief Field _relativeSfxVolumePerLevel offset 0x30
 __declspec(property(get=__get__relativeSfxVolumePerLevel, put=__set__relativeSfxVolumePerLevel)) ::GlobalNamespace::RelativeSfxVolumePerLevelSO*  _relativeSfxVolumePerLevel;

/// @brief Field _mirrorRendererGraphicsSettingsPresets offset 0x38
 __declspec(property(get=__get__mirrorRendererGraphicsSettingsPresets, put=__set__mirrorRendererGraphicsSettingsPresets)) ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*  _mirrorRendererGraphicsSettingsPresets;

/// @brief Field _mainEffectGraphicsSettingsPresets offset 0x40
 __declspec(property(get=__get__mainEffectGraphicsSettingsPresets, put=__set__mainEffectGraphicsSettingsPresets)) ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*  _mainEffectGraphicsSettingsPresets;

/// @brief Field _bloomPrePassGraphicsSettingsPresets offset 0x48
 __declspec(property(get=__get__bloomPrePassGraphicsSettingsPresets, put=__set__bloomPrePassGraphicsSettingsPresets)) ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*  _bloomPrePassGraphicsSettingsPresets;

/// @brief Field _mirrorRenderer offset 0x50
 __declspec(property(get=__get__mirrorRenderer, put=__set__mirrorRenderer)) ::GlobalNamespace::MirrorRendererSO*  _mirrorRenderer;

/// @brief Field _mainEffectContainer offset 0x58
 __declspec(property(get=__get__mainEffectContainer, put=__set__mainEffectContainer)) ::GlobalNamespace::MainEffectContainerSO*  _mainEffectContainer;

/// @brief Field _bloomPrePassEffectContainer offset 0x60
 __declspec(property(get=__get__bloomPrePassEffectContainer, put=__set__bloomPrePassEffectContainer)) ::GlobalNamespace::BloomPrePassEffectContainerSO*  _bloomPrePassEffectContainer;

/// @brief Field _songPackMasksModel offset 0x68
 __declspec(property(get=__get__songPackMasksModel, put=__set__songPackMasksModel)) ::GlobalNamespace::SongPackMasksModelSO*  _songPackMasksModel;

/// @brief Field _appStaticSettings offset 0x70
 __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings)) ::GlobalNamespace::AppStaticSettingsSO*  _appStaticSettings;

/// @brief Field _standardLevelScenesTransitionSetupData offset 0x78
 __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  _standardLevelScenesTransitionSetupData;

/// @brief Field _missionLevelScenesTransitionSetupData offset 0x80
 __declspec(property(get=__get__missionLevelScenesTransitionSetupData, put=__set__missionLevelScenesTransitionSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  _missionLevelScenesTransitionSetupData;

/// @brief Field _multiplayerLevelScenesTransitionSetupData offset 0x88
 __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData)) ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  _multiplayerLevelScenesTransitionSetupData;

/// @brief Field _timeHelperPrefab offset 0x90
 __declspec(property(get=__get__timeHelperPrefab, put=__set__timeHelperPrefab)) ::GlobalNamespace::TimeHelper*  _timeHelperPrefab;

/// @brief Field _playerDataModelPrefab offset 0x98
 __declspec(property(get=__get__playerDataModelPrefab, put=__set__playerDataModelPrefab)) ::GlobalNamespace::PlayerDataModel*  _playerDataModelPrefab;

/// @brief Field _campaignProgressModelPrefab offset 0xa0
 __declspec(property(get=__get__campaignProgressModelPrefab, put=__set__campaignProgressModelPrefab)) ::GlobalNamespace::CampaignProgressModel*  _campaignProgressModelPrefab;

/// @brief Field _beatmapLevelsModelPrefab offset 0xa8
 __declspec(property(get=__get__beatmapLevelsModelPrefab, put=__set__beatmapLevelsModelPrefab)) ::GlobalNamespace::BeatmapLevelsModel*  _beatmapLevelsModelPrefab;

/// @brief Field _customLevelLoaderPrefab offset 0xb0
 __declspec(property(get=__get__customLevelLoaderPrefab, put=__set__customLevelLoaderPrefab)) ::GlobalNamespace::CustomLevelLoader*  _customLevelLoaderPrefab;

/// @brief Field _cachedMediaAsyncLoaderPrefab offset 0xb8
 __declspec(property(get=__get__cachedMediaAsyncLoaderPrefab, put=__set__cachedMediaAsyncLoaderPrefab)) ::GlobalNamespace::CachedMediaAsyncLoader*  _cachedMediaAsyncLoaderPrefab;

/// @brief Field _externalCamerasManagerPrefab offset 0xc0
 __declspec(property(get=__get__externalCamerasManagerPrefab, put=__set__externalCamerasManagerPrefab)) ::GlobalNamespace::ExternalCamerasManager*  _externalCamerasManagerPrefab;

/// @brief Field _multiplayerSessionManagerPrefab offset 0xc8
 __declspec(property(get=__get__multiplayerSessionManagerPrefab, put=__set__multiplayerSessionManagerPrefab)) ::GlobalNamespace::MultiplayerSessionManager*  _multiplayerSessionManagerPrefab;

/// @brief Field _voipManagerPrefab offset 0xd0
 __declspec(property(get=__get__voipManagerPrefab, put=__set__voipManagerPrefab)) ::GlobalNamespace::VoipManager*  _voipManagerPrefab;

/// @brief Field _gameLiftNetworkPlayerModelPrefab offset 0xd8
 __declspec(property(get=__get__gameLiftNetworkPlayerModelPrefab, put=__set__gameLiftNetworkPlayerModelPrefab)) ::GlobalNamespace::GameLiftNetworkPlayerModel*  _gameLiftNetworkPlayerModelPrefab;

/// @brief Field _networkPlayerEntitlementCheckerPrefab offset 0xe0
 __declspec(property(get=__get__networkPlayerEntitlementCheckerPrefab, put=__set__networkPlayerEntitlementCheckerPrefab)) ::GlobalNamespace::NetworkPlayerEntitlementChecker*  _networkPlayerEntitlementCheckerPrefab;

/// @brief Field _hapticFeedbackControllerPrefab offset 0xe8
 __declspec(property(get=__get__hapticFeedbackControllerPrefab, put=__set__hapticFeedbackControllerPrefab)) ::GlobalNamespace::HapticFeedbackManager*  _hapticFeedbackControllerPrefab;

/// @brief Field _tweeningManagerPrefab offset 0xf0
 __declspec(property(get=__get__tweeningManagerPrefab, put=__set__tweeningManagerPrefab)) ::Tweening::TimeTweeningManager*  _tweeningManagerPrefab;

/// @brief Field _lightsUpdateSystemPrefab offset 0xf8
 __declspec(property(get=__get__lightsUpdateSystemPrefab, put=__set__lightsUpdateSystemPrefab)) ::GlobalNamespace::BloomPrePassLightsUpdateSystem*  _lightsUpdateSystemPrefab;

/// @brief Field _environmentAudioEffectsPlayerPrefab offset 0x100
 __declspec(property(get=__get__environmentAudioEffectsPlayerPrefab, put=__set__environmentAudioEffectsPlayerPrefab)) ::GlobalNamespace::EnvironmentAudioEffectsPlayer*  _environmentAudioEffectsPlayerPrefab;

/// @brief Field _nodePoseSyncStateManagerPrefab offset 0x108
 __declspec(property(get=__get__nodePoseSyncStateManagerPrefab, put=__set__nodePoseSyncStateManagerPrefab)) ::GlobalNamespace::NodePoseSyncStateManager*  _nodePoseSyncStateManagerPrefab;

/// @brief Field _alwaysOwnedContentContainer offset 0x110
 __declspec(property(get=__get__alwaysOwnedContentContainer, put=__set__alwaysOwnedContentContainer)) ::GlobalNamespace::AlwaysOwnedContentContainerSO*  _alwaysOwnedContentContainer;

/// @brief Field _psVRHelperPrefab offset 0x118
 __declspec(property(get=__get__psVRHelperPrefab, put=__set__psVRHelperPrefab)) ::GlobalNamespace::PSVRHelper*  _psVRHelperPrefab;

/// @brief Field _psVR2HelperPrefab offset 0x120
 __declspec(property(get=__get__psVR2HelperPrefab, put=__set__psVR2HelperPrefab)) ::GlobalNamespace::PSVR2Helper*  _psVR2HelperPrefab;

/// @brief Field _oculusVRHelperPrefab offset 0x128
 __declspec(property(get=__get__oculusVRHelperPrefab, put=__set__oculusVRHelperPrefab)) ::GlobalNamespace::OculusVRHelper*  _oculusVRHelperPrefab;

/// @brief Field _unityXRHelperPrefab offset 0x130
 __declspec(property(get=__get__unityXRHelperPrefab, put=__set__unityXRHelperPrefab)) ::GlobalNamespace::UnityXRHelper*  _unityXRHelperPrefab;

/// @brief Field _devicelessVRHelperPrefab offset 0x138
 __declspec(property(get=__get__devicelessVRHelperPrefab, put=__set__devicelessVRHelperPrefab)) ::GlobalNamespace::DevicelessVRHelper*  _devicelessVRHelperPrefab;

/// @brief Field _steamLevelProductsModel offset 0x140
 __declspec(property(get=__get__steamLevelProductsModel, put=__set__steamLevelProductsModel)) ::GlobalNamespace::SteamLevelProductsModelSO*  _steamLevelProductsModel;

/// @brief Field _oculusLevelProducsModel offset 0x148
 __declspec(property(get=__get__oculusLevelProducsModel, put=__set__oculusLevelProducsModel)) ::GlobalNamespace::OculusLevelProductsModelSO*  _oculusLevelProducsModel;

/// @brief Field _ps4LevelProductsModel offset 0x150
 __declspec(property(get=__get__ps4LevelProductsModel, put=__set__ps4LevelProductsModel)) ::GlobalNamespace::PS4LevelProductsModelSO*  _ps4LevelProductsModel;

/// @brief Field _ps5LevelProductsModel offset 0x158
 __declspec(property(get=__get__ps5LevelProductsModel, put=__set__ps5LevelProductsModel)) ::GlobalNamespace::PS5LevelProductsModelSO*  _ps5LevelProductsModel;

/// @brief Field _ps4LeaderboardIdsModel offset 0x160
 __declspec(property(get=__get__ps4LeaderboardIdsModel, put=__set__ps4LeaderboardIdsModel)) ::GlobalNamespace::PS4LeaderboardIdsModelSO*  _ps4LeaderboardIdsModel;

/// @brief Field _ps5LeaderboardIdsModel offset 0x168
 __declspec(property(get=__get__ps5LeaderboardIdsModel, put=__set__ps5LeaderboardIdsModel)) ::GlobalNamespace::PS5LeaderboardIdsModelSO*  _ps5LeaderboardIdsModel;

/// @brief Field _riftLeaderboardIdsModel offset 0x170
 __declspec(property(get=__get__riftLeaderboardIdsModel, put=__set__riftLeaderboardIdsModel)) ::GlobalNamespace::LeaderboardIdsModelSO*  _riftLeaderboardIdsModel;

/// @brief Field _questLeaderboardIdsModel offset 0x178
 __declspec(property(get=__get__questLeaderboardIdsModel, put=__set__questLeaderboardIdsModel)) ::GlobalNamespace::LeaderboardIdsModelSO*  _questLeaderboardIdsModel;

/// @brief Field _steamLeaderboardIdsModel offset 0x180
 __declspec(property(get=__get__steamLeaderboardIdsModel, put=__set__steamLeaderboardIdsModel)) ::GlobalNamespace::LeaderboardIdsModelSO*  _steamLeaderboardIdsModel;

/// @brief Field _richPresenceManagerPrefab offset 0x188
 __declspec(property(get=__get__richPresenceManagerPrefab, put=__set__richPresenceManagerPrefab)) ::GlobalNamespace::RichPresenceManager*  _richPresenceManagerPrefab;

/// @brief Field _dlcPromoPanelData offset 0x190
 __declspec(property(get=__get__dlcPromoPanelData, put=__set__dlcPromoPanelData)) ::GlobalNamespace::DlcPromoPanelDataSO*  _dlcPromoPanelData;

/// @brief Field _beatmapLevelsPromoData offset 0x198
 __declspec(property(get=__get__beatmapLevelsPromoData, put=__set__beatmapLevelsPromoData)) ::GlobalNamespace::BeatmapLevelsPromoDataSO*  _beatmapLevelsPromoData;

/// @brief Field _networkConfig offset 0x1a0
 __declspec(property(get=__get__networkConfig, put=__set__networkConfig)) ::GlobalNamespace::NetworkConfigSO*  _networkConfig;

/// @brief Field _steamNetworkPlayerModelPrefab offset 0x1a8
 __declspec(property(get=__get__steamNetworkPlayerModelPrefab, put=__set__steamNetworkPlayerModelPrefab)) ::GlobalNamespace::SteamNetworkPlayerModel*  _steamNetworkPlayerModelPrefab;

/// @brief Field _oculusNetworkPlayerModelPrefab offset 0x1b0
 __declspec(property(get=__get__oculusNetworkPlayerModelPrefab, put=__set__oculusNetworkPlayerModelPrefab)) ::GlobalNamespace::OculusNetworkPlayerModel*  _oculusNetworkPlayerModelPrefab;

/// @brief Field _ps4NetworkPlayerModelPrefab offset 0x1b8
 __declspec(property(get=__get__ps4NetworkPlayerModelPrefab, put=__set__ps4NetworkPlayerModelPrefab)) ::GlobalNamespace::PS4NetworkPlayerModel*  _ps4NetworkPlayerModelPrefab;

/// @brief Field _ps5NetworkPlayerModelPrefab offset 0x1c0
 __declspec(property(get=__get__ps5NetworkPlayerModelPrefab, put=__set__ps5NetworkPlayerModelPrefab)) ::GlobalNamespace::PS5NetworkPlayerModel*  _ps5NetworkPlayerModelPrefab;

/// @brief Field _beatmapCharacteristicCollection offset 0x1c8
 __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollectionSO*  _beatmapCharacteristicCollection;

/// @brief Field _leaderboardScoreUploader offset 0x1d0
 __declspec(property(get=__get__leaderboardScoreUploader, put=__set__leaderboardScoreUploader)) ::GlobalNamespace::LeaderboardScoreUploader*  _leaderboardScoreUploader;

/// @brief Field _platformLeaderboardsModel offset 0x1d8
 __declspec(property(get=__get__platformLeaderboardsModel, put=__set__platformLeaderboardsModel)) ::GlobalNamespace::PlatformLeaderboardsModel*  _platformLeaderboardsModel;

/// @brief Field _ps4AchievementIdsModel offset 0x1e0
 __declspec(property(get=__get__ps4AchievementIdsModel, put=__set__ps4AchievementIdsModel)) ::GlobalNamespace::SonyAchievementIdsModelSO*  _ps4AchievementIdsModel;

/// @brief Field _ps5AchievmentIdsModel offset 0x1e8
 __declspec(property(get=__get__ps5AchievmentIdsModel, put=__set__ps5AchievmentIdsModel)) ::GlobalNamespace::SonyAchievementIdsModelSO*  _ps5AchievmentIdsModel;

/// @brief Field _achievementIdsModel offset 0x1f0
 __declspec(property(get=__get__achievementIdsModel, put=__set__achievementIdsModel)) ::GlobalNamespace::AchievementIdsModelSO*  _achievementIdsModel;

/// @brief Field _achievementsModel offset 0x1f8
 __declspec(property(get=__get__achievementsModel, put=__set__achievementsModel)) ::GlobalNamespace::AchievementsModelSO*  _achievementsModel;

/// @brief Field _ps5ActivityIdsModel offset 0x200
 __declspec(property(get=__get__ps5ActivityIdsModel, put=__set__ps5ActivityIdsModel)) ::GlobalNamespace::PS5ActivityIdsModelSO*  _ps5ActivityIdsModel;

/// @brief Field _anyBeatmapLevelSO offset 0x208
 __declspec(property(get=__get__anyBeatmapLevelSO, put=__set__anyBeatmapLevelSO)) ::GlobalNamespace::BeatmapLevelSO*  _anyBeatmapLevelSO;

/// @brief Field _coroutineStarter offset 0x210
 __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter)) ::GlobalNamespace::CoroutineStarter*  _coroutineStarter;

/// @brief Field _commandLineArgsProvider offset 0x218
 __declspec(property(get=__get__commandLineArgsProvider, put=__set__commandLineArgsProvider)) ::GlobalNamespace::EnvironmentCommandLineArgsProvider*  _commandLineArgsProvider;

/// @brief Field _menuTransitionHelperPrefab offset 0x220
 __declspec(property(get=__get__menuTransitionHelperPrefab, put=__set__menuTransitionHelperPrefab)) ::GlobalNamespace::MenuTransitionsHelper*  _menuTransitionHelperPrefab;

/// @brief Field _defaultMaxCachedBeatmapLevels offset 0x228
 __declspec(property(get=__get__defaultMaxCachedBeatmapLevels, put=__set__defaultMaxCachedBeatmapLevels)) int32_t  _defaultMaxCachedBeatmapLevels;

/// @brief Field _ps4MaxCachedBeatmapLevels offset 0x22c
 __declspec(property(get=__get__ps4MaxCachedBeatmapLevels, put=__set__ps4MaxCachedBeatmapLevels)) int32_t  _ps4MaxCachedBeatmapLevels;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO* __get__mainSettingsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> __get__mainSettingsModel() const;

constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO*  value) ;

constexpr ::GlobalNamespace::AudioManagerSO* __get__audioManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> __get__audioManager() const;

constexpr void __set__perceivedLoudnessPerLevel(::GlobalNamespace::PerceivedLoudnessPerLevelSO*  value) ;

constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelSO* __get__perceivedLoudnessPerLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelSO*> __get__perceivedLoudnessPerLevel() const;

constexpr void __set__relativeSfxVolumePerLevel(::GlobalNamespace::RelativeSfxVolumePerLevelSO*  value) ;

constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelSO* __get__relativeSfxVolumePerLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelSO*> __get__relativeSfxVolumePerLevel() const;

constexpr void __set__mirrorRendererGraphicsSettingsPresets(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*  value) ;

constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* __get__mirrorRendererGraphicsSettingsPresets() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*> __get__mirrorRendererGraphicsSettingsPresets() const;

constexpr void __set__mainEffectGraphicsSettingsPresets(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*  value) ;

constexpr ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* __get__mainEffectGraphicsSettingsPresets() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*> __get__mainEffectGraphicsSettingsPresets() const;

constexpr void __set__bloomPrePassGraphicsSettingsPresets(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*  value) ;

constexpr ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* __get__bloomPrePassGraphicsSettingsPresets() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*> __get__bloomPrePassGraphicsSettingsPresets() const;

constexpr void __set__mirrorRenderer(::GlobalNamespace::MirrorRendererSO*  value) ;

constexpr ::GlobalNamespace::MirrorRendererSO* __get__mirrorRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererSO*> __get__mirrorRenderer() const;

constexpr void __set__mainEffectContainer(::GlobalNamespace::MainEffectContainerSO*  value) ;

constexpr ::GlobalNamespace::MainEffectContainerSO* __get__mainEffectContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectContainerSO*> __get__mainEffectContainer() const;

constexpr void __set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO*  value) ;

constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO* __get__bloomPrePassEffectContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> __get__bloomPrePassEffectContainer() const;

constexpr void __set__songPackMasksModel(::GlobalNamespace::SongPackMasksModelSO*  value) ;

constexpr ::GlobalNamespace::SongPackMasksModelSO* __get__songPackMasksModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModelSO*> __get__songPackMasksModel() const;

constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO*  value) ;

constexpr ::GlobalNamespace::AppStaticSettingsSO* __get__appStaticSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> __get__appStaticSettings() const;

constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* __get__standardLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> __get__standardLevelScenesTransitionSetupData() const;

constexpr void __set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* __get__missionLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> __get__missionLevelScenesTransitionSetupData() const;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* __get__multiplayerLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> __get__multiplayerLevelScenesTransitionSetupData() const;

constexpr void __set__timeHelperPrefab(::GlobalNamespace::TimeHelper*  value) ;

constexpr ::GlobalNamespace::TimeHelper* __get__timeHelperPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TimeHelper*> __get__timeHelperPrefab() const;

constexpr void __set__playerDataModelPrefab(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModelPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModelPrefab() const;

constexpr void __set__campaignProgressModelPrefab(::GlobalNamespace::CampaignProgressModel*  value) ;

constexpr ::GlobalNamespace::CampaignProgressModel* __get__campaignProgressModelPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> __get__campaignProgressModelPrefab() const;

constexpr void __set__beatmapLevelsModelPrefab(::GlobalNamespace::BeatmapLevelsModel*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel* __get__beatmapLevelsModelPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> __get__beatmapLevelsModelPrefab() const;

constexpr void __set__customLevelLoaderPrefab(::GlobalNamespace::CustomLevelLoader*  value) ;

constexpr ::GlobalNamespace::CustomLevelLoader* __get__customLevelLoaderPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomLevelLoader*> __get__customLevelLoaderPrefab() const;

constexpr void __set__cachedMediaAsyncLoaderPrefab(::GlobalNamespace::CachedMediaAsyncLoader*  value) ;

constexpr ::GlobalNamespace::CachedMediaAsyncLoader* __get__cachedMediaAsyncLoaderPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CachedMediaAsyncLoader*> __get__cachedMediaAsyncLoaderPrefab() const;

constexpr void __set__externalCamerasManagerPrefab(::GlobalNamespace::ExternalCamerasManager*  value) ;

constexpr ::GlobalNamespace::ExternalCamerasManager* __get__externalCamerasManagerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExternalCamerasManager*> __get__externalCamerasManagerPrefab() const;

constexpr void __set__multiplayerSessionManagerPrefab(::GlobalNamespace::MultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::MultiplayerSessionManager* __get__multiplayerSessionManagerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSessionManager*> __get__multiplayerSessionManagerPrefab() const;

constexpr void __set__voipManagerPrefab(::GlobalNamespace::VoipManager*  value) ;

constexpr ::GlobalNamespace::VoipManager* __get__voipManagerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VoipManager*> __get__voipManagerPrefab() const;

constexpr void __set__gameLiftNetworkPlayerModelPrefab(::GlobalNamespace::GameLiftNetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::GameLiftNetworkPlayerModel* __get__gameLiftNetworkPlayerModelPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftNetworkPlayerModel*> __get__gameLiftNetworkPlayerModelPrefab() const;

constexpr void __set__networkPlayerEntitlementCheckerPrefab(::GlobalNamespace::NetworkPlayerEntitlementChecker*  value) ;

constexpr ::GlobalNamespace::NetworkPlayerEntitlementChecker* __get__networkPlayerEntitlementCheckerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerEntitlementChecker*> __get__networkPlayerEntitlementCheckerPrefab() const;

constexpr void __set__hapticFeedbackControllerPrefab(::GlobalNamespace::HapticFeedbackManager*  value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager* __get__hapticFeedbackControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> __get__hapticFeedbackControllerPrefab() const;

constexpr void __set__tweeningManagerPrefab(::Tweening::TimeTweeningManager*  value) ;

constexpr ::Tweening::TimeTweeningManager* __get__tweeningManagerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> __get__tweeningManagerPrefab() const;

constexpr void __set__lightsUpdateSystemPrefab(::GlobalNamespace::BloomPrePassLightsUpdateSystem*  value) ;

constexpr ::GlobalNamespace::BloomPrePassLightsUpdateSystem* __get__lightsUpdateSystemPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightsUpdateSystem*> __get__lightsUpdateSystemPrefab() const;

constexpr void __set__environmentAudioEffectsPlayerPrefab(::GlobalNamespace::EnvironmentAudioEffectsPlayer*  value) ;

constexpr ::GlobalNamespace::EnvironmentAudioEffectsPlayer* __get__environmentAudioEffectsPlayerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentAudioEffectsPlayer*> __get__environmentAudioEffectsPlayerPrefab() const;

constexpr void __set__nodePoseSyncStateManagerPrefab(::GlobalNamespace::NodePoseSyncStateManager*  value) ;

constexpr ::GlobalNamespace::NodePoseSyncStateManager* __get__nodePoseSyncStateManagerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NodePoseSyncStateManager*> __get__nodePoseSyncStateManagerPrefab() const;

constexpr void __set__alwaysOwnedContentContainer(::GlobalNamespace::AlwaysOwnedContentContainerSO*  value) ;

constexpr ::GlobalNamespace::AlwaysOwnedContentContainerSO* __get__alwaysOwnedContentContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentContainerSO*> __get__alwaysOwnedContentContainer() const;

constexpr void __set__psVRHelperPrefab(::GlobalNamespace::PSVRHelper*  value) ;

constexpr ::GlobalNamespace::PSVRHelper* __get__psVRHelperPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PSVRHelper*> __get__psVRHelperPrefab() const;

constexpr void __set__psVR2HelperPrefab(::GlobalNamespace::PSVR2Helper*  value) ;

constexpr ::GlobalNamespace::PSVR2Helper* __get__psVR2HelperPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PSVR2Helper*> __get__psVR2HelperPrefab() const;

constexpr void __set__oculusVRHelperPrefab(::GlobalNamespace::OculusVRHelper*  value) ;

constexpr ::GlobalNamespace::OculusVRHelper* __get__oculusVRHelperPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusVRHelper*> __get__oculusVRHelperPrefab() const;

constexpr void __set__unityXRHelperPrefab(::GlobalNamespace::UnityXRHelper*  value) ;

constexpr ::GlobalNamespace::UnityXRHelper* __get__unityXRHelperPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRHelper*> __get__unityXRHelperPrefab() const;

constexpr void __set__devicelessVRHelperPrefab(::GlobalNamespace::DevicelessVRHelper*  value) ;

constexpr ::GlobalNamespace::DevicelessVRHelper* __get__devicelessVRHelperPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DevicelessVRHelper*> __get__devicelessVRHelperPrefab() const;

constexpr void __set__steamLevelProductsModel(::GlobalNamespace::SteamLevelProductsModelSO*  value) ;

constexpr ::GlobalNamespace::SteamLevelProductsModelSO* __get__steamLevelProductsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamLevelProductsModelSO*> __get__steamLevelProductsModel() const;

constexpr void __set__oculusLevelProducsModel(::GlobalNamespace::OculusLevelProductsModelSO*  value) ;

constexpr ::GlobalNamespace::OculusLevelProductsModelSO* __get__oculusLevelProducsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusLevelProductsModelSO*> __get__oculusLevelProducsModel() const;

constexpr void __set__ps4LevelProductsModel(::GlobalNamespace::PS4LevelProductsModelSO*  value) ;

constexpr ::GlobalNamespace::PS4LevelProductsModelSO* __get__ps4LevelProductsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4LevelProductsModelSO*> __get__ps4LevelProductsModel() const;

constexpr void __set__ps5LevelProductsModel(::GlobalNamespace::PS5LevelProductsModelSO*  value) ;

constexpr ::GlobalNamespace::PS5LevelProductsModelSO* __get__ps5LevelProductsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5LevelProductsModelSO*> __get__ps5LevelProductsModel() const;

constexpr void __set__ps4LeaderboardIdsModel(::GlobalNamespace::PS4LeaderboardIdsModelSO*  value) ;

constexpr ::GlobalNamespace::PS4LeaderboardIdsModelSO* __get__ps4LeaderboardIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4LeaderboardIdsModelSO*> __get__ps4LeaderboardIdsModel() const;

constexpr void __set__ps5LeaderboardIdsModel(::GlobalNamespace::PS5LeaderboardIdsModelSO*  value) ;

constexpr ::GlobalNamespace::PS5LeaderboardIdsModelSO* __get__ps5LeaderboardIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5LeaderboardIdsModelSO*> __get__ps5LeaderboardIdsModel() const;

constexpr void __set__riftLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO*  value) ;

constexpr ::GlobalNamespace::LeaderboardIdsModelSO* __get__riftLeaderboardIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> __get__riftLeaderboardIdsModel() const;

constexpr void __set__questLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO*  value) ;

constexpr ::GlobalNamespace::LeaderboardIdsModelSO* __get__questLeaderboardIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> __get__questLeaderboardIdsModel() const;

constexpr void __set__steamLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO*  value) ;

constexpr ::GlobalNamespace::LeaderboardIdsModelSO* __get__steamLeaderboardIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> __get__steamLeaderboardIdsModel() const;

constexpr void __set__richPresenceManagerPrefab(::GlobalNamespace::RichPresenceManager*  value) ;

constexpr ::GlobalNamespace::RichPresenceManager* __get__richPresenceManagerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RichPresenceManager*> __get__richPresenceManagerPrefab() const;

constexpr void __set__dlcPromoPanelData(::GlobalNamespace::DlcPromoPanelDataSO*  value) ;

constexpr ::GlobalNamespace::DlcPromoPanelDataSO* __get__dlcPromoPanelData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelDataSO*> __get__dlcPromoPanelData() const;

constexpr void __set__beatmapLevelsPromoData(::GlobalNamespace::BeatmapLevelsPromoDataSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO* __get__beatmapLevelsPromoData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsPromoDataSO*> __get__beatmapLevelsPromoData() const;

constexpr void __set__networkConfig(::GlobalNamespace::NetworkConfigSO*  value) ;

constexpr ::GlobalNamespace::NetworkConfigSO* __get__networkConfig() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkConfigSO*> __get__networkConfig() const;

constexpr void __set__steamNetworkPlayerModelPrefab(::GlobalNamespace::SteamNetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::SteamNetworkPlayerModel* __get__steamNetworkPlayerModelPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamNetworkPlayerModel*> __get__steamNetworkPlayerModelPrefab() const;

constexpr void __set__oculusNetworkPlayerModelPrefab(::GlobalNamespace::OculusNetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::OculusNetworkPlayerModel* __get__oculusNetworkPlayerModelPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> __get__oculusNetworkPlayerModelPrefab() const;

constexpr void __set__ps4NetworkPlayerModelPrefab(::GlobalNamespace::PS4NetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::PS4NetworkPlayerModel* __get__ps4NetworkPlayerModelPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4NetworkPlayerModel*> __get__ps4NetworkPlayerModelPrefab() const;

constexpr void __set__ps5NetworkPlayerModelPrefab(::GlobalNamespace::PS5NetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::PS5NetworkPlayerModel* __get__ps5NetworkPlayerModelPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5NetworkPlayerModel*> __get__ps5NetworkPlayerModelPrefab() const;

constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollectionSO* __get__beatmapCharacteristicCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollectionSO*> __get__beatmapCharacteristicCollection() const;

constexpr void __set__leaderboardScoreUploader(::GlobalNamespace::LeaderboardScoreUploader*  value) ;

constexpr ::GlobalNamespace::LeaderboardScoreUploader* __get__leaderboardScoreUploader() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> __get__leaderboardScoreUploader() const;

constexpr void __set__platformLeaderboardsModel(::GlobalNamespace::PlatformLeaderboardsModel*  value) ;

constexpr ::GlobalNamespace::PlatformLeaderboardsModel* __get__platformLeaderboardsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsModel*> __get__platformLeaderboardsModel() const;

constexpr void __set__ps4AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO*  value) ;

constexpr ::GlobalNamespace::SonyAchievementIdsModelSO* __get__ps4AchievementIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> __get__ps4AchievementIdsModel() const;

constexpr void __set__ps5AchievmentIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO*  value) ;

constexpr ::GlobalNamespace::SonyAchievementIdsModelSO* __get__ps5AchievmentIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> __get__ps5AchievmentIdsModel() const;

constexpr void __set__achievementIdsModel(::GlobalNamespace::AchievementIdsModelSO*  value) ;

constexpr ::GlobalNamespace::AchievementIdsModelSO* __get__achievementIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementIdsModelSO*> __get__achievementIdsModel() const;

constexpr void __set__achievementsModel(::GlobalNamespace::AchievementsModelSO*  value) ;

constexpr ::GlobalNamespace::AchievementsModelSO* __get__achievementsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> __get__achievementsModel() const;

constexpr void __set__ps5ActivityIdsModel(::GlobalNamespace::PS5ActivityIdsModelSO*  value) ;

constexpr ::GlobalNamespace::PS5ActivityIdsModelSO* __get__ps5ActivityIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5ActivityIdsModelSO*> __get__ps5ActivityIdsModel() const;

constexpr void __set__anyBeatmapLevelSO(::GlobalNamespace::BeatmapLevelSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSO* __get__anyBeatmapLevelSO() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> __get__anyBeatmapLevelSO() const;

constexpr void __set__coroutineStarter(::GlobalNamespace::CoroutineStarter*  value) ;

constexpr ::GlobalNamespace::CoroutineStarter* __get__coroutineStarter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CoroutineStarter*> __get__coroutineStarter() const;

constexpr void __set__commandLineArgsProvider(::GlobalNamespace::EnvironmentCommandLineArgsProvider*  value) ;

constexpr ::GlobalNamespace::EnvironmentCommandLineArgsProvider* __get__commandLineArgsProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentCommandLineArgsProvider*> __get__commandLineArgsProvider() const;

constexpr void __set__menuTransitionHelperPrefab(::GlobalNamespace::MenuTransitionsHelper*  value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper* __get__menuTransitionHelperPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> __get__menuTransitionHelperPrefab() const;

constexpr void __set__defaultMaxCachedBeatmapLevels(int32_t  value) ;

constexpr int32_t& __get__defaultMaxCachedBeatmapLevels() ;

constexpr int32_t const& __get__defaultMaxCachedBeatmapLevels() const;

constexpr void __set__ps4MaxCachedBeatmapLevels(int32_t  value) ;

constexpr int32_t& __get__ps4MaxCachedBeatmapLevels() ;

constexpr int32_t const& __get__ps4MaxCachedBeatmapLevels() const;

/// @brief Method Init addr 0x2226700 size 0x384 virtual false final false
inline void Init() ;

/// @brief Method InstallBindings addr 0x2226b90 size 0x1838 virtual false final false
inline void InstallBindings(::Zenject::DiContainer*  container, bool  isRunningFromTests) ;

/// @brief Method InstallHapticsController addr 0x2228718 size 0x1c0 virtual false final false
inline void InstallHapticsController(::Zenject::DiContainer*  container) ;

/// @brief Method InstallRichPresence addr 0x22284c0 size 0xf0 virtual false final false
inline void InstallRichPresence(::Zenject::DiContainer*  container, bool  isRunningFromTests) ;

/// @brief Method InstallOculusDestinationBindings addr 0x22283c8 size 0xf8 virtual false final false
inline void InstallOculusDestinationBindings(::Zenject::DiContainer*  container) ;

/// @brief Method InstallPlatformLeaderboardsModel addr 0x22285b0 size 0x168 virtual false final false
inline void InstallPlatformLeaderboardsModel(::Zenject::DiContainer*  container, bool  isRunningFromTests) ;

/// @brief Method InstallPS5Bindings addr 0x22288d8 size 0x4 virtual false final false
inline void InstallPS5Bindings(::Zenject::DiContainer*  container) ;

/// @brief Method InstallPS4Bindings addr 0x22288dc size 0x4 virtual false final false
inline void InstallPS4Bindings(::Zenject::DiContainer*  container) ;

static inline ::GlobalNamespace::MainSystemInit* New_ctor() ;

/// @brief Method .ctor addr 0x22288e0 size 0x74 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainSystemInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainSystemInit(MainSystemInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainSystemInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainSystemInit(MainSystemInit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainSystemInit()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSystemInit, 0x230>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSystemInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSystemInit*, "", "MainSystemInit");
