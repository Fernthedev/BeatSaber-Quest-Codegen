#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__LevelGameplaySetupData_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLobbyPermissionConfigurationNetSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::*)()>(&::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235958c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::*)(::StringW, ::GlobalNamespace::MultiplayerGameState)>(&::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x235ae3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                            "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::*)(::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(&::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x235b0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                            "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::*)(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*)>(&::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_b__2)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x235b2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                            "<GetGameStateAndConfigurationAsync>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__set___4__this(::GlobalNamespace::LobbyGameStateController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbyGameStateController*, 0x10>(this, std::forward<::GlobalNamespace::LobbyGameStateController*>(value));
}
constexpr ::GlobalNamespace::LobbyGameStateController* GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyGameStateController*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateController*> GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyGameStateController*, 0x10>(this);
}
constexpr void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__set_getGameStateAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x18>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__get_getGameStateAsyncTcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__get_getGameStateAsyncTcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x18>(this);
}
constexpr void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__set_getPlayerPermissionAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x20>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__get_getPlayerPermissionAsyncTcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__get_getPlayerPermissionAsyncTcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x20>(this);
}
inline ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0* GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>());
}
inline void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0(::StringW  userId, ::GlobalNamespace::MultiplayerGameState  newMultiplayerGameState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                            "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, newMultiplayerGameState);
}
inline void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1(::StringW  userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*  playersLobbyPermissionConfiguration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                            "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, playersLobbyPermissionConfiguration);
}
inline bool GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_b__2(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                            "<GetGameStateAndConfigurationAsync>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, p);
}
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LobbyGameStateController____c::*)()>(&::GlobalNamespace::__LobbyGameStateController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235b3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c._PredictCountdownEndTime_b__99_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LobbyGameStateController____c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>)>(&::GlobalNamespace::__LobbyGameStateController____c::_PredictCountdownEndTime_b__99_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x235b404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get(),
                            "<PredictCountdownEndTime>b__99_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LobbyGameStateController____c::setStaticF___9(::GlobalNamespace::__LobbyGameStateController____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__LobbyGameStateController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get>(std::forward<::GlobalNamespace::__LobbyGameStateController____c*>(value));
}
inline ::GlobalNamespace::__LobbyGameStateController____c* GlobalNamespace::__LobbyGameStateController____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__LobbyGameStateController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get>();
}
inline void GlobalNamespace::__LobbyGameStateController____c::setStaticF___9__99_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>*, "<>9__99_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>* GlobalNamespace::__LobbyGameStateController____c::getStaticF___9__99_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>*, "<>9__99_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get>();
}
inline ::GlobalNamespace::__LobbyGameStateController____c* GlobalNamespace::__LobbyGameStateController____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LobbyGameStateController____c*>());
}
inline void GlobalNamespace::__LobbyGameStateController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__LobbyGameStateController____c::_PredictCountdownEndTime_b__99_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>  pair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get(),
                            "<PredictCountdownEndTime>b__99_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pair);
}
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_selectedLevelGameplaySetupDataChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(&::GlobalNamespace::LobbyGameStateController::add_selectedLevelGameplaySetupDataChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23564d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_selectedLevelGameplaySetupDataChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_selectedLevelGameplaySetupDataChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(&::GlobalNamespace::LobbyGameStateController::remove_selectedLevelGameplaySetupDataChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2356584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_selectedLevelGameplaySetupDataChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_gameStartedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(&::GlobalNamespace::LobbyGameStateController::add_gameStartedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2356634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_gameStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_gameStartedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(&::GlobalNamespace::LobbyGameStateController::remove_gameStartedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23566e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_gameStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_gameStartCancelledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_gameStartCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_gameStartCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_gameStartCancelledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_gameStartCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_gameStartCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_countdownStartedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_countdownStartedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23568cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_countdownStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_countdownStartedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_countdownStartedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_countdownStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_countdownCancelledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_countdownCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_countdownCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_countdownCancelledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_countdownCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_countdownCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_songStillDownloadingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_songStillDownloadingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_songStillDownloadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_songStillDownloadingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_songStillDownloadingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_songStillDownloadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_startTimeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_startTimeChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_startTimeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_startTimeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_startTimeChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2356d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_startTimeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*)>(&::GlobalNamespace::LobbyGameStateController::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2356dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*)>(&::GlobalNamespace::LobbyGameStateController::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2356e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_levelDidGetDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LobbyGameStateController::add_levelDidGetDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2356f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_levelDidGetDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_levelDidGetDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LobbyGameStateController::remove_levelDidGetDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2356fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_levelDidGetDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_lobbyDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_lobbyDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x235706c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_lobbyDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_lobbyDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_lobbyDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2357108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_lobbyDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_beforeSceneSwitchCallbackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_beforeSceneSwitchCallbackEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23571a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_beforeSceneSwitchCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_beforeSceneSwitchCallbackEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_beforeSceneSwitchCallbackEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2357240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_beforeSceneSwitchCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_lobbyStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*)>(&::GlobalNamespace::LobbyGameStateController::add_lobbyStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23572dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_lobbyStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_lobbyStateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*)>(&::GlobalNamespace::LobbyGameStateController::remove_lobbyStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x235738c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_lobbyStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_startButtonEnabledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*)>(&::GlobalNamespace::LobbyGameStateController::add_startButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x235743c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_startButtonEnabledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_startButtonEnabledEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*)>(&::GlobalNamespace::LobbyGameStateController::remove_startButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23574ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_startButtonEnabledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_playerMissingEntitlementsChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(&::GlobalNamespace::LobbyGameStateController::add_playerMissingEntitlementsChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x235759c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_playerMissingEntitlementsChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_playerMissingEntitlementsChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(&::GlobalNamespace::LobbyGameStateController::remove_playerMissingEntitlementsChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x235764c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_playerMissingEntitlementsChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_predictedCountdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_predictedCountdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23576fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_predictedCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2357704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(int64_t)>(&::GlobalNamespace::LobbyGameStateController::set_startTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x235770c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_levelStartInitiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_levelStartInitiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235772c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_levelStartInitiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_levelStartInitiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_levelStartInitiated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2357734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_levelStartInitiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_selectedLevelGameplaySetupData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILevelGameplaySetupData* (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_selectedLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2357740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_selectedLevelGameplaySetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_countdownStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_countdownStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2357748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_countdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_countdownStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_countdownStarted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2357750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_countdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_countdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_countdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235775c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_countdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_countdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(int64_t)>(&::GlobalNamespace::LobbyGameStateController::set_countdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2357764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_countdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLobbyState (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235776c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::MultiplayerLobbyState)>(&::GlobalNamespace::LobbyGameStateController::set_state)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2357774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLobbyState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_cannotStartGameReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CannotStartGameReason (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_cannotStartGameReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23577a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_cannotStartGameReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_isDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_isDisconnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23577a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_isDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_isDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_isDisconnected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23577b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_isDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_disconnectedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23577bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_disconnectedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::LobbyGameStateController::set_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23577c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Activate)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x23577cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Deactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Deactivate)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x2358064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23589ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StartListeningToGameStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StartListeningToGameStart)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x23589f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "StartListeningToGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.GetCurrentLevelIfGameStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::GetCurrentLevelIfGameStarted)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23590bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "GetCurrentLevelIfGameStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.ClearDisconnectedState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::ClearDisconnectedState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23589dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "ClearDisconnectedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.GetGameStateAndConfigurationAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LobbyGameStateController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::LobbyGameStateController::GetGameStateAndConfigurationAsync)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2359160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "GetGameStateAndConfigurationAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.PredictCountdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::PredictCountdownEndTime)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2359594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "PredictCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.IsCloseToStartGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::IsCloseToStartGame)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x235972c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "IsCloseToStartGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerSessionManagerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerDisconnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23597f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerSessionManagerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerSessionManagerConnectionOwnerStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerConnectionOwnerStateChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x235981c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerSessionManagerConnectionOwnerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StopListeningToGameStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StopListeningToGameStart)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2359914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "StopListeningToGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerStartedLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerStartedLevel)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2359b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerStartedLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerCancelledLevelStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelledLevelStart)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2359e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerCancelledLevelStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetCountdownEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, int64_t)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetCountdownEndTime)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2359f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerCancelCountdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelCountdown)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x235a1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerCancelCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetStartGameTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, int64_t)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetStartGameTime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x235a3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetStartGameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleSetIsStartButtonEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::CannotStartGameReason)>(&::GlobalNamespace::LobbyGameStateController::HandleSetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x235a440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleSetIsStartButtonEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x235a468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleStartTimeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::HandleStartTimeChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x235a48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleStartTimeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelLoaderStillDownloadingSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderStillDownloadingSong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x235a4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerLevelLoaderStillDownloadingSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetSelectedBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x235a4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetSelectedGameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x235a528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetSelectedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerClearSelectedBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x235a56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerClearSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerClearSelectedGameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x235a5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerClearSelectedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelLoaderCountdownFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderCountdownFinished)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x235a5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerLevelLoaderCountdownFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StartMultiplayerLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*, ::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x235a92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x235aca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelDidDisconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x235ad3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerLevelDidDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StopLoading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StopLoading)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2359e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "StopLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x235adc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILobbyGameStateController"
constexpr  GlobalNamespace::LobbyGameStateController::operator ::GlobalNamespace::ILobbyGameStateController*() noexcept {
return static_cast<::GlobalNamespace::ILobbyGameStateController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LobbyGameStateController::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILobbyPlayersDataModel*, 0x10>(this, std::forward<::GlobalNamespace::ILobbyPlayersDataModel*>(value));
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel* GlobalNamespace::LobbyGameStateController::__get__lobbyPlayersDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyPlayersDataModel*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> GlobalNamespace::LobbyGameStateController::__get__lobbyPlayersDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyPlayersDataModel*, 0x10>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x18>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::LobbyGameStateController::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::LobbyGameStateController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x18>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__menuRpcManager(::GlobalNamespace::IMenuRpcManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMenuRpcManager*, 0x20>(this, std::forward<::GlobalNamespace::IMenuRpcManager*>(value));
}
constexpr ::GlobalNamespace::IMenuRpcManager* GlobalNamespace::LobbyGameStateController::__get__menuRpcManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMenuRpcManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> GlobalNamespace::LobbyGameStateController::__get__menuRpcManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMenuRpcManager*, 0x20>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x28>(this, std::forward<::GlobalNamespace::IMultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::LobbyGameStateController::__get__multiplayerSessionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> GlobalNamespace::LobbyGameStateController::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x28>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__multiplayerLevelLoader(::GlobalNamespace::MultiplayerLevelLoader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelLoader*, 0x30>(this, std::forward<::GlobalNamespace::MultiplayerLevelLoader*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelLoader* GlobalNamespace::LobbyGameStateController::__get__multiplayerLevelLoader()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelLoader*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelLoader*> GlobalNamespace::LobbyGameStateController::__get__multiplayerLevelLoader() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelLoader*, 0x30>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x38>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::LobbyGameStateController::__get__menuTransitionsHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::LobbyGameStateController::__get__menuTransitionsHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x38>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x40>(this, std::forward<::GlobalNamespace::LobbyGameStateModel*>(value));
}
constexpr ::GlobalNamespace::LobbyGameStateModel* GlobalNamespace::LobbyGameStateController::__get__lobbyGameStateModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> GlobalNamespace::LobbyGameStateController::__get__lobbyGameStateModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x40>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x48>(this, std::forward<::GlobalNamespace::LobbyPlayerPermissionsModel*>(value));
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* GlobalNamespace::LobbyGameStateController::__get__lobbyPlayerPermissionsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> GlobalNamespace::LobbyGameStateController::__get__lobbyPlayerPermissionsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x48>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x50>(this, std::forward<::GlobalNamespace::BeatmapLevelsModel*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::LobbyGameStateController::__get__beatmapLevelsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> GlobalNamespace::LobbyGameStateController::__get__beatmapLevelsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x50>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicCollection*, 0x58>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicCollection*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* GlobalNamespace::LobbyGameStateController::__get__beatmapCharacteristicCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicCollection*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> GlobalNamespace::LobbyGameStateController::__get__beatmapCharacteristicCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicCollection*, 0x58>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*, 0x60>(this, std::forward<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* GlobalNamespace::LobbyGameStateController::__get_selectedLevelGameplaySetupDataChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*> GlobalNamespace::LobbyGameStateController::__get_selectedLevelGameplaySetupDataChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*, 0x60>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*, 0x68>(this, std::forward<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* GlobalNamespace::LobbyGameStateController::__get_gameStartedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*> GlobalNamespace::LobbyGameStateController::__get_gameStartedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*, 0x68>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_gameStartCancelledEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x70>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LobbyGameStateController::__get_gameStartCancelledEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LobbyGameStateController::__get_gameStartCancelledEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_countdownStartedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x78>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LobbyGameStateController::__get_countdownStartedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LobbyGameStateController::__get_countdownStartedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x78>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_countdownCancelledEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x80>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LobbyGameStateController::__get_countdownCancelledEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LobbyGameStateController::__get_countdownCancelledEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x80>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_songStillDownloadingEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x88>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LobbyGameStateController::__get_songStillDownloadingEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LobbyGameStateController::__get_songStillDownloadingEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x88>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_startTimeChangedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x90>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LobbyGameStateController::__get_startTimeChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LobbyGameStateController::__get_startTimeChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x90>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_levelFinishedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*, 0x98>(this, std::forward<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>* GlobalNamespace::LobbyGameStateController::__get_levelFinishedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*> GlobalNamespace::LobbyGameStateController::__get_levelFinishedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*, 0x98>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0xa0>(this, std::forward<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* GlobalNamespace::LobbyGameStateController::__get_levelDidGetDisconnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> GlobalNamespace::LobbyGameStateController::__get_levelDidGetDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0xa0>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_lobbyDisconnectedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xa8>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LobbyGameStateController::__get_lobbyDisconnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LobbyGameStateController::__get_lobbyDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xa8>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_beforeSceneSwitchCallbackEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xb0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::LobbyGameStateController::__get_beforeSceneSwitchCallbackEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::LobbyGameStateController::__get_beforeSceneSwitchCallbackEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xb0>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*, 0xb8>(this, std::forward<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* GlobalNamespace::LobbyGameStateController::__get_lobbyStateChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*> GlobalNamespace::LobbyGameStateController::__get_lobbyStateChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*, 0xb8>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*, 0xc0>(this, std::forward<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::CannotStartGameReason>* GlobalNamespace::LobbyGameStateController::__get_startButtonEnabledEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*> GlobalNamespace::LobbyGameStateController::__get_startButtonEnabledEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*, 0xc0>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*, 0xc8>(this, std::forward<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* GlobalNamespace::LobbyGameStateController::__get_playerMissingEntitlementsChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*> GlobalNamespace::LobbyGameStateController::__get_playerMissingEntitlementsChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*, 0xc8>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__levelStartInitiated_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__get__levelStartInitiated_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__get__levelStartInitiated_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__countdownStarted_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xd1>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__get__countdownStarted_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0xd1>(this);
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__get__countdownStarted_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xd1>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__countdownEndTime_k__BackingField(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0xd8>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__get__countdownEndTime_k__BackingField()  {
return ::cordl_internals::getInstanceField<int64_t, 0xd8>(this);
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__get__countdownEndTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<int64_t, 0xd8>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__isDisconnected_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__get__isDisconnected_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__get__isDisconnected_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__disconnectedReason_k__BackingField(::GlobalNamespace::DisconnectedReason  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DisconnectedReason, 0xe4>(this, std::forward<::GlobalNamespace::DisconnectedReason>(value));
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::LobbyGameStateController::__get__disconnectedReason_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DisconnectedReason, 0xe4>(this);
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::LobbyGameStateController::__get__disconnectedReason_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DisconnectedReason, 0xe4>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__predictedStartTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0xe8>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__get__predictedStartTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0xe8>(this);
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__get__predictedStartTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0xe8>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__startTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0xf0>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__get__startTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0xf0>(this);
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__get__startTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0xf0>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__levelStartedOnTime(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__get__levelStartedOnTime()  {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__get__levelStartedOnTime() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__state(::GlobalNamespace::MultiplayerLobbyState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLobbyState, 0xfc>(this, std::forward<::GlobalNamespace::MultiplayerLobbyState>(value));
}
constexpr ::GlobalNamespace::MultiplayerLobbyState& GlobalNamespace::LobbyGameStateController::__get__state()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyState, 0xfc>(this);
}
constexpr ::GlobalNamespace::MultiplayerLobbyState const& GlobalNamespace::LobbyGameStateController::__get__state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyState, 0xfc>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__cannotStartGameReason(::GlobalNamespace::CannotStartGameReason  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CannotStartGameReason, 0x100>(this, std::forward<::GlobalNamespace::CannotStartGameReason>(value));
}
constexpr ::GlobalNamespace::CannotStartGameReason& GlobalNamespace::LobbyGameStateController::__get__cannotStartGameReason()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CannotStartGameReason, 0x100>(this);
}
constexpr ::GlobalNamespace::CannotStartGameReason const& GlobalNamespace::LobbyGameStateController::__get__cannotStartGameReason() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CannotStartGameReason, 0x100>(this);
}
constexpr void GlobalNamespace::LobbyGameStateController::__set__selectedLevelGameplaySetupData(::GlobalNamespace::LevelGameplaySetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelGameplaySetupData*, 0x108>(this, std::forward<::GlobalNamespace::LevelGameplaySetupData*>(value));
}
constexpr ::GlobalNamespace::LevelGameplaySetupData* GlobalNamespace::LobbyGameStateController::__get__selectedLevelGameplaySetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelGameplaySetupData*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelGameplaySetupData*> GlobalNamespace::LobbyGameStateController::__get__selectedLevelGameplaySetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelGameplaySetupData*, 0x108>(this);
}
inline void GlobalNamespace::LobbyGameStateController::add_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_selectedLevelGameplaySetupDataChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_selectedLevelGameplaySetupDataChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_gameStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_gameStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_gameStartCancelledEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_gameStartCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_gameStartCancelledEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_gameStartCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_countdownStartedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_countdownStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_countdownStartedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_countdownStartedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_countdownCancelledEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_countdownCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_countdownCancelledEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_countdownCancelledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_songStillDownloadingEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_songStillDownloadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_songStillDownloadingEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_songStillDownloadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_startTimeChangedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_startTimeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_startTimeChangedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_startTimeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_levelFinishedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_levelFinishedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_levelDidGetDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_levelDidGetDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_lobbyDisconnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_lobbyDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_lobbyDisconnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_lobbyDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_beforeSceneSwitchCallbackEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_beforeSceneSwitchCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_beforeSceneSwitchCallbackEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_beforeSceneSwitchCallbackEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_lobbyStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_lobbyStateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_startButtonEnabledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_startButtonEnabledEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "add_playerMissingEntitlementsChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "remove_playerMissingEntitlementsChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_predictedCountdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_predictedCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_startTime(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyGameStateController::get_levelStartInitiated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_levelStartInitiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_levelStartInitiated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_levelStartInitiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::ILevelGameplaySetupData* GlobalNamespace::LobbyGameStateController::get_selectedLevelGameplaySetupData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_selectedLevelGameplaySetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILevelGameplaySetupData*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::get_countdownStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_countdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_countdownStarted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_countdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_countdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_countdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_countdownEndTime(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_countdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::LobbyGameStateController::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLobbyState, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_state(::GlobalNamespace::MultiplayerLobbyState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLobbyState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::CannotStartGameReason GlobalNamespace::LobbyGameStateController::get_cannotStartGameReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_cannotStartGameReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CannotStartGameReason, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::get_isDisconnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_isDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_isDisconnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_isDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::LobbyGameStateController::get_disconnectedReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "get_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_disconnectedReason(::GlobalNamespace::DisconnectedReason  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "set_disconnectedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::StartListeningToGameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "StartListeningToGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::GetCurrentLevelIfGameStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "GetCurrentLevelIfGameStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::ClearDisconnectedState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "ClearDisconnectedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LobbyGameStateController::GetGameStateAndConfigurationAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "GetGameStateAndConfigurationAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::LobbyGameStateController::PredictCountdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "PredictCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::IsCloseToStartGame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "IsCloseToStartGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerDisconnected(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerSessionManagerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerConnectionOwnerStateChanged(::GlobalNamespace::IConnectedPlayer*  connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerSessionManagerConnectionOwnerStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::LobbyGameStateController::StopListeningToGameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "StopListeningToGameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerStartedLevel(::StringW  userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable*  beatmapId, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, int64_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerStartedLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, beatmapId, gameplayModifiers, startTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelledLevelStart(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerCancelledLevelStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetCountdownEndTime(::StringW  userId, int64_t  countdownTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetCountdownEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, countdownTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelCountdown(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerCancelCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetStartGameTime(::StringW  userId, int64_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetStartGameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, startTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleSetIsStartButtonEnabled(::StringW  userId, ::GlobalNamespace::CannotStartGameReason  cannotStartGameReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleSetIsStartButtonEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, cannotStartGameReason);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::StringW  userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*  playersMissingEntitlements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, playersMissingEntitlements);
}
inline void GlobalNamespace::LobbyGameStateController::HandleStartTimeChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleStartTimeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderStillDownloadingSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerLevelLoaderStillDownloadingSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedBeatmap(::StringW  userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable*  beatmapId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, beatmapId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedGameplayModifiers(::StringW  userId, ::GlobalNamespace::GameplayModifiers*  modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerSetSelectedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, modifiers);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedBeatmap(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerClearSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedGameplayModifiers(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMenuRpcManagerClearSelectedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderCountdownFinished(::GlobalNamespace::ILevelGameplaySetupData*  gameplaySetupData, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerLevelLoaderCountdownFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameplaySetupData, difficultyBeatmap);
}
inline void GlobalNamespace::LobbyGameStateController::StartMultiplayerLevel(::GlobalNamespace::ILevelGameplaySetupData*  gameplaySetupData, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::System::Action*  beforeSceneSwitchCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameplaySetupData, difficultyBeatmap, beforeSceneSwitchCallback);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData*  multiplayerResultsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "HandleMultiplayerLevelDidDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::LobbyGameStateController::StopLoading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            "StopLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LobbyGameStateController* GlobalNamespace::LobbyGameStateController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LobbyGameStateController*>());
}
inline void GlobalNamespace::LobbyGameStateController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
