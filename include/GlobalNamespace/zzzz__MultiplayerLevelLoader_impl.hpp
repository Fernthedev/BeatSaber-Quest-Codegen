#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
constexpr void GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState  GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::NotLoading{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState  GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::LoadingBeatmap{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState  GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::WaitingForCountdown{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.add_stillDownloadingSongEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerLevelLoader::add_stillDownloadingSongEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22a6bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "add_stillDownloadingSongEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.remove_stillDownloadingSongEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerLevelLoader::remove_stillDownloadingSongEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22a6c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "remove_stillDownloadingSongEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.add_countdownFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*)>(&::GlobalNamespace::MultiplayerLevelLoader::add_countdownFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22a6d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "add_countdownFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.remove_countdownFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*)>(&::GlobalNamespace::MultiplayerLevelLoader::remove_countdownFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22a6de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "remove_countdownFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.LoadLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::GlobalNamespace::ILevelGameplaySetupData*, int64_t)>(&::GlobalNamespace::MultiplayerLevelLoader::LoadLevel)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x22a6e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "LoadLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.SetNewStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(int64_t)>(&::GlobalNamespace::MultiplayerLevelLoader::SetNewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a703c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "SetNewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.ClearLoading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::ClearLoading)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22a7044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "ClearLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::Tick)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x22a7078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a7364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr  GlobalNamespace::MultiplayerLevelLoader::operator ::Zenject::ITickable*() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this, std::forward<::GlobalNamespace::IMultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerLevelLoader::__get__multiplayerSessionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> GlobalNamespace::MultiplayerLevelLoader::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x18>(this, std::forward<::GlobalNamespace::BeatmapLevelsModel*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::MultiplayerLevelLoader::__get__beatmapLevelsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> GlobalNamespace::MultiplayerLevelLoader::__get__beatmapLevelsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set_stillDownloadingSongEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::MultiplayerLevelLoader::__get_stillDownloadingSongEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::MultiplayerLevelLoader::__get_stillDownloadingSongEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*, 0x28>(this, std::forward<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>* GlobalNamespace::MultiplayerLevelLoader::__get_countdownFinishedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*> GlobalNamespace::MultiplayerLevelLoader::__get_countdownFinishedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__loaderState(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState, 0x30>(this, std::forward<::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState>(value));
}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState& GlobalNamespace::MultiplayerLevelLoader::__get__loaderState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState, 0x30>(this);
}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const& GlobalNamespace::MultiplayerLevelLoader::__get__loaderState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__getBeatmapCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0x38>(this, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* GlobalNamespace::MultiplayerLevelLoader::__get__getBeatmapCancellationTokenSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> GlobalNamespace::MultiplayerLevelLoader::__get__getBeatmapCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__getBeatmapLevelResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*, 0x40>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* GlobalNamespace::MultiplayerLevelLoader::__get__getBeatmapLevelResultTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> GlobalNamespace::MultiplayerLevelLoader::__get__getBeatmapLevelResultTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__gameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILevelGameplaySetupData*, 0x48>(this, std::forward<::GlobalNamespace::ILevelGameplaySetupData*>(value));
}
constexpr ::GlobalNamespace::ILevelGameplaySetupData* GlobalNamespace::MultiplayerLevelLoader::__get__gameplaySetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelGameplaySetupData*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelGameplaySetupData*> GlobalNamespace::MultiplayerLevelLoader::__get__gameplaySetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelGameplaySetupData*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x50>(this, std::forward<::GlobalNamespace::IDifficultyBeatmap*>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::MultiplayerLevelLoader::__get__difficultyBeatmap()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> GlobalNamespace::MultiplayerLevelLoader::__get__difficultyBeatmap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__startTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::MultiplayerLevelLoader::__get__startTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
constexpr int64_t const& GlobalNamespace::MultiplayerLevelLoader::__get__startTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__stillDownloadingCalled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerLevelLoader::__get__stillDownloadingCalled()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerLevelLoader::__get__stillDownloadingCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
inline void GlobalNamespace::MultiplayerLevelLoader::add_stillDownloadingSongEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "add_stillDownloadingSongEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::remove_stillDownloadingSongEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "remove_stillDownloadingSongEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::add_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "add_countdownFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::remove_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "remove_countdownFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IDifficultyBeatmap*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::LoadLevel(::GlobalNamespace::ILevelGameplaySetupData*  gameplaySetupData, int64_t  initialStartTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "LoadLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameplaySetupData, initialStartTime);
}
inline void GlobalNamespace::MultiplayerLevelLoader::SetNewStartTime(int64_t  newStartTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "SetNewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newStartTime);
}
inline void GlobalNamespace::MultiplayerLevelLoader::ClearLoading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "ClearLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelLoader::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelLoader* GlobalNamespace::MultiplayerLevelLoader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLevelLoader*>());
}
inline void GlobalNamespace::MultiplayerLevelLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
