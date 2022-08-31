// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: ILobbyStateDataModel
#include "GlobalNamespace/ILobbyStateDataModel.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IUnifiedNetworkPlayerModel
  class IUnifiedNetworkPlayerModel;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LobbyStateDataModel
  class LobbyStateDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LobbyStateDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyStateDataModel*, "", "LobbyStateDataModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: LobbyStateDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class LobbyStateDataModel : public ::Il2CppObject/*, public ::System::IDisposable, public ::GlobalNamespace::ILobbyStateDataModel*/ {
    public:
    public:
    // [InjectAttribute] Offset: 0x10E454C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10E455C
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IUnifiedNetworkPlayerModel*) == 0x8);
    // private System.Collections.Generic.List`1<IConnectedPlayer> _connectedPlayers
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* connectedPlayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,IConnectedPlayer> _connectedPlayersById
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>* connectedPlayersById;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private GameplayServerConfiguration _configuration
    // Size: 0x18
    // Offset: 0x30
    ::GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // private System.Action`1<IConnectedPlayer> playerConnectedEvent
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::ILobbyStateDataModel
    operator ::GlobalNamespace::ILobbyStateDataModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ILobbyStateDataModel*>(this);
    }
    // Creating interface conversion operator: i_ILobbyStateDataModel
    inline ::GlobalNamespace::ILobbyStateDataModel* i_ILobbyStateDataModel() noexcept {
      return reinterpret_cast<::GlobalNamespace::ILobbyStateDataModel*>(this);
    }
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IUnifiedNetworkPlayerModel*& dyn__unifiedNetworkPlayerModel();
    // Get instance field reference: private System.Collections.Generic.List`1<IConnectedPlayer> _connectedPlayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& dyn__connectedPlayers();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,IConnectedPlayer> _connectedPlayersById
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>*& dyn__connectedPlayersById();
    // Get instance field reference: private GameplayServerConfiguration _configuration
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerConfiguration& dyn__configuration();
    // Get instance field reference: private System.Action`1<IConnectedPlayer> playerConnectedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& dyn_playerConnectedEvent();
    // Get instance field reference: private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& dyn_playerDisconnectedEvent();
    // public System.Boolean get_isConnected()
    // Offset: 0x155E6D0
    bool get_isConnected();
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0x155E784
    ::GlobalNamespace::IConnectedPlayer* get_localPlayer();
    // public System.Collections.Generic.List`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0x155E834
    ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_rawConnectedPlayers()
    // Offset: 0x155E83C
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_rawConnectedPlayers();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x155E8F0
    ::GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x155E440
    void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x155E4E4
    void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x155E588
    void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x155E62C
    void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void .ctor()
    // Offset: 0x155F3EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyStateDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LobbyStateDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyStateDataModel*, creationType>()));
    }
    // public System.Void Activate()
    // Offset: 0x155E904
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x155EF7C
    void Deactivate();
    // public System.Void Dispose()
    // Offset: 0x155F10C
    void Dispose();
    // public IConnectedPlayer GetPlayerById(System.String userId)
    // Offset: 0x155F110
    ::GlobalNamespace::IConnectedPlayer* GetPlayerById(::StringW userId);
    // private System.Void HandleMultiplayerSessionManagerPlayerConnected(IConnectedPlayer player)
    // Offset: 0x155F1A0
    void HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandleMultiplayerSessionManagerPlayerDisconnected(IConnectedPlayer player)
    // Offset: 0x155F2C8
    void HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);
  }; // LobbyStateDataModel
  #pragma pack(pop)
  static check_size<sizeof(LobbyStateDataModel), 80 + sizeof(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)> __GlobalNamespace_LobbyStateDataModelSizeCheck;
  static_assert(sizeof(LobbyStateDataModel) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_isConnected
// Il2CppName: get_isConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_isConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "get_isConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_localPlayer
// Il2CppName: get_localPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_localPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "get_localPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_connectedPlayers
// Il2CppName: get_connectedPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_connectedPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "get_connectedPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers
// Il2CppName: get_rawConnectedPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "get_rawConnectedPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent
// Il2CppName: add_playerConnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "add_playerConnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent
// Il2CppName: remove_playerConnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "remove_playerConnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent
// Il2CppName: add_playerDisconnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "add_playerDisconnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent
// Il2CppName: remove_playerDisconnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "remove_playerDisconnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)()>(&GlobalNamespace::LobbyStateDataModel::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::GetPlayerById
// Il2CppName: GetPlayerById
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (GlobalNamespace::LobbyStateDataModel::*)(::StringW)>(&GlobalNamespace::LobbyStateDataModel::GetPlayerById)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "GetPlayerById", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected
// Il2CppName: HandleMultiplayerSessionManagerPlayerConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "HandleMultiplayerSessionManagerPlayerConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected
// Il2CppName: HandleMultiplayerSessionManagerPlayerDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyStateDataModel::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyStateDataModel*), "HandleMultiplayerSessionManagerPlayerDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
