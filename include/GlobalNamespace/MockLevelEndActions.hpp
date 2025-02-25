// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ILevelEndActions
#include "GlobalNamespace/ILevelEndActions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MockLevelEndActions
  // [TokenAttribute] Offset: FFFFFFFF
  class MockLevelEndActions : public ::Il2CppObject/*, public GlobalNamespace::ILevelEndActions*/ {
    public:
    // private System.Action levelFailedEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action* levelFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action levelFinishedEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* levelFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: MockLevelEndActions
    MockLevelEndActions(System::Action* levelFailedEvent_ = {}, System::Action* levelFinishedEvent_ = {}) noexcept : levelFailedEvent{levelFailedEvent_}, levelFinishedEvent{levelFinishedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelEndActions
    operator GlobalNamespace::ILevelEndActions() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelEndActions*>(this);
    }
    // Get instance field reference: private System.Action levelFailedEvent
    System::Action*& dyn_levelFailedEvent();
    // Get instance field reference: private System.Action levelFinishedEvent
    System::Action*& dyn_levelFinishedEvent();
    // public System.Void add_levelFailedEvent(System.Action value)
    // Offset: 0x114981C
    void add_levelFailedEvent(System::Action* value);
    // public System.Void remove_levelFailedEvent(System.Action value)
    // Offset: 0x11498C0
    void remove_levelFailedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action value)
    // Offset: 0x1149964
    void add_levelFinishedEvent(System::Action* value);
    // public System.Void remove_levelFinishedEvent(System.Action value)
    // Offset: 0x1149A08
    void remove_levelFinishedEvent(System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x1149AAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockLevelEndActions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockLevelEndActions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockLevelEndActions*, creationType>()));
    }
  }; // MockLevelEndActions
  #pragma pack(pop)
  static check_size<sizeof(MockLevelEndActions), 24 + sizeof(System::Action*)> __GlobalNamespace_MockLevelEndActionsSizeCheck;
  static_assert(sizeof(MockLevelEndActions) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockLevelEndActions*, "", "MockLevelEndActions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::add_levelFailedEvent
// Il2CppName: add_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockLevelEndActions::*)(System::Action*)>(&GlobalNamespace::MockLevelEndActions::add_levelFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockLevelEndActions*), "add_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::remove_levelFailedEvent
// Il2CppName: remove_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockLevelEndActions::*)(System::Action*)>(&GlobalNamespace::MockLevelEndActions::remove_levelFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockLevelEndActions*), "remove_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::add_levelFinishedEvent
// Il2CppName: add_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockLevelEndActions::*)(System::Action*)>(&GlobalNamespace::MockLevelEndActions::add_levelFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockLevelEndActions*), "add_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::remove_levelFinishedEvent
// Il2CppName: remove_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockLevelEndActions::*)(System::Action*)>(&GlobalNamespace::MockLevelEndActions::remove_levelFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockLevelEndActions*), "remove_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockLevelEndActions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
