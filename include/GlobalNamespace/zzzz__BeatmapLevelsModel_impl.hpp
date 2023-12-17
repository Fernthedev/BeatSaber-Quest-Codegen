#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__HMCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel__InitData::*)(int32_t)>(&::GlobalNamespace::__BeatmapLevelsModel__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2343f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapLevelsModel__InitData::__set_maxCachedBeatmapLevels(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelsModel__InitData::__get_maxCachedBeatmapLevels()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelsModel__InitData::__get_maxCachedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
inline ::GlobalNamespace::__BeatmapLevelsModel__InitData* GlobalNamespace::__BeatmapLevelsModel__InitData::New_ctor(int32_t  maxCachedBeatmapLevels)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelsModel__InitData*>(maxCachedBeatmapLevels));
}
inline void GlobalNamespace::__BeatmapLevelsModel__InitData::_ctor(int32_t  maxCachedBeatmapLevels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxCachedBeatmapLevels);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::*)(bool, ::GlobalNamespace::IBeatmapLevel*)>(&::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2343f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::__set_isError(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::__get_isError()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::__get_isError() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::__set_beatmapLevel(::GlobalNamespace::IBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::__get_beatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::__get_beatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::_ctor(bool  isError, ::GlobalNamespace::IBeatmapLevel*  beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isError, beatmapLevel);
}
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult::__BeatmapLevelsModel__GetBeatmapLevelResult(bool  isError, ::GlobalNamespace::IBeatmapLevel*  beatmapLevel) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->isError = isError;
this->beatmapLevel = beatmapLevel;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::PreparingToDownload{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::Downloading{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState::Completed{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::*)(::StringW, uint32_t, uint32_t, ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState)>(&::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2343d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__set_levelID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__get_levelID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__set_bytesTotal(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__get_bytesTotal()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__get_bytesTotal() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__set_bytesTransferred(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__get_bytesTransferred()  {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__get_bytesTransferred() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__set_downloadingState(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState>(value));
}
constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__get_downloadingState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const& GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__get_downloadingState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::_ctor(::StringW  levelID, uint32_t  bytesTotal, uint32_t  bytesTransferred, ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  downloadingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelID, bytesTotal, bytesTransferred, downloadingState);
}
// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "downloadingState", ty: "::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate::__BeatmapLevelsModel__LevelDownloadingUpdate(::StringW  levelID, uint32_t  bytesTotal, uint32_t  bytesTransferred, ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  downloadingState) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->levelID = levelID;
this->bytesTotal = bytesTotal;
this->bytesTransferred = bytesTransferred;
this->downloadingState = downloadingState;
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::*)()>(&::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2343fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23441ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>& GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*> const& GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>& GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*> const& GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::*)()>(&::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23439ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0._GetLevelPreviewForLevelId_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::_GetLevelPreviewForLevelId_b__1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2344204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0*>::get(),
                            "<GetLevelPreviewForLevelId>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0* GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0*>());
}
inline void GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0::_GetLevelPreviewForLevelId_b__1(::GlobalNamespace::IPreviewBeatmapLevel*  beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0*>::get(),
                            "<GetLevelPreviewForLevelId>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, beatmapLevel);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel____c::*)()>(&::GlobalNamespace::__BeatmapLevelsModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel____c._GetLevelPreviewForLevelId_b__36_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (::GlobalNamespace::__BeatmapLevelsModel____c::*)(::GlobalNamespace::IBeatmapLevelPack*)>(&::GlobalNamespace::__BeatmapLevelsModel____c::_GetLevelPreviewForLevelId_b__36_0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x234431c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get(),
                            "<GetLevelPreviewForLevelId>b__36_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapLevelsModel____c::setStaticF___9(::GlobalNamespace::__BeatmapLevelsModel____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__BeatmapLevelsModel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get>(std::forward<::GlobalNamespace::__BeatmapLevelsModel____c*>(value));
}
inline ::GlobalNamespace::__BeatmapLevelsModel____c* GlobalNamespace::__BeatmapLevelsModel____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__BeatmapLevelsModel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get>();
}
inline void GlobalNamespace::__BeatmapLevelsModel____c::setStaticF___9__36_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>*, "<>9__36_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>* GlobalNamespace::__BeatmapLevelsModel____c::getStaticF___9__36_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>*, "<>9__36_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get>();
}
inline ::GlobalNamespace::__BeatmapLevelsModel____c* GlobalNamespace::__BeatmapLevelsModel____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelsModel____c*>());
}
inline void GlobalNamespace::__BeatmapLevelsModel____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::__BeatmapLevelsModel____c::_GetLevelPreviewForLevelId_b__36_0(::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get(),
                            "<GetLevelPreviewForLevelId>b__36_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(*this, ___internal_method, beatmapLevelPack);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::*)()>(&::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x2344430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2344b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> const& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___4__this(::GlobalNamespace::BeatmapLevelsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BeatmapLevelsModel*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set_levelID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get_levelID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set__beatmapLevel_5__2(::GlobalNamespace::IBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get__beatmapLevel_5__2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get__beatmapLevel_5__2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set__loadLevelResult_5__3(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>(value));
}
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get__loadLevelResult_5__3()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult const& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get__loadLevelResult_5__3() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> const& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__3()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> const& GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__get___u__3() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapLevel_5__2", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_loadLevelResult_5__3", ty: "::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  __t__builder, ::GlobalNamespace::BeatmapLevelsModel*  __4__this, ::StringW  levelID, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1, ::GlobalNamespace::IBeatmapLevel*  _beatmapLevel_5__2, ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  _loadLevelResult_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  __u__3) noexcept : ::bs_hook::ValueTypeWrapper<0x68>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelID = levelID;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->_beatmapLevel_5__2 = _beatmapLevel_5__2;
this->_loadLevelResult_5__3 = _loadLevelResult_5__3;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.add_levelDownloadingUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*)>(&::GlobalNamespace::BeatmapLevelsModel::add_levelDownloadingUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x234275c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "add_levelDownloadingUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.remove_levelDownloadingUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*)>(&::GlobalNamespace::BeatmapLevelsModel::remove_levelDownloadingUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x234280c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "remove_levelDownloadingUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_ostAndExtrasPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO* (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::get_ostAndExtrasPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23428bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_ostAndExtrasPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_dlcBeatmapLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPackCollection* (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::get_dlcBeatmapLevelPackCollection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23428c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_dlcBeatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_allLoadedBeatmapLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPackCollection* (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23428e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_allLoadedBeatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPackCollection* (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23428e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_customLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPackCollection* (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::get_customLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23428f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_customLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(::GlobalNamespace::__BeatmapLevelsModel__InitData*)>(&::GlobalNamespace::BeatmapLevelsModel::Init)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23428f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelsModel__InitData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2342f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::OnDestroy)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2343084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.ClearLoadedBeatmapLevelsCaches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23431f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "ClearLoadedBeatmapLevelsCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.ReloadCustomLevelPackCollectionAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelPackCollection*>* (::GlobalNamespace::BeatmapLevelsModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2343240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "ReloadCustomLevelPackCollectionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetLevelPackForLevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPack* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x2343324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetLevelPackForLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetLevelPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPack* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelsModel::GetLevelPack)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2343878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetLevelPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetLevelPreviewForLevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelsModel::GetLevelPreviewForLevelId)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2341470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetLevelPreviewForLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.IsBeatmapLevelLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelsModel::IsBeatmapLevelLoaded)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23439f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "IsBeatmapLevelLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetBeatmapLevelIfLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevel* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelIfLoaded)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2343ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetBeatmapLevelIfLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetBeatmapLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2343be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.HandleLevelDataAssetDownloadUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(::GlobalNamespace::LevelDataAssetDownloadUpdate)>(&::GlobalNamespace::BeatmapLevelsModel::HandleLevelDataAssetDownloadUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2343cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "HandleLevelDataAssetDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelDataAssetDownloadUpdate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.HandleItemWillBeRemovedFromCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(::GlobalNamespace::IBeatmapLevel*)>(&::GlobalNamespace::BeatmapLevelsModel::HandleItemWillBeRemovedFromCache)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2343d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "HandleItemWillBeRemovedFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.UpdateLoadedPreviewLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x2342a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "UpdateLoadedPreviewLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.UpdateAllLoadedBeatmapLevelPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::UpdateAllLoadedBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2343d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "UpdateAllLoadedBeatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2343ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__dlcLevelPackCollectionContainer(::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*, 0x18>(this, std::forward<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO* GlobalNamespace::BeatmapLevelsModel::__get__dlcLevelPackCollectionContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*> GlobalNamespace::BeatmapLevelsModel::__get__dlcLevelPackCollectionContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__ostAndExtrasPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x20>(this, std::forward<::GlobalNamespace::BeatmapLevelPackCollectionSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::BeatmapLevelsModel::__get__ostAndExtrasPackCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> GlobalNamespace::BeatmapLevelsModel::__get__ostAndExtrasPackCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x20>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__maxCachedBeatmapLevels(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BeatmapLevelsModel::__get__maxCachedBeatmapLevels()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelsModel::__get__maxCachedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x30>(this, std::forward<::GlobalNamespace::IAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::IAdditionalContentModel* GlobalNamespace::BeatmapLevelsModel::__get__additionalContentModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> GlobalNamespace::BeatmapLevelsModel::__get__additionalContentModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x30>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__beatmapDataAssetFileModel(::GlobalNamespace::IBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapDataAssetFileModel*, 0x38>(this, std::forward<::GlobalNamespace::IBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* GlobalNamespace::BeatmapLevelsModel::__get__beatmapDataAssetFileModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapDataAssetFileModel*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataAssetFileModel*> GlobalNamespace::BeatmapLevelsModel::__get__beatmapDataAssetFileModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapDataAssetFileModel*, 0x38>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioClipAsyncLoader*, 0x40>(this, std::forward<::GlobalNamespace::AudioClipAsyncLoader*>(value));
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* GlobalNamespace::BeatmapLevelsModel::__get__audioClipAsyncLoader()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioClipAsyncLoader*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> GlobalNamespace::BeatmapLevelsModel::__get__audioClipAsyncLoader() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioClipAsyncLoader*, 0x40>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__beatmapLevelDataLoader(::GlobalNamespace::BeatmapLevelDataLoader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelDataLoader*, 0x48>(this, std::forward<::GlobalNamespace::BeatmapLevelDataLoader*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelDataLoader* GlobalNamespace::BeatmapLevelsModel::__get__beatmapLevelDataLoader()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelDataLoader*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelDataLoader*> GlobalNamespace::BeatmapLevelsModel::__get__beatmapLevelDataLoader() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelDataLoader*, 0x48>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*, 0x50>(this, std::forward<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>* GlobalNamespace::BeatmapLevelsModel::__get_levelDownloadingUpdateEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*> GlobalNamespace::BeatmapLevelsModel::__get_levelDownloadingUpdateEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*, 0x50>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__allLoadedBeatmapLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x58>(this, std::forward<::GlobalNamespace::IBeatmapLevelPackCollection*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::__get__allLoadedBeatmapLevelPackCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> GlobalNamespace::BeatmapLevelsModel::__get__allLoadedBeatmapLevelPackCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x58>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__allLoadedBeatmapLevelWithoutCustomLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x60>(this, std::forward<::GlobalNamespace::IBeatmapLevelPackCollection*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::__get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> GlobalNamespace::BeatmapLevelsModel::__get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x60>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__customLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x68>(this, std::forward<::GlobalNamespace::IBeatmapLevelPackCollection*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::__get__customLevelPackCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> GlobalNamespace::BeatmapLevelsModel::__get__customLevelPackCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPackCollection*, 0x68>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__loadedBeatmapLevels(::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*, 0x70>(this, std::forward<::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*>(value));
}
constexpr ::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>* GlobalNamespace::BeatmapLevelsModel::__get__loadedBeatmapLevels()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*> GlobalNamespace::BeatmapLevelsModel::__get__loadedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*, 0x70>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__loadedPreviewBeatmapLevels(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x78>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::BeatmapLevelsModel::__get__loadedPreviewBeatmapLevels()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*> GlobalNamespace::BeatmapLevelsModel::__get__loadedPreviewBeatmapLevels() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x78>(this);
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__set__beatmapLevelLoader(::GlobalNamespace::BeatmapLevelLoader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelLoader*, 0x80>(this, std::forward<::GlobalNamespace::BeatmapLevelLoader*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelLoader* GlobalNamespace::BeatmapLevelsModel::__get__beatmapLevelLoader()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelLoader*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelLoader*> GlobalNamespace::BeatmapLevelsModel::__get__beatmapLevelLoader() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelLoader*, 0x80>(this);
}
inline void GlobalNamespace::BeatmapLevelsModel::add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "add_levelDownloadingUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapLevelsModel::remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "remove_levelDownloadingUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::BeatmapLevelsModel::get_ostAndExtrasPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_ostAndExtrasPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::get_dlcBeatmapLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_dlcBeatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPackCollection*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_allLoadedBeatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPackCollection*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPackCollection*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::get_customLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "get_customLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPackCollection*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel::Init(::GlobalNamespace::__BeatmapLevelsModel__InitData*  initData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelsModel__InitData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData);
}
inline void GlobalNamespace::BeatmapLevelsModel::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "ClearLoadedBeatmapLevelsCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelPackCollection*>* GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "ReloadCustomLevelPackCollectionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelPackCollection*>*, false>(*this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetLevelPackForLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPack*, false>(*this, ___internal_method, levelId);
}
inline ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::GetLevelPack(::StringW  levePacklId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetLevelPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPack*, false>(*this, ___internal_method, levePacklId);
}
inline ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::BeatmapLevelsModel::GetLevelPreviewForLevelId(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetLevelPreviewForLevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPreviewBeatmapLevel*, false>(*this, ___internal_method, levelId);
}
inline bool GlobalNamespace::BeatmapLevelsModel::IsBeatmapLevelLoaded(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "IsBeatmapLevelLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, levelId);
}
inline ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelIfLoaded(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetBeatmapLevelIfLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevel*, false>(*this, ___internal_method, levelId);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelAsync(::StringW  levelID, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "GetBeatmapLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*, false>(*this, ___internal_method, levelID, cancellationToken);
}
inline void GlobalNamespace::BeatmapLevelsModel::HandleLevelDataAssetDownloadUpdate(::GlobalNamespace::LevelDataAssetDownloadUpdate  update)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "HandleLevelDataAssetDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelDataAssetDownloadUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, update);
}
inline void GlobalNamespace::BeatmapLevelsModel::HandleItemWillBeRemovedFromCache(::GlobalNamespace::IBeatmapLevel*  beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "HandleItemWillBeRemovedFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "UpdateLoadedPreviewLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel::UpdateAllLoadedBeatmapLevelPacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            "UpdateAllLoadedBeatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::BeatmapLevelsModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelsModel*>());
}
inline void GlobalNamespace::BeatmapLevelsModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
