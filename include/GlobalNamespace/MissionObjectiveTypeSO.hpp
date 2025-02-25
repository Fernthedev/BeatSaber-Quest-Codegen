// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: ObjectiveValueFormatterSO
  class ObjectiveValueFormatterSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveTypeSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionObjectiveTypeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // [LocalizationKeyAttribute] Offset: 0xE3A3C0
    // private System.String _objectiveName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* objectiveName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _noConditionValue
    // Size: 0x1
    // Offset: 0x20
    bool noConditionValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noConditionValue and: objectiveValueFormater
    char __padding1[0x7] = {};
    // private ObjectiveValueFormatterSO _objectiveValueFormater
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ObjectiveValueFormatterSO* objectiveValueFormater;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObjectiveValueFormatterSO*) == 0x8);
    // Creating value type constructor for type: MissionObjectiveTypeSO
    MissionObjectiveTypeSO(::Il2CppString* objectiveName_ = {}, bool noConditionValue_ = {}, GlobalNamespace::ObjectiveValueFormatterSO* objectiveValueFormater_ = {}) noexcept : objectiveName{objectiveName_}, noConditionValue{noConditionValue_}, objectiveValueFormater{objectiveValueFormater_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _objectiveName
    ::Il2CppString*& dyn__objectiveName();
    // Get instance field reference: private System.Boolean _noConditionValue
    bool& dyn__noConditionValue();
    // Get instance field reference: private ObjectiveValueFormatterSO _objectiveValueFormater
    GlobalNamespace::ObjectiveValueFormatterSO*& dyn__objectiveValueFormater();
    // public System.String get_objectiveName()
    // Offset: 0x11458C0
    ::Il2CppString* get_objectiveName();
    // public System.String get_objectiveNameLocalized()
    // Offset: 0x113F0FC
    ::Il2CppString* get_objectiveNameLocalized();
    // public System.Boolean get_noConditionValue()
    // Offset: 0x11458C8
    bool get_noConditionValue();
    // public ObjectiveValueFormatterSO get_objectiveValueFormater()
    // Offset: 0x11458D0
    GlobalNamespace::ObjectiveValueFormatterSO* get_objectiveValueFormater();
    // public System.Void .ctor()
    // Offset: 0x11458D8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveTypeSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjectiveTypeSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveTypeSO*, creationType>()));
    }
  }; // MissionObjectiveTypeSO
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectiveTypeSO), 40 + sizeof(GlobalNamespace::ObjectiveValueFormatterSO*)> __GlobalNamespace_MissionObjectiveTypeSOSizeCheck;
  static_assert(sizeof(MissionObjectiveTypeSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveTypeSO*, "", "MissionObjectiveTypeSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName
// Il2CppName: get_objectiveName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MissionObjectiveTypeSO::*)()>(&GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveTypeSO*), "get_objectiveName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized
// Il2CppName: get_objectiveNameLocalized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MissionObjectiveTypeSO::*)()>(&GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveTypeSO*), "get_objectiveNameLocalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue
// Il2CppName: get_noConditionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionObjectiveTypeSO::*)()>(&GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveTypeSO*), "get_noConditionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater
// Il2CppName: get_objectiveValueFormater
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObjectiveValueFormatterSO* (GlobalNamespace::MissionObjectiveTypeSO::*)()>(&GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveTypeSO*), "get_objectiveValueFormater", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveTypeSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
