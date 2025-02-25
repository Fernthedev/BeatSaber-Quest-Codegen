// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FileBrowserTableCell
  class FileBrowserTableCell;
  // Forward declaring type: FileBrowserItem
  class FileBrowserItem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: FileBrowserTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class FileBrowserTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private FileBrowserTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FileBrowserTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FileBrowserTableCell*) == 0x8);
    // private System.Single _cellHeight
    // Size: 0x4
    // Offset: 0x28
    float cellHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellHeight and: didSelectRow
    char __padding2[0x4] = {};
    // private System.Action`2<FileBrowserTableView,FileBrowserItem> didSelectRow
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* didSelectRow;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>*) == 0x8);
    // private FileBrowserItem[] _items
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::FileBrowserItem*>* items;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::FileBrowserItem*>*) == 0x8);
    // Creating value type constructor for type: FileBrowserTableView
    FileBrowserTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::FileBrowserTableCell* cellPrefab_ = {}, float cellHeight_ = {}, System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* didSelectRow_ = {}, ::Array<GlobalNamespace::FileBrowserItem*>* items_ = {}) noexcept : tableView{tableView_}, cellPrefab{cellPrefab_}, cellHeight{cellHeight_}, didSelectRow{didSelectRow_}, items{items_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // Get instance field reference: private HMUI.TableView _tableView
    HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private FileBrowserTableCell _cellPrefab
    GlobalNamespace::FileBrowserTableCell*& dyn__cellPrefab();
    // Get instance field reference: private System.Single _cellHeight
    float& dyn__cellHeight();
    // Get instance field reference: private System.Action`2<FileBrowserTableView,FileBrowserItem> didSelectRow
    System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>*& dyn_didSelectRow();
    // Get instance field reference: private FileBrowserItem[] _items
    ::Array<GlobalNamespace::FileBrowserItem*>*& dyn__items();
    // public System.Void add_didSelectRow(System.Action`2<FileBrowserTableView,FileBrowserItem> value)
    // Offset: 0x105C69C
    void add_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* value);
    // public System.Void remove_didSelectRow(System.Action`2<FileBrowserTableView,FileBrowserItem> value)
    // Offset: 0x105C740
    void remove_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* value);
    // public System.Void Init(FileBrowserItem[] items)
    // Offset: 0x105C7E4
    void Init(::Array<GlobalNamespace::FileBrowserItem*>* items);
    // public System.Void SetItems(FileBrowserItem[] items)
    // Offset: 0x105C8F0
    void SetItems(::Array<GlobalNamespace::FileBrowserItem*>* items);
    // public System.Boolean SelectAndScrollRowToItemWithPath(System.String folderPath)
    // Offset: 0x105C940
    bool SelectAndScrollRowToItemWithPath(::Il2CppString* folderPath);
    // public System.Single CellSize()
    // Offset: 0x105CA30
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x105CA38
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x105CA50
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // private System.Void HandleDidSelectRowEvent(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x105CBC4
    void HandleDidSelectRowEvent(HMUI::TableView* tableView, int row);
    // public System.Void SelectAndScrollRow(System.Int32 row)
    // Offset: 0x105C9E0
    void SelectAndScrollRow(int row);
    // public System.Void ClearSelection(System.Boolean animated, System.Boolean scrollToRow0)
    // Offset: 0x105CC64
    void ClearSelection(bool animated, bool scrollToRow0);
    // public System.Void .ctor()
    // Offset: 0x105CCD0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileBrowserTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileBrowserTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileBrowserTableView*, creationType>()));
    }
  }; // FileBrowserTableView
  #pragma pack(pop)
  static check_size<sizeof(FileBrowserTableView), 56 + sizeof(::Array<GlobalNamespace::FileBrowserItem*>*)> __GlobalNamespace_FileBrowserTableViewSizeCheck;
  static_assert(sizeof(FileBrowserTableView) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserTableView*, "", "FileBrowserTableView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::add_didSelectRow
// Il2CppName: add_didSelectRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserTableView::*)(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>*)>(&GlobalNamespace::FileBrowserTableView::add_didSelectRow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "FileBrowserTableView"), ::il2cpp_utils::GetClassFromName("", "FileBrowserItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "add_didSelectRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::remove_didSelectRow
// Il2CppName: remove_didSelectRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserTableView::*)(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>*)>(&GlobalNamespace::FileBrowserTableView::remove_didSelectRow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "FileBrowserTableView"), ::il2cpp_utils::GetClassFromName("", "FileBrowserItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "remove_didSelectRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserTableView::*)(::Array<GlobalNamespace::FileBrowserItem*>*)>(&GlobalNamespace::FileBrowserTableView::Init)> {
  static const MethodInfo* get() {
    static auto* items = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "FileBrowserItem"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{items});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::SetItems
// Il2CppName: SetItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserTableView::*)(::Array<GlobalNamespace::FileBrowserItem*>*)>(&GlobalNamespace::FileBrowserTableView::SetItems)> {
  static const MethodInfo* get() {
    static auto* items = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "FileBrowserItem"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "SetItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{items});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::SelectAndScrollRowToItemWithPath
// Il2CppName: SelectAndScrollRowToItemWithPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FileBrowserTableView::*)(::Il2CppString*)>(&GlobalNamespace::FileBrowserTableView::SelectAndScrollRowToItemWithPath)> {
  static const MethodInfo* get() {
    static auto* folderPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "SelectAndScrollRowToItemWithPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{folderPath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FileBrowserTableView::*)()>(&GlobalNamespace::FileBrowserTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FileBrowserTableView::*)()>(&GlobalNamespace::FileBrowserTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::FileBrowserTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::FileBrowserTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::HandleDidSelectRowEvent
// Il2CppName: HandleDidSelectRowEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::FileBrowserTableView::HandleDidSelectRowEvent)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "HandleDidSelectRowEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::SelectAndScrollRow
// Il2CppName: SelectAndScrollRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserTableView::*)(int)>(&GlobalNamespace::FileBrowserTableView::SelectAndScrollRow)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "SelectAndScrollRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::ClearSelection
// Il2CppName: ClearSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FileBrowserTableView::*)(bool, bool)>(&GlobalNamespace::FileBrowserTableView::ClearSelection)> {
  static const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* scrollToRow0 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserTableView*), "ClearSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated, scrollToRow0});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
