// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveResult
  class MissionObjectiveResult : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE176D0
    // private MissionObjective <missionObjective>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MissionObjective* missionObjective;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjective*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE176E0
    // private System.Boolean <cleared>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cleared and: value
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE176F0
    // private System.Int32 <value>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MissionObjectiveResult
    MissionObjectiveResult(GlobalNamespace::MissionObjective* missionObjective_ = {}, bool cleared_ = {}, int value_ = {}) noexcept : missionObjective{missionObjective_}, cleared{cleared_}, value{value_} {}
    // public MissionObjective get_missionObjective()
    // Offset: 0x109B208
    GlobalNamespace::MissionObjective* get_missionObjective();
    // private System.Void set_missionObjective(MissionObjective value)
    // Offset: 0x109B210
    void set_missionObjective(GlobalNamespace::MissionObjective* value);
    // public System.Boolean get_cleared()
    // Offset: 0x109B218
    bool get_cleared();
    // private System.Void set_cleared(System.Boolean value)
    // Offset: 0x109B220
    void set_cleared(bool value);
    // public System.Int32 get_value()
    // Offset: 0x109B22C
    int get_value();
    // private System.Void set_value(System.Int32 value)
    // Offset: 0x109B234
    void set_value(int value);
    // public System.Void .ctor(MissionObjective missionObjective, System.Boolean cleared, System.Int32 value)
    // Offset: 0x109ACAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveResult* New_ctor(GlobalNamespace::MissionObjective* missionObjective, bool cleared, int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjectiveResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveResult*, creationType>(missionObjective, cleared, value)));
    }
  }; // MissionObjectiveResult
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectiveResult), 28 + sizeof(int)> __GlobalNamespace_MissionObjectiveResultSizeCheck;
  static_assert(sizeof(MissionObjectiveResult) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveResult*, "", "MissionObjectiveResult");
// Writing includes for template specializations
#include "GlobalNamespace/MissionObjective.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::get_missionObjective
// Il2CppName: get_missionObjective
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjective* (GlobalNamespace::MissionObjectiveResult::*)()>(&GlobalNamespace::MissionObjectiveResult::get_missionObjective)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "get_missionObjective", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::set_missionObjective
// Il2CppName: set_missionObjective
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveResult::*)(GlobalNamespace::MissionObjective*)>(&GlobalNamespace::MissionObjectiveResult::set_missionObjective)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "set_missionObjective", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionObjective*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::get_cleared
// Il2CppName: get_cleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionObjectiveResult::*)()>(&GlobalNamespace::MissionObjectiveResult::get_cleared)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "get_cleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::set_cleared
// Il2CppName: set_cleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveResult::*)(bool)>(&GlobalNamespace::MissionObjectiveResult::set_cleared)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "set_cleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MissionObjectiveResult::*)()>(&GlobalNamespace::MissionObjectiveResult::get_value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveResult::*)(int)>(&GlobalNamespace::MissionObjectiveResult::set_value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
