// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDeeplinkManager
#include "GlobalNamespace/IDeeplinkManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: Deeplink
  class Deeplink;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TestDeeplinkManager
  class TestDeeplinkManager : public ::Il2CppObject/*, public GlobalNamespace::IDeeplinkManager*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE16150
    // private System.Action`1<Deeplink> didReceiveDeeplinkEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::Deeplink*>* didReceiveDeeplinkEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::Deeplink*>*) == 0x8);
    // private Deeplink _currentDeeplink
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Deeplink* currentDeeplink;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Deeplink*) == 0x8);
    // Creating value type constructor for type: TestDeeplinkManager
    TestDeeplinkManager(System::Action_1<GlobalNamespace::Deeplink*>* didReceiveDeeplinkEvent_ = {}, GlobalNamespace::Deeplink* currentDeeplink_ = {}) noexcept : didReceiveDeeplinkEvent{didReceiveDeeplinkEvent_}, currentDeeplink{currentDeeplink_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDeeplinkManager
    operator GlobalNamespace::IDeeplinkManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDeeplinkManager*>(this);
    }
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE16160
    // Get static field: static public TestDeeplinkManager instance
    static GlobalNamespace::TestDeeplinkManager* _get_instance();
    // Set static field: static public TestDeeplinkManager instance
    static void _set_instance(GlobalNamespace::TestDeeplinkManager* value);
    // public System.Void add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0x116762C
    void add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public System.Void remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0x11676D0
    void remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink*>* value);
    // public Deeplink get_currentDeeplink()
    // Offset: 0x1167774
    GlobalNamespace::Deeplink* get_currentDeeplink();
    // public System.Void set_currentDeeplink(Deeplink value)
    // Offset: 0x116777C
    void set_currentDeeplink(GlobalNamespace::Deeplink* value);
    // static private System.Void .cctor()
    // Offset: 0x1167834
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x116782C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestDeeplinkManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestDeeplinkManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestDeeplinkManager*, creationType>()));
    }
  }; // TestDeeplinkManager
  #pragma pack(pop)
  static check_size<sizeof(TestDeeplinkManager), 24 + sizeof(GlobalNamespace::Deeplink*)> __GlobalNamespace_TestDeeplinkManagerSizeCheck;
  static_assert(sizeof(TestDeeplinkManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestDeeplinkManager*, "", "TestDeeplinkManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestDeeplinkManager::add_didReceiveDeeplinkEvent
// Il2CppName: add_didReceiveDeeplinkEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestDeeplinkManager::*)(System::Action_1<GlobalNamespace::Deeplink*>*)>(&GlobalNamespace::TestDeeplinkManager::add_didReceiveDeeplinkEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "Deeplink")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestDeeplinkManager*), "add_didReceiveDeeplinkEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestDeeplinkManager::remove_didReceiveDeeplinkEvent
// Il2CppName: remove_didReceiveDeeplinkEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestDeeplinkManager::*)(System::Action_1<GlobalNamespace::Deeplink*>*)>(&GlobalNamespace::TestDeeplinkManager::remove_didReceiveDeeplinkEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "Deeplink")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestDeeplinkManager*), "remove_didReceiveDeeplinkEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestDeeplinkManager::get_currentDeeplink
// Il2CppName: get_currentDeeplink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::Deeplink* (GlobalNamespace::TestDeeplinkManager::*)()>(&GlobalNamespace::TestDeeplinkManager::get_currentDeeplink)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestDeeplinkManager*), "get_currentDeeplink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestDeeplinkManager::set_currentDeeplink
// Il2CppName: set_currentDeeplink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestDeeplinkManager::*)(GlobalNamespace::Deeplink*)>(&GlobalNamespace::TestDeeplinkManager::set_currentDeeplink)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "Deeplink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestDeeplinkManager*), "set_currentDeeplink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestDeeplinkManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::TestDeeplinkManager::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestDeeplinkManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestDeeplinkManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
