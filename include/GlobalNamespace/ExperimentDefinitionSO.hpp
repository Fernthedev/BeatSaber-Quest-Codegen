// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Group because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: ExperimentDefinitionSO
  class ExperimentDefinitionSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::ExperimentDefinitionSO::Group
    struct Group;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: ExperimentDefinitionSO/Group
    struct Group/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Group
      constexpr Group(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public ExperimentDefinitionSO/Group None
      static constexpr const int None = 0;
      // Get static field: static public ExperimentDefinitionSO/Group None
      static GlobalNamespace::ExperimentDefinitionSO::Group _get_None();
      // Set static field: static public ExperimentDefinitionSO/Group None
      static void _set_None(GlobalNamespace::ExperimentDefinitionSO::Group value);
      // static field const value: static public ExperimentDefinitionSO/Group Control
      static constexpr const int Control = 1;
      // Get static field: static public ExperimentDefinitionSO/Group Control
      static GlobalNamespace::ExperimentDefinitionSO::Group _get_Control();
      // Set static field: static public ExperimentDefinitionSO/Group Control
      static void _set_Control(GlobalNamespace::ExperimentDefinitionSO::Group value);
      // static field const value: static public ExperimentDefinitionSO/Group Test
      static constexpr const int Test = 2;
      // Get static field: static public ExperimentDefinitionSO/Group Test
      static GlobalNamespace::ExperimentDefinitionSO::Group _get_Test();
      // Set static field: static public ExperimentDefinitionSO/Group Test
      static void _set_Test(GlobalNamespace::ExperimentDefinitionSO::Group value);
    }; // ExperimentDefinitionSO/Group
    #pragma pack(pop)
    static check_size<sizeof(ExperimentDefinitionSO::Group), 0 + sizeof(int)> __GlobalNamespace_ExperimentDefinitionSO_GroupSizeCheck;
    static_assert(sizeof(ExperimentDefinitionSO::Group) == 0x4);
    // private System.String _experimentName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* experimentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _controlGroupSize
    // Size: 0x4
    // Offset: 0x20
    float controlGroupSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: controlGroupSize and: salt
    char __padding1[0x4] = {};
    // private System.String _salt
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* salt;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private ExperimentDefinitionSO/Group _currentUserTreatmentGroup
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::ExperimentDefinitionSO::Group currentUserTreatmentGroup;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ExperimentDefinitionSO::Group) == 0x4);
    // Creating value type constructor for type: ExperimentDefinitionSO
    ExperimentDefinitionSO(::Il2CppString* experimentName_ = {}, float controlGroupSize_ = {}, ::Il2CppString* salt_ = {}, GlobalNamespace::ExperimentDefinitionSO::Group currentUserTreatmentGroup_ = {}) noexcept : experimentName{experimentName_}, controlGroupSize{controlGroupSize_}, salt{salt_}, currentUserTreatmentGroup{currentUserTreatmentGroup_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Single get_controlGroupSize()
    // Offset: 0x1040F10
    float get_controlGroupSize();
    // public System.String get_experimentName()
    // Offset: 0x1040F18
    ::Il2CppString* get_experimentName();
    // public ExperimentDefinitionSO/Group get_currentUserTreatmentGroup()
    // Offset: 0x1040F20
    GlobalNamespace::ExperimentDefinitionSO::Group get_currentUserTreatmentGroup();
    // public System.Void ComputeCurrentUserTreatment(System.String userId)
    // Offset: 0x10376AC
    void ComputeCurrentUserTreatment(::Il2CppString* userId);
    // public System.Void ForceSetTreatmentGroup(ExperimentDefinitionSO/Group group)
    // Offset: 0x104110C
    void ForceSetTreatmentGroup(GlobalNamespace::ExperimentDefinitionSO::Group group);
    // private ExperimentDefinitionSO/Group AbSplit(System.String userId)
    // Offset: 0x1040F28
    GlobalNamespace::ExperimentDefinitionSO::Group AbSplit(::Il2CppString* userId);
    // public System.Void .ctor()
    // Offset: 0x1041114
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExperimentDefinitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExperimentDefinitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExperimentDefinitionSO*, creationType>()));
    }
  }; // ExperimentDefinitionSO
  #pragma pack(pop)
  static check_size<sizeof(ExperimentDefinitionSO), 48 + sizeof(GlobalNamespace::ExperimentDefinitionSO::Group)> __GlobalNamespace_ExperimentDefinitionSOSizeCheck;
  static_assert(sizeof(ExperimentDefinitionSO) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExperimentDefinitionSO*, "", "ExperimentDefinitionSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExperimentDefinitionSO::Group, "", "ExperimentDefinitionSO/Group");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ExperimentDefinitionSO::get_controlGroupSize
// Il2CppName: get_controlGroupSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ExperimentDefinitionSO::*)()>(&GlobalNamespace::ExperimentDefinitionSO::get_controlGroupSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExperimentDefinitionSO*), "get_controlGroupSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExperimentDefinitionSO::get_experimentName
// Il2CppName: get_experimentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ExperimentDefinitionSO::*)()>(&GlobalNamespace::ExperimentDefinitionSO::get_experimentName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExperimentDefinitionSO*), "get_experimentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExperimentDefinitionSO::get_currentUserTreatmentGroup
// Il2CppName: get_currentUserTreatmentGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ExperimentDefinitionSO::Group (GlobalNamespace::ExperimentDefinitionSO::*)()>(&GlobalNamespace::ExperimentDefinitionSO::get_currentUserTreatmentGroup)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExperimentDefinitionSO*), "get_currentUserTreatmentGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExperimentDefinitionSO::ComputeCurrentUserTreatment
// Il2CppName: ComputeCurrentUserTreatment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ExperimentDefinitionSO::*)(::Il2CppString*)>(&GlobalNamespace::ExperimentDefinitionSO::ComputeCurrentUserTreatment)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExperimentDefinitionSO*), "ComputeCurrentUserTreatment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExperimentDefinitionSO::ForceSetTreatmentGroup
// Il2CppName: ForceSetTreatmentGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ExperimentDefinitionSO::*)(GlobalNamespace::ExperimentDefinitionSO::Group)>(&GlobalNamespace::ExperimentDefinitionSO::ForceSetTreatmentGroup)> {
  const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("", "ExperimentDefinitionSO/Group")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExperimentDefinitionSO*), "ForceSetTreatmentGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExperimentDefinitionSO::AbSplit
// Il2CppName: AbSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ExperimentDefinitionSO::Group (GlobalNamespace::ExperimentDefinitionSO::*)(::Il2CppString*)>(&GlobalNamespace::ExperimentDefinitionSO::AbSplit)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExperimentDefinitionSO*), "AbSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExperimentDefinitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
