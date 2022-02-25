// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Deeplink
  class Deeplink;
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
  // Forward declaring type: IDeeplinkManager
  class IDeeplinkManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::IDeeplinkManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDeeplinkManager*, "", "IDeeplinkManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IDeeplinkManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IDeeplinkManager {
    public:
    // public Deeplink get_currentDeeplink()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::Deeplink* get_currentDeeplink();
    // public System.Void add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0xFFFFFFFF
    void add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public System.Void remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0xFFFFFFFF
    void remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
  }; // IDeeplinkManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IDeeplinkManager::get_currentDeeplink
// Il2CppName: get_currentDeeplink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::Deeplink* (GlobalNamespace::IDeeplinkManager::*)()>(&GlobalNamespace::IDeeplinkManager::get_currentDeeplink)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDeeplinkManager*), "get_currentDeeplink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDeeplinkManager::add_didReceiveDeeplinkEvent
// Il2CppName: add_didReceiveDeeplinkEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IDeeplinkManager::*)(System::Action_1<GlobalNamespace::Deeplink*>*)>(&GlobalNamespace::IDeeplinkManager::add_didReceiveDeeplinkEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "Deeplink")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDeeplinkManager*), "add_didReceiveDeeplinkEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDeeplinkManager::remove_didReceiveDeeplinkEvent
// Il2CppName: remove_didReceiveDeeplinkEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IDeeplinkManager::*)(System::Action_1<GlobalNamespace::Deeplink*>*)>(&GlobalNamespace::IDeeplinkManager::remove_didReceiveDeeplinkEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "Deeplink")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDeeplinkManager*), "remove_didReceiveDeeplinkEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
