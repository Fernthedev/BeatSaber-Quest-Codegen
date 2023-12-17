#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ScreenModeSO_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__CenterStageScreenController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsViewController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyController_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "HMUI/zzzz__ScreenModeController_def.hpp"
#include "GlobalNamespace/zzzz__ServerPlayerListViewController_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__LobbySetupViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SelectModifiersViewController_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::__GameServerLobbyFlowCoordinator__LobbyType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType  GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::HostSetup{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType  GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::ClientSetup{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType  GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::QuickPlayLobby{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType  GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::Party{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::*)()>(&::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22932d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0._Finish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::*)()>(&::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::_Finish_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2295ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0*>::get(),
                            "<Finish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__set___4__this(::GlobalNamespace::GameServerLobbyFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameServerLobbyFlowCoordinator*, 0x10>(this, std::forward<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator* GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameServerLobbyFlowCoordinator*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerLobbyFlowCoordinator*> GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameServerLobbyFlowCoordinator*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__set_eventSystem(::UnityEngine::EventSystems::EventSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x20>(this, std::forward<::UnityEngine::EventSystems::EventSystem*>(value));
}
constexpr ::UnityEngine::EventSystems::EventSystem* GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__get_eventSystem()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::__get_eventSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x20>(this);
}
inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0* GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0*>());
}
inline void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0::_Finish_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass70_0*>::get(),
                            "<Finish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::*)()>(&::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22945f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0._HandleServerPlayerListViewControllerKickPlayer_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::*)(int32_t)>(&::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::_HandleServerPlayerListViewControllerKickPlayer_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2295f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0*>::get(),
                            "<HandleServerPlayerListViewControllerKickPlayer>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::__set___4__this(::GlobalNamespace::GameServerLobbyFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameServerLobbyFlowCoordinator*, 0x10>(this, std::forward<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator* GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameServerLobbyFlowCoordinator*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerLobbyFlowCoordinator*> GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameServerLobbyFlowCoordinator*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::__set_userId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::__get_userId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0* GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0*>());
}
inline void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0::_HandleServerPlayerListViewControllerKickPlayer_b__0(int32_t  btnId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass85_0*>::get(),
                            "<HandleServerPlayerListViewControllerKickPlayer>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, btnId);
}
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPartyOwner)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x228ea30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isPublicGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPublicGame)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x228ea4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isPublicGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isManaged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isManaged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x228eb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isManaged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isQuickStartServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickStartServer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x228ebcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isQuickStartServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isQuickPlayServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickPlayServer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x228ec8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isQuickPlayServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_willFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::add_willFinishEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228ed4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_willFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_willFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_willFinishEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228edec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_willFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228ee8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228ef2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_startGameOrReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::add_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228efcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_startGameOrReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_startGameOrReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228f06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_startGameOrReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didSetupEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didSetupEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228f10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_didSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didSetupEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didSetupEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228f1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_didSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didOpenInvitePanelEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228f24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_didOpenInvitePanelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didOpenInvitePanelEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228f2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_didOpenInvitePanelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_rejoinQuickPlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_rejoinQuickPlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228f38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_rejoinQuickPlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.set_rejoinQuickPlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::set_rejoinQuickPlay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x228f394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "set_rejoinQuickPlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetLobbyType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::GetLobbyType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x228f3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "GetLobbyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x1170;
  constexpr static std::size_t addrs = 0x228f3f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0xe58;
  constexpr static std::size_t addrs = 0x2290d6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.InitialViewControllerWasPresented
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2291d10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TransitionDidStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2291f34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TransitionDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x229210c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TopViewControllerWillChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2292ad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.BackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::HMUI::ViewController*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2292d14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.PresentBackButtonConfirmationDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::PresentBackButtonConfirmationDialog)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2292e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "PresentBackButtonConfirmationDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*, bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::Finish)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x22930dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetInitialGameState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::GetInitialGameState)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2291dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "GetInitialGameState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyPlayersDataModelDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayersDataModelDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22933d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyPlayersDataModelDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerDidOpenInvitePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerDidOpenInvitePanel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22933d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleServerPlayerListViewControllerDidOpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerSelectBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectBeatmap)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x22933f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerSelectBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x22935f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLobbyDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLobbyDisconnected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2293a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerLobbyDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::__LevelSelectionFlowCoordinator__State*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2293af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2293dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerSelectModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectModifiers)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2293e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerSelectModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerClearSelectedBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x229402c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerClearSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerClearSelectedModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedModifiers)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22940d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerClearSelectedModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerLobbyState)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStateChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2294174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerGameStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLobbyState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerSelectSuggestedBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::PreviewDifficultyBeatmap*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedBeatmap)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2294190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleServerPlayerListViewControllerSelectSuggestedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmap*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x229423c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerKickPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerKickPlayer)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x22942e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleServerPlayerListViewControllerKickPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCountdownStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownStarted)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x22945fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerCountdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCountdownCancelled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownCancelled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2294808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerCountdownCancelled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStarted)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2294840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerGameStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerStartTimeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerStartTimeChanged)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2294b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerStartTimeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerSongStillDownloading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerSongStillDownloading)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2294cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerSongStillDownloading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerStartGameOrReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerStartGameOrReady)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2294cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerStartGameOrReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerCancelGameOrUnready
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerCancelGameOrUnready)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2295010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerCancelGameOrUnready",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCancelStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCancelStartTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2295184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerCancelStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStartedPresentView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStartedPresentView)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22951bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerGameStartedPresentView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelFinished)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2295268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLevelDidGetDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelDidGetDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2295654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerLevelDidGetDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerResultsViewControllerBackToLobbyPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerResultsViewController*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToLobbyPressed)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2295658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerResultsViewControllerBackToLobbyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerResultsViewControllerBackToMenuPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerResultsViewController*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToMenuPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22957a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerResultsViewControllerBackToMenuPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetupLobbyWithPermissions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::SetupLobbyWithPermissions)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x22908b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "SetupLobbyWithPermissions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetLobbyPlayerDataToViews
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::SetLobbyPlayerDataToViews)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x22906ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "SetLobbyPlayerDataToViews",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowSideViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowSideViewControllers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2292b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "ShowSideViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowBackButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowBackButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2292bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "ShowBackButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetLocalizedTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::GetLocalizedTitle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22957b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "GetLocalizedTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::SetTitle)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2292be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "SetTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowDisconnectDialogAndFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowDisconnectDialogAndFinish)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x2292690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "ShowDisconnectDialogAndFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.UpdateLocalPlayerIsActiveState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::UpdateLocalPlayerIsActiveState)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2293828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "UpdateLocalPlayerIsActiveState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameBeforeSceneSwitchCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameBeforeSceneSwitchCallback)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x229583c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameBeforeSceneSwitchCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateStartButtonEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::CannotStartGameReason)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateStartButtonEnabled)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2295a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateStartButtonEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2295a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyPlayerPermissionsModelPermissionsChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayerPermissionsModelPermissionsChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2295d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyPlayerPermissionsModelPermissionsChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DismissViewControllersAndCoordinators
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::DismissViewControllersAndCoordinators)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22932d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "DismissViewControllersAndCoordinators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2295d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._PresentBackButtonConfirmationDialog_b__69_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(int32_t)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::_PresentBackButtonConfirmationDialog_b__69_0)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2295d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "<PresentBackButtonConfirmationDialog>b__69_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._ShowDisconnectDialogAndFinish_b__105_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::_ShowDisconnectDialogAndFinish_b__105_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2295ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "<ShowDisconnectDialogAndFinish>b__105_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__screenMode(::HMUI::ScreenModeSO*  value)  {
::cordl_internals::setInstanceField<::HMUI::ScreenModeSO*, 0xa8>(this, std::forward<::HMUI::ScreenModeSO*>(value));
}
constexpr ::HMUI::ScreenModeSO* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__screenMode()  {
return ::cordl_internals::getInstanceField<::HMUI::ScreenModeSO*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeSO*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__screenMode() const {
return ::cordl_internals::getInstanceField<::HMUI::ScreenModeSO*, 0xa8>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__ambienceAudioClip(::UnityEngine::AudioClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip*, 0xb0>(this, std::forward<::UnityEngine::AudioClip*>(value));
}
constexpr ::UnityEngine::AudioClip* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__ambienceAudioClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__ambienceAudioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0xb0>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__serverPlayerListViewController(::GlobalNamespace::ServerPlayerListViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ServerPlayerListViewController*, 0xb8>(this, std::forward<::GlobalNamespace::ServerPlayerListViewController*>(value));
}
constexpr ::GlobalNamespace::ServerPlayerListViewController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__serverPlayerListViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ServerPlayerListViewController*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ServerPlayerListViewController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__serverPlayerListViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ServerPlayerListViewController*, 0xb8>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__selectModifiersViewController(::GlobalNamespace::SelectModifiersViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectModifiersViewController*, 0xc0>(this, std::forward<::GlobalNamespace::SelectModifiersViewController*>(value));
}
constexpr ::GlobalNamespace::SelectModifiersViewController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__selectModifiersViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectModifiersViewController*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectModifiersViewController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__selectModifiersViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectModifiersViewController*, 0xc0>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__multiplayerLevelSelectionFlowCoordinator(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*, 0xc8>(this, std::forward<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__multiplayerLevelSelectionFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__multiplayerLevelSelectionFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*, 0xc8>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__multiplayerResultsViewController(::GlobalNamespace::MultiplayerResultsViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsViewController*, 0xd0>(this, std::forward<::GlobalNamespace::MultiplayerResultsViewController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsViewController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__multiplayerResultsViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsViewController*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsViewController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__multiplayerResultsViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsViewController*, 0xd0>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__simpleDialogPromptViewController(::GlobalNamespace::SimpleDialogPromptViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SimpleDialogPromptViewController*, 0xd8>(this, std::forward<::GlobalNamespace::SimpleDialogPromptViewController*>(value));
}
constexpr ::GlobalNamespace::SimpleDialogPromptViewController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__simpleDialogPromptViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SimpleDialogPromptViewController*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__simpleDialogPromptViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SimpleDialogPromptViewController*, 0xd8>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__connectionErrorDialogViewController(::GlobalNamespace::ConnectionErrorDialogViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ConnectionErrorDialogViewController*, 0xe0>(this, std::forward<::GlobalNamespace::ConnectionErrorDialogViewController*>(value));
}
constexpr ::GlobalNamespace::ConnectionErrorDialogViewController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__connectionErrorDialogViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConnectionErrorDialogViewController*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectionErrorDialogViewController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__connectionErrorDialogViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConnectionErrorDialogViewController*, 0xe0>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__multiplayerSettingsPanelController(::GlobalNamespace::MultiplayerSettingsPanelController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerSettingsPanelController*, 0xe8>(this, std::forward<::GlobalNamespace::MultiplayerSettingsPanelController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerSettingsPanelController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__multiplayerSettingsPanelController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerSettingsPanelController*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSettingsPanelController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__multiplayerSettingsPanelController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerSettingsPanelController*, 0xe8>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplaySetupViewController*, 0xf0>(this, std::forward<::GlobalNamespace::GameplaySetupViewController*>(value));
}
constexpr ::GlobalNamespace::GameplaySetupViewController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__gameplaySetupViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplaySetupViewController*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplaySetupViewController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__gameplaySetupViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplaySetupViewController*, 0xf0>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__multiplayerLobbyController(::GlobalNamespace::MultiplayerLobbyController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLobbyController*, 0xf8>(this, std::forward<::GlobalNamespace::MultiplayerLobbyController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLobbyController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__multiplayerLobbyController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyController*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__multiplayerLobbyController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyController*, 0xf8>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__fadeInOutController(::GlobalNamespace::FadeInOutController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FadeInOutController*, 0x100>(this, std::forward<::GlobalNamespace::FadeInOutController*>(value));
}
constexpr ::GlobalNamespace::FadeInOutController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__fadeInOutController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__fadeInOutController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController*, 0x100>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__centerStageScreenController(::GlobalNamespace::CenterStageScreenController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CenterStageScreenController*, 0x108>(this, std::forward<::GlobalNamespace::CenterStageScreenController*>(value));
}
constexpr ::GlobalNamespace::CenterStageScreenController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__centerStageScreenController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CenterStageScreenController*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CenterStageScreenController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__centerStageScreenController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CenterStageScreenController*, 0x108>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILobbyStateDataModel*, 0x110>(this, std::forward<::GlobalNamespace::ILobbyStateDataModel*>(value));
}
constexpr ::GlobalNamespace::ILobbyStateDataModel* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyStateDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyStateDataModel*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyStateDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyStateDataModel*, 0x110>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x118>(this, std::forward<::GlobalNamespace::LobbyGameStateModel*>(value));
}
constexpr ::GlobalNamespace::LobbyGameStateModel* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyGameStateModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyGameStateModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x118>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILobbyPlayersDataModel*, 0x120>(this, std::forward<::GlobalNamespace::ILobbyPlayersDataModel*>(value));
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyPlayersDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyPlayersDataModel*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyPlayersDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyPlayersDataModel*, 0x120>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILobbyGameStateController*, 0x128>(this, std::forward<::GlobalNamespace::ILobbyGameStateController*>(value));
}
constexpr ::GlobalNamespace::ILobbyGameStateController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyGameStateController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyGameStateController*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyGameStateController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILobbyGameStateController*, 0x128>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x130>(this, std::forward<::GlobalNamespace::LobbyPlayerPermissionsModel*>(value));
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyPlayerPermissionsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x130>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbyPlayerPermissionsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x130>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__lobbySetupViewController(::GlobalNamespace::LobbySetupViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbySetupViewController*, 0x138>(this, std::forward<::GlobalNamespace::LobbySetupViewController*>(value));
}
constexpr ::GlobalNamespace::LobbySetupViewController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbySetupViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbySetupViewController*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbySetupViewController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lobbySetupViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbySetupViewController*, 0x138>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x140>(this, std::forward<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__unifiedNetworkPlayerModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__unifiedNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x140>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__screenModeController(::HMUI::ScreenModeController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ScreenModeController*, 0x148>(this, std::forward<::HMUI::ScreenModeController*>(value));
}
constexpr ::HMUI::ScreenModeController* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__screenModeController()  {
return ::cordl_internals::getInstanceField<::HMUI::ScreenModeController*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeController*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__screenModeController() const {
return ::cordl_internals::getInstanceField<::HMUI::ScreenModeController*, 0x148>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x150>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x150>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x150>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__platformLeaderboardsModel(::GlobalNamespace::PlatformLeaderboardsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x158>(this, std::forward<::GlobalNamespace::PlatformLeaderboardsModel*>(value));
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__platformLeaderboardsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x158>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsModel*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__platformLeaderboardsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x158>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPreviewPlayer*, 0x160>(this, std::forward<::GlobalNamespace::SongPreviewPlayer*>(value));
}
constexpr ::GlobalNamespace::SongPreviewPlayer* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__songPreviewPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPreviewPlayer*, 0x160>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__songPreviewPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPreviewPlayer*, 0x160>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x168>(this, std::forward<::GlobalNamespace::IAnalyticsModel*>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__analyticsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x168>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x168>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__lastSimpleLevelSelectionFlowCoordinatorState(::GlobalNamespace::__LevelSelectionFlowCoordinator__State*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*, 0x170>(this, std::forward<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>(value));
}
constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lastSimpleLevelSelectionFlowCoordinatorState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*, 0x170>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__lastSimpleLevelSelectionFlowCoordinatorState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*, 0x170>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__isAlreadyFinishing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x178>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameServerLobbyFlowCoordinator::__get__isAlreadyFinishing()  {
return ::cordl_internals::getInstanceField<bool, 0x178>(this);
}
constexpr bool const& GlobalNamespace::GameServerLobbyFlowCoordinator::__get__isAlreadyFinishing() const {
return ::cordl_internals::getInstanceField<bool, 0x178>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__stringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x180>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__stringBuilder()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x180>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__stringBuilder() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x180>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__canStartGameCts(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0x188>(this, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* GlobalNamespace::GameServerLobbyFlowCoordinator::__get__canStartGameCts()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x188>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get__canStartGameCts() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x188>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set_willFinishEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x190>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GameServerLobbyFlowCoordinator::__get_willFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x190>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get_willFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x190>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set_didFinishEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x198>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GameServerLobbyFlowCoordinator::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x198>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x198>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set_startGameOrReadyEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x1a0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GameServerLobbyFlowCoordinator::__get_startGameOrReadyEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x1a0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get_startGameOrReadyEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x1a0>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set_didSetupEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x1a8>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GameServerLobbyFlowCoordinator::__get_didSetupEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x1a8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get_didSetupEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x1a8>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set_didOpenInvitePanelEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x1b0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GameServerLobbyFlowCoordinator::__get_didOpenInvitePanelEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x1b0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GameServerLobbyFlowCoordinator::__get_didOpenInvitePanelEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x1b0>(this);
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__set__rejoinQuickPlay_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1b8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameServerLobbyFlowCoordinator::__get__rejoinQuickPlay_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x1b8>(this);
}
constexpr bool const& GlobalNamespace::GameServerLobbyFlowCoordinator::__get__rejoinQuickPlay_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x1b8>(this);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPublicGame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isPublicGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isManaged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isManaged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickStartServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isQuickStartServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickPlayServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_isQuickPlayServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_willFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_willFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_willFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_willFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_startGameOrReadyEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_startGameOrReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_startGameOrReadyEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_startGameOrReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didSetupEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_didSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didSetupEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_didSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didOpenInvitePanelEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "add_didOpenInvitePanelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didOpenInvitePanelEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "remove_didOpenInvitePanelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_rejoinQuickPlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "get_rejoinQuickPlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::set_rejoinQuickPlay(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "set_rejoinQuickPlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType GlobalNamespace::GameServerLobbyFlowCoordinator::GetLobbyType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "GetLobbyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::InitialViewControllerWasPresented()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "InitialViewControllerWasPresented",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "TransitionDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "TransitionDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController*  oldViewController, ::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "TopViewControllerWillChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController*  topViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "BackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, topViewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::PresentBackButtonConfirmationDialog()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "PresentBackButtonConfirmationDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param withFadeOut: bool (default: true)
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::Finish(::System::Action*  finishedCallback, bool  withFadeOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, finishedCallback, withFadeOut);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::GetInitialGameState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "GetInitialGameState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayersDataModelDidChange(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyPlayersDataModelDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerDidOpenInvitePanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleServerPlayerListViewControllerDidOpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectBeatmap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerSelectBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isActive);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLobbyDisconnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerLobbyDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel(::GlobalNamespace::__LevelSelectionFlowCoordinator__State*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerSelectModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedBeatmap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerClearSelectedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerClearSelectedModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStateChanged(::GlobalNamespace::MultiplayerLobbyState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerGameStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLobbyState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleServerPlayerListViewControllerSelectSuggestedBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers(::GlobalNamespace::GameplayModifiers*  modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, modifiers);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerKickPlayer(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleServerPlayerListViewControllerKickPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerCountdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownCancelled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerCountdownCancelled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStarted(::GlobalNamespace::ILevelGameplaySetupData*  levelGameplaySetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerGameStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerStartTimeChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerStartTimeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerSongStillDownloading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerSongStillDownloading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerStartGameOrReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerStartGameOrReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerCancelGameOrUnready()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbySetupViewControllerCancelGameOrUnready",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCancelStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerCancelStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStartedPresentView(::GlobalNamespace::ILevelGameplaySetupData*  levelGameplaySetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerGameStartedPresentView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelFinished(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData*  multiplayerResultsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelDidGetDisconnected(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateControllerLevelDidGetDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToLobbyPressed(::GlobalNamespace::MultiplayerResultsViewController*  viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerResultsViewControllerBackToLobbyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToMenuPressed(::GlobalNamespace::MultiplayerResultsViewController*  viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMultiplayerResultsViewControllerBackToMenuPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetupLobbyWithPermissions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "SetupLobbyWithPermissions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetLobbyPlayerDataToViews(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "SetLobbyPlayerDataToViews",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowSideViewControllers(bool  showSideViewControllers, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "ShowSideViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, showSideViewControllers, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowBackButton(bool  show)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "ShowBackButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, show);
}
inline ::StringW GlobalNamespace::GameServerLobbyFlowCoordinator::GetLocalizedTitle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "GetLocalizedTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetTitle(::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "SetTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newViewController, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowDisconnectDialogAndFinish(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "ShowDisconnectDialogAndFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::UpdateLocalPlayerIsActiveState(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "UpdateLocalPlayerIsActiveState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isActive);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameBeforeSceneSwitchCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameBeforeSceneSwitchCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateStartButtonEnabled(::GlobalNamespace::CannotStartGameReason  cannotStartGameReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyGameStateStartButtonEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cannotStartGameReason);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*  playersMissingEntitlements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playersMissingEntitlements);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayerPermissionsModelPermissionsChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "HandleLobbyPlayerPermissionsModelPermissionsChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DismissViewControllersAndCoordinators()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "DismissViewControllersAndCoordinators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::GameServerLobbyFlowCoordinator* GlobalNamespace::GameServerLobbyFlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServerLobbyFlowCoordinator*>());
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_PresentBackButtonConfirmationDialog_b__69_0(int32_t  btnIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "<PresentBackButtonConfirmationDialog>b__69_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, btnIndex);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_ShowDisconnectDialogAndFinish_b__105_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                            "<ShowDisconnectDialogAndFinish>b__105_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
