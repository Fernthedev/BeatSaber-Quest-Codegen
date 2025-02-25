// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.SegmentedControl
#include "HMUI/SegmentedControl.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SegmentedControlCell
  class SegmentedControlCell;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SegmentedControl/HMUI.IDataSource
  // [TokenAttribute] Offset: FFFFFFFF
  class SegmentedControl::IDataSource {
    public:
    // Creating value type constructor for type: IDataSource
    IDataSource() noexcept {}
    // public System.Int32 NumberOfCells()
    // Offset: 0xFFFFFFFF
    int NumberOfCells();
    // public HMUI.SegmentedControlCell CellForCellNumber(System.Int32 cellNumber)
    // Offset: 0xFFFFFFFF
    HMUI::SegmentedControlCell* CellForCellNumber(int cellNumber);
  }; // HMUI.SegmentedControl/HMUI.IDataSource
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::SegmentedControl::IDataSource*, "HMUI", "SegmentedControl/IDataSource");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SegmentedControl::IDataSource::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::SegmentedControl::IDataSource::*)()>(&HMUI::SegmentedControl::IDataSource::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl::IDataSource*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::IDataSource::CellForCellNumber
// Il2CppName: CellForCellNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::SegmentedControlCell* (HMUI::SegmentedControl::IDataSource::*)(int)>(&HMUI::SegmentedControl::IDataSource::CellForCellNumber)> {
  static const MethodInfo* get() {
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl::IDataSource*), "CellForCellNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cellNumber});
  }
};
