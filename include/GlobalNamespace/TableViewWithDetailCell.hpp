// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TableViewWithDetailCell
  class TableViewWithDetailCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::TableViewWithDetailCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TableViewWithDetailCell*, "", "TableViewWithDetailCell");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC4
  #pragma pack(push, 1)
  // Autogenerated type: TableViewWithDetailCell
  // [TokenAttribute] Offset: FFFFFFFF
  class TableViewWithDetailCell : public HMUI::TableView/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Writing base type padding for base size: 0xA2 to desired offset: 0xA8
    char ___base_padding[0x6] = {};
    // Nested type: GlobalNamespace::TableViewWithDetailCell::IDataSource
    class IDataSource;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action`2<TableViewWithDetailCell,System.Int32> didSelectContentCellEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* didSelectContentCellEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*) == 0x8);
    // private System.Action`2<TableViewWithDetailCell,System.Int32> didDeselectContentCellEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* didDeselectContentCellEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*) == 0x8);
    // private TableViewWithDetailCell/IDataSource _dataSource
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::TableViewWithDetailCell::IDataSource* dataSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TableViewWithDetailCell::IDataSource*) == 0x8);
    // private System.Int32 _selectedId
    // Size: 0x4
    // Offset: 0xC0
    int selectedId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Get instance field reference: private System.Action`2<TableViewWithDetailCell,System.Int32> didSelectContentCellEvent
    System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*& dyn_didSelectContentCellEvent();
    // Get instance field reference: private System.Action`2<TableViewWithDetailCell,System.Int32> didDeselectContentCellEvent
    System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*& dyn_didDeselectContentCellEvent();
    // Get instance field reference: private TableViewWithDetailCell/IDataSource _dataSource
    GlobalNamespace::TableViewWithDetailCell::IDataSource*& dyn__dataSource();
    // Get instance field reference: private System.Int32 _selectedId
    int& dyn__selectedId();
    // public TableViewWithDetailCell/IDataSource get_dataSource()
    // Offset: 0x29CE4D8
    GlobalNamespace::TableViewWithDetailCell::IDataSource* get_dataSource();
    // public System.Void set_dataSource(TableViewWithDetailCell/IDataSource value)
    // Offset: 0x29CE4E0
    void set_dataSource(GlobalNamespace::TableViewWithDetailCell::IDataSource* value);
    // public System.Void add_didSelectContentCellEvent(System.Action`2<TableViewWithDetailCell,System.Int32> value)
    // Offset: 0x29CE248
    void add_didSelectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* value);
    // public System.Void remove_didSelectContentCellEvent(System.Action`2<TableViewWithDetailCell,System.Int32> value)
    // Offset: 0x29CE2EC
    void remove_didSelectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* value);
    // public System.Void add_didDeselectContentCellEvent(System.Action`2<TableViewWithDetailCell,System.Int32> value)
    // Offset: 0x29CE390
    void add_didDeselectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* value);
    // public System.Void remove_didDeselectContentCellEvent(System.Action`2<TableViewWithDetailCell,System.Int32> value)
    // Offset: 0x29CE434
    void remove_didDeselectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* value);
    // public System.Single CellSize()
    // Offset: 0x29CE504
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x29CE5B4
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x29CE678
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public System.Void ReloadData(System.Int32 currentNewIndex)
    // Offset: 0x29CE8C8
    void ReloadData(int currentNewIndex);
    // public System.Void .ctor()
    // Offset: 0x29CEA50
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TableViewWithDetailCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TableViewWithDetailCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableViewWithDetailCell*, creationType>()));
    }
    // public override System.Void ReloadData()
    // Offset: 0x29CE894
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::ReloadData()
    void ReloadData();
    // protected override System.Void DidSelectCellWithIdx(System.Int32 idx)
    // Offset: 0x29CE910
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::DidSelectCellWithIdx(System.Int32 idx)
    void DidSelectCellWithIdx(int idx);
  }; // TableViewWithDetailCell
  #pragma pack(pop)
  static check_size<sizeof(TableViewWithDetailCell), 192 + sizeof(int)> __GlobalNamespace_TableViewWithDetailCellSizeCheck;
  static_assert(sizeof(TableViewWithDetailCell) == 0xC4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::get_dataSource
// Il2CppName: get_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::TableViewWithDetailCell::IDataSource* (GlobalNamespace::TableViewWithDetailCell::*)()>(&GlobalNamespace::TableViewWithDetailCell::get_dataSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "get_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::set_dataSource
// Il2CppName: set_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableViewWithDetailCell::*)(GlobalNamespace::TableViewWithDetailCell::IDataSource*)>(&GlobalNamespace::TableViewWithDetailCell::set_dataSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell/IDataSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "set_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::add_didSelectContentCellEvent
// Il2CppName: add_didSelectContentCellEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableViewWithDetailCell::*)(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*)>(&GlobalNamespace::TableViewWithDetailCell::add_didSelectContentCellEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "add_didSelectContentCellEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::remove_didSelectContentCellEvent
// Il2CppName: remove_didSelectContentCellEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableViewWithDetailCell::*)(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*)>(&GlobalNamespace::TableViewWithDetailCell::remove_didSelectContentCellEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "remove_didSelectContentCellEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::add_didDeselectContentCellEvent
// Il2CppName: add_didDeselectContentCellEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableViewWithDetailCell::*)(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*)>(&GlobalNamespace::TableViewWithDetailCell::add_didDeselectContentCellEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "add_didDeselectContentCellEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::remove_didDeselectContentCellEvent
// Il2CppName: remove_didDeselectContentCellEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableViewWithDetailCell::*)(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*)>(&GlobalNamespace::TableViewWithDetailCell::remove_didDeselectContentCellEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "remove_didDeselectContentCellEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TableViewWithDetailCell::*)()>(&GlobalNamespace::TableViewWithDetailCell::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::TableViewWithDetailCell::*)()>(&GlobalNamespace::TableViewWithDetailCell::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::TableViewWithDetailCell::*)(HMUI::TableView*, int)>(&GlobalNamespace::TableViewWithDetailCell::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableViewWithDetailCell::*)(int)>(&GlobalNamespace::TableViewWithDetailCell::ReloadData)> {
  static const MethodInfo* get() {
    static auto* currentNewIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentNewIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableViewWithDetailCell::*)()>(&GlobalNamespace::TableViewWithDetailCell::ReloadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TableViewWithDetailCell::DidSelectCellWithIdx
// Il2CppName: DidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableViewWithDetailCell::*)(int)>(&GlobalNamespace::TableViewWithDetailCell::DidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableViewWithDetailCell*), "DidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
