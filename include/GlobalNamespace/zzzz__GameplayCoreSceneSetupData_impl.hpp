#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::*)()>(&::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x231c674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x231c83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__set___4__this(::GlobalNamespace::GameplayCoreSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>& GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::GameplayCoreSceneSetupData*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::*)()>(&::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x231c848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x231cc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>& GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__set___4__this(::GlobalNamespace::GameplayCoreSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>& GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  __t__builder, ::GlobalNamespace::GameplayCoreSceneSetupData*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.get_transformedBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (::GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&::GlobalNamespace::GameplayCoreSceneSetupData::get_transformedBeatmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231c414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                            "get_transformedBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayCoreSceneSetupData::*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, bool, ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::MainSettingsModelSO*, ::GlobalNamespace::BeatmapDataCache*, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>)>(&::GlobalNamespace::GameplayCoreSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x231c41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.LoadTransformedBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&::GlobalNamespace::GameplayCoreSceneSetupData::LoadTransformedBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x231c4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                            "LoadTransformedBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.GetTransformedBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (::GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&::GlobalNamespace::GameplayCoreSceneSetupData::GetTransformedBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x231c584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                            "GetTransformedBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x10>(this, std::forward<::GlobalNamespace::IDifficultyBeatmap*>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::GameplayCoreSceneSetupData::__get_difficultyBeatmap()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> GlobalNamespace::GameplayCoreSceneSetupData::__get_difficultyBeatmap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x10>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::GameplayCoreSceneSetupData::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::GameplayCoreSceneSetupData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers*, 0x20>(this, std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayCoreSceneSetupData::__get_gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> GlobalNamespace::GameplayCoreSceneSetupData::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x20>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x28>(this, std::forward<::GlobalNamespace::PlayerSpecificSettings*>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::GameplayCoreSceneSetupData::__get_playerSpecificSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> GlobalNamespace::GameplayCoreSceneSetupData::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x28>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_practiceSettings(::GlobalNamespace::PracticeSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PracticeSettings*, 0x30>(this, std::forward<::GlobalNamespace::PracticeSettings*>(value));
}
constexpr ::GlobalNamespace::PracticeSettings* GlobalNamespace::GameplayCoreSceneSetupData::__get_practiceSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PracticeSettings*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeSettings*> GlobalNamespace::GameplayCoreSceneSetupData::__get_practiceSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PracticeSettings*, 0x30>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_useTestNoteCutSoundEffects(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameplayCoreSceneSetupData::__get_useTestNoteCutSoundEffects()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::GameplayCoreSceneSetupData::__get_useTestNoteCutSoundEffects() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x40>(this, std::forward<::GlobalNamespace::EnvironmentInfoSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::GameplayCoreSceneSetupData::__get_environmentInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> GlobalNamespace::GameplayCoreSceneSetupData::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x40>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_colorScheme(::GlobalNamespace::ColorScheme*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorScheme*, 0x48>(this, std::forward<::GlobalNamespace::ColorScheme*>(value));
}
constexpr ::GlobalNamespace::ColorScheme* GlobalNamespace::GameplayCoreSceneSetupData::__get_colorScheme()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorScheme*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> GlobalNamespace::GameplayCoreSceneSetupData::__get_colorScheme() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorScheme*, 0x48>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x50>(this, std::forward<::GlobalNamespace::MainSettingsModelSO*>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::GameplayCoreSceneSetupData::__get_mainSettingsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> GlobalNamespace::GameplayCoreSceneSetupData::__get_mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x50>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_beatmapDataCache(::GlobalNamespace::BeatmapDataCache*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCache*, 0x58>(this, std::forward<::GlobalNamespace::BeatmapDataCache*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCache* GlobalNamespace::GameplayCoreSceneSetupData::__get_beatmapDataCache()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCache*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCache*> GlobalNamespace::GameplayCoreSceneSetupData::__get_beatmapDataCache() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCache*, 0x58>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_recordingToolData(::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>, 0x60>(this, std::forward<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>>(value));
}
constexpr ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>& GlobalNamespace::GameplayCoreSceneSetupData::__get_recordingToolData()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>, 0x60>(this);
}
constexpr ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> const& GlobalNamespace::GameplayCoreSceneSetupData::__get_recordingToolData() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>, 0x60>(this);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set__transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x68>(this, std::forward<::GlobalNamespace::IReadonlyBeatmapData*>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::GameplayCoreSceneSetupData::__get__transformedBeatmapData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> GlobalNamespace::GameplayCoreSceneSetupData::__get__transformedBeatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x68>(this);
}
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::GameplayCoreSceneSetupData::get_transformedBeatmapData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                            "get_transformedBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(*this, ___internal_method);
}
/// @param beatmapDataCache: ::GlobalNamespace::BeatmapDataCache* (default: csnull)
/// @param recordingToolData: ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> (default: {})
inline ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::GameplayCoreSceneSetupData::New_ctor(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::PracticeSettings*  practiceSettings, bool  useTestNoteCutSoundEffects, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::ColorScheme*  colorScheme, ::GlobalNamespace::MainSettingsModelSO*  mainSettingsModel, ::GlobalNamespace::BeatmapDataCache*  beatmapDataCache, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>  recordingToolData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameplayCoreSceneSetupData*>(difficultyBeatmap, previewBeatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects, environmentInfo, colorScheme, mainSettingsModel, beatmapDataCache, recordingToolData));
}
/// @param beatmapDataCache: ::GlobalNamespace::BeatmapDataCache* (default: csnull)
/// @param recordingToolData: ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> (default: {})
inline void GlobalNamespace::GameplayCoreSceneSetupData::_ctor(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::PracticeSettings*  practiceSettings, bool  useTestNoteCutSoundEffects, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::ColorScheme*  colorScheme, ::GlobalNamespace::MainSettingsModelSO*  mainSettingsModel, ::GlobalNamespace::BeatmapDataCache*  beatmapDataCache, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>  recordingToolData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, difficultyBeatmap, previewBeatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects, environmentInfo, colorScheme, mainSettingsModel, beatmapDataCache, recordingToolData);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::GameplayCoreSceneSetupData::LoadTransformedBeatmapDataAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                            "LoadTransformedBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GlobalNamespace::GameplayCoreSceneSetupData::GetTransformedBeatmapDataAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                            "GetTransformedBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
