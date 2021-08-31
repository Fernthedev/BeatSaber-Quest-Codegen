// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MasterServerQuickPlaySetupData
#include "GlobalNamespace/MasterServerQuickPlaySetupData.hpp"
// Including type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride
#include "GlobalNamespace/MasterServerQuickPlaySetupData_QuickPlaySongPacksOverride.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SongPackMaskModelSO
  class SongPackMaskModelSO;
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySongPacksDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickPlaySongPacksDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem
    class SongPackMaskItem;
    // Nested type: GlobalNamespace::QuickPlaySongPacksDropdown::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: GlobalNamespace::QuickPlaySongPacksDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // [SpaceAttribute] Offset: 0xE4081C
    // private SongPackMaskModelSO _songPackMaskModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SongPackMaskModelSO* songPackMaskModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMaskModelSO*) == 0x8);
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x30
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: quickPlaySongPacksOverride
    char __padding3[0x7] = {};
    // private MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride _quickPlaySongPacksOverride
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride* quickPlaySongPacksOverride;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*) == 0x8);
    // private System.Collections.Generic.List`1<QuickPlaySongPacksDropdown/SongPackMaskItem> _data
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*>* data;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*>*) == 0x8);
    // Creating value type constructor for type: QuickPlaySongPacksDropdown
    QuickPlaySongPacksDropdown(HMUI::SimpleTextDropdown* simpleTextDropdown_ = {}, GlobalNamespace::SongPackMaskModelSO* songPackMaskModel_ = {}, System::Action_1<int>* didSelectCellWithIdxEvent_ = {}, bool initialized_ = {}, GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride* quickPlaySongPacksOverride_ = {}, System::Collections::Generic::List_1<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*>* data_ = {}) noexcept : simpleTextDropdown{simpleTextDropdown_}, songPackMaskModel{songPackMaskModel_}, didSelectCellWithIdxEvent{didSelectCellWithIdxEvent_}, initialized{initialized_}, quickPlaySongPacksOverride{quickPlaySongPacksOverride_}, data{data_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.SimpleTextDropdown _simpleTextDropdown
    HMUI::SimpleTextDropdown*& dyn__simpleTextDropdown();
    // Get instance field reference: private SongPackMaskModelSO _songPackMaskModel
    GlobalNamespace::SongPackMaskModelSO*& dyn__songPackMaskModel();
    // Get instance field reference: private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    System::Action_1<int>*& dyn_didSelectCellWithIdxEvent();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // Get instance field reference: private MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride _quickPlaySongPacksOverride
    GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*& dyn__quickPlaySongPacksOverride();
    // Get instance field reference: private System.Collections.Generic.List`1<QuickPlaySongPacksDropdown/SongPackMaskItem> _data
    System::Collections::Generic::List_1<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*>*& dyn__data();
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1189828
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x11898CC
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // protected System.Void Start()
    // Offset: 0x1189970
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1189A04
    void OnDestroy();
    // public System.Void SetOverrideSongPacks(MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride quickPlaySongPacksOverride)
    // Offset: 0x1189AE0
    void SetOverrideSongPacks(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride* quickPlaySongPacksOverride);
    // public System.String GetSelectedSerializedName()
    // Offset: 0x1189AE8
    ::Il2CppString* GetSelectedSerializedName();
    // public System.Void SelectCellWithSerializedName(System.String serializedName)
    // Offset: 0x1189EB8
    void SelectCellWithSerializedName(::Il2CppString* serializedName);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x118A008
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // private System.Void LazyInit()
    // Offset: 0x1189B70
    void LazyInit();
    // private QuickPlaySongPacksDropdown/SongPackMaskItem <LazyInit>b__15_0(System.String serializedName)
    // Offset: 0x118A084
    GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* $LazyInit$b__15_0(::Il2CppString* serializedName);
    // private QuickPlaySongPacksDropdown/SongPackMaskItem <LazyInit>b__15_1(MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack pack)
    // Offset: 0x118A12C
    GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* $LazyInit$b__15_1(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack* pack);
    // public System.Void .ctor()
    // Offset: 0x118A07C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySongPacksDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlaySongPacksDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySongPacksDropdown*, creationType>()));
    }
  }; // QuickPlaySongPacksDropdown
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySongPacksDropdown), 64 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*>*)> __GlobalNamespace_QuickPlaySongPacksDropdownSizeCheck;
  static_assert(sizeof(QuickPlaySongPacksDropdown) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySongPacksDropdown*, "", "QuickPlaySongPacksDropdown");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::add_didSelectCellWithIdxEvent
// Il2CppName: add_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySongPacksDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::add_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "add_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::remove_didSelectCellWithIdxEvent
// Il2CppName: remove_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySongPacksDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::remove_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "remove_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&GlobalNamespace::QuickPlaySongPacksDropdown::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&GlobalNamespace::QuickPlaySongPacksDropdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::SetOverrideSongPacks
// Il2CppName: SetOverrideSongPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySongPacksDropdown::*)(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::SetOverrideSongPacks)> {
  static const MethodInfo* get() {
    static auto* quickPlaySongPacksOverride = &::il2cpp_utils::GetClassFromName("", "MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "SetOverrideSongPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{quickPlaySongPacksOverride});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::GetSelectedSerializedName
// Il2CppName: GetSelectedSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&GlobalNamespace::QuickPlaySongPacksDropdown::GetSelectedSerializedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "GetSelectedSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::SelectCellWithSerializedName
// Il2CppName: SelectCellWithSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySongPacksDropdown::*)(::Il2CppString*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::SelectCellWithSerializedName)> {
  static const MethodInfo* get() {
    static auto* serializedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "SelectCellWithSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx
// Il2CppName: HandleSimpleTextDropdownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySongPacksDropdown::*)(HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::QuickPlaySongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::LazyInit
// Il2CppName: LazyInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&GlobalNamespace::QuickPlaySongPacksDropdown::LazyInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "LazyInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$LazyInit$b__15_0
// Il2CppName: <LazyInit>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* (GlobalNamespace::QuickPlaySongPacksDropdown::*)(::Il2CppString*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::$LazyInit$b__15_0)> {
  static const MethodInfo* get() {
    static auto* serializedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "<LazyInit>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$LazyInit$b__15_1
// Il2CppName: <LazyInit>b__15_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* (GlobalNamespace::QuickPlaySongPacksDropdown::*)(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::$LazyInit$b__15_1)> {
  static const MethodInfo* get() {
    static auto* pack = &::il2cpp_utils::GetClassFromName("", "MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown*), "<LazyInit>b__15_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pack});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
