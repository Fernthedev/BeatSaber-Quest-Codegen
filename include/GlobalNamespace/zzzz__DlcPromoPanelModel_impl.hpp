#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformInit_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::*)()>(&::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x223f2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x223f8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__set___4__this(::GlobalNamespace::DlcPromoPanelModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::DlcPromoPanelModel*>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel* GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10::__DlcPromoPanelModel___Initialize_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::*)()>(&::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223e7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0._GetPackDataForMainMenuPromoBanner_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::*)(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*)>(&::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::_GetPackDataForMainMenuPromoBanner_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x223f8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0*>::get(),
                            "<GetPackDataForMainMenuPromoBanner>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0._GetPackDataForMainMenuPromoBanner_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::*)(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*)>(&::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::_GetPackDataForMainMenuPromoBanner_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x223f914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0*>::get(),
                            "<GetPackDataForMainMenuPromoBanner>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::__set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x10>(this, std::forward<::GlobalNamespace::PlayerSensitivityFlag>(value));
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::__get_sensitivityFlag()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x10>(this);
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::__get_sensitivityFlag() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x10>(this);
}
inline ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0* GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0*>());
}
inline void GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::_GetPackDataForMainMenuPromoBanner_b__0(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0*>::get(),
                            "<GetPackDataForMainMenuPromoBanner>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
inline bool GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0::_GetPackDataForMainMenuPromoBanner_b__1(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0*>::get(),
                            "<GetPackDataForMainMenuPromoBanner>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::*)()>(&::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x223f938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x223ff1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set___4__this(::GlobalNamespace::DlcPromoPanelModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::DlcPromoPanelModel*>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel* GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set__newNotOwnedMusicPackPromoInfos_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>* GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get__newNotOwnedMusicPackPromoInfos_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get__newNotOwnedMusicPackPromoInfos_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set__newOwnedMusicPackPromoInfos_5__3(::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>* GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get__newOwnedMusicPackPromoInfos_5__3()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get__newOwnedMusicPackPromoInfos_5__3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set___7__wrap3(::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___7__wrap3()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> const& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set___7__wrap4(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___7__wrap4()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___7__wrap4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set__packData_5__6(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>(value));
}
constexpr ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get__packData_5__6()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*> GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get__packData_5__6() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_newOwnedMusicPackPromoInfos_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap3", ty: "::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_packData_5__6", ty: "::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19::__DlcPromoPanelModel___UpdatePacksAsync_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*  _newNotOwnedMusicPackPromoInfos_5__2, ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*  _newOwnedMusicPackPromoInfos_5__3, ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>  __7__wrap3, int32_t  __7__wrap4, ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*  _packData_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x58>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_newNotOwnedMusicPackPromoInfos_5__2 = _newNotOwnedMusicPackPromoInfos_5__2;
this->_newOwnedMusicPackPromoInfos_5__3 = _newOwnedMusicPackPromoInfos_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->_packData_5__6 = _packData_5__6;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::*)()>(&::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x223ff28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2240150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__set___4__this(::GlobalNamespace::DlcPromoPanelModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::DlcPromoPanelModel*>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel* GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x223e3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetPackDataForMainMenuPromoBanner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* (::GlobalNamespace::DlcPromoPanelModel::*)(ByRef<bool>)>(&::GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x223e430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "GetPackDataForMainMenuPromoBanner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack*, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x223e7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "MainMenuDlcPromoBannerWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack*, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x223ea88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "MainMenuDlcPromoBannerWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x223ebf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "BuyLevelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x223ed50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "BuyLevelButtonWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack*, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x223eeac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "BuyPackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack*, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x223f008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "BuyPackButtonWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetExperimentEventData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::GlobalNamespace::DlcPromoPanelModel::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x223e968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "GetExperimentEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdatePacksAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::UpdatePacksAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x223f164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "UpdatePacksAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleAdditionalContentModelDidInvalidateData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x223f234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "HandleAdditionalContentModelDidInvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223f2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  GlobalNamespace::DlcPromoPanelModel::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x10>(this, std::forward<::GlobalNamespace::IAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::IAdditionalContentModel* GlobalNamespace::DlcPromoPanelModel::__get__additionalContentModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> GlobalNamespace::DlcPromoPanelModel::__get__additionalContentModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x10>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x18>(this, std::forward<::GlobalNamespace::IAnalyticsModel*>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel* GlobalNamespace::DlcPromoPanelModel::__get__analyticsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> GlobalNamespace::DlcPromoPanelModel::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x18>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__dlcPromoPanelData(::GlobalNamespace::DlcPromoPanelDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelDataSO*, 0x20>(this, std::forward<::GlobalNamespace::DlcPromoPanelDataSO*>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelDataSO* GlobalNamespace::DlcPromoPanelModel::__get__dlcPromoPanelData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelDataSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelDataSO*> GlobalNamespace::DlcPromoPanelModel::__get__dlcPromoPanelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelDataSO*, 0x20>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x28>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::DlcPromoPanelModel::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::DlcPromoPanelModel::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x28>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__platformInit(::GlobalNamespace::IPlatformInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPlatformInit*, 0x30>(this, std::forward<::GlobalNamespace::IPlatformInit*>(value));
}
constexpr ::GlobalNamespace::IPlatformInit* GlobalNamespace::DlcPromoPanelModel::__get__platformInit()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformInit*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformInit*> GlobalNamespace::DlcPromoPanelModel::__get__platformInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformInit*, 0x30>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x38>(this, std::forward<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>& GlobalNamespace::DlcPromoPanelModel::__get__notOwnedMusicPackPromoInfos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x38>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> const& GlobalNamespace::DlcPromoPanelModel::__get__notOwnedMusicPackPromoInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x38>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__ownedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x40>(this, std::forward<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>& GlobalNamespace::DlcPromoPanelModel::__get__ownedMusicPackPromoInfos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x40>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> const& GlobalNamespace::DlcPromoPanelModel::__get__ownedMusicPackPromoInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>, 0x40>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__updatingNotOwnedPacks(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DlcPromoPanelModel::__get__updatingNotOwnedPacks()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& GlobalNamespace::DlcPromoPanelModel::__get__updatingNotOwnedPacks() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DlcPromoPanelModel::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr bool const& GlobalNamespace::DlcPromoPanelModel::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__set__random(::System::Random*  value)  {
::cordl_internals::setInstanceField<::System::Random*, 0x50>(this, std::forward<::System::Random*>(value));
}
constexpr ::System::Random* GlobalNamespace::DlcPromoPanelModel::__get__random()  {
return ::cordl_internals::getInstanceField<::System::Random*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> GlobalNamespace::DlcPromoPanelModel::__get__random() const {
return ::cordl_internals::getInstanceField<::System::Random*, 0x50>(this);
}
inline void GlobalNamespace::DlcPromoPanelModel::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner(ByRef<bool>  owned)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "GetPackDataForMainMenuPromoBanner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, false>(*this, ___internal_method, owned);
}
inline void GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown(::GlobalNamespace::IBeatmapLevelPack*  promoPack, ::StringW  customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "MainMenuDlcPromoBannerWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, promoPack, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed(::GlobalNamespace::IBeatmapLevelPack*  promoPack, ::StringW  customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "MainMenuDlcPromoBannerWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, promoPack, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed(::GlobalNamespace::IPreviewBeatmapLevel*  level, ::StringW  page, ::StringW  customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "BuyLevelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, level, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown(::GlobalNamespace::IPreviewBeatmapLevel*  level, ::StringW  page, ::StringW  customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "BuyLevelButtonWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, level, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack*  pack, ::StringW  page, ::StringW  customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "BuyPackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pack, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown(::GlobalNamespace::IBeatmapLevelPack*  pack, ::StringW  page, ::StringW  customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "BuyPackButtonWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pack, page, customText);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData(::StringW  itemId, ::StringW  page, ::StringW  customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "GetExperimentEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, false>(*this, ___internal_method, itemId, page, customText);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdatePacksAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "UpdatePacksAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            "HandleAdditionalContentModelDidInvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DlcPromoPanelModel* GlobalNamespace::DlcPromoPanelModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DlcPromoPanelModel*>());
}
inline void GlobalNamespace::DlcPromoPanelModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
