// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SongPackMaskModelSO
  class SongPackMaskModelSO;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
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
  // Forward declaring type: SongPacksDropdown
  class SongPacksDropdown;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SongPacksDropdown);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPacksDropdown*, "", "SongPacksDropdown");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SongPacksDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class SongPacksDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SongPacksDropdown::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // [SpaceAttribute] Offset: 0x124ADDC
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
    // Padding between fields: initialized and: songPackSerializedNames
    char __padding3[0x7] = {};
    // private System.Collections.Generic.List`1<System.String> _songPackSerializedNames
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<::StringW>* songPackSerializedNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
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
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> _songPackSerializedNames
    System::Collections::Generic::List_1<::StringW>*& dyn__songPackSerializedNames();
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x13D2314
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x13D23B8
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // private System.Void LazyInit()
    // Offset: 0x13D245C
    void LazyInit();
    // protected System.Void Start()
    // Offset: 0x13D25B8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13D2654
    void OnDestroy();
    // public System.Void SetOverrideSongPacks(System.Collections.Generic.List`1<System.String> songPackSerializedNames)
    // Offset: 0x13D2730
    void SetOverrideSongPacks(System::Collections::Generic::List_1<::StringW>* songPackSerializedNames);
    // public SongPackMask GetSelectedSongPackMask()
    // Offset: 0x13D2738
    GlobalNamespace::SongPackMask GetSelectedSongPackMask();
    // public System.Void SelectCellWithSongPackMask(SongPackMask songPackMask)
    // Offset: 0x13D27CC
    void SelectCellWithSongPackMask(GlobalNamespace::SongPackMask songPackMask);
    // private System.Int32 GetIdxForSongPackMask(SongPackMask songPackMask)
    // Offset: 0x13D288C
    int GetIdxForSongPackMask(GlobalNamespace::SongPackMask songPackMask);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x13D2954
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x13D29C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPacksDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPacksDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPacksDropdown*, creationType>()));
    }
  }; // SongPacksDropdown
  #pragma pack(pop)
  static check_size<sizeof(SongPacksDropdown), 56 + sizeof(System::Collections::Generic::List_1<::StringW>*)> __GlobalNamespace_SongPacksDropdownSizeCheck;
  static_assert(sizeof(SongPacksDropdown) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::add_didSelectCellWithIdxEvent
// Il2CppName: add_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPacksDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::SongPacksDropdown::add_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "add_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::remove_didSelectCellWithIdxEvent
// Il2CppName: remove_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPacksDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::SongPacksDropdown::remove_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "remove_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::LazyInit
// Il2CppName: LazyInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPacksDropdown::*)()>(&GlobalNamespace::SongPacksDropdown::LazyInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "LazyInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPacksDropdown::*)()>(&GlobalNamespace::SongPacksDropdown::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPacksDropdown::*)()>(&GlobalNamespace::SongPacksDropdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::SetOverrideSongPacks
// Il2CppName: SetOverrideSongPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPacksDropdown::*)(System::Collections::Generic::List_1<::StringW>*)>(&GlobalNamespace::SongPacksDropdown::SetOverrideSongPacks)> {
  static const MethodInfo* get() {
    static auto* songPackSerializedNames = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "SetOverrideSongPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songPackSerializedNames});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::GetSelectedSongPackMask
// Il2CppName: GetSelectedSongPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::SongPacksDropdown::*)()>(&GlobalNamespace::SongPacksDropdown::GetSelectedSongPackMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "GetSelectedSongPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::SelectCellWithSongPackMask
// Il2CppName: SelectCellWithSongPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPacksDropdown::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::SongPacksDropdown::SelectCellWithSongPackMask)> {
  static const MethodInfo* get() {
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "SelectCellWithSongPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songPackMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::GetIdxForSongPackMask
// Il2CppName: GetIdxForSongPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SongPacksDropdown::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::SongPacksDropdown::GetIdxForSongPackMask)> {
  static const MethodInfo* get() {
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "GetIdxForSongPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songPackMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx
// Il2CppName: HandleSimpleTextDropdownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPacksDropdown::*)(HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::SongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown*), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
