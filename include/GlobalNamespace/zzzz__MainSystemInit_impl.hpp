#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5LeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyAchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__ExternalCamerasManager_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightsUpdateSystem_def.hpp"
#include "GlobalNamespace/zzzz__DevicelessVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4NetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__VoipManager_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__OculusVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__PS5NetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__NetworkConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__CustomLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__PS4LeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerEntitlementChecker_def.hpp"
#include "GlobalNamespace/zzzz__OculusNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PSVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__PSVR2Helper_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__SteamNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCommandLineArgsProvider_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentAudioEffectsPlayer_def.hpp"
#include "GlobalNamespace/zzzz__CoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__RichPresenceManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__CachedMediaAsyncLoader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)()>(&::GlobalNamespace::MainSystemInit::Init)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2226700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(&::GlobalNamespace::MainSystemInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1838;
  constexpr static std::size_t addrs = 0x2226b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallHapticsController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::MainSystemInit::InstallHapticsController)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2228718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallHapticsController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallRichPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(&::GlobalNamespace::MainSystemInit::InstallRichPresence)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22284c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallRichPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallOculusDestinationBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22283c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallOculusDestinationBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPlatformLeaderboardsModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(&::GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22285b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallPlatformLeaderboardsModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPS5Bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::MainSystemInit::InstallPS5Bindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22288d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallPS5Bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPS4Bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::MainSystemInit::InstallPS4Bindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22288dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallPS4Bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)()>(&::GlobalNamespace::MainSystemInit::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22288e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MainSystemInit::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x18>(this, std::forward<::GlobalNamespace::MainSettingsModelSO*>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::MainSystemInit::__get__mainSettingsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> GlobalNamespace::MainSystemInit::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x18>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__audioManager(::GlobalNamespace::AudioManagerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this, std::forward<::GlobalNamespace::AudioManagerSO*>(value));
}
constexpr ::GlobalNamespace::AudioManagerSO* GlobalNamespace::MainSystemInit::__get__audioManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> GlobalNamespace::MainSystemInit::__get__audioManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__perceivedLoudnessPerLevel(::GlobalNamespace::PerceivedLoudnessPerLevelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelSO*, 0x28>(this, std::forward<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>(value));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelSO* GlobalNamespace::MainSystemInit::__get__perceivedLoudnessPerLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelSO*> GlobalNamespace::MainSystemInit::__get__perceivedLoudnessPerLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelSO*, 0x28>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__relativeSfxVolumePerLevel(::GlobalNamespace::RelativeSfxVolumePerLevelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelSO*, 0x30>(this, std::forward<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>(value));
}
constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelSO* GlobalNamespace::MainSystemInit::__get__relativeSfxVolumePerLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelSO*> GlobalNamespace::MainSystemInit::__get__relativeSfxVolumePerLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelSO*, 0x30>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__mirrorRendererGraphicsSettingsPresets(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, 0x38>(this, std::forward<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>(value));
}
constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* GlobalNamespace::MainSystemInit::__get__mirrorRendererGraphicsSettingsPresets()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*> GlobalNamespace::MainSystemInit::__get__mirrorRendererGraphicsSettingsPresets() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, 0x38>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__mainEffectGraphicsSettingsPresets(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*, 0x40>(this, std::forward<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>(value));
}
constexpr ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* GlobalNamespace::MainSystemInit::__get__mainEffectGraphicsSettingsPresets()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*> GlobalNamespace::MainSystemInit::__get__mainEffectGraphicsSettingsPresets() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*, 0x40>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__bloomPrePassGraphicsSettingsPresets(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*, 0x48>(this, std::forward<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* GlobalNamespace::MainSystemInit::__get__bloomPrePassGraphicsSettingsPresets()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*> GlobalNamespace::MainSystemInit::__get__bloomPrePassGraphicsSettingsPresets() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*, 0x48>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__mirrorRenderer(::GlobalNamespace::MirrorRendererSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MirrorRendererSO*, 0x50>(this, std::forward<::GlobalNamespace::MirrorRendererSO*>(value));
}
constexpr ::GlobalNamespace::MirrorRendererSO* GlobalNamespace::MainSystemInit::__get__mirrorRenderer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MirrorRendererSO*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererSO*> GlobalNamespace::MainSystemInit::__get__mirrorRenderer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MirrorRendererSO*, 0x50>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__mainEffectContainer(::GlobalNamespace::MainEffectContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainEffectContainerSO*, 0x58>(this, std::forward<::GlobalNamespace::MainEffectContainerSO*>(value));
}
constexpr ::GlobalNamespace::MainEffectContainerSO* GlobalNamespace::MainSystemInit::__get__mainEffectContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainEffectContainerSO*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectContainerSO*> GlobalNamespace::MainSystemInit::__get__mainEffectContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainEffectContainerSO*, 0x58>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassEffectContainerSO*, 0x60>(this, std::forward<::GlobalNamespace::BloomPrePassEffectContainerSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO* GlobalNamespace::MainSystemInit::__get__bloomPrePassEffectContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassEffectContainerSO*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> GlobalNamespace::MainSystemInit::__get__bloomPrePassEffectContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassEffectContainerSO*, 0x60>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__songPackMasksModel(::GlobalNamespace::SongPackMasksModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMasksModelSO*, 0x68>(this, std::forward<::GlobalNamespace::SongPackMasksModelSO*>(value));
}
constexpr ::GlobalNamespace::SongPackMasksModelSO* GlobalNamespace::MainSystemInit::__get__songPackMasksModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMasksModelSO*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModelSO*> GlobalNamespace::MainSystemInit::__get__songPackMasksModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMasksModelSO*, 0x68>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x70>(this, std::forward<::GlobalNamespace::AppStaticSettingsSO*>(value));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO* GlobalNamespace::MainSystemInit::__get__appStaticSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> GlobalNamespace::MainSystemInit::__get__appStaticSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x70>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x78>(this, std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::MainSystemInit::__get__standardLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> GlobalNamespace::MainSystemInit::__get__standardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x78>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x80>(this, std::forward<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* GlobalNamespace::MainSystemInit::__get__missionLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> GlobalNamespace::MainSystemInit::__get__missionLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x80>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x88>(this, std::forward<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* GlobalNamespace::MainSystemInit::__get__multiplayerLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> GlobalNamespace::MainSystemInit::__get__multiplayerLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x88>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__timeHelperPrefab(::GlobalNamespace::TimeHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TimeHelper*, 0x90>(this, std::forward<::GlobalNamespace::TimeHelper*>(value));
}
constexpr ::GlobalNamespace::TimeHelper* GlobalNamespace::MainSystemInit::__get__timeHelperPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TimeHelper*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TimeHelper*> GlobalNamespace::MainSystemInit::__get__timeHelperPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TimeHelper*, 0x90>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__playerDataModelPrefab(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x98>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::MainSystemInit::__get__playerDataModelPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::MainSystemInit::__get__playerDataModelPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x98>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__campaignProgressModelPrefab(::GlobalNamespace::CampaignProgressModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CampaignProgressModel*, 0xa0>(this, std::forward<::GlobalNamespace::CampaignProgressModel*>(value));
}
constexpr ::GlobalNamespace::CampaignProgressModel* GlobalNamespace::MainSystemInit::__get__campaignProgressModelPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CampaignProgressModel*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> GlobalNamespace::MainSystemInit::__get__campaignProgressModelPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CampaignProgressModel*, 0xa0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__beatmapLevelsModelPrefab(::GlobalNamespace::BeatmapLevelsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0xa8>(this, std::forward<::GlobalNamespace::BeatmapLevelsModel*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::MainSystemInit::__get__beatmapLevelsModelPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> GlobalNamespace::MainSystemInit::__get__beatmapLevelsModelPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0xa8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__customLevelLoaderPrefab(::GlobalNamespace::CustomLevelLoader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CustomLevelLoader*, 0xb0>(this, std::forward<::GlobalNamespace::CustomLevelLoader*>(value));
}
constexpr ::GlobalNamespace::CustomLevelLoader* GlobalNamespace::MainSystemInit::__get__customLevelLoaderPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomLevelLoader*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomLevelLoader*> GlobalNamespace::MainSystemInit::__get__customLevelLoaderPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomLevelLoader*, 0xb0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__cachedMediaAsyncLoaderPrefab(::GlobalNamespace::CachedMediaAsyncLoader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CachedMediaAsyncLoader*, 0xb8>(this, std::forward<::GlobalNamespace::CachedMediaAsyncLoader*>(value));
}
constexpr ::GlobalNamespace::CachedMediaAsyncLoader* GlobalNamespace::MainSystemInit::__get__cachedMediaAsyncLoaderPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CachedMediaAsyncLoader*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CachedMediaAsyncLoader*> GlobalNamespace::MainSystemInit::__get__cachedMediaAsyncLoaderPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CachedMediaAsyncLoader*, 0xb8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__externalCamerasManagerPrefab(::GlobalNamespace::ExternalCamerasManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ExternalCamerasManager*, 0xc0>(this, std::forward<::GlobalNamespace::ExternalCamerasManager*>(value));
}
constexpr ::GlobalNamespace::ExternalCamerasManager* GlobalNamespace::MainSystemInit::__get__externalCamerasManagerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ExternalCamerasManager*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExternalCamerasManager*> GlobalNamespace::MainSystemInit::__get__externalCamerasManagerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ExternalCamerasManager*, 0xc0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__multiplayerSessionManagerPrefab(::GlobalNamespace::MultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerSessionManager*, 0xc8>(this, std::forward<::GlobalNamespace::MultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::MultiplayerSessionManager* GlobalNamespace::MainSystemInit::__get__multiplayerSessionManagerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerSessionManager*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSessionManager*> GlobalNamespace::MainSystemInit::__get__multiplayerSessionManagerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerSessionManager*, 0xc8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__voipManagerPrefab(::GlobalNamespace::VoipManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::VoipManager*, 0xd0>(this, std::forward<::GlobalNamespace::VoipManager*>(value));
}
constexpr ::GlobalNamespace::VoipManager* GlobalNamespace::MainSystemInit::__get__voipManagerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VoipManager*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VoipManager*> GlobalNamespace::MainSystemInit::__get__voipManagerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VoipManager*, 0xd0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__gameLiftNetworkPlayerModelPrefab(::GlobalNamespace::GameLiftNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameLiftNetworkPlayerModel*, 0xd8>(this, std::forward<::GlobalNamespace::GameLiftNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::GameLiftNetworkPlayerModel* GlobalNamespace::MainSystemInit::__get__gameLiftNetworkPlayerModelPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameLiftNetworkPlayerModel*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftNetworkPlayerModel*> GlobalNamespace::MainSystemInit::__get__gameLiftNetworkPlayerModelPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameLiftNetworkPlayerModel*, 0xd8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__networkPlayerEntitlementCheckerPrefab(::GlobalNamespace::NetworkPlayerEntitlementChecker*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NetworkPlayerEntitlementChecker*, 0xe0>(this, std::forward<::GlobalNamespace::NetworkPlayerEntitlementChecker*>(value));
}
constexpr ::GlobalNamespace::NetworkPlayerEntitlementChecker* GlobalNamespace::MainSystemInit::__get__networkPlayerEntitlementCheckerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPlayerEntitlementChecker*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerEntitlementChecker*> GlobalNamespace::MainSystemInit::__get__networkPlayerEntitlementCheckerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPlayerEntitlementChecker*, 0xe0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__hapticFeedbackControllerPrefab(::GlobalNamespace::HapticFeedbackManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0xe8>(this, std::forward<::GlobalNamespace::HapticFeedbackManager*>(value));
}
constexpr ::GlobalNamespace::HapticFeedbackManager* GlobalNamespace::MainSystemInit::__get__hapticFeedbackControllerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> GlobalNamespace::MainSystemInit::__get__hapticFeedbackControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0xe8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__tweeningManagerPrefab(::Tweening::TimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::TimeTweeningManager*, 0xf0>(this, std::forward<::Tweening::TimeTweeningManager*>(value));
}
constexpr ::Tweening::TimeTweeningManager* GlobalNamespace::MainSystemInit::__get__tweeningManagerPrefab()  {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> GlobalNamespace::MainSystemInit::__get__tweeningManagerPrefab() const {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0xf0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__lightsUpdateSystemPrefab(::GlobalNamespace::BloomPrePassLightsUpdateSystem*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassLightsUpdateSystem*, 0xf8>(this, std::forward<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassLightsUpdateSystem* GlobalNamespace::MainSystemInit::__get__lightsUpdateSystemPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightsUpdateSystem*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightsUpdateSystem*> GlobalNamespace::MainSystemInit::__get__lightsUpdateSystemPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassLightsUpdateSystem*, 0xf8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__environmentAudioEffectsPlayerPrefab(::GlobalNamespace::EnvironmentAudioEffectsPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentAudioEffectsPlayer*, 0x100>(this, std::forward<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>(value));
}
constexpr ::GlobalNamespace::EnvironmentAudioEffectsPlayer* GlobalNamespace::MainSystemInit::__get__environmentAudioEffectsPlayerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentAudioEffectsPlayer*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentAudioEffectsPlayer*> GlobalNamespace::MainSystemInit::__get__environmentAudioEffectsPlayerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentAudioEffectsPlayer*, 0x100>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__nodePoseSyncStateManagerPrefab(::GlobalNamespace::NodePoseSyncStateManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NodePoseSyncStateManager*, 0x108>(this, std::forward<::GlobalNamespace::NodePoseSyncStateManager*>(value));
}
constexpr ::GlobalNamespace::NodePoseSyncStateManager* GlobalNamespace::MainSystemInit::__get__nodePoseSyncStateManagerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NodePoseSyncStateManager*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NodePoseSyncStateManager*> GlobalNamespace::MainSystemInit::__get__nodePoseSyncStateManagerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NodePoseSyncStateManager*, 0x108>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__alwaysOwnedContentContainer(::GlobalNamespace::AlwaysOwnedContentContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AlwaysOwnedContentContainerSO*, 0x110>(this, std::forward<::GlobalNamespace::AlwaysOwnedContentContainerSO*>(value));
}
constexpr ::GlobalNamespace::AlwaysOwnedContentContainerSO* GlobalNamespace::MainSystemInit::__get__alwaysOwnedContentContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AlwaysOwnedContentContainerSO*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentContainerSO*> GlobalNamespace::MainSystemInit::__get__alwaysOwnedContentContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AlwaysOwnedContentContainerSO*, 0x110>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__psVRHelperPrefab(::GlobalNamespace::PSVRHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PSVRHelper*, 0x118>(this, std::forward<::GlobalNamespace::PSVRHelper*>(value));
}
constexpr ::GlobalNamespace::PSVRHelper* GlobalNamespace::MainSystemInit::__get__psVRHelperPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PSVRHelper*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PSVRHelper*> GlobalNamespace::MainSystemInit::__get__psVRHelperPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PSVRHelper*, 0x118>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__psVR2HelperPrefab(::GlobalNamespace::PSVR2Helper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PSVR2Helper*, 0x120>(this, std::forward<::GlobalNamespace::PSVR2Helper*>(value));
}
constexpr ::GlobalNamespace::PSVR2Helper* GlobalNamespace::MainSystemInit::__get__psVR2HelperPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PSVR2Helper*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PSVR2Helper*> GlobalNamespace::MainSystemInit::__get__psVR2HelperPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PSVR2Helper*, 0x120>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__oculusVRHelperPrefab(::GlobalNamespace::OculusVRHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusVRHelper*, 0x128>(this, std::forward<::GlobalNamespace::OculusVRHelper*>(value));
}
constexpr ::GlobalNamespace::OculusVRHelper* GlobalNamespace::MainSystemInit::__get__oculusVRHelperPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusVRHelper*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusVRHelper*> GlobalNamespace::MainSystemInit::__get__oculusVRHelperPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusVRHelper*, 0x128>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__unityXRHelperPrefab(::GlobalNamespace::UnityXRHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::UnityXRHelper*, 0x130>(this, std::forward<::GlobalNamespace::UnityXRHelper*>(value));
}
constexpr ::GlobalNamespace::UnityXRHelper* GlobalNamespace::MainSystemInit::__get__unityXRHelperPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UnityXRHelper*, 0x130>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRHelper*> GlobalNamespace::MainSystemInit::__get__unityXRHelperPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UnityXRHelper*, 0x130>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__devicelessVRHelperPrefab(::GlobalNamespace::DevicelessVRHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DevicelessVRHelper*, 0x138>(this, std::forward<::GlobalNamespace::DevicelessVRHelper*>(value));
}
constexpr ::GlobalNamespace::DevicelessVRHelper* GlobalNamespace::MainSystemInit::__get__devicelessVRHelperPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DevicelessVRHelper*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DevicelessVRHelper*> GlobalNamespace::MainSystemInit::__get__devicelessVRHelperPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DevicelessVRHelper*, 0x138>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__steamLevelProductsModel(::GlobalNamespace::SteamLevelProductsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamLevelProductsModelSO*, 0x140>(this, std::forward<::GlobalNamespace::SteamLevelProductsModelSO*>(value));
}
constexpr ::GlobalNamespace::SteamLevelProductsModelSO* GlobalNamespace::MainSystemInit::__get__steamLevelProductsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamLevelProductsModelSO*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamLevelProductsModelSO*> GlobalNamespace::MainSystemInit::__get__steamLevelProductsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamLevelProductsModelSO*, 0x140>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__oculusLevelProducsModel(::GlobalNamespace::OculusLevelProductsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusLevelProductsModelSO*, 0x148>(this, std::forward<::GlobalNamespace::OculusLevelProductsModelSO*>(value));
}
constexpr ::GlobalNamespace::OculusLevelProductsModelSO* GlobalNamespace::MainSystemInit::__get__oculusLevelProducsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusLevelProductsModelSO*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusLevelProductsModelSO*> GlobalNamespace::MainSystemInit::__get__oculusLevelProducsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusLevelProductsModelSO*, 0x148>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4LevelProductsModel(::GlobalNamespace::PS4LevelProductsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS4LevelProductsModelSO*, 0x150>(this, std::forward<::GlobalNamespace::PS4LevelProductsModelSO*>(value));
}
constexpr ::GlobalNamespace::PS4LevelProductsModelSO* GlobalNamespace::MainSystemInit::__get__ps4LevelProductsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS4LevelProductsModelSO*, 0x150>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4LevelProductsModelSO*> GlobalNamespace::MainSystemInit::__get__ps4LevelProductsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS4LevelProductsModelSO*, 0x150>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5LevelProductsModel(::GlobalNamespace::PS5LevelProductsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS5LevelProductsModelSO*, 0x158>(this, std::forward<::GlobalNamespace::PS5LevelProductsModelSO*>(value));
}
constexpr ::GlobalNamespace::PS5LevelProductsModelSO* GlobalNamespace::MainSystemInit::__get__ps5LevelProductsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5LevelProductsModelSO*, 0x158>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5LevelProductsModelSO*> GlobalNamespace::MainSystemInit::__get__ps5LevelProductsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5LevelProductsModelSO*, 0x158>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4LeaderboardIdsModel(::GlobalNamespace::PS4LeaderboardIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS4LeaderboardIdsModelSO*, 0x160>(this, std::forward<::GlobalNamespace::PS4LeaderboardIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::PS4LeaderboardIdsModelSO* GlobalNamespace::MainSystemInit::__get__ps4LeaderboardIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS4LeaderboardIdsModelSO*, 0x160>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4LeaderboardIdsModelSO*> GlobalNamespace::MainSystemInit::__get__ps4LeaderboardIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS4LeaderboardIdsModelSO*, 0x160>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5LeaderboardIdsModel(::GlobalNamespace::PS5LeaderboardIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS5LeaderboardIdsModelSO*, 0x168>(this, std::forward<::GlobalNamespace::PS5LeaderboardIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::PS5LeaderboardIdsModelSO* GlobalNamespace::MainSystemInit::__get__ps5LeaderboardIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5LeaderboardIdsModelSO*, 0x168>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5LeaderboardIdsModelSO*> GlobalNamespace::MainSystemInit::__get__ps5LeaderboardIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5LeaderboardIdsModelSO*, 0x168>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__riftLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x170>(this, std::forward<::GlobalNamespace::LeaderboardIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::LeaderboardIdsModelSO* GlobalNamespace::MainSystemInit::__get__riftLeaderboardIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x170>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> GlobalNamespace::MainSystemInit::__get__riftLeaderboardIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x170>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__questLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x178>(this, std::forward<::GlobalNamespace::LeaderboardIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::LeaderboardIdsModelSO* GlobalNamespace::MainSystemInit::__get__questLeaderboardIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x178>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> GlobalNamespace::MainSystemInit::__get__questLeaderboardIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x178>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__steamLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x180>(this, std::forward<::GlobalNamespace::LeaderboardIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::LeaderboardIdsModelSO* GlobalNamespace::MainSystemInit::__get__steamLeaderboardIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x180>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> GlobalNamespace::MainSystemInit::__get__steamLeaderboardIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardIdsModelSO*, 0x180>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__richPresenceManagerPrefab(::GlobalNamespace::RichPresenceManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RichPresenceManager*, 0x188>(this, std::forward<::GlobalNamespace::RichPresenceManager*>(value));
}
constexpr ::GlobalNamespace::RichPresenceManager* GlobalNamespace::MainSystemInit::__get__richPresenceManagerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RichPresenceManager*, 0x188>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RichPresenceManager*> GlobalNamespace::MainSystemInit::__get__richPresenceManagerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RichPresenceManager*, 0x188>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__dlcPromoPanelData(::GlobalNamespace::DlcPromoPanelDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelDataSO*, 0x190>(this, std::forward<::GlobalNamespace::DlcPromoPanelDataSO*>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelDataSO* GlobalNamespace::MainSystemInit::__get__dlcPromoPanelData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelDataSO*, 0x190>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelDataSO*> GlobalNamespace::MainSystemInit::__get__dlcPromoPanelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelDataSO*, 0x190>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__beatmapLevelsPromoData(::GlobalNamespace::BeatmapLevelsPromoDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsPromoDataSO*, 0x198>(this, std::forward<::GlobalNamespace::BeatmapLevelsPromoDataSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO* GlobalNamespace::MainSystemInit::__get__beatmapLevelsPromoData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsPromoDataSO*, 0x198>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsPromoDataSO*> GlobalNamespace::MainSystemInit::__get__beatmapLevelsPromoData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsPromoDataSO*, 0x198>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__networkConfig(::GlobalNamespace::NetworkConfigSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NetworkConfigSO*, 0x1a0>(this, std::forward<::GlobalNamespace::NetworkConfigSO*>(value));
}
constexpr ::GlobalNamespace::NetworkConfigSO* GlobalNamespace::MainSystemInit::__get__networkConfig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkConfigSO*, 0x1a0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkConfigSO*> GlobalNamespace::MainSystemInit::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkConfigSO*, 0x1a0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__steamNetworkPlayerModelPrefab(::GlobalNamespace::SteamNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamNetworkPlayerModel*, 0x1a8>(this, std::forward<::GlobalNamespace::SteamNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::SteamNetworkPlayerModel* GlobalNamespace::MainSystemInit::__get__steamNetworkPlayerModelPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamNetworkPlayerModel*, 0x1a8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamNetworkPlayerModel*> GlobalNamespace::MainSystemInit::__get__steamNetworkPlayerModelPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamNetworkPlayerModel*, 0x1a8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__oculusNetworkPlayerModelPrefab(::GlobalNamespace::OculusNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusNetworkPlayerModel*, 0x1b0>(this, std::forward<::GlobalNamespace::OculusNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::OculusNetworkPlayerModel* GlobalNamespace::MainSystemInit::__get__oculusNetworkPlayerModelPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusNetworkPlayerModel*, 0x1b0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> GlobalNamespace::MainSystemInit::__get__oculusNetworkPlayerModelPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusNetworkPlayerModel*, 0x1b0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4NetworkPlayerModelPrefab(::GlobalNamespace::PS4NetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS4NetworkPlayerModel*, 0x1b8>(this, std::forward<::GlobalNamespace::PS4NetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::PS4NetworkPlayerModel* GlobalNamespace::MainSystemInit::__get__ps4NetworkPlayerModelPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS4NetworkPlayerModel*, 0x1b8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4NetworkPlayerModel*> GlobalNamespace::MainSystemInit::__get__ps4NetworkPlayerModelPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS4NetworkPlayerModel*, 0x1b8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5NetworkPlayerModelPrefab(::GlobalNamespace::PS5NetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS5NetworkPlayerModel*, 0x1c0>(this, std::forward<::GlobalNamespace::PS5NetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::PS5NetworkPlayerModel* GlobalNamespace::MainSystemInit::__get__ps5NetworkPlayerModelPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5NetworkPlayerModel*, 0x1c0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5NetworkPlayerModel*> GlobalNamespace::MainSystemInit::__get__ps5NetworkPlayerModelPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5NetworkPlayerModel*, 0x1c0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicCollectionSO*, 0x1c8>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollectionSO* GlobalNamespace::MainSystemInit::__get__beatmapCharacteristicCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicCollectionSO*, 0x1c8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollectionSO*> GlobalNamespace::MainSystemInit::__get__beatmapCharacteristicCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicCollectionSO*, 0x1c8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__leaderboardScoreUploader(::GlobalNamespace::LeaderboardScoreUploader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LeaderboardScoreUploader*, 0x1d0>(this, std::forward<::GlobalNamespace::LeaderboardScoreUploader*>(value));
}
constexpr ::GlobalNamespace::LeaderboardScoreUploader* GlobalNamespace::MainSystemInit::__get__leaderboardScoreUploader()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardScoreUploader*, 0x1d0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> GlobalNamespace::MainSystemInit::__get__leaderboardScoreUploader() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardScoreUploader*, 0x1d0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__platformLeaderboardsModel(::GlobalNamespace::PlatformLeaderboardsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x1d8>(this, std::forward<::GlobalNamespace::PlatformLeaderboardsModel*>(value));
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel* GlobalNamespace::MainSystemInit::__get__platformLeaderboardsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x1d8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsModel*> GlobalNamespace::MainSystemInit::__get__platformLeaderboardsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x1d8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x1e0>(this, std::forward<::GlobalNamespace::SonyAchievementIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO* GlobalNamespace::MainSystemInit::__get__ps4AchievementIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x1e0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> GlobalNamespace::MainSystemInit::__get__ps4AchievementIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x1e0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5AchievmentIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x1e8>(this, std::forward<::GlobalNamespace::SonyAchievementIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO* GlobalNamespace::MainSystemInit::__get__ps5AchievmentIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x1e8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> GlobalNamespace::MainSystemInit::__get__ps5AchievmentIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x1e8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__achievementIdsModel(::GlobalNamespace::AchievementIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AchievementIdsModelSO*, 0x1f0>(this, std::forward<::GlobalNamespace::AchievementIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::AchievementIdsModelSO* GlobalNamespace::MainSystemInit::__get__achievementIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AchievementIdsModelSO*, 0x1f0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementIdsModelSO*> GlobalNamespace::MainSystemInit::__get__achievementIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AchievementIdsModelSO*, 0x1f0>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__achievementsModel(::GlobalNamespace::AchievementsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AchievementsModelSO*, 0x1f8>(this, std::forward<::GlobalNamespace::AchievementsModelSO*>(value));
}
constexpr ::GlobalNamespace::AchievementsModelSO* GlobalNamespace::MainSystemInit::__get__achievementsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AchievementsModelSO*, 0x1f8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> GlobalNamespace::MainSystemInit::__get__achievementsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AchievementsModelSO*, 0x1f8>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5ActivityIdsModel(::GlobalNamespace::PS5ActivityIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS5ActivityIdsModelSO*, 0x200>(this, std::forward<::GlobalNamespace::PS5ActivityIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::PS5ActivityIdsModelSO* GlobalNamespace::MainSystemInit::__get__ps5ActivityIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5ActivityIdsModelSO*, 0x200>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5ActivityIdsModelSO*> GlobalNamespace::MainSystemInit::__get__ps5ActivityIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5ActivityIdsModelSO*, 0x200>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__anyBeatmapLevelSO(::GlobalNamespace::BeatmapLevelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x208>(this, std::forward<::GlobalNamespace::BeatmapLevelSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::MainSystemInit::__get__anyBeatmapLevelSO()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x208>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> GlobalNamespace::MainSystemInit::__get__anyBeatmapLevelSO() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x208>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__coroutineStarter(::GlobalNamespace::CoroutineStarter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CoroutineStarter*, 0x210>(this, std::forward<::GlobalNamespace::CoroutineStarter*>(value));
}
constexpr ::GlobalNamespace::CoroutineStarter* GlobalNamespace::MainSystemInit::__get__coroutineStarter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CoroutineStarter*, 0x210>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CoroutineStarter*> GlobalNamespace::MainSystemInit::__get__coroutineStarter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CoroutineStarter*, 0x210>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__commandLineArgsProvider(::GlobalNamespace::EnvironmentCommandLineArgsProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentCommandLineArgsProvider*, 0x218>(this, std::forward<::GlobalNamespace::EnvironmentCommandLineArgsProvider*>(value));
}
constexpr ::GlobalNamespace::EnvironmentCommandLineArgsProvider* GlobalNamespace::MainSystemInit::__get__commandLineArgsProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentCommandLineArgsProvider*, 0x218>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentCommandLineArgsProvider*> GlobalNamespace::MainSystemInit::__get__commandLineArgsProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentCommandLineArgsProvider*, 0x218>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__menuTransitionHelperPrefab(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x220>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::MainSystemInit::__get__menuTransitionHelperPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x220>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::MainSystemInit::__get__menuTransitionHelperPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x220>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__defaultMaxCachedBeatmapLevels(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x228>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MainSystemInit::__get__defaultMaxCachedBeatmapLevels()  {
return ::cordl_internals::getInstanceField<int32_t, 0x228>(this);
}
constexpr int32_t const& GlobalNamespace::MainSystemInit::__get__defaultMaxCachedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x228>(this);
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4MaxCachedBeatmapLevels(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x22c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MainSystemInit::__get__ps4MaxCachedBeatmapLevels()  {
return ::cordl_internals::getInstanceField<int32_t, 0x22c>(this);
}
constexpr int32_t const& GlobalNamespace::MainSystemInit::__get__ps4MaxCachedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x22c>(this);
}
inline void GlobalNamespace::MainSystemInit::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainSystemInit::InstallBindings(::Zenject::DiContainer*  container, bool  isRunningFromTests)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallHapticsController(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallHapticsController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallRichPresence(::Zenject::DiContainer*  container, bool  isRunningFromTests)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallRichPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallOculusDestinationBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel(::Zenject::DiContainer*  container, bool  isRunningFromTests)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallPlatformLeaderboardsModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallPS5Bindings(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallPS5Bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallPS4Bindings(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            "InstallPS4Bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline ::GlobalNamespace::MainSystemInit* GlobalNamespace::MainSystemInit::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainSystemInit*>());
}
inline void GlobalNamespace::MainSystemInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
