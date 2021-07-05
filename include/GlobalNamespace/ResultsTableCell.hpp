// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TableCellWithSeparator
#include "GlobalNamespace/TableCellWithSeparator.hpp"
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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: ResultsTableCell
  class ResultsTableCell : public GlobalNamespace::TableCellWithSeparator {
    public:
    // private UnityEngine.GameObject _border
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GameObject* border;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _orderText
    // Size: 0x8
    // Offset: 0x60
    TMPro::TextMeshProUGUI* orderText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x68
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x70
    TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x78
    TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // Creating value type constructor for type: ResultsTableCell
    ResultsTableCell(UnityEngine::GameObject* border_ = {}, TMPro::TextMeshProUGUI* orderText_ = {}, TMPro::TextMeshProUGUI* nameText_ = {}, TMPro::TextMeshProUGUI* scoreText_ = {}, TMPro::TextMeshProUGUI* rankText_ = {}) noexcept : border{border_}, orderText{orderText_}, nameText{nameText_}, scoreText{scoreText_}, rankText{rankText_} {}
    // public System.Void SetData(System.Int32 order, IConnectedPlayer connectedPlayer, LevelCompletionResults levelCompletionResults)
    // Offset: 0x10AFE14
    void SetData(int order, GlobalNamespace::IConnectedPlayer* connectedPlayer, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x10B0134
    // Implemented from: TableCellWithSeparator
    // Base method: System.Void TableCellWithSeparator::.ctor()
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultsTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsTableCell*, creationType>()));
    }
  }; // ResultsTableCell
  #pragma pack(pop)
  static check_size<sizeof(ResultsTableCell), 120 + sizeof(TMPro::TextMeshProUGUI*)> __GlobalNamespace_ResultsTableCellSizeCheck;
  static_assert(sizeof(ResultsTableCell) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsTableCell*, "", "ResultsTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultsTableCell::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsTableCell::*)(int, GlobalNamespace::IConnectedPlayer*, GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::ResultsTableCell::SetData)> {
  const MethodInfo* get() {
    static auto* order = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsTableCell*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{order, connectedPlayer, levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
