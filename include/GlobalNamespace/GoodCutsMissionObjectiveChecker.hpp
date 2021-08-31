// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: GoodCutsMissionObjectiveChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class GoodCutsMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xE397E4
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // Creating value type constructor for type: GoodCutsMissionObjectiveChecker
    GoodCutsMissionObjectiveChecker(GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}) noexcept : beatmapObjectManager{beatmapObjectManager_} {}
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // protected System.Void OnDestroy()
    // Offset: 0x1111EFC
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x1111F94
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0x111200C
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GoodCutsMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GoodCutsMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GoodCutsMissionObjectiveChecker*, creationType>()));
    }
    // protected override System.Void Init()
    // Offset: 0x1111E04
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
  }; // GoodCutsMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(GoodCutsMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::BeatmapObjectManager*)> __GlobalNamespace_GoodCutsMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(GoodCutsMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GoodCutsMissionObjectiveChecker*, "", "GoodCutsMissionObjectiveChecker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GoodCutsMissionObjectiveChecker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GoodCutsMissionObjectiveChecker::*)()>(&GlobalNamespace::GoodCutsMissionObjectiveChecker::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GoodCutsMissionObjectiveChecker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GoodCutsMissionObjectiveChecker::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GoodCutsMissionObjectiveChecker::*)(GlobalNamespace::NoteController*, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::GoodCutsMissionObjectiveChecker::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GoodCutsMissionObjectiveChecker*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GoodCutsMissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GoodCutsMissionObjectiveChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GoodCutsMissionObjectiveChecker::*)()>(&GlobalNamespace::GoodCutsMissionObjectiveChecker::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GoodCutsMissionObjectiveChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
