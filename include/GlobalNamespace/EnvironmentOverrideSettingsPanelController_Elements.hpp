// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: EnvironmentOverrideSettingsPanelController
#include "GlobalNamespace/EnvironmentOverrideSettingsPanelController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentOverrideSettingsPanelController/Elements
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentOverrideSettingsPanelController::Elements : public ::Il2CppObject {
    public:
    // public TMPro.TextMeshProUGUI label
    // Size: 0x8
    // Offset: 0x10
    TMPro::TextMeshProUGUI* label;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // public HMUI.SimpleTextDropdown simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // public EnvironmentTypeSO environmentType
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::EnvironmentTypeSO* environmentType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentTypeSO*) == 0x8);
    // private System.Collections.Generic.List`1<EnvironmentInfoSO> <environmentInfos>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>* environmentInfos;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>*) == 0x8);
    // Creating value type constructor for type: Elements
    Elements(TMPro::TextMeshProUGUI* label_ = {}, HMUI::SimpleTextDropdown* simpleTextDropdown_ = {}, GlobalNamespace::EnvironmentTypeSO* environmentType_ = {}, System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>* environmentInfos_ = {}) noexcept : label{label_}, simpleTextDropdown{simpleTextDropdown_}, environmentType{environmentType_}, environmentInfos{environmentInfos_} {}
    // Get instance field reference: public TMPro.TextMeshProUGUI label
    TMPro::TextMeshProUGUI*& dyn_label();
    // Get instance field reference: public HMUI.SimpleTextDropdown simpleTextDropdown
    HMUI::SimpleTextDropdown*& dyn_simpleTextDropdown();
    // Get instance field reference: public EnvironmentTypeSO environmentType
    GlobalNamespace::EnvironmentTypeSO*& dyn_environmentType();
    // Get instance field reference: private System.Collections.Generic.List`1<EnvironmentInfoSO> <environmentInfos>k__BackingField
    System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>*& dyn_$environmentInfos$k__BackingField();
    // public System.Collections.Generic.List`1<EnvironmentInfoSO> get_environmentInfos()
    // Offset: 0x1052B34
    System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>* get_environmentInfos();
    // public System.Void set_environmentInfos(System.Collections.Generic.List`1<EnvironmentInfoSO> value)
    // Offset: 0x1052B3C
    void set_environmentInfos(System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>* value);
    // public System.Void .ctor()
    // Offset: 0x1052B44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentOverrideSettingsPanelController::Elements* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentOverrideSettingsPanelController::Elements*, creationType>()));
    }
  }; // EnvironmentOverrideSettingsPanelController/Elements
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentOverrideSettingsPanelController::Elements), 40 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>*)> __GlobalNamespace_EnvironmentOverrideSettingsPanelController_ElementsSizeCheck;
  static_assert(sizeof(EnvironmentOverrideSettingsPanelController::Elements) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*, "", "EnvironmentOverrideSettingsPanelController/Elements");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements::get_environmentInfos
// Il2CppName: get_environmentInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>* (GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements::*)()>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements::get_environmentInfos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*), "get_environmentInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements::set_environmentInfos
// Il2CppName: set_environmentInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements::*)(System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO*>*)>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements::set_environmentInfos)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EnvironmentInfoSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*), "set_environmentInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
