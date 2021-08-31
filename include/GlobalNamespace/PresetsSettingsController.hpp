// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IntSO
  class IntSO;
  // Forward declaring type: NamedPresetsSO
  class NamedPresetsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PresetsSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class PresetsSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // private IntSO _settingsValue
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IntSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // private NamedPresetsSO _presets
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::NamedPresetsSO* presets;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NamedPresetsSO*) == 0x8);
    // private System.Boolean _limitNumberOfElements
    // Size: 0x1
    // Offset: 0x38
    bool limitNumberOfElements;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: limitNumberOfElements and: numberOfElementsLimit
    char __padding2[0x3] = {};
    // [DrawIfAttribute] Offset: 0xE40BFC
    // private System.Int32 _numberOfElementsLimit
    // Size: 0x4
    // Offset: 0x3C
    int numberOfElementsLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PresetsSettingsController
    PresetsSettingsController(GlobalNamespace::IntSO* settingsValue_ = {}, GlobalNamespace::NamedPresetsSO* presets_ = {}, bool limitNumberOfElements_ = {}, int numberOfElementsLimit_ = {}) noexcept : settingsValue{settingsValue_}, presets{presets_}, limitNumberOfElements{limitNumberOfElements_}, numberOfElementsLimit{numberOfElementsLimit_} {}
    // Get instance field: private IntSO _settingsValue
    GlobalNamespace::IntSO* _get__settingsValue();
    // Set instance field: private IntSO _settingsValue
    void _set__settingsValue(GlobalNamespace::IntSO* value);
    // Get instance field: private NamedPresetsSO _presets
    GlobalNamespace::NamedPresetsSO* _get__presets();
    // Set instance field: private NamedPresetsSO _presets
    void _set__presets(GlobalNamespace::NamedPresetsSO* value);
    // Get instance field: private System.Boolean _limitNumberOfElements
    bool _get__limitNumberOfElements();
    // Set instance field: private System.Boolean _limitNumberOfElements
    void _set__limitNumberOfElements(bool value);
    // Get instance field: private System.Int32 _numberOfElementsLimit
    int _get__numberOfElementsLimit();
    // Set instance field: private System.Int32 _numberOfElementsLimit
    void _set__numberOfElementsLimit(int value);
    // public System.Void .ctor()
    // Offset: 0x113F390
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PresetsSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PresetsSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PresetsSettingsController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x113F198
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x113F2C4
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x113F32C
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
  }; // PresetsSettingsController
  #pragma pack(pop)
  static check_size<sizeof(PresetsSettingsController), 60 + sizeof(int)> __GlobalNamespace_PresetsSettingsControllerSizeCheck;
  static_assert(sizeof(PresetsSettingsController) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PresetsSettingsController*, "", "PresetsSettingsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PresetsSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PresetsSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PresetsSettingsController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::PresetsSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PresetsSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PresetsSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PresetsSettingsController::*)(int)>(&GlobalNamespace::PresetsSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PresetsSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PresetsSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PresetsSettingsController::*)(int)>(&GlobalNamespace::PresetsSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PresetsSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
