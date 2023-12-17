#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerInGameMenuController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalPlayerDisconnectHelper_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData::*)(bool)>(&::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23dc398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData::__set_failOn0Energy(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData::__get_failOn0Energy()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData::__get_failOn0Energy() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData* GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData::New_ctor(bool  failOn0Energy)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*>(failOn0Energy));
}
inline void GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData::_ctor(bool  failOn0Energy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, failOn0Energy);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::Start)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x23db0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnDisable)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x23db570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.PerformPlayerFail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerFail)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x23dba08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "PerformPlayerFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.PerformPlayerGivenUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerGivenUp)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x23dbc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "PerformPlayerGivenUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleGameEnergyDidReach0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleGameEnergyDidReach0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23dbe88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleGameEnergyDidReach0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleInGameMenuControllerDidGiveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerDidGiveUp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23dbeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleInGameMenuControllerDidGiveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleInGameMenuControllerRequestsDisconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerRequestsDisconnect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23dbeb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleInGameMenuControllerRequestsDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleSongDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleSongDidFinish)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x23dc104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleSongDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleHmdUnmounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleHmdUnmounted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23dc344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleHmdUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleVrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleVrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23dc348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleVrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleInputFocusCaptured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23db550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleInputFocusCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleInputFocusReleased
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23dc34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleInputFocusReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)(bool)>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23dc384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dc390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__gameSongController(::GlobalNamespace::GameSongController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameSongController*, 0x18>(this, std::forward<::GlobalNamespace::GameSongController*>(value));
}
constexpr ::GlobalNamespace::GameSongController* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__gameSongController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__gameSongController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x20>(this, std::forward<::GlobalNamespace::IMultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__multiplayerSessionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__multiplayerLevelEndActions(::GlobalNamespace::IMultiplayerLevelEndActionsListener*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerLevelEndActionsListener*, 0x28>(this, std::forward<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__multiplayerLevelEndActions()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerLevelEndActionsListener*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsListener*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__multiplayerLevelEndActions() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerLevelEndActionsListener*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x30>(this, std::forward<::GlobalNamespace::PrepareLevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__prepareLevelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x38>(this, std::forward<::GlobalNamespace::GameEnergyCounter*>(value));
}
constexpr ::GlobalNamespace::GameEnergyCounter* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__gameEnergyCounter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__gameEnergyCounter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__inGameMenuController(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*, 0x40>(this, std::forward<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__inGameMenuController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__inGameMenuController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__platformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x48>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__platformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__platformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*, 0x50>(this, std::forward<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__disconnectHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__disconnectHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__initData(::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*, 0x58>(this, std::forward<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__saberManager(::GlobalNamespace::SaberManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberManager*, 0x60>(this, std::forward<::GlobalNamespace::SaberManager*>(value));
}
constexpr ::GlobalNamespace::SaberManager* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__saberManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberManager*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__saberManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberManager*, 0x60>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__set__levelFinishedOrFailed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__levelFinishedOrFailed()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__get__levelFinishedOrFailed() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerFail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "PerformPlayerFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerGivenUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "PerformPlayerGivenUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleGameEnergyDidReach0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleGameEnergyDidReach0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerDidGiveUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleInGameMenuControllerDidGiveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerRequestsDisconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleInGameMenuControllerRequestsDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleSongDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleSongDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleHmdUnmounted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleHmdUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleVrFocusWasCapturedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleVrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusCaptured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleInputFocusCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusReleased()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "HandleInputFocusReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hasFocus);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>());
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
