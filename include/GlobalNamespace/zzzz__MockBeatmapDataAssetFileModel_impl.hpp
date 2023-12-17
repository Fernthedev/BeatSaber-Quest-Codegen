#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapDataAssetFileModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::*)()>(&::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x234d0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x234d60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> const& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___4__this(::GlobalNamespace::MockBeatmapDataAssetFileModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MockBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MockBeatmapDataAssetFileModel*>(value));
}
constexpr ::GlobalNamespace::MockBeatmapDataAssetFileModel* GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MockBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockBeatmapDataAssetFileModel*> GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MockBeatmapDataAssetFileModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set__path_5__2(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get__path_5__2()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get__path_5__2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__set__i_5__3(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get__i_5__3()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockBeatmapDataAssetFileModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::MockBeatmapDataAssetFileModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  _path_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, uint32_t  _i_5__3) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->previewBeatmapLevel = previewBeatmapLevel;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_path_5__2 = _path_5__2;
this->__u__1 = __u__1;
this->_i_5__3 = _i_5__3;
}
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::MockBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x234cde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::MockBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x234ce98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel.GetAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x234cf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForPreviewLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x234d058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)()>(&::GlobalNamespace::MockBeatmapDataAssetFileModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234d0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr  GlobalNamespace::MockBeatmapDataAssetFileModel::operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept {
return static_cast<::GlobalNamespace::IBeatmapDataAssetFileModel*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MockBeatmapDataAssetFileModel::__set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*, 0x10>(this, std::forward<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* GlobalNamespace::MockBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> GlobalNamespace::MockBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*, 0x10>(this);
}
inline void GlobalNamespace::MockBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            "add_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MockBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            "remove_levelDataAssetDownloadUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::MockBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            "GetAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(*this, ___internal_method, previewBeatmapLevel, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::MockBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            "TryDeleteAssetBundleFileForPreviewLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, previewBeatmapLevel, cancellationToken);
}
inline ::GlobalNamespace::MockBeatmapDataAssetFileModel* GlobalNamespace::MockBeatmapDataAssetFileModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockBeatmapDataAssetFileModel*>());
}
inline void GlobalNamespace::MockBeatmapDataAssetFileModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
