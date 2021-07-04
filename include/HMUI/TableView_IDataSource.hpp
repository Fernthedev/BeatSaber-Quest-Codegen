// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TableView/IDataSource
  class TableView::IDataSource {
    public:
    // Creating value type constructor for type: IDataSource
    IDataSource() noexcept {}
    // public System.Single CellSize()
    // Offset: 0xFFFFFFFF
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xFFFFFFFF
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xFFFFFFFF
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
  }; // HMUI.TableView/IDataSource
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableView::IDataSource*, "HMUI", "TableView/IDataSource");
// Writing includes for template specializations
// Writing MetadataGetter for method: HMUI::TableView::IDataSource::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::TableView::IDataSource::*)()>(&HMUI::TableView::IDataSource::CellSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableView::IDataSource*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableView::IDataSource::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::TableView::IDataSource::*)()>(&HMUI::TableView::IDataSource::NumberOfCells)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableView::IDataSource*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableView::IDataSource::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (HMUI::TableView::IDataSource::*)(HMUI::TableView*, int)>(&HMUI::TableView::IDataSource::CellForIdx)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableView::IDataSource*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::TableView*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
