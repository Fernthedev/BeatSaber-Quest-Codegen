// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: INetworkPlayerModel
#include "GlobalNamespace/INetworkPlayerModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IUnifiedNetworkPlayerModel
  // [TokenAttribute] Offset: FFFFFFFF
  class IUnifiedNetworkPlayerModel/*, public GlobalNamespace::INetworkPlayerModel*/ {
    public:
    // Creating value type constructor for type: IUnifiedNetworkPlayerModel
    IUnifiedNetworkPlayerModel() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModel
    operator GlobalNamespace::INetworkPlayerModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModel*>(this);
    }
    // public System.Boolean get_enableLocalNetwork()
    // Offset: 0xFFFFFFFF
    bool get_enableLocalNetwork();
    // public System.Void set_enableLocalNetwork(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_enableLocalNetwork(bool value);
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_publicServers()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_publicServers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_localNetworkPlayers()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_localNetworkPlayers();
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName();
    // public System.String get_secret()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_secret();
    // public System.String get_code()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_code();
    // public System.Void add_partyRefreshingEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_partyRefreshingEvent(System::Action* value);
    // public System.Void remove_partyRefreshingEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_partyRefreshingEvent(System::Action* value);
    // public System.Void SetServerFilter(BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0xFFFFFFFF
    void SetServerFilter(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.Void ResetMasterServerReachability()
    // Offset: 0xFFFFFFFF
    void ResetMasterServerReachability();
  }; // IUnifiedNetworkPlayerModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IUnifiedNetworkPlayerModel*, "", "IUnifiedNetworkPlayerModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::get_enableLocalNetwork
// Il2CppName: get_enableLocalNetwork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::IUnifiedNetworkPlayerModel::get_enableLocalNetwork)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "get_enableLocalNetwork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::set_enableLocalNetwork
// Il2CppName: set_enableLocalNetwork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnifiedNetworkPlayerModel::*)(bool)>(&GlobalNamespace::IUnifiedNetworkPlayerModel::set_enableLocalNetwork)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "set_enableLocalNetwork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::get_publicServers
// Il2CppName: get_publicServers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* (GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::IUnifiedNetworkPlayerModel::get_publicServers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "get_publicServers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::get_localNetworkPlayers
// Il2CppName: get_localNetworkPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* (GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::IUnifiedNetworkPlayerModel::get_localNetworkPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "get_localNetworkPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::IUnifiedNetworkPlayerModel::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::IUnifiedNetworkPlayerModel::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::get_secret
// Il2CppName: get_secret
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::IUnifiedNetworkPlayerModel::get_secret)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "get_secret", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::get_code
// Il2CppName: get_code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::IUnifiedNetworkPlayerModel::get_code)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "get_code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::add_partyRefreshingEvent
// Il2CppName: add_partyRefreshingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnifiedNetworkPlayerModel::*)(System::Action*)>(&GlobalNamespace::IUnifiedNetworkPlayerModel::add_partyRefreshingEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "add_partyRefreshingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::remove_partyRefreshingEvent
// Il2CppName: remove_partyRefreshingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnifiedNetworkPlayerModel::*)(System::Action*)>(&GlobalNamespace::IUnifiedNetworkPlayerModel::remove_partyRefreshingEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "remove_partyRefreshingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::SetServerFilter
// Il2CppName: SetServerFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnifiedNetworkPlayerModel::*)(GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::IUnifiedNetworkPlayerModel::SetServerFilter)> {
  static const MethodInfo* get() {
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "SetServerFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnifiedNetworkPlayerModel::ResetMasterServerReachability
// Il2CppName: ResetMasterServerReachability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&GlobalNamespace::IUnifiedNetworkPlayerModel::ResetMasterServerReachability)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnifiedNetworkPlayerModel*), "ResetMasterServerReachability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
