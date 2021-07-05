// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
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
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IDestinationRequestManager
  class IDestinationRequestManager {
    public:
    // Creating value type constructor for type: IDestinationRequestManager
    IDestinationRequestManager() noexcept {}
    // public System.Void add_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    // Offset: 0xFFFFFFFF
    void add_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value);
    // public System.Void remove_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    // Offset: 0xFFFFFFFF
    void remove_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value);
    // public MenuDestination get_currentMenuDestinationRequest()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MenuDestination* get_currentMenuDestinationRequest();
    // public System.Void set_currentMenuDestinationRequest(MenuDestination value)
    // Offset: 0xFFFFFFFF
    void set_currentMenuDestinationRequest(GlobalNamespace::MenuDestination* value);
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear();
  }; // IDestinationRequestManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDestinationRequestManager*, "", "IDestinationRequestManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IDestinationRequestManager::add_didSendMenuDestinationRequestEvent
// Il2CppName: add_didSendMenuDestinationRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IDestinationRequestManager::*)(System::Action_1<GlobalNamespace::MenuDestination*>*)>(&GlobalNamespace::IDestinationRequestManager::add_didSendMenuDestinationRequestEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MenuDestination")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDestinationRequestManager*), "add_didSendMenuDestinationRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDestinationRequestManager::remove_didSendMenuDestinationRequestEvent
// Il2CppName: remove_didSendMenuDestinationRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IDestinationRequestManager::*)(System::Action_1<GlobalNamespace::MenuDestination*>*)>(&GlobalNamespace::IDestinationRequestManager::remove_didSendMenuDestinationRequestEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MenuDestination")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDestinationRequestManager*), "remove_didSendMenuDestinationRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDestinationRequestManager::get_currentMenuDestinationRequest
// Il2CppName: get_currentMenuDestinationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MenuDestination* (GlobalNamespace::IDestinationRequestManager::*)()>(&GlobalNamespace::IDestinationRequestManager::get_currentMenuDestinationRequest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDestinationRequestManager*), "get_currentMenuDestinationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDestinationRequestManager::set_currentMenuDestinationRequest
// Il2CppName: set_currentMenuDestinationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IDestinationRequestManager::*)(GlobalNamespace::MenuDestination*)>(&GlobalNamespace::IDestinationRequestManager::set_currentMenuDestinationRequest)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MenuDestination")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDestinationRequestManager*), "set_currentMenuDestinationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDestinationRequestManager::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IDestinationRequestManager::*)()>(&GlobalNamespace::IDestinationRequestManager::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDestinationRequestManager*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
