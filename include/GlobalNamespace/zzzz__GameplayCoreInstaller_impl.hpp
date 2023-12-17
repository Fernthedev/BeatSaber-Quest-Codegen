#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__SongAutopilot_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__BadNoteCutEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__SongProfilingController_def.hpp"
#include "GlobalNamespace/zzzz__BeatLineManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__MissedNoteEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayCoreInstaller::*)()>(&::GlobalNamespace::GameplayCoreInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x1b30;
  constexpr static std::size_t addrs = 0x226ff3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreInstaller.InstallRecordingTool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayCoreInstaller::*)()>(&::GlobalNamespace::GameplayCoreInstaller::InstallRecordingTool)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2271a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                            "InstallRecordingTool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayCoreInstaller::*)()>(&::GlobalNamespace::GameplayCoreInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2271b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__beatLineManagerPrefab(::GlobalNamespace::BeatLineManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatLineManager*, 0x20>(this, std::forward<::GlobalNamespace::BeatLineManager*>(value));
}
constexpr ::GlobalNamespace::BeatLineManager* GlobalNamespace::GameplayCoreInstaller::__get__beatLineManagerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatLineManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatLineManager*> GlobalNamespace::GameplayCoreInstaller::__get__beatLineManagerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatLineManager*, 0x20>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__songTimeTweeningManager(::Tweening::SongTimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::SongTimeTweeningManager*, 0x28>(this, std::forward<::Tweening::SongTimeTweeningManager*>(value));
}
constexpr ::Tweening::SongTimeTweeningManager* GlobalNamespace::GameplayCoreInstaller::__get__songTimeTweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::SongTimeTweeningManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> GlobalNamespace::GameplayCoreInstaller::__get__songTimeTweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::SongTimeTweeningManager*, 0x28>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__audioManager(::GlobalNamespace::AudioManagerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioManagerSO*, 0x30>(this, std::forward<::GlobalNamespace::AudioManagerSO*>(value));
}
constexpr ::GlobalNamespace::AudioManagerSO* GlobalNamespace::GameplayCoreInstaller::__get__audioManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> GlobalNamespace::GameplayCoreInstaller::__get__audioManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x30>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__playerHeightDetectorPrefab(::GlobalNamespace::PlayerHeightDetector*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerHeightDetector*, 0x38>(this, std::forward<::GlobalNamespace::PlayerHeightDetector*>(value));
}
constexpr ::GlobalNamespace::PlayerHeightDetector* GlobalNamespace::GameplayCoreInstaller::__get__playerHeightDetectorPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerHeightDetector*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightDetector*> GlobalNamespace::GameplayCoreInstaller::__get__playerHeightDetectorPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerHeightDetector*, 0x38>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__noteCutScoreSpawnerPrefab(::GlobalNamespace::NoteCutScoreSpawner*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutScoreSpawner*, 0x40>(this, std::forward<::GlobalNamespace::NoteCutScoreSpawner*>(value));
}
constexpr ::GlobalNamespace::NoteCutScoreSpawner* GlobalNamespace::GameplayCoreInstaller::__get__noteCutScoreSpawnerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutScoreSpawner*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutScoreSpawner*> GlobalNamespace::GameplayCoreInstaller::__get__noteCutScoreSpawnerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutScoreSpawner*, 0x40>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__badNoteCutEffectSpawnerPrefab(::GlobalNamespace::BadNoteCutEffectSpawner*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BadNoteCutEffectSpawner*, 0x48>(this, std::forward<::GlobalNamespace::BadNoteCutEffectSpawner*>(value));
}
constexpr ::GlobalNamespace::BadNoteCutEffectSpawner* GlobalNamespace::GameplayCoreInstaller::__get__badNoteCutEffectSpawnerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BadNoteCutEffectSpawner*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BadNoteCutEffectSpawner*> GlobalNamespace::GameplayCoreInstaller::__get__badNoteCutEffectSpawnerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BadNoteCutEffectSpawner*, 0x48>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__missedNoteEffectSpawnerPrefab(::GlobalNamespace::MissedNoteEffectSpawner*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissedNoteEffectSpawner*, 0x50>(this, std::forward<::GlobalNamespace::MissedNoteEffectSpawner*>(value));
}
constexpr ::GlobalNamespace::MissedNoteEffectSpawner* GlobalNamespace::GameplayCoreInstaller::__get__missedNoteEffectSpawnerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissedNoteEffectSpawner*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissedNoteEffectSpawner*> GlobalNamespace::GameplayCoreInstaller::__get__missedNoteEffectSpawnerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissedNoteEffectSpawner*, 0x50>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__effectPoolsManualInstaller(::GlobalNamespace::EffectPoolsManualInstaller*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EffectPoolsManualInstaller*, 0x58>(this, std::forward<::GlobalNamespace::EffectPoolsManualInstaller*>(value));
}
constexpr ::GlobalNamespace::EffectPoolsManualInstaller* GlobalNamespace::GameplayCoreInstaller::__get__effectPoolsManualInstaller()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EffectPoolsManualInstaller*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EffectPoolsManualInstaller*> GlobalNamespace::GameplayCoreInstaller::__get__effectPoolsManualInstaller() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EffectPoolsManualInstaller*, 0x58>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set_songAutopilotPrefab(::GlobalNamespace::SongAutopilot*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongAutopilot*, 0x60>(this, std::forward<::GlobalNamespace::SongAutopilot*>(value));
}
constexpr ::GlobalNamespace::SongAutopilot* GlobalNamespace::GameplayCoreInstaller::__get_songAutopilotPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongAutopilot*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongAutopilot*> GlobalNamespace::GameplayCoreInstaller::__get_songAutopilotPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongAutopilot*, 0x60>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__songProfilingControllerPrefab(::GlobalNamespace::SongProfilingController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongProfilingController*, 0x68>(this, std::forward<::GlobalNamespace::SongProfilingController*>(value));
}
constexpr ::GlobalNamespace::SongProfilingController* GlobalNamespace::GameplayCoreInstaller::__get__songProfilingControllerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongProfilingController*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongProfilingController*> GlobalNamespace::GameplayCoreInstaller::__get__songProfilingControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongProfilingController*, 0x68>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x70>(this, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::GameplayCoreInstaller::__get__sceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> GlobalNamespace::GameplayCoreInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x70>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelModel*, 0x78>(this, std::forward<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(value));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* GlobalNamespace::GameplayCoreInstaller::__get__perceivedLoudnessPerLevelModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelModel*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> GlobalNamespace::GameplayCoreInstaller::__get__perceivedLoudnessPerLevelModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelModel*, 0x78>(this);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__relativeSfxVolumePerLevelModel(::GlobalNamespace::RelativeSfxVolumePerLevelModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelModel*, 0x80>(this, std::forward<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>(value));
}
constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel* GlobalNamespace::GameplayCoreInstaller::__get__relativeSfxVolumePerLevelModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelModel*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelModel*> GlobalNamespace::GameplayCoreInstaller::__get__relativeSfxVolumePerLevelModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelModel*, 0x80>(this);
}
inline void GlobalNamespace::GameplayCoreInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameplayCoreInstaller::InstallRecordingTool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                            "InstallRecordingTool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::GameplayCoreInstaller* GlobalNamespace::GameplayCoreInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameplayCoreInstaller*>());
}
inline void GlobalNamespace::GameplayCoreInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
