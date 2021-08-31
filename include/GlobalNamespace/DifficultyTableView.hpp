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
  // Forward declaring type: DifficultyTableCell
  class DifficultyTableCell;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: DifficultyTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class DifficultyTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private DifficultyTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::DifficultyTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DifficultyTableCell*) == 0x8);
    // private DifficultyTableCell _nonSelectableCellPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::DifficultyTableCell* nonSelectableCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DifficultyTableCell*) == 0x8);
    // private System.Single _cellHeight
    // Size: 0x4
    // Offset: 0x30
    float cellHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellHeight and: didSelectRow
    char __padding3[0x4] = {};
    // private System.Action`2<DifficultyTableView,System.Int32> didSelectRow
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::DifficultyTableView*, int>* didSelectRow;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::DifficultyTableView*, int>*) == 0x8);
    // private IDifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // Creating value type constructor for type: DifficultyTableView
    DifficultyTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::DifficultyTableCell* cellPrefab_ = {}, GlobalNamespace::DifficultyTableCell* nonSelectableCellPrefab_ = {}, float cellHeight_ = {}, System::Action_2<GlobalNamespace::DifficultyTableView*, int>* didSelectRow_ = {}, ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps_ = {}) noexcept : tableView{tableView_}, cellPrefab{cellPrefab_}, nonSelectableCellPrefab{nonSelectableCellPrefab_}, cellHeight{cellHeight_}, didSelectRow{didSelectRow_}, difficultyBeatmaps{difficultyBeatmaps_} {}
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
    // static field const value: static private System.String kNonSelectableCellIdentifier
    static constexpr const char* kNonSelectableCellIdentifier = "NonSelectableCell";
    // Get static field: static private System.String kNonSelectableCellIdentifier
    static ::Il2CppString* _get_kNonSelectableCellIdentifier();
    // Set static field: static private System.String kNonSelectableCellIdentifier
    static void _set_kNonSelectableCellIdentifier(::Il2CppString* value);
    // Get instance field: private HMUI.TableView _tableView
    HMUI::TableView* _get__tableView();
    // Set instance field: private HMUI.TableView _tableView
    void _set__tableView(HMUI::TableView* value);
    // Get instance field: private DifficultyTableCell _cellPrefab
    GlobalNamespace::DifficultyTableCell* _get__cellPrefab();
    // Set instance field: private DifficultyTableCell _cellPrefab
    void _set__cellPrefab(GlobalNamespace::DifficultyTableCell* value);
    // Get instance field: private DifficultyTableCell _nonSelectableCellPrefab
    GlobalNamespace::DifficultyTableCell* _get__nonSelectableCellPrefab();
    // Set instance field: private DifficultyTableCell _nonSelectableCellPrefab
    void _set__nonSelectableCellPrefab(GlobalNamespace::DifficultyTableCell* value);
    // Get instance field: private System.Single _cellHeight
    float _get__cellHeight();
    // Set instance field: private System.Single _cellHeight
    void _set__cellHeight(float value);
    // Get instance field: private System.Action`2<DifficultyTableView,System.Int32> didSelectRow
    System::Action_2<GlobalNamespace::DifficultyTableView*, int>* _get_didSelectRow();
    // Set instance field: private System.Action`2<DifficultyTableView,System.Int32> didSelectRow
    void _set_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value);
    // Get instance field: private IDifficultyBeatmap[] _difficultyBeatmaps
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* _get__difficultyBeatmaps();
    // Set instance field: private IDifficultyBeatmap[] _difficultyBeatmaps
    void _set__difficultyBeatmaps(::Array<GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didSelectRow(System.Action`2<DifficultyTableView,System.Int32> value)
    // Offset: 0x10FB584
    void add_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value);
    // public System.Void remove_didSelectRow(System.Action`2<DifficultyTableView,System.Int32> value)
    // Offset: 0x10FB628
    void remove_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value);
    // public System.Void Init(IDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x10FB6CC
    void Init(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);
    // public System.Void SetDifficultyBeatmaps(IDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x10FB7BC
    void SetDifficultyBeatmaps(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);
    // public System.Single CellSize()
    // Offset: 0x10FB7E4
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x10FB7EC
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x10FB80C
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // private System.Void HandleDidSelectRowEvent(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x10FBB74
    void HandleDidSelectRowEvent(HMUI::TableView* tableView, int row);
    // public System.Void SelectRow(System.Int32 row, System.Boolean callbackTable)
    // Offset: 0x10FBC1C
    void SelectRow(int row, bool callbackTable);
    // public System.Void SelectRow(IDifficultyBeatmap difficultyBeatmap, System.Boolean callbackTable)
    // Offset: 0x10FBC3C
    void SelectRow(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool callbackTable);
    // public System.Void ClearSelection()
    // Offset: 0x10FBCCC
    void ClearSelection();
    // public System.Void .ctor()
    // Offset: 0x10FBCE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DifficultyTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DifficultyTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DifficultyTableView*, creationType>()));
    }
  }; // DifficultyTableView
  #pragma pack(pop)
  static check_size<sizeof(DifficultyTableView), 64 + sizeof(::Array<GlobalNamespace::IDifficultyBeatmap*>*)> __GlobalNamespace_DifficultyTableViewSizeCheck;
  static_assert(sizeof(DifficultyTableView) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyTableView*, "", "DifficultyTableView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::add_didSelectRow
// Il2CppName: add_didSelectRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableView::*)(System::Action_2<GlobalNamespace::DifficultyTableView*, int>*)>(&GlobalNamespace::DifficultyTableView::add_didSelectRow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "DifficultyTableView"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "add_didSelectRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::remove_didSelectRow
// Il2CppName: remove_didSelectRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableView::*)(System::Action_2<GlobalNamespace::DifficultyTableView*, int>*)>(&GlobalNamespace::DifficultyTableView::remove_didSelectRow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "DifficultyTableView"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "remove_didSelectRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableView::*)(::Array<GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::DifficultyTableView::Init)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmaps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmaps});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::SetDifficultyBeatmaps
// Il2CppName: SetDifficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableView::*)(::Array<GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::DifficultyTableView::SetDifficultyBeatmaps)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmaps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "SetDifficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmaps});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DifficultyTableView::*)()>(&GlobalNamespace::DifficultyTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DifficultyTableView::*)()>(&GlobalNamespace::DifficultyTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::DifficultyTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::DifficultyTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::HandleDidSelectRowEvent
// Il2CppName: HandleDidSelectRowEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::DifficultyTableView::HandleDidSelectRowEvent)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "HandleDidSelectRowEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::SelectRow
// Il2CppName: SelectRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableView::*)(int, bool)>(&GlobalNamespace::DifficultyTableView::SelectRow)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callbackTable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "SelectRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, callbackTable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::SelectRow
// Il2CppName: SelectRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableView::*)(GlobalNamespace::IDifficultyBeatmap*, bool)>(&GlobalNamespace::DifficultyTableView::SelectRow)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* callbackTable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "SelectRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap, callbackTable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::ClearSelection
// Il2CppName: ClearSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableView::*)()>(&GlobalNamespace::DifficultyTableView::ClearSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableView*), "ClearSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
