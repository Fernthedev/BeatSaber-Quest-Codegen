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
  // Forward declaring type: MissionObjective
  class MissionObjective;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionObjectiveResult : public ::Il2CppObject {
    public:
    // private MissionObjective <missionObjective>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MissionObjective* missionObjective;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjective*) == 0x8);
    // private System.Boolean <cleared>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cleared and: value
    char __padding1[0x3] = {};
    // private System.Int32 <value>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MissionObjectiveResult
    MissionObjectiveResult(GlobalNamespace::MissionObjective* missionObjective_ = {}, bool cleared_ = {}, int value_ = {}) noexcept : missionObjective{missionObjective_}, cleared{cleared_}, value{value_} {}
    // Get instance field reference: private MissionObjective <missionObjective>k__BackingField
    GlobalNamespace::MissionObjective*& dyn_$missionObjective$k__BackingField();
    // Get instance field reference: private System.Boolean <cleared>k__BackingField
    bool& dyn_$cleared$k__BackingField();
    // Get instance field reference: private System.Int32 <value>k__BackingField
    int& dyn_$value$k__BackingField();
    // public MissionObjective get_missionObjective()
    // Offset: 0x114588C
    GlobalNamespace::MissionObjective* get_missionObjective();
    // private System.Void set_missionObjective(MissionObjective value)
    // Offset: 0x1145894
    void set_missionObjective(GlobalNamespace::MissionObjective* value);
    // public System.Boolean get_cleared()
    // Offset: 0x114589C
    bool get_cleared();
    // private System.Void set_cleared(System.Boolean value)
    // Offset: 0x11458A4
    void set_cleared(bool value);
    // public System.Int32 get_value()
    // Offset: 0x11458B0
    int get_value();
    // private System.Void set_value(System.Int32 value)
    // Offset: 0x11458B8
    void set_value(int value);
    // public System.Void .ctor(MissionObjective missionObjective, System.Boolean cleared, System.Int32 value)
    // Offset: 0x1145330
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::get_missionObjective
// Il2CppName: get_missionObjective
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjective* (GlobalNamespace::MissionObjectiveResult::*)()>(&GlobalNamespace::MissionObjectiveResult::get_missionObjective)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "get_missionObjective", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::set_missionObjective
// Il2CppName: set_missionObjective
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveResult::*)(GlobalNamespace::MissionObjective*)>(&GlobalNamespace::MissionObjectiveResult::set_missionObjective)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MissionObjective")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "set_missionObjective", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::get_cleared
// Il2CppName: get_cleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionObjectiveResult::*)()>(&GlobalNamespace::MissionObjectiveResult::get_cleared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "get_cleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::set_cleared
// Il2CppName: set_cleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveResult::*)(bool)>(&GlobalNamespace::MissionObjectiveResult::set_cleared)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "set_cleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MissionObjectiveResult::*)()>(&GlobalNamespace::MissionObjectiveResult::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveResult::*)(int)>(&GlobalNamespace::MissionObjectiveResult::set_value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveResult*), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
