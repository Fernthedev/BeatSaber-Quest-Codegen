#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RichPresenceManager_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__BrowsingMenusRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__PlayingTutorialPresenceData_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayingCampaignRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::Awake)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2374340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::OnDestroy)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x23745dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleLobbyGameStateModelDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(::GlobalNamespace::MultiplayerGameState)>(&::GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2374840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "HandleLobbyGameStateModelDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.SetMenuPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::SetMenuPresence)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x237485c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "SetMenuPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleGameScenesManagerTransitionDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(&::GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2374b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "HandleGameScenesManagerTransitionDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleMultiplayerPartySizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(int32_t)>(&::GlobalNamespace::RichPresenceManager::HandleMultiplayerPartySizeChanged)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2374f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "HandleMultiplayerPartySizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleLobbyPlayerPermissionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::HandleLobbyPlayerPermissionChanged)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x23750d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "HandleLobbyPlayerPermissionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.SetPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(::GlobalNamespace::IRichPresenceData*)>(&::GlobalNamespace::RichPresenceManager::SetPresence)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2374a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "SetPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRichPresenceData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::Clear)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2374e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2375224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RichPresenceManager::__set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::RichPresenceManager::__get__standardLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> GlobalNamespace::RichPresenceManager::__get__standardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__tutorialScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x20>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::RichPresenceManager::__get__tutorialScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::RichPresenceManager::__get__tutorialScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x28>(this, std::forward<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* GlobalNamespace::RichPresenceManager::__get__missionLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> GlobalNamespace::RichPresenceManager::__get__missionLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x28>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x30>(this, std::forward<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* GlobalNamespace::RichPresenceManager::__get__multiplayerLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> GlobalNamespace::RichPresenceManager::__get__multiplayerLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x30>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO*, 0x38>(this, std::forward<::GlobalNamespace::MenuScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO* GlobalNamespace::RichPresenceManager::__get__menuScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuScenesTransitionSetupDataSO*> GlobalNamespace::RichPresenceManager::__get__menuScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO*, 0x38>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__richPresencePlatformHandler(::GlobalNamespace::IRichPresencePlatformHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IRichPresencePlatformHandler*, 0x40>(this, std::forward<::GlobalNamespace::IRichPresencePlatformHandler*>(value));
}
constexpr ::GlobalNamespace::IRichPresencePlatformHandler* GlobalNamespace::RichPresenceManager::__get__richPresencePlatformHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IRichPresencePlatformHandler*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRichPresencePlatformHandler*> GlobalNamespace::RichPresenceManager::__get__richPresencePlatformHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IRichPresencePlatformHandler*, 0x40>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x48>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::RichPresenceManager::__get__gameScenesManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::RichPresenceManager::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x48>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x50>(this, std::forward<::GlobalNamespace::LobbyGameStateModel*>(value));
}
constexpr ::GlobalNamespace::LobbyGameStateModel* GlobalNamespace::RichPresenceManager::__get__lobbyGameStateModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> GlobalNamespace::RichPresenceManager::__get__lobbyGameStateModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyGameStateModel*, 0x50>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x58>(this, std::forward<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* GlobalNamespace::RichPresenceManager::__get__unifiedNetworkPlayerModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> GlobalNamespace::RichPresenceManager::__get__unifiedNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x58>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x60>(this, std::forward<::GlobalNamespace::LobbyPlayerPermissionsModel*>(value));
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* GlobalNamespace::RichPresenceManager::__get__lobbyPlayerPermissionsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> GlobalNamespace::RichPresenceManager::__get__lobbyPlayerPermissionsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LobbyPlayerPermissionsModel*, 0x60>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__menuWasLoaded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RichPresenceManager::__get__menuWasLoaded()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& GlobalNamespace::RichPresenceManager::__get__menuWasLoaded() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__isInMultiplayerLobby(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RichPresenceManager::__get__isInMultiplayerLobby()  {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr bool const& GlobalNamespace::RichPresenceManager::__get__isInMultiplayerLobby() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__browsingMenusRichPresenceData(::GlobalNamespace::BrowsingMenusRichPresenceData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BrowsingMenusRichPresenceData*, 0x70>(this, std::forward<::GlobalNamespace::BrowsingMenusRichPresenceData*>(value));
}
constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData* GlobalNamespace::RichPresenceManager::__get__browsingMenusRichPresenceData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BrowsingMenusRichPresenceData*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BrowsingMenusRichPresenceData*> GlobalNamespace::RichPresenceManager::__get__browsingMenusRichPresenceData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BrowsingMenusRichPresenceData*, 0x70>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__inMultiplayerRichPresenceData(::GlobalNamespace::InMultiplayerRichPresenceData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::InMultiplayerRichPresenceData*, 0x78>(this, std::forward<::GlobalNamespace::InMultiplayerRichPresenceData*>(value));
}
constexpr ::GlobalNamespace::InMultiplayerRichPresenceData* GlobalNamespace::RichPresenceManager::__get__inMultiplayerRichPresenceData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::InMultiplayerRichPresenceData*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::InMultiplayerRichPresenceData*> GlobalNamespace::RichPresenceManager::__get__inMultiplayerRichPresenceData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::InMultiplayerRichPresenceData*, 0x78>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__playingCampaignRichPresenceData(::GlobalNamespace::PlayingCampaignRichPresenceData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayingCampaignRichPresenceData*, 0x80>(this, std::forward<::GlobalNamespace::PlayingCampaignRichPresenceData*>(value));
}
constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData* GlobalNamespace::RichPresenceManager::__get__playingCampaignRichPresenceData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayingCampaignRichPresenceData*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayingCampaignRichPresenceData*> GlobalNamespace::RichPresenceManager::__get__playingCampaignRichPresenceData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayingCampaignRichPresenceData*, 0x80>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__playingTutorialPresenceData(::GlobalNamespace::PlayingTutorialPresenceData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayingTutorialPresenceData*, 0x88>(this, std::forward<::GlobalNamespace::PlayingTutorialPresenceData*>(value));
}
constexpr ::GlobalNamespace::PlayingTutorialPresenceData* GlobalNamespace::RichPresenceManager::__get__playingTutorialPresenceData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayingTutorialPresenceData*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayingTutorialPresenceData*> GlobalNamespace::RichPresenceManager::__get__playingTutorialPresenceData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayingTutorialPresenceData*, 0x88>(this);
}
constexpr void GlobalNamespace::RichPresenceManager::__set__currentPresenceData(::GlobalNamespace::IRichPresenceData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IRichPresenceData*, 0x90>(this, std::forward<::GlobalNamespace::IRichPresenceData*>(value));
}
constexpr ::GlobalNamespace::IRichPresenceData* GlobalNamespace::RichPresenceManager::__get__currentPresenceData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IRichPresenceData*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRichPresenceData*> GlobalNamespace::RichPresenceManager::__get__currentPresenceData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IRichPresenceData*, 0x90>(this);
}
inline void GlobalNamespace::RichPresenceManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange(::GlobalNamespace::MultiplayerGameState  newGameState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "HandleLobbyGameStateModelDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newGameState);
}
inline void GlobalNamespace::RichPresenceManager::SetMenuPresence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "SetMenuPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, ::Zenject::DiContainer*  diContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "HandleGameScenesManagerTransitionDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scenesTransitionSetupData, diContainer);
}
inline void GlobalNamespace::RichPresenceManager::HandleMultiplayerPartySizeChanged(int32_t  currentPartySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "HandleMultiplayerPartySizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentPartySize);
}
inline void GlobalNamespace::RichPresenceManager::HandleLobbyPlayerPermissionChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "HandleLobbyPlayerPermissionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::SetPresence(::GlobalNamespace::IRichPresenceData*  presenceData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "SetPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRichPresenceData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, presenceData);
}
inline void GlobalNamespace::RichPresenceManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::RichPresenceManager* GlobalNamespace::RichPresenceManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RichPresenceManager*>());
}
inline void GlobalNamespace::RichPresenceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
