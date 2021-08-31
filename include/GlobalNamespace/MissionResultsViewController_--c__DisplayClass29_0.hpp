// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionResultsViewController
#include "GlobalNamespace/MissionResultsViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: MissionObjectiveResult
  class MissionObjectiveResult;
  // Forward declaring type: ResultObjectiveListItem
  class ResultObjectiveListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionResultsViewController/<>c__DisplayClass29_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MissionResultsViewController::$$c__DisplayClass29_0 : public ::Il2CppObject {
    public:
    // public System.Boolean levelCleared
    // Size: 0x1
    // Offset: 0x10
    bool levelCleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: levelCleared and: $$4__this
    char __padding0[0x7] = {};
    // public MissionResultsViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionResultsViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionResultsViewController*) == 0x8);
    // public MissionObjective[] missionObjectives
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjective*>*) == 0x8);
    // public MissionObjectiveResult[] missionObjectiveResults
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::MissionObjectiveResult*>* missionObjectiveResults;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjectiveResult*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass29_0
    $$c__DisplayClass29_0(bool levelCleared_ = {}, GlobalNamespace::MissionResultsViewController* $$4__this_ = {}, ::Array<GlobalNamespace::MissionObjective*>* missionObjectives_ = {}, ::Array<GlobalNamespace::MissionObjectiveResult*>* missionObjectiveResults_ = {}) noexcept : levelCleared{levelCleared_}, $$4__this{$$4__this_}, missionObjectives{missionObjectives_}, missionObjectiveResults{missionObjectiveResults_} {}
    // Get instance field: public System.Boolean levelCleared
    bool _get_levelCleared();
    // Set instance field: public System.Boolean levelCleared
    void _set_levelCleared(bool value);
    // Get instance field: public MissionResultsViewController <>4__this
    GlobalNamespace::MissionResultsViewController* _get_$$4__this();
    // Set instance field: public MissionResultsViewController <>4__this
    void _set_$$4__this(GlobalNamespace::MissionResultsViewController* value);
    // Get instance field: public MissionObjective[] missionObjectives
    ::Array<GlobalNamespace::MissionObjective*>* _get_missionObjectives();
    // Set instance field: public MissionObjective[] missionObjectives
    void _set_missionObjectives(::Array<GlobalNamespace::MissionObjective*>* value);
    // Get instance field: public MissionObjectiveResult[] missionObjectiveResults
    ::Array<GlobalNamespace::MissionObjectiveResult*>* _get_missionObjectiveResults();
    // Set instance field: public MissionObjectiveResult[] missionObjectiveResults
    void _set_missionObjectiveResults(::Array<GlobalNamespace::MissionObjectiveResult*>* value);
    // System.Void <SetDataToUI>b__0(System.Int32 idx, ResultObjectiveListItem objectiveListItem)
    // Offset: 0x11D93FC
    void $SetDataToUI$b__0(int idx, GlobalNamespace::ResultObjectiveListItem* objectiveListItem);
    // public System.Void .ctor()
    // Offset: 0x11D9324
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionResultsViewController::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionResultsViewController::$$c__DisplayClass29_0*, creationType>()));
    }
  }; // MissionResultsViewController/<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(MissionResultsViewController::$$c__DisplayClass29_0), 40 + sizeof(::Array<GlobalNamespace::MissionObjectiveResult*>*)> __GlobalNamespace_MissionResultsViewController_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(MissionResultsViewController::$$c__DisplayClass29_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0*, "", "MissionResultsViewController/<>c__DisplayClass29_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0::$SetDataToUI$b__0
// Il2CppName: <SetDataToUI>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0::*)(int, GlobalNamespace::ResultObjectiveListItem*)>(&GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0::$SetDataToUI$b__0)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* objectiveListItem = &::il2cpp_utils::GetClassFromName("", "ResultObjectiveListItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0*), "<SetDataToUI>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, objectiveListItem});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
