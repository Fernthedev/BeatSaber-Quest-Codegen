#pragma once
#include "GlobalNamespace/zzzz__VideoProjectionEffect_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionEffect_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionEffect_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__SongTimeSyncedVideoPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__InitData::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__VideoProjectionEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23b32f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__VideoProjectionEffect__InitData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x10>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__VideoProjectionEffect__InitData::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::__VideoProjectionEffect__InitData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x10>(this);
}
inline ::GlobalNamespace::__VideoProjectionEffect__InitData* GlobalNamespace::__VideoProjectionEffect__InitData::New_ctor(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VideoProjectionEffect__InitData*>(previewBeatmapLevel));
}
inline void GlobalNamespace::__VideoProjectionEffect__InitData::_ctor(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, previewBeatmapLevel);
}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::*)()>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b3684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0._LoadVideoFromModel_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::*)(::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*)>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_LoadVideoFromModel_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23b3720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>::get(),
                            "<LoadVideoFromModel>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__set_eventValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__get_eventValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::__get_eventValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
inline ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0* GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0::_LoadVideoFromModel_b__0(::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*  clipWithId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*>::get(),
                            "<LoadVideoFromModel>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, clipWithId);
}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::*)()>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x23b3744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23b3a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__set___4__this(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>(value));
}
constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*> GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::*)(::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23b331c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::*)()>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23b3358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior.LoadVideoFromModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::*)(int32_t)>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::LoadVideoFromModel)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x23b3408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                            "LoadVideoFromModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior.LoadPreviewCoverAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::*)()>(&::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::LoadPreviewCoverAsset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23b368c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                            "LoadPreviewCoverAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__set__eventValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__eventValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__eventValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__set__videoClipHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>, 0x18>(this, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>>(value));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__videoClipHandle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>, 0x18>(this);
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*> const& GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__videoClipHandle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>, 0x18>(this);
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__set__model(::GlobalNamespace::VideoProjectionDataModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::VideoProjectionDataModelSO*, 0x38>(this, std::forward<::GlobalNamespace::VideoProjectionDataModelSO*>(value));
}
constexpr ::GlobalNamespace::VideoProjectionDataModelSO* GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__model()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VideoProjectionDataModelSO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VideoProjectionDataModelSO*> GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__model() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VideoProjectionDataModelSO*, 0x38>(this);
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__set__videoPlayer(::GlobalNamespace::SongTimeSyncedVideoPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer*, 0x40>(this, std::forward<::GlobalNamespace::SongTimeSyncedVideoPlayer*>(value));
}
constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer* GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__videoPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongTimeSyncedVideoPlayer*> GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__videoPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer*, 0x40>(this);
}
constexpr void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__set__previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x48>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::__get__previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x48>(this);
}
inline ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::New_ctor(::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>(dataModel, videoPlayer, previewBeatmapLevel));
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::_ctor(::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataModel, videoPlayer, previewBeatmapLevel);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::LoadVideoFromModel(int32_t  eventValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                            "LoadVideoFromModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventValue);
}
inline void GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior::LoadPreviewCoverAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>::get(),
                            "LoadPreviewCoverAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x23b30a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)()>(&::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23b3a2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23b3a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this);
}
constexpr void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__set__callbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x58>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__get__callbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::__get__callbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x58>(this);
}
inline ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior* GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::New_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::BasicBeatmapEventType  videoEventType, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>(beatmapData, dataModel, videoPlayer, videoEventType, beatmapCallbacksController, previewBeatmapLevel));
}
inline void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::BasicBeatmapEventType  videoEventType, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapData, dataModel, videoPlayer, videoEventType, beatmapCallbacksController, previewBeatmapLevel);
}
inline void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::VideoProjectionDataModelSO*, ::GlobalNamespace::SongTimeSyncedVideoPlayer*, ::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x23b2f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior* GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::New_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::BasicBeatmapEventType  videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*>(beatmapData, dataModel, videoPlayer, videoEventType, previewBeatmapLevel));
}
inline void GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior::_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::BasicBeatmapEventType  videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongTimeSyncedVideoPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapData, dataModel, videoPlayer, videoEventType, previewBeatmapLevel);
}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::Start)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23b2e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23b32d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionEffect::*)()>(&::GlobalNamespace::VideoProjectionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b32ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::VideoProjectionEffect::__set__videoProjectionDataModel(::GlobalNamespace::VideoProjectionDataModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::VideoProjectionDataModelSO*, 0x18>(this, std::forward<::GlobalNamespace::VideoProjectionDataModelSO*>(value));
}
constexpr ::GlobalNamespace::VideoProjectionDataModelSO* GlobalNamespace::VideoProjectionEffect::__get__videoProjectionDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VideoProjectionDataModelSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VideoProjectionDataModelSO*> GlobalNamespace::VideoProjectionEffect::__get__videoProjectionDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::VideoProjectionDataModelSO*, 0x18>(this);
}
constexpr void GlobalNamespace::VideoProjectionEffect::__set__videoPlayer(::GlobalNamespace::SongTimeSyncedVideoPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer*, 0x20>(this, std::forward<::GlobalNamespace::SongTimeSyncedVideoPlayer*>(value));
}
constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer* GlobalNamespace::VideoProjectionEffect::__get__videoPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongTimeSyncedVideoPlayer*> GlobalNamespace::VideoProjectionEffect::__get__videoPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongTimeSyncedVideoPlayer*, 0x20>(this);
}
constexpr void GlobalNamespace::VideoProjectionEffect::__set__videoEventType(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x28>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::VideoProjectionEffect::__get__videoEventType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x28>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::VideoProjectionEffect::__get__videoEventType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x28>(this);
}
constexpr void GlobalNamespace::VideoProjectionEffect::__set__initData(::GlobalNamespace::__VideoProjectionEffect__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VideoProjectionEffect__InitData*, 0x30>(this, std::forward<::GlobalNamespace::__VideoProjectionEffect__InitData*>(value));
}
constexpr ::GlobalNamespace::__VideoProjectionEffect__InitData* GlobalNamespace::VideoProjectionEffect::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VideoProjectionEffect__InitData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__InitData*> GlobalNamespace::VideoProjectionEffect::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VideoProjectionEffect__InitData*, 0x30>(this);
}
constexpr void GlobalNamespace::VideoProjectionEffect::__set__environmentContext(::GlobalNamespace::EnvironmentContext  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentContext, 0x38>(this, std::forward<::GlobalNamespace::EnvironmentContext>(value));
}
constexpr ::GlobalNamespace::EnvironmentContext& GlobalNamespace::VideoProjectionEffect::__get__environmentContext()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentContext, 0x38>(this);
}
constexpr ::GlobalNamespace::EnvironmentContext const& GlobalNamespace::VideoProjectionEffect::__get__environmentContext() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentContext, 0x38>(this);
}
constexpr void GlobalNamespace::VideoProjectionEffect::__set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x40>(this, std::forward<::GlobalNamespace::IReadonlyBeatmapData*>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::VideoProjectionEffect::__get__beatmapData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> GlobalNamespace::VideoProjectionEffect::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x40>(this);
}
constexpr void GlobalNamespace::VideoProjectionEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x48>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::VideoProjectionEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::VideoProjectionEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x48>(this);
}
constexpr void GlobalNamespace::VideoProjectionEffect::__set__behavior(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*, 0x50>(this, std::forward<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*>(value));
}
constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* GlobalNamespace::VideoProjectionEffect::__get__behavior()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*> GlobalNamespace::VideoProjectionEffect::__get__behavior() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*, 0x50>(this);
}
inline void GlobalNamespace::VideoProjectionEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionEffect* GlobalNamespace::VideoProjectionEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VideoProjectionEffect*>());
}
inline void GlobalNamespace::VideoProjectionEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
