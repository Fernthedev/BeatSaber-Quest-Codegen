// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HostGameServerLobbyFlowCoordinator
#include "GlobalNamespace/HostGameServerLobbyFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HostGameServerLobbyFlowCoordinator/<>c__DisplayClass23_1
  // [CompilerGeneratedAttribute] Offset: E124D8
  class HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.EventSystems.EventSystem eventSystem
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::EventSystems::EventSystem* eventSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::EventSystem*) == 0x8);
    // public HostGameServerLobbyFlowCoordinator/<>c__DisplayClass23_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass23_1
    $$c__DisplayClass23_1(UnityEngine::EventSystems::EventSystem* eventSystem_ = {}, GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0* CS$$$8__locals1_ = {}) noexcept : eventSystem{eventSystem_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // System.Void <Finish>b__0()
    // Offset: 0x10C2690
    void $Finish$b__0();
    // public System.Void .ctor()
    // Offset: 0x10C02DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1*, creationType>()));
    }
  }; // HostGameServerLobbyFlowCoordinator/<>c__DisplayClass23_1
  #pragma pack(pop)
  static check_size<sizeof(HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1), 24 + sizeof(GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_0*)> __GlobalNamespace_HostGameServerLobbyFlowCoordinator_$$c__DisplayClass23_1SizeCheck;
  static_assert(sizeof(HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1*, "", "HostGameServerLobbyFlowCoordinator/<>c__DisplayClass23_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1::$Finish$b__0
// Il2CppName: <Finish>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1::*)()>(&GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1::$Finish$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1*), "<Finish>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass23_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
