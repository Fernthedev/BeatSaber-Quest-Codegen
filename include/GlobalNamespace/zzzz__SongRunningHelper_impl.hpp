#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SongRunningHelper__QueuedSongParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongRunningHelper__QueuedSongParams::*)(::GlobalNamespace::IBeatmapLevel*, ::StringW, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::__RecordingToolManager__SetupData, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*)>(&::GlobalNamespace::__SongRunningHelper__QueuedSongParams::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x226eefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RecordingToolManager__SetupData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SongRunningHelper__QueuedSongParams::__set_beatmapLevel(::GlobalNamespace::IBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_beatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_beatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SongRunningHelper__QueuedSongParams::__set_difficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_difficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_difficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SongRunningHelper__QueuedSongParams::__set_characteristic(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_characteristic()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_characteristic() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SongRunningHelper__QueuedSongParams::__set_recordingToolData(::GlobalNamespace::__RecordingToolManager__SetupData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RecordingToolManager__SetupData, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__RecordingToolManager__SetupData>(value));
}
constexpr ::GlobalNamespace::__RecordingToolManager__SetupData& GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_recordingToolData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RecordingToolManager__SetupData, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__RecordingToolManager__SetupData const& GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_recordingToolData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RecordingToolManager__SetupData, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SongRunningHelper__QueuedSongParams::__set_songFinishedCallback(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>* GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_songFinishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*> GlobalNamespace::__SongRunningHelper__QueuedSongParams::__get_songFinishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
/// @param songFinishedCallback: ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>* (default: csnull)
inline void GlobalNamespace::__SongRunningHelper__QueuedSongParams::_ctor(::GlobalNamespace::IBeatmapLevel*  beatmapLevel, ::StringW  characteristic, ::GlobalNamespace::BeatmapDifficulty  difficulty, ::GlobalNamespace::__RecordingToolManager__SetupData  recordingToolData, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  songFinishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RecordingToolManager__SetupData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapLevel, characteristic, difficulty, recordingToolData, songFinishedCallback);
}
// Ctor Parameters [CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "recordingToolData", ty: "::GlobalNamespace::__RecordingToolManager__SetupData", modifiers: "", def_value: Some("{}") }, CppParam { name: "songFinishedCallback", ty: "::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__SongRunningHelper__QueuedSongParams::__SongRunningHelper__QueuedSongParams(::GlobalNamespace::IBeatmapLevel*  beatmapLevel, ::GlobalNamespace::BeatmapDifficulty  difficulty, ::StringW  characteristic, ::GlobalNamespace::__RecordingToolManager__SetupData  recordingToolData, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  songFinishedCallback) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->beatmapLevel = beatmapLevel;
this->difficulty = difficulty;
this->characteristic = characteristic;
this->recordingToolData = recordingToolData;
this->songFinishedCallback = songFinishedCallback;
}
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.FindBeatmapLevelPackBeatmaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::IBeatmapLevel*,::Array<::GlobalNamespace::IBeatmapLevel*>*> (::GlobalNamespace::SongRunningHelper::*)(::StringW)>(&::GlobalNamespace::SongRunningHelper::FindBeatmapLevelPackBeatmaps)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x226e390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "FindBeatmapLevelPackBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.EnqueueLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)(::GlobalNamespace::__SongRunningHelper__QueuedSongParams)>(&::GlobalNamespace::SongRunningHelper::EnqueueLevel)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x226e884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "EnqueueLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StartLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)(::GlobalNamespace::__SongRunningHelper__QueuedSongParams)>(&::GlobalNamespace::SongRunningHelper::StartLevel)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x226e93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "StartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StopAllLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::StopAllLevels)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x226ec8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "StopAllLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StopCurrentLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::StopCurrentLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x226ecec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "StopCurrentLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x226ed08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper._StartLevel_g__HandleLevelDidFinishCallback_8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::SongRunningHelper::_StartLevel_g__HandleLevelDidFinishCallback_8_0)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x226ed84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "<StartLevel>g__HandleLevelDidFinishCallback|8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongRunningHelper::__set__beatmapCharacteristics(::GlobalNamespace::BeatmapCharacteristicCollection*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicCollection*, 0x10>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicCollection*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* GlobalNamespace::SongRunningHelper::__get__beatmapCharacteristics()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicCollection*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> GlobalNamespace::SongRunningHelper::__get__beatmapCharacteristics() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicCollection*, 0x10>(this);
}
constexpr void GlobalNamespace::SongRunningHelper::__set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x18>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::SongRunningHelper::__get__menuTransitionsHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::SongRunningHelper::__get__menuTransitionsHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x18>(this);
}
constexpr void GlobalNamespace::SongRunningHelper::__set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x20>(this, std::forward<::GlobalNamespace::BeatmapLevelsModel*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::SongRunningHelper::__get__beatmapLevels()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> GlobalNamespace::SongRunningHelper::__get__beatmapLevels() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x20>(this);
}
constexpr void GlobalNamespace::SongRunningHelper::__set__playQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*, 0x28>(this, std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* GlobalNamespace::SongRunningHelper::__get__playQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> GlobalNamespace::SongRunningHelper::__get__playQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*, 0x28>(this);
}
constexpr void GlobalNamespace::SongRunningHelper::__set__current(::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>, 0x30>(this, std::forward<::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>>(value));
}
constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>& GlobalNamespace::SongRunningHelper::__get__current()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>, 0x30>(this);
}
constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> const& GlobalNamespace::SongRunningHelper::__get__current() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>, 0x30>(this);
}
inline ::ArrayW<::GlobalNamespace::IBeatmapLevel*,::Array<::GlobalNamespace::IBeatmapLevel*>*> GlobalNamespace::SongRunningHelper::FindBeatmapLevelPackBeatmaps(::StringW  packId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "FindBeatmapLevelPackBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::IBeatmapLevel*,::Array<::GlobalNamespace::IBeatmapLevel*>*>, false>(*this, ___internal_method, packId);
}
inline void GlobalNamespace::SongRunningHelper::EnqueueLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  queuedSongParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "EnqueueLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, queuedSongParams);
}
inline void GlobalNamespace::SongRunningHelper::StartLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  queuedSongParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "StartLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, queuedSongParams);
}
inline void GlobalNamespace::SongRunningHelper::StopAllLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "StopAllLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongRunningHelper::StopCurrentLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "StopCurrentLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SongRunningHelper* GlobalNamespace::SongRunningHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongRunningHelper*>());
}
inline void GlobalNamespace::SongRunningHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongRunningHelper::_StartLevel_g__HandleLevelDidFinishCallback_8_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelScenesTransition, ::GlobalNamespace::LevelCompletionResults*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                            "<StartLevel>g__HandleLevelDidFinishCallback|8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, standardLevelScenesTransition, results);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
