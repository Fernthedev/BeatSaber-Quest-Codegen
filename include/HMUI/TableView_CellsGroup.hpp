// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::TableView::CellsGroup);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableView::CellsGroup*, "HMUI", "TableView/CellsGroup");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TableView/HMUI.CellsGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class TableView::CellsGroup : public ::Il2CppObject {
    public:
    public:
    // private System.String _reuseIdentifier
    // Size: 0x8
    // Offset: 0x10
    ::StringW reuseIdentifier;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.Generic.List`1<HMUI.TableCell> _cells
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::HMUI::TableCell*>* cells;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HMUI::TableCell*>*) == 0x8);
    public:
    // Get instance field reference: private System.String _reuseIdentifier
    [[deprecated("Use field access instead!")]] ::StringW& dyn__reuseIdentifier();
    // Get instance field reference: private System.Collections.Generic.List`1<HMUI.TableCell> _cells
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HMUI::TableCell*>*& dyn__cells();
    // public System.String get_reuseIdentifier()
    // Offset: 0x16E43A8
    ::StringW get_reuseIdentifier();
    // public System.Collections.Generic.List`1<HMUI.TableCell> get_cells()
    // Offset: 0x16E43B0
    ::System::Collections::Generic::List_1<::HMUI::TableCell*>* get_cells();
    // public System.Void .ctor()
    // Offset: 0x16E43B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TableView::CellsGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::TableView::CellsGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableView::CellsGroup*, creationType>()));
    }
  }; // HMUI.TableView/HMUI.CellsGroup
  #pragma pack(pop)
  static check_size<sizeof(TableView::CellsGroup), 24 + sizeof(::System::Collections::Generic::List_1<::HMUI::TableCell*>*)> __HMUI_TableView_CellsGroupSizeCheck;
  static_assert(sizeof(TableView::CellsGroup) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::TableView::CellsGroup::get_reuseIdentifier
// Il2CppName: get_reuseIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::TableView::CellsGroup::*)()>(&HMUI::TableView::CellsGroup::get_reuseIdentifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableView::CellsGroup*), "get_reuseIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableView::CellsGroup::get_cells
// Il2CppName: get_cells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HMUI::TableCell*>* (HMUI::TableView::CellsGroup::*)()>(&HMUI::TableView::CellsGroup::get_cells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableView::CellsGroup*), "get_cells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableView::CellsGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
