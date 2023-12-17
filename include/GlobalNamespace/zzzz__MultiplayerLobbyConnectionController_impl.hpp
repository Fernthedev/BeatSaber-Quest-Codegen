#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
constexpr void GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::__MultiplayerLobbyConnectionController__LobbyConnectionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState  GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState  GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::Connecting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState  GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::Connected{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState  GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::ConnectionFailed{static_cast<int32_t>(0x3)};
constexpr void GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::__MultiplayerLobbyConnectionController__LobbyConnectionType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType  GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType  GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::PartyHost{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType  GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::PartyClient{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType  GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::QuickPlay{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.add_connectionSuccessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23614a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "add_connectionSuccessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.remove_connectionSuccessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2361540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "remove_connectionSuccessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.add_connectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23615dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "add_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.remove_connectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x236168c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "remove_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236173c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "get_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2361744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "set_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236174c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "get_connectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2361754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "set_connectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionFailedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectionFailedReason (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236175c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "get_connectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionFailedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2361764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "set_connectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.CreateParty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::CreateServerFormData)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x236176c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "CreateParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreateServerFormData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToParty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::StringW)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2361e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "ConnectToParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.CreateOrConnectToDestinationParty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::SelectMultiplayerLobbyDestination*)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2362170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "CreateOrConnectToDestinationParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::INetworkPlayer*, ::StringW)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2362584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "ConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToMatchmaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::SongPackMask, bool)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x23627c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "ConnectToMatchmaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.LeaveLobby
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2362af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "LeaveLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ClearCurrentConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2362b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "ClearCurrentConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2362ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "HandleMultiplayerSessionManagerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnectionFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2361bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "HandleMultiplayerSessionManagerConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnectionFailedWithRetry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2362e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "HandleMultiplayerSessionManagerConnectionFailedWithRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2362f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this, std::forward<::GlobalNamespace::IMultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerLobbyConnectionController::__get__multiplayerSessionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> GlobalNamespace::MultiplayerLobbyConnectionController::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x10>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x18>(this, std::forward<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* GlobalNamespace::MultiplayerLobbyConnectionController::__get__unifiedNetworkPlayerModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> GlobalNamespace::MultiplayerLobbyConnectionController::__get__unifiedNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IUnifiedNetworkPlayerModel*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set_connectionSuccessEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::MultiplayerLobbyConnectionController::__get_connectionSuccessEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::MultiplayerLobbyConnectionController::__get_connectionSuccessEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set_connectionFailedEvent(::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*, 0x28>(this, std::forward<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>* GlobalNamespace::MultiplayerLobbyConnectionController::__get_connectionFailedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*> GlobalNamespace::MultiplayerLobbyConnectionController::__get_connectionFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__connectionState_k__BackingField(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState, 0x30>(this, std::forward<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState>(value));
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState& GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionState_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState, 0x30>(this);
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState const& GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionState_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__connectionType_k__BackingField(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, 0x34>(this, std::forward<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>(value));
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType& GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionType_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, 0x34>(this);
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType const& GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, 0x34>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__connectionFailedReason_k__BackingField(::GlobalNamespace::ConnectionFailedReason  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ConnectionFailedReason, 0x38>(this, std::forward<::GlobalNamespace::ConnectionFailedReason>(value));
}
constexpr ::GlobalNamespace::ConnectionFailedReason& GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionFailedReason_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConnectionFailedReason, 0x38>(this);
}
constexpr ::GlobalNamespace::ConnectionFailedReason const& GlobalNamespace::MultiplayerLobbyConnectionController::__get__connectionFailedReason_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConnectionFailedReason, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__partyConfig(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*, 0x40>(this, std::forward<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*>(value));
}
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* GlobalNamespace::MultiplayerLobbyConnectionController::__get__partyConfig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*> GlobalNamespace::MultiplayerLobbyConnectionController::__get__partyConfig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__set__retryAttemptsLeft(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MultiplayerLobbyConnectionController::__get__retryAttemptsLeft()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::MultiplayerLobbyConnectionController::__get__retryAttemptsLeft() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "add_connectionSuccessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "remove_connectionSuccessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent(::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "add_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent(::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "remove_connectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType,::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "get_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "set_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "get_connectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "set_connectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::ConnectionFailedReason GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "get_connectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectionFailedReason, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason(::GlobalNamespace::ConnectionFailedReason  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "set_connectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty(::GlobalNamespace::CreateServerFormData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "CreateParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreateServerFormData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty(::StringW  serverCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "ConnectToParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serverCode);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty(::GlobalNamespace::SelectMultiplayerLobbyDestination*  lobbyDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "CreateOrConnectToDestinationParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lobbyDestination);
}
/// @param password: ::StringW (default: csnull)
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer(::GlobalNamespace::INetworkPlayer*  server, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "ConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, server, password);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking(::GlobalNamespace::BeatmapDifficultyMask  beatmapDifficultyMask, ::GlobalNamespace::SongPackMask  songPackMask, bool  allowSongSelection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "ConnectToMatchmaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapDifficultyMask, songPackMask, allowSongSelection);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "LeaveLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "ClearCurrentConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "HandleMultiplayerSessionManagerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed(::GlobalNamespace::ConnectionFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "HandleMultiplayerSessionManagerConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reason);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry(::GlobalNamespace::ConnectionFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            "HandleMultiplayerSessionManagerConnectionFailedWithRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reason);
}
inline ::GlobalNamespace::MultiplayerLobbyConnectionController* GlobalNamespace::MultiplayerLobbyConnectionController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLobbyConnectionController*>());
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
