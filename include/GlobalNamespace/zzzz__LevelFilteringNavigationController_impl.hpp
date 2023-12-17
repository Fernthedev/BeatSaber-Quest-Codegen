#pragma once
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFilteringNavigationController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilteringNavigationController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionsViewController_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IAnnotatedBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelSearchViewController_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::*)()>(&::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bf42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0._SelectAnnotatedBeatmapLevelCollection_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::*)(::StringW)>(&::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::_SelectAnnotatedBeatmapLevelCollection_b__1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22bf5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>::get(),
                            "<SelectAnnotatedBeatmapLevelCollection>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::__set_levelPack(::GlobalNamespace::IBeatmapLevelPack*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x10>(this, std::forward<::GlobalNamespace::IBeatmapLevelPack*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::__get_levelPack()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::__get_levelPack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x10>(this);
}
inline ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0* GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>());
}
inline void GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::_SelectAnnotatedBeatmapLevelCollection_b__1(::StringW  packID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>::get(),
                            "<SelectAnnotatedBeatmapLevelCollection>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, packID);
}
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilteringNavigationController____c::*)()>(&::GlobalNamespace::__LevelFilteringNavigationController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bf704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController____c._SelectAnnotatedBeatmapLevelCollection_b__53_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LevelFilteringNavigationController____c::*)(::GlobalNamespace::IBeatmapLevelPack*)>(&::GlobalNamespace::__LevelFilteringNavigationController____c::_SelectAnnotatedBeatmapLevelCollection_b__53_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22bf70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get(),
                            "<SelectAnnotatedBeatmapLevelCollection>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LevelFilteringNavigationController____c::setStaticF___9(::GlobalNamespace::__LevelFilteringNavigationController____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__LevelFilteringNavigationController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get>(std::forward<::GlobalNamespace::__LevelFilteringNavigationController____c*>(value));
}
inline ::GlobalNamespace::__LevelFilteringNavigationController____c* GlobalNamespace::__LevelFilteringNavigationController____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__LevelFilteringNavigationController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get>();
}
inline void GlobalNamespace::__LevelFilteringNavigationController____c::setStaticF___9__53_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::StringW>*, "<>9__53_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::StringW>* GlobalNamespace::__LevelFilteringNavigationController____c::getStaticF___9__53_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::StringW>*, "<>9__53_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get>();
}
inline ::GlobalNamespace::__LevelFilteringNavigationController____c* GlobalNamespace::__LevelFilteringNavigationController____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LevelFilteringNavigationController____c*>());
}
inline void GlobalNamespace::__LevelFilteringNavigationController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__LevelFilteringNavigationController____c::_SelectAnnotatedBeatmapLevelCollection_b__53_0(::GlobalNamespace::IBeatmapLevelPack*  pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get(),
                            "<SelectAnnotatedBeatmapLevelCollection>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, pack);
}
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::*)()>(&::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x22bf7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22bfc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set___4__this(::GlobalNamespace::LevelFilteringNavigationController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelFilteringNavigationController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::LevelFilteringNavigationController*>(value));
}
constexpr ::GlobalNamespace::LevelFilteringNavigationController* GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelFilteringNavigationController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFilteringNavigationController*> GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelFilteringNavigationController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set__cancellationToken_5__2(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get__cancellationToken_5__2()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>& GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*> const& GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelFilteringNavigationController*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__LevelFilteringNavigationController___UpdateCustomSongs_d__54(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::LevelFilteringNavigationController*  __4__this, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22bcb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didSelectAnnotatedBeatmapLevelCollectionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22bcc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didSelectAnnotatedBeatmapLevelCollectionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didStartLoadingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22bcccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didStartLoadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didStartLoadingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22bcd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didStartLoadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didPressAllSongsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didPressAllSongsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22bce2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didPressAllSongsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didPressAllSongsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didPressAllSongsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22bcedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didPressAllSongsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didOpenBeatmapLevelCollectionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didOpenBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22bcf8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didOpenBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didOpenBeatmapLevelCollectionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didOpenBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22bd028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didOpenBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didCloseBeatmapLevelCollectionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didCloseBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22bd0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didCloseBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didCloseBeatmapLevelCollectionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didCloseBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22bd160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didCloseBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.get_selectedBeatmapLevelPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPack* (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::get_selectedBeatmapLevelPack)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bd1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "get_selectedBeatmapLevelPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.get_selectedLevelCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22bd250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "get_selectedLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::SongPackMask, ::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, bool, bool)>(&::GlobalNamespace::LevelFilteringNavigationController::Setup)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x22bd2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.SetupBeatmapLevelPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::SetupBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x22bd410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "SetupBeatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(bool, bool, bool)>(&::GlobalNamespace::LevelFilteringNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x22bdb8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.LevelSearchViewControllerDidStartLoading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::LevelSearchViewController*)>(&::GlobalNamespace::LevelFilteringNavigationController::LevelSearchViewControllerDidStartLoading)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22be318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "LevelSearchViewControllerDidStartLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSearchViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(bool, bool)>(&::GlobalNamespace::LevelFilteringNavigationController::DidDeactivate)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x22be338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.LevelSearchViewControllerDidFilterBeatmapLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*, bool)>(&::GlobalNamespace::LevelFilteringNavigationController::LevelSearchViewControllerDidFilterBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22be884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "LevelSearchViewControllerDidFilterBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.SelectLevelCategoryViewControllerDidSelectLevelCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::SelectLevelCategoryViewController*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory)>(&::GlobalNamespace::LevelFilteringNavigationController::SelectLevelCategoryViewControllerDidSelectLevelCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22be8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "SelectLevelCategoryViewControllerDidSelectLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.UpdateSecondChildControllerContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory)>(&::GlobalNamespace::LevelFilteringNavigationController::UpdateSecondChildControllerContent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x22be178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "UpdateSecondChildControllerContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.ShowPacksInSecondChildController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatmapLevelPack*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::ShowPacksInSecondChildController)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x22be8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "ShowPacksInSecondChildController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatmapLevelPack*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.ReplaceSecondViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::HMUI::ViewController*)>(&::GlobalNamespace::LevelFilteringNavigationController::ReplaceSecondViewController)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22befa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "ReplaceSecondViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandlePlayerDataFavoriteLevelsSetDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::HandlePlayerDataFavoriteLevelsSetDidChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22bf0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandlePlayerDataFavoriteLevelsSetDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleIncreaseNumberOfGameplays
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::HandleIncreaseNumberOfGameplays)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22bf118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandleIncreaseNumberOfGameplays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bf168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bf184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*)>(&::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22bf1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.SelectAnnotatedBeatmapLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::IBeatmapLevelPack*)>(&::GlobalNamespace::LevelFilteringNavigationController::SelectAnnotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x22bf1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "SelectAnnotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.UpdateCustomSongs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::UpdateCustomSongs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22bf044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "UpdateCustomSongs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bf434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._SetupBeatmapLevelPacks_b__39_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::IBeatmapLevelPack*)>(&::GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22bf43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "<SetupBeatmapLevelPacks>b__39_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._SetupBeatmapLevelPacks_b__39_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::IBeatmapLevelPack*)>(&::GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_1)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22bf514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "<SetupBeatmapLevelPacks>b__39_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__emptyFavoritesListInfoPrefab(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x98>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::LevelFilteringNavigationController::__get__emptyFavoritesListInfoPrefab()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::LevelFilteringNavigationController::__get__emptyFavoritesListInfoPrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x98>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__emptyCustomSongListInfoPrefab(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0xa0>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::LevelFilteringNavigationController::__get__emptyCustomSongListInfoPrefab()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::LevelFilteringNavigationController::__get__emptyCustomSongListInfoPrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xa0>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0xa8>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::LevelFilteringNavigationController::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::LevelFilteringNavigationController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0xa8>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__selectLevelCategoryViewController(::GlobalNamespace::SelectLevelCategoryViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectLevelCategoryViewController*, 0xb0>(this, std::forward<::GlobalNamespace::SelectLevelCategoryViewController*>(value));
}
constexpr ::GlobalNamespace::SelectLevelCategoryViewController* GlobalNamespace::LevelFilteringNavigationController::__get__selectLevelCategoryViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectLevelCategoryViewController*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectLevelCategoryViewController*> GlobalNamespace::LevelFilteringNavigationController::__get__selectLevelCategoryViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectLevelCategoryViewController*, 0xb0>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__annotatedBeatmapLevelCollectionsViewController(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*, 0xb8>(this, std::forward<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*>(value));
}
constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* GlobalNamespace::LevelFilteringNavigationController::__get__annotatedBeatmapLevelCollectionsViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*> GlobalNamespace::LevelFilteringNavigationController::__get__annotatedBeatmapLevelCollectionsViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*, 0xb8>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__levelSearchViewController(::GlobalNamespace::LevelSearchViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelSearchViewController*, 0xc0>(this, std::forward<::GlobalNamespace::LevelSearchViewController*>(value));
}
constexpr ::GlobalNamespace::LevelSearchViewController* GlobalNamespace::LevelFilteringNavigationController::__get__levelSearchViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelSearchViewController*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelSearchViewController*> GlobalNamespace::LevelFilteringNavigationController::__get__levelSearchViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelSearchViewController*, 0xc0>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0xc8>(this, std::forward<::GlobalNamespace::BeatmapLevelsModel*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::LevelFilteringNavigationController::__get__beatmapLevelsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> GlobalNamespace::LevelFilteringNavigationController::__get__beatmapLevelsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0xc8>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*, 0xd0>(this, std::forward<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*>(value));
}
constexpr ::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>* GlobalNamespace::LevelFilteringNavigationController::__get_didSelectAnnotatedBeatmapLevelCollectionEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*> GlobalNamespace::LevelFilteringNavigationController::__get_didSelectAnnotatedBeatmapLevelCollectionEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*, 0xd0>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*, 0xd8>(this, std::forward<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* GlobalNamespace::LevelFilteringNavigationController::__get_didStartLoadingEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*> GlobalNamespace::LevelFilteringNavigationController::__get_didStartLoadingEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*, 0xd8>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*, 0xe0>(this, std::forward<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* GlobalNamespace::LevelFilteringNavigationController::__get_didPressAllSongsEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*> GlobalNamespace::LevelFilteringNavigationController::__get_didPressAllSongsEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*, 0xe0>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didOpenBeatmapLevelCollectionsEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xe8>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LevelFilteringNavigationController::__get_didOpenBeatmapLevelCollectionsEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LevelFilteringNavigationController::__get_didOpenBeatmapLevelCollectionsEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xe8>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didCloseBeatmapLevelCollectionsEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xf0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LevelFilteringNavigationController::__get_didCloseBeatmapLevelCollectionsEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LevelFilteringNavigationController::__get_didCloseBeatmapLevelCollectionsEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xf0>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0xf8>(this, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* GlobalNamespace::LevelFilteringNavigationController::__get__cancellationTokenSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> GlobalNamespace::LevelFilteringNavigationController::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0xf8>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__currentNoDataInfoPrefab(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x100>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::LevelFilteringNavigationController::__get__currentNoDataInfoPrefab()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::LevelFilteringNavigationController::__get__currentNoDataInfoPrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x100>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__levelPackIdToBeSelectedAfterPresent(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x108>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::LevelFilteringNavigationController::__get__levelPackIdToBeSelectedAfterPresent()  {
return ::cordl_internals::getInstanceField<::StringW, 0x108>(this);
}
constexpr ::StringW const& GlobalNamespace::LevelFilteringNavigationController::__get__levelPackIdToBeSelectedAfterPresent() const {
return ::cordl_internals::getInstanceField<::StringW, 0x108>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__hidePacksIfOneOrNone(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x110>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LevelFilteringNavigationController::__get__hidePacksIfOneOrNone()  {
return ::cordl_internals::getInstanceField<bool, 0x110>(this);
}
constexpr bool const& GlobalNamespace::LevelFilteringNavigationController::__get__hidePacksIfOneOrNone() const {
return ::cordl_internals::getInstanceField<bool, 0x110>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__enableCustomLevels(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x111>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LevelFilteringNavigationController::__get__enableCustomLevels()  {
return ::cordl_internals::getInstanceField<bool, 0x111>(this);
}
constexpr bool const& GlobalNamespace::LevelFilteringNavigationController::__get__enableCustomLevels() const {
return ::cordl_internals::getInstanceField<bool, 0x111>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__songPackMask(::GlobalNamespace::SongPackMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMask, 0x118>(this, std::forward<::GlobalNamespace::SongPackMask>(value));
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::LevelFilteringNavigationController::__get__songPackMask()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x118>(this);
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::LevelFilteringNavigationController::__get__songPackMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x118>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__enabledLevelCategories(::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>, 0x138>(this, std::forward<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>& GlobalNamespace::LevelFilteringNavigationController::__get__enabledLevelCategories()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>, 0x138>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const& GlobalNamespace::LevelFilteringNavigationController::__get__enabledLevelCategories() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>, 0x138>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__ostBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x140>(this, std::forward<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& GlobalNamespace::LevelFilteringNavigationController::__get__ostBeatmapLevelPacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x140>(this);
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& GlobalNamespace::LevelFilteringNavigationController::__get__ostBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x140>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__musicPacksBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x148>(this, std::forward<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& GlobalNamespace::LevelFilteringNavigationController::__get__musicPacksBeatmapLevelPacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x148>(this);
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& GlobalNamespace::LevelFilteringNavigationController::__get__musicPacksBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x148>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__customLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x150>(this, std::forward<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& GlobalNamespace::LevelFilteringNavigationController::__get__customLevelPacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x150>(this);
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& GlobalNamespace::LevelFilteringNavigationController::__get__customLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x150>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__allOfficialBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x158>(this, std::forward<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& GlobalNamespace::LevelFilteringNavigationController::__get__allOfficialBeatmapLevelPacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x158>(this);
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& GlobalNamespace::LevelFilteringNavigationController::__get__allOfficialBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x158>(this);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__allBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x160>(this, std::forward<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& GlobalNamespace::LevelFilteringNavigationController::__get__allBeatmapLevelPacks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x160>(this);
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& GlobalNamespace::LevelFilteringNavigationController::__get__allBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x160>(this);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didSelectAnnotatedBeatmapLevelCollectionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didSelectAnnotatedBeatmapLevelCollectionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::UnityEngine::GameObject*,bool,::GlobalNamespace::BeatmapCharacteristicSO*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didStartLoadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didStartLoadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didPressAllSongsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didPressAllSongsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didOpenBeatmapLevelCollectionsEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didOpenBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didOpenBeatmapLevelCollectionsEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didOpenBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didCloseBeatmapLevelCollectionsEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "add_didCloseBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didCloseBeatmapLevelCollectionsEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "remove_didCloseBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::LevelFilteringNavigationController::get_selectedBeatmapLevelPack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "get_selectedBeatmapLevelPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPack*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::LevelFilteringNavigationController::get_selectedLevelCategory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "get_selectedLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::Setup(::GlobalNamespace::SongPackMask  songPackMask, ::GlobalNamespace::IBeatmapLevelPack*  levelPackToBeSelectedAfterPresent, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  startLevelCategory, bool  hidePacksIfOneOrNone, bool  enableCustomLevels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, songPackMask, levelPackToBeSelectedAfterPresent, startLevelCategory, hidePacksIfOneOrNone, enableCustomLevels);
}
inline void GlobalNamespace::LevelFilteringNavigationController::SetupBeatmapLevelPacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "SetupBeatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelFilteringNavigationController::LevelSearchViewControllerDidStartLoading(::GlobalNamespace::LevelSearchViewController*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "LevelSearchViewControllerDidStartLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSearchViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void GlobalNamespace::LevelFilteringNavigationController::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelFilteringNavigationController::LevelSearchViewControllerDidFilterBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  annotatedBeatmapLevelCollection, ::GlobalNamespace::BeatmapCharacteristicSO*  preferredBeatmapCharacteristic, bool  alphabeticallySort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "LevelSearchViewControllerDidFilterBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, annotatedBeatmapLevelCollection, preferredBeatmapCharacteristic, alphabeticallySort);
}
inline void GlobalNamespace::LevelFilteringNavigationController::SelectLevelCategoryViewControllerDidSelectLevelCategory(::GlobalNamespace::SelectLevelCategoryViewController*  viewController, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  levelCategory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "SelectLevelCategoryViewControllerDidSelectLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, levelCategory);
}
inline void GlobalNamespace::LevelFilteringNavigationController::UpdateSecondChildControllerContent(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  levelCategory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "UpdateSecondChildControllerContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelCategory);
}
inline void GlobalNamespace::LevelFilteringNavigationController::ShowPacksInSecondChildController(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatmapLevelPack*>*  beatmapLevelPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "ShowPacksInSecondChildController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatmapLevelPack*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapLevelPacks);
}
inline void GlobalNamespace::LevelFilteringNavigationController::ReplaceSecondViewController(::HMUI::ViewController*  viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "ReplaceSecondViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandlePlayerDataFavoriteLevelsSetDidChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandlePlayerDataFavoriteLevelsSetDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleIncreaseNumberOfGameplays()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandleIncreaseNumberOfGameplays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  annotatedBeatmapLevelCollection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, annotatedBeatmapLevelCollection);
}
inline void GlobalNamespace::LevelFilteringNavigationController::SelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IBeatmapLevelPack*  levelPack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "SelectAnnotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelPack);
}
inline void GlobalNamespace::LevelFilteringNavigationController::UpdateCustomSongs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "UpdateCustomSongs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LevelFilteringNavigationController* GlobalNamespace::LevelFilteringNavigationController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelFilteringNavigationController*>());
}
inline void GlobalNamespace::LevelFilteringNavigationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_0(::GlobalNamespace::IBeatmapLevelPack*  pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "<SetupBeatmapLevelPacks>b__39_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pack);
}
inline bool GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_1(::GlobalNamespace::IBeatmapLevelPack*  pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                            "<SetupBeatmapLevelPacks>b__39_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pack);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
