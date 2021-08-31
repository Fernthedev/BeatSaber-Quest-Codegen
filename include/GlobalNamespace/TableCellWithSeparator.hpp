// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ITableCellOwner
  class ITableCellOwner;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: TableCellWithSeparator
  // [TokenAttribute] Offset: FFFFFFFF
  class TableCellWithSeparator : public HMUI::TableCell {
    public:
    // private UnityEngine.GameObject _separator
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GameObject* separator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: TableCellWithSeparator
    TableCellWithSeparator(UnityEngine::GameObject* separator_ = {}) noexcept : separator{separator_} {}
    // Get instance field: private UnityEngine.GameObject _separator
    UnityEngine::GameObject* _get__separator();
    // Set instance field: private UnityEngine.GameObject _separator
    void _set__separator(UnityEngine::GameObject* value);
    // public System.Void .ctor()
    // Offset: 0x23B50D8
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TableCellWithSeparator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TableCellWithSeparator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableCellWithSeparator*, creationType>()));
    }
    // public override System.Void TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    // Offset: 0x23B4FE4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    void TableViewSetup(HMUI::ITableCellOwner* tableCellOwner, int idx);
  }; // TableCellWithSeparator
  #pragma pack(pop)
  static check_size<sizeof(TableCellWithSeparator), 80 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_TableCellWithSeparatorSizeCheck;
  static_assert(sizeof(TableCellWithSeparator) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TableCellWithSeparator*, "", "TableCellWithSeparator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TableCellWithSeparator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TableCellWithSeparator::TableViewSetup
// Il2CppName: TableViewSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableCellWithSeparator::*)(HMUI::ITableCellOwner*, int)>(&GlobalNamespace::TableCellWithSeparator::TableViewSetup)> {
  static const MethodInfo* get() {
    static auto* tableCellOwner = &::il2cpp_utils::GetClassFromName("HMUI", "ITableCellOwner")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableCellWithSeparator*), "TableViewSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableCellOwner, idx});
  }
};
