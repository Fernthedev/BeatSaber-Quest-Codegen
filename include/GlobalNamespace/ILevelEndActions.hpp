// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ILevelEndActions
  class ILevelEndActions {
    public:
    // Creating value type constructor for type: ILevelEndActions
    ILevelEndActions() noexcept {}
    // public System.Void add_levelFailedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_levelFailedEvent(System::Action* value);
    // public System.Void remove_levelFailedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_levelFailedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_levelFinishedEvent(System::Action* value);
    // public System.Void remove_levelFinishedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_levelFinishedEvent(System::Action* value);
  }; // ILevelEndActions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILevelEndActions*, "", "ILevelEndActions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ILevelEndActions::add_levelFailedEvent
// Il2CppName: add_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILevelEndActions::*)(System::Action*)>(&GlobalNamespace::ILevelEndActions::add_levelFailedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILevelEndActions*), "add_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILevelEndActions::remove_levelFailedEvent
// Il2CppName: remove_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILevelEndActions::*)(System::Action*)>(&GlobalNamespace::ILevelEndActions::remove_levelFailedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILevelEndActions*), "remove_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILevelEndActions::add_levelFinishedEvent
// Il2CppName: add_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILevelEndActions::*)(System::Action*)>(&GlobalNamespace::ILevelEndActions::add_levelFinishedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILevelEndActions*), "add_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILevelEndActions::remove_levelFinishedEvent
// Il2CppName: remove_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILevelEndActions::*)(System::Action*)>(&GlobalNamespace::ILevelEndActions::remove_levelFinishedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILevelEndActions*), "remove_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
