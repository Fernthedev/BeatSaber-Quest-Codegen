#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOutroAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__SceneStartSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__SongStartSyncController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelFinishedController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerIntroAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesProvider_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
constexpr void GlobalNamespace::__MultiplayerController__State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerController__State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerController__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerController__State::__MultiplayerController__State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerController__State  GlobalNamespace::__MultiplayerController__State::CheckingLobbyState{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerController__State  GlobalNamespace::__MultiplayerController__State::WaitingForPlayers{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerController__State  GlobalNamespace::__MultiplayerController__State::SongStartSync{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MultiplayerController__State  GlobalNamespace::__MultiplayerController__State::Intro{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__MultiplayerController__State  GlobalNamespace::__MultiplayerController__State::Gameplay{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__MultiplayerController__State  GlobalNamespace::__MultiplayerController__State::Outro{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__MultiplayerController__State  GlobalNamespace::__MultiplayerController__State::Finished{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::*)(int32_t)>(&::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2247ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::*)()>(&::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x224a038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::*)()>(&::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x834;
  constexpr static std::size_t addrs = 0x224a03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::*)()>(&::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224b6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::*)()>(&::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x224b6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::*)()>(&::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224b714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__set___4__this(::GlobalNamespace::MultiplayerController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerController*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerController* GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x20>(this);
}
constexpr void GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__set_localPlayerSyncState(::GlobalNamespace::MultiplayerPlayerStartState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0x28>(this, std::forward<::GlobalNamespace::MultiplayerPlayerStartState>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState& GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__get_localPlayerSyncState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0x28>(this);
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::__get_localPlayerSyncState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0x28>(this);
}
inline ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39* GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>(__1__state));
}
inline void GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::*)()>(&::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22487e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0._HandleSongStartSyncControllerSyncStartSuccess_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::*)()>(&::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::_HandleSongStartSyncControllerSyncStartSuccess_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x224b71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0*>::get(),
                            "<HandleSongStartSyncControllerSyncStartSuccess>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::__set___4__this(::GlobalNamespace::MultiplayerController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerController*, 0x10>(this, std::forward<::GlobalNamespace::MultiplayerController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerController* GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x10>(this);
}
constexpr void GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::__set_introAnimationStartSyncTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::__get_introAnimationStartSyncTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::__get_introAnimationStartSyncTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
inline ::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0* GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0*>());
}
inline void GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerController____c__DisplayClass45_0::_HandleSongStartSyncControllerSyncStartSuccess_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0*>::get(),
                            "<HandleSongStartSyncControllerSyncStartSuccess>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerController____c::*)()>(&::GlobalNamespace::__MultiplayerController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224b7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerController____c._EndGameplay_b__50_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MultiplayerController____c::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::__MultiplayerController____c::_EndGameplay_b__50_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x224b7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c*>::get(),
                            "<EndGameplay>b__50_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__MultiplayerController____c::setStaticF___9(::GlobalNamespace::__MultiplayerController____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__MultiplayerController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c*>::get>(std::forward<::GlobalNamespace::__MultiplayerController____c*>(value));
}
inline ::GlobalNamespace::__MultiplayerController____c* GlobalNamespace::__MultiplayerController____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__MultiplayerController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c*>::get>();
}
inline void GlobalNamespace::__MultiplayerController____c::setStaticF___9__50_0(::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,bool>*, "<>9__50_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,bool>* GlobalNamespace::__MultiplayerController____c::getStaticF___9__50_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,bool>*, "<>9__50_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c*>::get>();
}
inline ::GlobalNamespace::__MultiplayerController____c* GlobalNamespace::__MultiplayerController____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerController____c*>());
}
inline void GlobalNamespace::__MultiplayerController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__MultiplayerController____c::_EndGameplay_b__50_0(::GlobalNamespace::MultiplayerLevelCompletionResults*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerController____c*>::get(),
                            "<EndGameplay>b__50_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.get_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerController__State (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224647c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.add_stateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*)>(&::GlobalNamespace::MultiplayerController::add_stateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2246484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "add_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.remove_stateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*)>(&::GlobalNamespace::MultiplayerController::remove_stateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2246534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "remove_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::Start)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x22465e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::OnDestroy)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x2246eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleIsDisconnectedDuringLoading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleIsDisconnectedDuringLoading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleIsDisconnectedDuringLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSetMultiplayerGameState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::StringW, ::GlobalNamespace::MultiplayerGameState)>(&::GlobalNamespace::MultiplayerController::HandleSetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2247594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSetMultiplayerGameState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.CreateAndBindPlayersSpecificSettingsAtGameStartModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::CreateAndBindPlayersSpecificSettingsAtGameStartModel)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2246a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "CreateAndBindPlayersSpecificSettingsAtGameStartModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.StartSceneLoadSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::StartSceneLoadSync)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2247788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "StartSceneLoadSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.PerformSongStartSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MultiplayerController::*)(::GlobalNamespace::MultiplayerPlayerStartState)>(&::GlobalNamespace::MultiplayerController::PerformSongStartSync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2247e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "PerformSongStartSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerStartState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleDidSwitchPlayerToInactive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleDidSwitchPlayerToInactive)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2247eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleDidSwitchPlayerToInactive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::StringW)>(&::GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidSuccess)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2248144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidReceiveTooLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::StringW)>(&::GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidReceiveTooLate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x224816c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidReceiveTooLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleInitialGetGameStateFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleInitialGetGameStateFailed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2248194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleInitialGetGameStateFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidFail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidFail)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2248270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncStartSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(int64_t)>(&::GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartSuccess)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x224857c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSongStartSyncControllerSyncStartSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncResume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(int64_t)>(&::GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncResume)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x224966c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSongStartSyncControllerSyncResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncStartFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2249bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSongStartSyncControllerSyncStartFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.StartGameplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(int64_t)>(&::GlobalNamespace::MultiplayerController::StartGameplay)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x2248dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "StartGameplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleAllResultsCollected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerController::HandleAllResultsCollected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2249c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleAllResultsCollected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.EndGameplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerController::EndGameplay)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x224830c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "EndGameplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleOutroAnimationDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleOutroAnimationDidFinish)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2249e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleOutroAnimationDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleRpcReturnToMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::StringW)>(&::GlobalNamespace::MultiplayerController::HandleRpcReturnToMenu)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2249e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleRpcReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::MultiplayerController::HandleDisconnected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2247540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.ChangeState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::GlobalNamespace::__MultiplayerController__State)>(&::GlobalNamespace::MultiplayerController::ChangeState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2246e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "ChangeState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.GetCurrentSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerController::*)(int64_t)>(&::GlobalNamespace::MultiplayerController::GetCurrentSongTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2248084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "GetCurrentSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.GetSongStartSyncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerController::*)(int64_t)>(&::GlobalNamespace::MultiplayerController::GetSongStartSyncTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x224805c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "GetSongStartSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2249fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerController::__set__loadingEnvironment(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::MultiplayerController::__get__loadingEnvironment()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::MultiplayerController::__get__loadingEnvironment() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__multiplayerLevelSceneSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* GlobalNamespace::MultiplayerController::__get__multiplayerLevelSceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> GlobalNamespace::MultiplayerController::__get__multiplayerLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x28>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::MultiplayerController::__get__gameScenesManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::MultiplayerController::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__playersManager(::GlobalNamespace::MultiplayerPlayersManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x30>(this, std::forward<::GlobalNamespace::MultiplayerPlayersManager*>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayersManager* GlobalNamespace::MultiplayerController::__get__playersManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> GlobalNamespace::MultiplayerController::__get__playersManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__sceneStartSyncController(::GlobalNamespace::SceneStartSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SceneStartSyncController*, 0x38>(this, std::forward<::GlobalNamespace::SceneStartSyncController*>(value));
}
constexpr ::GlobalNamespace::SceneStartSyncController* GlobalNamespace::MultiplayerController::__get__sceneStartSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SceneStartSyncController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneStartSyncController*> GlobalNamespace::MultiplayerController::__get__sceneStartSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SceneStartSyncController*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__songStartSyncController(::GlobalNamespace::SongStartSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongStartSyncController*, 0x40>(this, std::forward<::GlobalNamespace::SongStartSyncController*>(value));
}
constexpr ::GlobalNamespace::SongStartSyncController* GlobalNamespace::MultiplayerController::__get__songStartSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongStartSyncController*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongStartSyncController*> GlobalNamespace::MultiplayerController::__get__songStartSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongStartSyncController*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__multiplayerLevelFinishedController(::GlobalNamespace::MultiplayerLevelFinishedController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelFinishedController*, 0x48>(this, std::forward<::GlobalNamespace::MultiplayerLevelFinishedController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelFinishedController* GlobalNamespace::MultiplayerController::__get__multiplayerLevelFinishedController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelFinishedController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelFinishedController*> GlobalNamespace::MultiplayerController::__get__multiplayerLevelFinishedController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelFinishedController*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__fadeInOutController(::GlobalNamespace::FadeInOutController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FadeInOutController*, 0x50>(this, std::forward<::GlobalNamespace::FadeInOutController*>(value));
}
constexpr ::GlobalNamespace::FadeInOutController* GlobalNamespace::MultiplayerController::__get__fadeInOutController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> GlobalNamespace::MultiplayerController::__get__fadeInOutController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController*, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x58>(this, std::forward<::GlobalNamespace::IMultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerController::__get__multiplayerSessionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> GlobalNamespace::MultiplayerController::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__introAnimationController(::GlobalNamespace::MultiplayerIntroAnimationController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerIntroAnimationController*, 0x60>(this, std::forward<::GlobalNamespace::MultiplayerIntroAnimationController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerIntroAnimationController* GlobalNamespace::MultiplayerController::__get__introAnimationController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerIntroAnimationController*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroAnimationController*> GlobalNamespace::MultiplayerController::__get__introAnimationController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerIntroAnimationController*, 0x60>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__outroAnimationController(::GlobalNamespace::MultiplayerOutroAnimationController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerOutroAnimationController*, 0x68>(this, std::forward<::GlobalNamespace::MultiplayerOutroAnimationController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerOutroAnimationController* GlobalNamespace::MultiplayerController::__get__outroAnimationController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerOutroAnimationController*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOutroAnimationController*> GlobalNamespace::MultiplayerController::__get__outroAnimationController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerOutroAnimationController*, 0x68>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__menuRpcManager(::GlobalNamespace::IMenuRpcManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMenuRpcManager*, 0x70>(this, std::forward<::GlobalNamespace::IMenuRpcManager*>(value));
}
constexpr ::GlobalNamespace::IMenuRpcManager* GlobalNamespace::MultiplayerController::__get__menuRpcManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMenuRpcManager*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> GlobalNamespace::MultiplayerController::__get__menuRpcManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMenuRpcManager*, 0x70>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x78>(this, std::forward<::GlobalNamespace::IGameplayRpcManager*>(value));
}
constexpr ::GlobalNamespace::IGameplayRpcManager* GlobalNamespace::MultiplayerController::__get__gameplayRpcManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> GlobalNamespace::MultiplayerController::__get__gameplayRpcManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x78>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x80>(this, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::MultiplayerController::__get__sceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> GlobalNamespace::MultiplayerController::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x80>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__diContainer(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x88>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::MultiplayerController::__get__diContainer()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::MultiplayerController::__get__diContainer() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x88>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__badgesProvider(::GlobalNamespace::MultiplayerBadgesProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerBadgesProvider*, 0x90>(this, std::forward<::GlobalNamespace::MultiplayerBadgesProvider*>(value));
}
constexpr ::GlobalNamespace::MultiplayerBadgesProvider* GlobalNamespace::MultiplayerController::__get__badgesProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerBadgesProvider*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgesProvider*> GlobalNamespace::MultiplayerController::__get__badgesProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerBadgesProvider*, 0x90>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set_stateChangedEvent(::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*, 0x98>(this, std::forward<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::__MultiplayerController__State>* GlobalNamespace::MultiplayerController::__get_stateChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*> GlobalNamespace::MultiplayerController::__get_stateChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*, 0x98>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__startTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerController::__get__startTime()  {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerController::__get__startTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__localPlayerSyncStartState(::GlobalNamespace::MultiplayerPlayerStartState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0xa4>(this, std::forward<::GlobalNamespace::MultiplayerPlayerStartState>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState& GlobalNamespace::MultiplayerController::__get__localPlayerSyncStartState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0xa4>(this);
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& GlobalNamespace::MultiplayerController::__get__localPlayerSyncStartState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0xa4>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__state(::GlobalNamespace::__MultiplayerController__State  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerController__State, 0xa8>(this, std::forward<::GlobalNamespace::__MultiplayerController__State>(value));
}
constexpr ::GlobalNamespace::__MultiplayerController__State& GlobalNamespace::MultiplayerController::__get__state()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerController__State, 0xa8>(this);
}
constexpr ::GlobalNamespace::__MultiplayerController__State const& GlobalNamespace::MultiplayerController::__get__state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerController__State, 0xa8>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__sessionGameId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MultiplayerController::__get__sessionGameId()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr ::StringW const& GlobalNamespace::MultiplayerController::__get__sessionGameId() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__resultsData(::GlobalNamespace::MultiplayerResultsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsData*, 0xb8>(this, std::forward<::GlobalNamespace::MultiplayerResultsData*>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsData* GlobalNamespace::MultiplayerController::__get__resultsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsData*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsData*> GlobalNamespace::MultiplayerController::__get__resultsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsData*, 0xb8>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, 0xc0>(this, std::forward<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(value));
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* GlobalNamespace::MultiplayerController::__get__playersSpecificSettingsAtGameStartModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> GlobalNamespace::MultiplayerController::__get__playersSpecificSettingsAtGameStartModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, 0xc0>(this);
}
constexpr void GlobalNamespace::MultiplayerController::__set__timeoutGetGameStateCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine*, 0xc8>(this, std::forward<::UnityEngine::Coroutine*>(value));
}
constexpr ::UnityEngine::Coroutine* GlobalNamespace::MultiplayerController::__get__timeoutGetGameStateCoroutine()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> GlobalNamespace::MultiplayerController::__get__timeoutGetGameStateCoroutine() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0xc8>(this);
}
inline ::GlobalNamespace::__MultiplayerController__State GlobalNamespace::MultiplayerController::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerController__State, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::add_stateChangedEvent(::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "add_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerController::remove_stateChangedEvent(::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "remove_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleIsDisconnectedDuringLoading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleIsDisconnectedDuringLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleSetMultiplayerGameState(::StringW  userId, ::GlobalNamespace::MultiplayerGameState  gameState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSetMultiplayerGameState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, gameState);
}
inline void GlobalNamespace::MultiplayerController::CreateAndBindPlayersSpecificSettingsAtGameStartModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "CreateAndBindPlayersSpecificSettingsAtGameStartModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::StartSceneLoadSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "StartSceneLoadSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MultiplayerController::PerformSongStartSync(::GlobalNamespace::MultiplayerPlayerStartState  localPlayerSyncState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "PerformSongStartSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerStartState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, localPlayerSyncState);
}
inline void GlobalNamespace::MultiplayerController::HandleDidSwitchPlayerToInactive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleDidSwitchPlayerToInactive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidSuccess(::StringW  sessionGameId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sessionGameId);
}
inline void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidReceiveTooLate(::StringW  sessionGameId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidReceiveTooLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sessionGameId);
}
inline void GlobalNamespace::MultiplayerController::HandleInitialGetGameStateFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleInitialGetGameStateFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidFail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSceneStartSyncControllerSyncStartDidFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartSuccess(int64_t  introAnimationStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSongStartSyncControllerSyncStartSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, introAnimationStartSyncTime);
}
inline void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncResume(int64_t  introAnimationStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSongStartSyncControllerSyncResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, introAnimationStartSyncTime);
}
inline void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleSongStartSyncControllerSyncStartFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::StartGameplay(int64_t  introAnimationStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "StartGameplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, introAnimationStartSyncTime);
}
inline void GlobalNamespace::MultiplayerController::HandleAllResultsCollected(::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResults, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  otherPlayerResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleAllResultsCollected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, localPlayerResults, otherPlayerResults);
}
inline void GlobalNamespace::MultiplayerController::EndGameplay(::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResults, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  otherPlayerResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "EndGameplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, localPlayerResults, otherPlayerResults);
}
inline void GlobalNamespace::MultiplayerController::HandleOutroAnimationDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleOutroAnimationDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleRpcReturnToMenu(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleRpcReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::MultiplayerController::HandleDisconnected(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "HandleDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::MultiplayerController::ChangeState(::GlobalNamespace::__MultiplayerController__State  newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "ChangeState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newState);
}
inline float_t GlobalNamespace::MultiplayerController::GetCurrentSongTime(int64_t  songStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "GetCurrentSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, songStartSyncTime);
}
inline int64_t GlobalNamespace::MultiplayerController::GetSongStartSyncTime(int64_t  introAnimationStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            "GetSongStartSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, introAnimationStartSyncTime);
}
inline ::GlobalNamespace::MultiplayerController* GlobalNamespace::MultiplayerController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerController*>());
}
inline void GlobalNamespace::MultiplayerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
