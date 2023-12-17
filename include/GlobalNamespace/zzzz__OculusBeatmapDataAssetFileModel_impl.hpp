#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusBeatmapDataAssetFileModel_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__OculusBeatmapDataAssetFileModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAdditionalContentModel_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::*)(::StringW, ::StringW)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2365104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__set_assetBundlePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_assetBundlePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__set_downloadAssetBundleFileTCS(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x20>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_downloadAssetBundleFileTCS()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::__get_downloadAssetBundleFileTCS() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x20>(this);
}
inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData* GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::New_ctor(::StringW  levelId, ::StringW  assetBundlePath)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>(levelId, assetBundlePath));
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData::_ctor(::StringW  levelId, ::StringW  assetBundlePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelId, assetBundlePath);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::*)()>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23655fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0._TryDeleteAssetBundleFileForPreviewLevelAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_TryDeleteAssetBundleFileForPreviewLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2365604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>::get(),
                            "<TryDeleteAssetBundleFileForPreviewLevelAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x10>(this, std::forward<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x10>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x28>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_taskSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::__get_taskSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x28>(this);
}
inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>());
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0::_TryDeleteAssetBundleFileForPreviewLevelAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>::get(),
                            "<TryDeleteAssetBundleFileForPreviewLevelAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::*)()>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x2365760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2365ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___8__1(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*>(value));
}
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___8__1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*> GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___8__1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set__deleted_5__2(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get__deleted_5__2()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get__deleted_5__2() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_deleted_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*  __8__1, bool  _deleted_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->previewBeatmapLevel = previewBeatmapLevel;
this->__8__1 = __8__1;
this->_deleted_5__2 = _deleted_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::*)()>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x2365d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2366758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set__levelId_5__2(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get__levelId_5__2()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get__levelId_5__2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set__assetFile_5__3(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get__assetFile_5__3()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get__assetFile_5__3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__3()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__get___u__3() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  _levelId_5__2, ::StringW  _assetFile_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__3) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->previewBeatmapLevel = previewBeatmapLevel;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_levelId_5__2 = _levelId_5__2;
this->_assetFile_5__3 = _assetFile_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::*)()>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23667b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0._ReloadAssetDetailsForAllLevelsAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ReloadAssetDetailsForAllLevelsAsync_b__0)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x23667b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>::get(),
                            "<ReloadAssetDetailsForAllLevelsAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x10>(this, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x10>(this);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x10>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x18>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get_taskSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get_taskSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x18>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this, std::forward<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this);
}
inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>());
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0::_ReloadAssetDetailsForAllLevelsAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*  getListMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*>::get(),
                            "<ReloadAssetDetailsForAllLevelsAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getListMsg);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::*)()>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2366bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2366ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::*)()>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2366f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0._GetDownloadAssetBundleFileAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_GetDownloadAssetBundleFileAsync_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2366f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>::get(),
                            "<GetDownloadAssetBundleFileAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get_taskSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get_taskSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x10>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x18>(this, std::forward<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x18>(this);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__set_assetDetails(::Oculus::Platform::Models::AssetDetails*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::AssetDetails*, 0x20>(this, std::forward<::Oculus::Platform::Models::AssetDetails*>(value));
}
constexpr ::Oculus::Platform::Models::AssetDetails* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get_assetDetails()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::AssetDetails*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AssetDetails*> GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::__get_assetDetails() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::AssetDetails*, 0x20>(this);
}
inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0* GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0::_GetDownloadAssetBundleFileAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*>::get(),
                            "<GetDownloadAssetBundleFileAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::*)()>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x2366ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2367758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusBeatmapDataAssetFileModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set_assetDetails(::Oculus::Platform::Models::AssetDetails*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::AssetDetails*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Oculus::Platform::Models::AssetDetails*>(value));
}
constexpr ::Oculus::Platform::Models::AssetDetails* GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get_assetDetails()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::AssetDetails*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AssetDetails*> GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get_assetDetails() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::AssetDetails*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> const& GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assetDetails", ty: "::Oculus::Platform::Models::AssetDetails*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder, ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this, ::Oculus::Platform::Models::AssetDetails*  assetDetails, ::StringW  levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->assetDetails = assetDetails;
this->levelId = levelId;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2364880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2364930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::GlobalNamespace::OculusPlatformAdditionalContentModel*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23649e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2364bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.GetAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2364cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.ReloadAssetDetailsForAllLevelsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::ReloadAssetDetailsForAllLevelsAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2364de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "ReloadAssetDetailsForAllLevelsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.GetDownloadAssetBundleFileAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::StringW, ::Oculus::Platform::Models::AssetDetails*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::GetDownloadAssetBundleFileAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2364ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "GetDownloadAssetBundleFileAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.GetTaskCompletionSourceForDownload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::StringW, ::Oculus::Platform::Models::AssetDetails*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::GetTaskCompletionSourceForDownload)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2364ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "GetTaskCompletionSourceForDownload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.HandleAssetFileDownloadUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2365198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "HandleAssetFileDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusBeatmapDataAssetFileModel.__ctor_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusBeatmapDataAssetFileModel::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*)>(&::GlobalNamespace::OculusBeatmapDataAssetFileModel::__ctor_b__12_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23655f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "<.ctor>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr  GlobalNamespace::OculusBeatmapDataAssetFileModel::operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept {
return static_cast<::GlobalNamespace::IBeatmapDataAssetFileModel*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*, 0x10>(this, std::forward<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* GlobalNamespace::OculusBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*, 0x10>(this);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__assetIdToDownloadinData(::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__assetIdToDownloadinData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__assetIdToDownloadinData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*, 0x18>(this);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__downloadedAssetBundleFiles(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__downloadedAssetBundleFiles()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__downloadedAssetBundleFiles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, 0x20>(this);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__lastAssetFileDownloadUpdateForAssetIds(::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*, 0x28>(this, std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>* GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__lastAssetFileDownloadUpdateForAssetIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__lastAssetFileDownloadUpdateForAssetIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*, 0x28>(this);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__lastAssetFileDownloadUpdateTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__lastAssetFileDownloadUpdateTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__lastAssetFileDownloadUpdateTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__semaphoreSlim(::System::Threading::SemaphoreSlim*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SemaphoreSlim*, 0x38>(this, std::forward<::System::Threading::SemaphoreSlim*>(value));
}
constexpr ::System::Threading::SemaphoreSlim* GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__semaphoreSlim()  {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__semaphoreSlim() const {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x38>(this);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__assetFileToAssetDetails(::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*, 0x40>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>* GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__assetFileToAssetDetails()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__assetFileToAssetDetails() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*, 0x40>(this);
}
constexpr void GlobalNamespace::OculusBeatmapDataAssetFileModel::__set__oculusPlatformAdditionalContentModel(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusPlatformAdditionalContentModel*, 0x48>(this, std::forward<::GlobalNamespace::OculusPlatformAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__oculusPlatformAdditionalContentModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformAdditionalContentModel*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> GlobalNamespace::OculusBeatmapDataAssetFileModel::__get__oculusPlatformAdditionalContentModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformAdditionalContentModel*, 0x48>(this);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::OculusBeatmapDataAssetFileModel::New_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel*  oculusPlatformAdditionalContentModel)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>(oculusPlatformAdditionalContentModel));
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel*  oculusPlatformAdditionalContentModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusPlatformAdditionalContentModel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oculusPlatformAdditionalContentModel);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, previewBeatmapLevel, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(*this, ___internal_method, previewBeatmapLevel, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusBeatmapDataAssetFileModel::ReloadAssetDetailsForAllLevelsAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "ReloadAssetDetailsForAllLevelsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::OculusBeatmapDataAssetFileModel::GetDownloadAssetBundleFileAsync(::StringW  levelId, ::Oculus::Platform::Models::AssetDetails*  assetDetails, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "GetDownloadAssetBundleFileAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(*this, ___internal_method, levelId, assetDetails, cancellationToken);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::OculusBeatmapDataAssetFileModel::GetTaskCompletionSourceForDownload(::StringW  levelId, ::Oculus::Platform::Models::AssetDetails*  assetDetail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "GetTaskCompletionSourceForDownload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AssetDetails*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(*this, ___internal_method, levelId, assetDetail);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "HandleAssetFileDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg);
}
inline void GlobalNamespace::OculusBeatmapDataAssetFileModel::__ctor_b__12_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusBeatmapDataAssetFileModel*>::get(),
                            "<.ctor>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
