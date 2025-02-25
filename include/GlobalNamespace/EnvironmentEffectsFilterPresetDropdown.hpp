// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: EnvironmentEffectsFilterPreset
#include "GlobalNamespace/EnvironmentEffectsFilterPreset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentEffectsFilterPresetDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentEffectsFilterPresetDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<EnvironmentEffectsFilterPreset,System.String>> _lightReductionAmountData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::EnvironmentEffectsFilterPreset, ::Il2CppString*>*>* lightReductionAmountData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::EnvironmentEffectsFilterPreset, ::Il2CppString*>*>*) == 0x8);
    // Creating value type constructor for type: EnvironmentEffectsFilterPresetDropdown
    EnvironmentEffectsFilterPresetDropdown(HMUI::SimpleTextDropdown* simpleTextDropdown_ = {}, System::Action_1<int>* didSelectCellWithIdxEvent_ = {}, System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::EnvironmentEffectsFilterPreset, ::Il2CppString*>*>* lightReductionAmountData_ = {}) noexcept : simpleTextDropdown{simpleTextDropdown_}, didSelectCellWithIdxEvent{didSelectCellWithIdxEvent_}, lightReductionAmountData{lightReductionAmountData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.SimpleTextDropdown _simpleTextDropdown
    HMUI::SimpleTextDropdown*& dyn__simpleTextDropdown();
    // Get instance field reference: private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    System::Action_1<int>*& dyn_didSelectCellWithIdxEvent();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<EnvironmentEffectsFilterPreset,System.String>> _lightReductionAmountData
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::EnvironmentEffectsFilterPreset, ::Il2CppString*>*>*& dyn__lightReductionAmountData();
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<EnvironmentEffectsFilterPreset,System.String>> get_lightReductionAmountData()
    // Offset: 0x1057604
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::EnvironmentEffectsFilterPreset, ::Il2CppString*>*>* get_lightReductionAmountData();
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10574BC
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1057560
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // protected System.Void Start()
    // Offset: 0x1057700
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1057880
    void OnDestroy();
    // public EnvironmentEffectsFilterPreset GetLightsReductionAmount()
    // Offset: 0x105795C
    GlobalNamespace::EnvironmentEffectsFilterPreset GetLightsReductionAmount();
    // public System.Void SelectCellWithLightReductionAmount(EnvironmentEffectsFilterPreset environmentEffectsFilterPreset)
    // Offset: 0x1057A30
    void SelectCellWithLightReductionAmount(GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset);
    // private System.Int32 GetIdxForLightReductionAmount(EnvironmentEffectsFilterPreset environmentEffectsFilterPreset)
    // Offset: 0x1057A6C
    int GetIdxForLightReductionAmount(GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x1057C64
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x1057CD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentEffectsFilterPresetDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentEffectsFilterPresetDropdown*, creationType>()));
    }
  }; // EnvironmentEffectsFilterPresetDropdown
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentEffectsFilterPresetDropdown), 40 + sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::EnvironmentEffectsFilterPreset, ::Il2CppString*>*>*)> __GlobalNamespace_EnvironmentEffectsFilterPresetDropdownSizeCheck;
  static_assert(sizeof(EnvironmentEffectsFilterPresetDropdown) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, "", "EnvironmentEffectsFilterPresetDropdown");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::get_lightReductionAmountData
// Il2CppName: get_lightReductionAmountData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::EnvironmentEffectsFilterPreset, ::Il2CppString*>*>* (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)()>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::get_lightReductionAmountData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "get_lightReductionAmountData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::add_didSelectCellWithIdxEvent
// Il2CppName: add_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::add_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "add_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::remove_didSelectCellWithIdxEvent
// Il2CppName: remove_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::remove_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "remove_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)()>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)()>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::GetLightsReductionAmount
// Il2CppName: GetLightsReductionAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentEffectsFilterPreset (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)()>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::GetLightsReductionAmount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "GetLightsReductionAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::SelectCellWithLightReductionAmount
// Il2CppName: SelectCellWithLightReductionAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)(GlobalNamespace::EnvironmentEffectsFilterPreset)>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::SelectCellWithLightReductionAmount)> {
  static const MethodInfo* get() {
    static auto* environmentEffectsFilterPreset = &::il2cpp_utils::GetClassFromName("", "EnvironmentEffectsFilterPreset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "SelectCellWithLightReductionAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentEffectsFilterPreset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::GetIdxForLightReductionAmount
// Il2CppName: GetIdxForLightReductionAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)(GlobalNamespace::EnvironmentEffectsFilterPreset)>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::GetIdxForLightReductionAmount)> {
  static const MethodInfo* get() {
    static auto* environmentEffectsFilterPreset = &::il2cpp_utils::GetClassFromName("", "EnvironmentEffectsFilterPreset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "GetIdxForLightReductionAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentEffectsFilterPreset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx
// Il2CppName: HandleSimpleTextDropdownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)(HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
