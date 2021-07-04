// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerNetworkFailReason
#include "GlobalNamespace/PlayerNetworkFailReason.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IMultiplayerLevelEndActionsPublisher
  class IMultiplayerLevelEndActionsPublisher {
    public:
    // Creating value type constructor for type: IMultiplayerLevelEndActionsPublisher
    IMultiplayerLevelEndActionsPublisher() noexcept {}
    // public System.Void add_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0xFFFFFFFF
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0xFFFFFFFF
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0xFFFFFFFF
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0xFFFFFFFF
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
  }; // IMultiplayerLevelEndActionsPublisher
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerLevelEndActionsPublisher*, "", "IMultiplayerLevelEndActionsPublisher");
// Writing includes for template specializations
#include "System/Action_1.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerLevelEndActionsPublisher::add_playerDidFinishEvent
// Il2CppName: add_playerDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerLevelEndActionsPublisher::*)(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::IMultiplayerLevelEndActionsPublisher::add_playerDidFinishEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerLevelEndActionsPublisher*), "add_playerDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerLevelEndActionsPublisher::remove_playerDidFinishEvent
// Il2CppName: remove_playerDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerLevelEndActionsPublisher::*)(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::IMultiplayerLevelEndActionsPublisher::remove_playerDidFinishEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerLevelEndActionsPublisher*), "remove_playerDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerLevelEndActionsPublisher::add_playerNetworkDidFailedEvent
// Il2CppName: add_playerNetworkDidFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerLevelEndActionsPublisher::*)(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)>(&GlobalNamespace::IMultiplayerLevelEndActionsPublisher::add_playerNetworkDidFailedEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerLevelEndActionsPublisher*), "add_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerLevelEndActionsPublisher::remove_playerNetworkDidFailedEvent
// Il2CppName: remove_playerNetworkDidFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerLevelEndActionsPublisher::*)(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)>(&GlobalNamespace::IMultiplayerLevelEndActionsPublisher::remove_playerNetworkDidFailedEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerLevelEndActionsPublisher*), "remove_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*>()});
  }
};
