// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IncDecSettingsController
#include "GlobalNamespace/IncDecSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ListSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class ListSettingsController : public GlobalNamespace::IncDecSettingsController {
    public:
    // private System.Int32 _idx
    // Size: 0x4
    // Offset: 0x20
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _numberOfElements
    // Size: 0x4
    // Offset: 0x24
    int numberOfElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ListSettingsController
    ListSettingsController(int idx_ = {}, int numberOfElements_ = {}) noexcept : idx{idx_}, numberOfElements{numberOfElements_} {}
    // Get instance field reference: private System.Int32 _idx
    int& dyn__idx();
    // Get instance field reference: private System.Int32 _numberOfElements
    int& dyn__numberOfElements();
    // protected System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xFFFFFFFF
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    void ApplyValue(int idx);
    // protected System.String TextForValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* TextForValue(int idx);
    // protected System.Void OnEnable()
    // Offset: 0x1201E04
    void OnEnable();
    // private System.Void RefreshUI()
    // Offset: 0x1201E48
    void RefreshUI();
    // public System.Void Refresh(System.Boolean applyValue)
    // Offset: 0x1201EB4
    void Refresh(bool applyValue);
    // protected System.Void .ctor()
    // Offset: 0x1201FA4
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListSettingsController*, creationType>()));
    }
    // protected override System.Void IncButtonPressed()
    // Offset: 0x1201F14
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::IncButtonPressed()
    void IncButtonPressed();
    // protected override System.Void DecButtonPressed()
    // Offset: 0x1201F60
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::DecButtonPressed()
    void DecButtonPressed();
  }; // ListSettingsController
  #pragma pack(pop)
  static check_size<sizeof(ListSettingsController), 36 + sizeof(int)> __GlobalNamespace_ListSettingsControllerSizeCheck;
  static_assert(sizeof(ListSettingsController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListSettingsController*, "", "ListSettingsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ListSettingsController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::ListSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListSettingsController::*)(int)>(&GlobalNamespace::ListSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ListSettingsController::*)(int)>(&GlobalNamespace::ListSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListSettingsController::*)()>(&GlobalNamespace::ListSettingsController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListSettingsController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListSettingsController::*)()>(&GlobalNamespace::ListSettingsController::RefreshUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListSettingsController*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListSettingsController::*)(bool)>(&GlobalNamespace::ListSettingsController::Refresh)> {
  static const MethodInfo* get() {
    static auto* applyValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListSettingsController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{applyValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::IncButtonPressed
// Il2CppName: IncButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListSettingsController::*)()>(&GlobalNamespace::ListSettingsController::IncButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListSettingsController*), "IncButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::DecButtonPressed
// Il2CppName: DecButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListSettingsController::*)()>(&GlobalNamespace::ListSettingsController::DecButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListSettingsController*), "DecButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
