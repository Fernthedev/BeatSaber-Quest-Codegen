// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionObjectiveChecker
#include "GlobalNamespace/MissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnergyMissionObjectiveChecker
  class EnergyMissionObjectiveChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnergyMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnergyMissionObjectiveChecker*, "", "EnergyMissionObjectiveChecker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: EnergyMissionObjectiveChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class EnergyMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    public:
    // [InjectAttribute] Offset: 0x10EA4F8
    // private GameEnergyCounter _energyCounter
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::GameEnergyCounter* energyCounter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameEnergyCounter*) == 0x8);
    public:
    // Get instance field reference: private GameEnergyCounter _energyCounter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameEnergyCounter*& dyn__energyCounter();
    // protected System.Void OnDestroy()
    // Offset: 0x1366A58
    void OnDestroy();
    // private System.Void HandleEnergyDidChange(System.Single energy)
    // Offset: 0x1366BD0
    void HandleEnergyDidChange(float energy);
    // private System.Void CheckAndUpdateStatus()
    // Offset: 0x1366C20
    void CheckAndUpdateStatus();
    // public System.Void .ctor()
    // Offset: 0x1366E50
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnergyMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnergyMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnergyMissionObjectiveChecker*, creationType>()));
    }
    // protected override System.Void Init()
    // Offset: 0x1366C9C
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
  }; // EnergyMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(EnergyMissionObjectiveChecker), 72 + sizeof(::GlobalNamespace::GameEnergyCounter*)> __GlobalNamespace_EnergyMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(EnergyMissionObjectiveChecker) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&GlobalNamespace::EnergyMissionObjectiveChecker::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnergyMissionObjectiveChecker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::HandleEnergyDidChange
// Il2CppName: HandleEnergyDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnergyMissionObjectiveChecker::*)(float)>(&GlobalNamespace::EnergyMissionObjectiveChecker::HandleEnergyDidChange)> {
  static const MethodInfo* get() {
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnergyMissionObjectiveChecker*), "HandleEnergyDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{energy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::CheckAndUpdateStatus
// Il2CppName: CheckAndUpdateStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&GlobalNamespace::EnergyMissionObjectiveChecker::CheckAndUpdateStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnergyMissionObjectiveChecker*), "CheckAndUpdateStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnergyMissionObjectiveChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&GlobalNamespace::EnergyMissionObjectiveChecker::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnergyMissionObjectiveChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
