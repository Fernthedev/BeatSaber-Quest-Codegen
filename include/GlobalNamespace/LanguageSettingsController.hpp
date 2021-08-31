// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: DropdownSettingsController
#include "GlobalNamespace/DropdownSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LanguageSO
  class LanguageSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LanguageSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class LanguageSettingsController : public GlobalNamespace::DropdownSettingsController {
    public:
    // private LanguageSO _settingsValue
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::LanguageSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LanguageSO*) == 0x8);
    // Creating value type constructor for type: LanguageSettingsController
    LanguageSettingsController(GlobalNamespace::LanguageSO* settingsValue_ = {}) noexcept : settingsValue{settingsValue_} {}
    // Get instance field: private LanguageSO _settingsValue
    GlobalNamespace::LanguageSO* _get__settingsValue();
    // Set instance field: private LanguageSO _settingsValue
    void _set__settingsValue(GlobalNamespace::LanguageSO* value);
    // public System.Void .ctor()
    // Offset: 0x11478B8
    // Implemented from: DropdownSettingsController
    // Base method: System.Void DropdownSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguageSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LanguageSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguageSettingsController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x11476F0
    // Implemented from: DropdownSettingsController
    // Base method: System.Boolean DropdownSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x114779C
    // Implemented from: DropdownSettingsController
    // Base method: System.Void DropdownSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x1147838
    // Implemented from: DropdownSettingsController
    // Base method: System.String DropdownSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
  }; // LanguageSettingsController
  #pragma pack(pop)
  static check_size<sizeof(LanguageSettingsController), 48 + sizeof(GlobalNamespace::LanguageSO*)> __GlobalNamespace_LanguageSettingsControllerSizeCheck;
  static_assert(sizeof(LanguageSettingsController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LanguageSettingsController*, "", "LanguageSettingsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LanguageSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LanguageSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LanguageSettingsController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::LanguageSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LanguageSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LanguageSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LanguageSettingsController::*)(int)>(&GlobalNamespace::LanguageSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LanguageSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LanguageSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LanguageSettingsController::*)(int)>(&GlobalNamespace::LanguageSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LanguageSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
