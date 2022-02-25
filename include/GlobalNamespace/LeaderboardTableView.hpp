// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LeaderboardTableCell
  class LeaderboardTableCell;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LeaderboardTableView
  class LeaderboardTableView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LeaderboardTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardTableView*, "", "LeaderboardTableView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: GlobalNamespace::LeaderboardTableView::ScoreData
    class ScoreData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private LeaderboardTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LeaderboardTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardTableCell*) == 0x8);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x28
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rowHeight and: scores
    char __padding2[0x4] = {};
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>*) == 0x8);
    // private System.Int32 _specialScorePos
    // Size: 0x4
    // Offset: 0x38
    int specialScorePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::StringW _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::StringW value);
    // Get instance field reference: private HMUI.TableView _tableView
    HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private LeaderboardTableCell _cellPrefab
    GlobalNamespace::LeaderboardTableCell*& dyn__cellPrefab();
    // Get instance field reference: private System.Single _rowHeight
    float& dyn__rowHeight();
    // Get instance field reference: private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>*& dyn__scores();
    // Get instance field reference: private System.Int32 _specialScorePos
    int& dyn__specialScorePos();
    // public System.Single CellSize()
    // Offset: 0x13B1258
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x13B1260
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x13B12B4
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void SetScores(System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> scores, System.Int32 specialScorePos)
    // Offset: 0x13B1490
    void SetScores(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores, int specialScorePos);
    // public System.Void .ctor()
    // Offset: 0x13B14C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardTableView*, creationType>()));
    }
  }; // LeaderboardTableView
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardTableView), 56 + sizeof(int)> __GlobalNamespace_LeaderboardTableViewSizeCheck;
  static_assert(sizeof(LeaderboardTableView) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LeaderboardTableView::*)()>(&GlobalNamespace::LeaderboardTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardTableView::*)()>(&GlobalNamespace::LeaderboardTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::LeaderboardTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::LeaderboardTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::SetScores
// Il2CppName: SetScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableView::*)(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>*, int)>(&GlobalNamespace::LeaderboardTableView::SetScores)> {
  static const MethodInfo* get() {
    static auto* scores = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LeaderboardTableView/ScoreData")})->byval_arg;
    static auto* specialScorePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView*), "SetScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scores, specialScorePos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
