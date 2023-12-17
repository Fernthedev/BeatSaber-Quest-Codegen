#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettings_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigurationProcessor_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
constexpr void GlobalNamespace::__RecordingToolManager__SetupData::__set_profileSong(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__RecordingToolManager__SetupData::__get_profileSong()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__RecordingToolManager__SetupData::__get_profileSong() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__RecordingToolManager__SetupData::__set_runAutopilot(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__RecordingToolManager__SetupData::__get_runAutopilot()  {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__RecordingToolManager__SetupData::__get_runAutopilot() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "profileSong", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "runAutopilot", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RecordingToolManager__SetupData::__RecordingToolManager__SetupData(bool  profileSong, bool  runAutopilot) noexcept : ::bs_hook::ValueTypeWrapper<0x2>() {this->profileSong = profileSong;
this->runAutopilot = runAutopilot;
}
//  Writing Method size for method: ::GlobalNamespace::__RecordingToolManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RecordingToolManager____c::*)()>(&::GlobalNamespace::__RecordingToolManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2308a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RecordingToolManager____c.__ctor_b__25_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RecordingToolManager____c::*)(::GlobalNamespace::RecordingSettings*)>(&::GlobalNamespace::__RecordingToolManager____c::__ctor_b__25_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2308a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get(),
                            "<.ctor>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__RecordingToolManager____c::setStaticF___9(::GlobalNamespace::__RecordingToolManager____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__RecordingToolManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get>(std::forward<::GlobalNamespace::__RecordingToolManager____c*>(value));
}
inline ::GlobalNamespace::__RecordingToolManager____c* GlobalNamespace::__RecordingToolManager____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__RecordingToolManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get>();
}
inline void GlobalNamespace::__RecordingToolManager____c::setStaticF___9__25_0(::System::Func_2<::GlobalNamespace::RecordingSettings*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::RecordingSettings*,bool>*, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::RecordingSettings*,bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::RecordingSettings*,bool>* GlobalNamespace::__RecordingToolManager____c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::RecordingSettings*,bool>*, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get>();
}
inline ::GlobalNamespace::__RecordingToolManager____c* GlobalNamespace::__RecordingToolManager____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RecordingToolManager____c*>());
}
inline void GlobalNamespace::__RecordingToolManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__RecordingToolManager____c::__ctor_b__25_0(::GlobalNamespace::RecordingSettings*  recordingSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get(),
                            "<.ctor>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, recordingSettings);
}
//  Writing Method size for method: ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::*)()>(&::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2308a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2308ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__set___4__this(::GlobalNamespace::RecordingToolManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolManager*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::RecordingToolManager*>(value));
}
constexpr ::GlobalNamespace::RecordingToolManager* GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolManager*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolManager*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RecordingToolManager*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::RecordingToolManager*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_recordingToolEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::get_recordingToolEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230811c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_recordingToolEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_showRecordingToolScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::get_showRecordingToolScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2308124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_showRecordingToolScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_performanceRecordingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::get_performanceRecordingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230812c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_performanceRecordingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_configJsonData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::get_configJsonData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2308134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_configJsonData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_recordingToolSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RecordingToolSettings* (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::get_recordingToolSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230813c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_recordingToolSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_posesSerializer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPosesSerializer* (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::get_posesSerializer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2308144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_posesSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)(::GlobalNamespace::RecordingToolConfigurationProcessor*, ::GlobalNamespace::BeatmapCharacteristicCollection*, ::Zenject::DiContainer*)>(&::GlobalNamespace::RecordingToolManager::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x230814c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingToolConfigurationProcessor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::Initialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23082e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2308530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23085c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.StartNextRecording
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::StartNextRecording)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x230838c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "StartNextRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.BindNextRecording
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuDestination* (::GlobalNamespace::RecordingToolManager::*)(::Zenject::DiContainer*, ::GlobalNamespace::RecordingSettings*, bool)>(&::GlobalNamespace::RecordingToolManager::BindNextRecording)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x230865c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "BindNextRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  GlobalNamespace::RecordingToolManager::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::RecordingToolManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::RecordingToolManager::__set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayLevelSceneTransitionEvents*, 0x10>(this, std::forward<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(value));
}
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents* GlobalNamespace::RecordingToolManager::__get__gameplayLevelSceneTransitionEvents()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayLevelSceneTransitionEvents*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> GlobalNamespace::RecordingToolManager::__get__gameplayLevelSceneTransitionEvents() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayLevelSceneTransitionEvents*, 0x10>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x18>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::RecordingToolManager::__get__gameScenesManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::RecordingToolManager::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x18>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__recordingToolEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingToolManager::__get__recordingToolEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::RecordingToolManager::__get__recordingToolEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__performanceRecordingEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingToolManager::__get__performanceRecordingEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& GlobalNamespace::RecordingToolManager::__get__performanceRecordingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__configJsonData(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::RecordingToolManager::__get__configJsonData()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::RecordingToolManager::__get__configJsonData() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__recordingToolSettings(::GlobalNamespace::RecordingToolSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolSettings*, 0x30>(this, std::forward<::GlobalNamespace::RecordingToolSettings*>(value));
}
constexpr ::GlobalNamespace::RecordingToolSettings* GlobalNamespace::RecordingToolManager::__get__recordingToolSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolSettings*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSettings*> GlobalNamespace::RecordingToolManager::__get__recordingToolSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolSettings*, 0x30>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__configurationProcessor(::GlobalNamespace::RecordingToolConfigurationProcessor*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolConfigurationProcessor*, 0x38>(this, std::forward<::GlobalNamespace::RecordingToolConfigurationProcessor*>(value));
}
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor* GlobalNamespace::RecordingToolManager::__get__configurationProcessor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolConfigurationProcessor*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolConfigurationProcessor*> GlobalNamespace::RecordingToolManager::__get__configurationProcessor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolConfigurationProcessor*, 0x38>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x40>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::RecordingToolManager::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::RecordingToolManager::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x40>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__logger(::GlobalNamespace::IBeatSaberLogger*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x48>(this, std::forward<::GlobalNamespace::IBeatSaberLogger*>(value));
}
constexpr ::GlobalNamespace::IBeatSaberLogger* GlobalNamespace::RecordingToolManager::__get__logger()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> GlobalNamespace::RecordingToolManager::__get__logger() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x48>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__posesSerializer(::GlobalNamespace::IPosesSerializer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPosesSerializer*, 0x50>(this, std::forward<::GlobalNamespace::IPosesSerializer*>(value));
}
constexpr ::GlobalNamespace::IPosesSerializer* GlobalNamespace::RecordingToolManager::__get__posesSerializer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPosesSerializer*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> GlobalNamespace::RecordingToolManager::__get__posesSerializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPosesSerializer*, 0x50>(this);
}
constexpr void GlobalNamespace::RecordingToolManager::__set__currentRecordingIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::RecordingToolManager::__get__currentRecordingIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& GlobalNamespace::RecordingToolManager::__get__currentRecordingIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
inline bool GlobalNamespace::RecordingToolManager::get_recordingToolEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_recordingToolEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::RecordingToolManager::get_showRecordingToolScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_showRecordingToolScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::RecordingToolManager::get_performanceRecordingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_performanceRecordingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::RecordingToolManager::get_configJsonData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_configJsonData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolSettings* GlobalNamespace::RecordingToolManager::get_recordingToolSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_recordingToolSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RecordingToolSettings*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IPosesSerializer* GlobalNamespace::RecordingToolManager::get_posesSerializer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "get_posesSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPosesSerializer*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolManager* GlobalNamespace::RecordingToolManager::New_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor*  processor, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection, ::Zenject::DiContainer*  diContainer)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingToolManager*>(processor, beatmapCharacteristicCollection, diContainer));
}
inline void GlobalNamespace::RecordingToolManager::_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor*  processor, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection, ::Zenject::DiContainer*  diContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingToolConfigurationProcessor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, processor, beatmapCharacteristicCollection, diContainer);
}
inline void GlobalNamespace::RecordingToolManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::StartNextRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "StartNextRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MenuDestination* GlobalNamespace::RecordingToolManager::BindNextRecording(::Zenject::DiContainer*  container, ::GlobalNamespace::RecordingSettings*  recordingSettings, bool  quitAppAfterRun)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                            "BindNextRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuDestination*, false>(*this, ___internal_method, container, recordingSettings, quitAppAfterRun);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
