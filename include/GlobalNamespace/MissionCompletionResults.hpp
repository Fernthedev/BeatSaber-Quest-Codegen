// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: MissionObjectiveResult
  class MissionObjectiveResult;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionCompletionResults
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionCompletionResults : public ::Il2CppObject {
    public:
    // public readonly LevelCompletionResults levelCompletionResults
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults*) == 0x8);
    // public readonly MissionObjectiveResult[] missionObjectiveResults
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::MissionObjectiveResult*>* missionObjectiveResults;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjectiveResult*>*) == 0x8);
    // Creating value type constructor for type: MissionCompletionResults
    MissionCompletionResults(GlobalNamespace::LevelCompletionResults* levelCompletionResults_ = {}, ::Array<GlobalNamespace::MissionObjectiveResult*>* missionObjectiveResults_ = {}) noexcept : levelCompletionResults{levelCompletionResults_}, missionObjectiveResults{missionObjectiveResults_} {}
    // Get instance field reference: public readonly LevelCompletionResults levelCompletionResults
    GlobalNamespace::LevelCompletionResults*& dyn_levelCompletionResults();
    // Get instance field reference: public readonly MissionObjectiveResult[] missionObjectiveResults
    ::Array<GlobalNamespace::MissionObjectiveResult*>*& dyn_missionObjectiveResults();
    // public System.Boolean get_IsMissionComplete()
    // Offset: 0x113D5C8
    bool get_IsMissionComplete();
    // public System.Void .ctor(LevelCompletionResults levelCompletionResults, MissionObjectiveResult[] missionObjectiveResults)
    // Offset: 0x113D648
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionCompletionResults* New_ctor(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Array<GlobalNamespace::MissionObjectiveResult*>* missionObjectiveResults) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionCompletionResults*, creationType>(levelCompletionResults, missionObjectiveResults)));
    }
  }; // MissionCompletionResults
  #pragma pack(pop)
  static check_size<sizeof(MissionCompletionResults), 24 + sizeof(::Array<GlobalNamespace::MissionObjectiveResult*>*)> __GlobalNamespace_MissionCompletionResultsSizeCheck;
  static_assert(sizeof(MissionCompletionResults) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionCompletionResults*, "", "MissionCompletionResults");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionCompletionResults::get_IsMissionComplete
// Il2CppName: get_IsMissionComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionCompletionResults::*)()>(&GlobalNamespace::MissionCompletionResults::get_IsMissionComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionCompletionResults*), "get_IsMissionComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
