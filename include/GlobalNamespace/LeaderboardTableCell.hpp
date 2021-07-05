// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardTableCell
  class LeaderboardTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _playerNameText
    // Size: 0x8
    // Offset: 0x58
    TMPro::TextMeshProUGUI* playerNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x60
    TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _fullComboText
    // Size: 0x8
    // Offset: 0x68
    TMPro::TextMeshProUGUI* fullComboText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _specialScoreColor
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Color specialScoreColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.UI.Image _separatorImage
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Image* separatorImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: LeaderboardTableCell
    LeaderboardTableCell(TMPro::TextMeshProUGUI* rankText_ = {}, TMPro::TextMeshProUGUI* playerNameText_ = {}, TMPro::TextMeshProUGUI* scoreText_ = {}, TMPro::TextMeshProUGUI* fullComboText_ = {}, UnityEngine::Color normalColor_ = {}, UnityEngine::Color specialScoreColor_ = {}, UnityEngine::UI::Image* separatorImage_ = {}) noexcept : rankText{rankText_}, playerNameText{playerNameText_}, scoreText{scoreText_}, fullComboText{fullComboText_}, normalColor{normalColor_}, specialScoreColor{specialScoreColor_}, separatorImage{separatorImage_} {}
    // public System.Void set_rank(System.Int32 value)
    // Offset: 0x10C7614
    void set_rank(int value);
    // public System.Void set_playerName(System.String value)
    // Offset: 0x10C7658
    void set_playerName(::Il2CppString* value);
    // public System.Void set_score(System.Int32 value)
    // Offset: 0x10C7674
    void set_score(int value);
    // public System.Void set_showSeparator(System.Boolean value)
    // Offset: 0x10C7718
    void set_showSeparator(bool value);
    // public System.Void set_showFullCombo(System.Boolean value)
    // Offset: 0x10C7738
    void set_showFullCombo(bool value);
    // public System.Void set_specialScore(System.Boolean value)
    // Offset: 0x10C7758
    void set_specialScore(bool value);
    // public System.Void .ctor()
    // Offset: 0x10C785C
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
    static LeaderboardTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardTableCell*, creationType>()));
    }
  }; // LeaderboardTableCell
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardTableCell), 144 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_LeaderboardTableCellSizeCheck;
  static_assert(sizeof(LeaderboardTableCell) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardTableCell*, "", "LeaderboardTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_rank
// Il2CppName: set_rank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(int)>(&GlobalNamespace::LeaderboardTableCell::set_rank)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_rank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_playerName
// Il2CppName: set_playerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(::Il2CppString*)>(&GlobalNamespace::LeaderboardTableCell::set_playerName)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_playerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_score
// Il2CppName: set_score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(int)>(&GlobalNamespace::LeaderboardTableCell::set_score)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_showSeparator
// Il2CppName: set_showSeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(bool)>(&GlobalNamespace::LeaderboardTableCell::set_showSeparator)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_showSeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_showFullCombo
// Il2CppName: set_showFullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(bool)>(&GlobalNamespace::LeaderboardTableCell::set_showFullCombo)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_showFullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_specialScore
// Il2CppName: set_specialScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(bool)>(&GlobalNamespace::LeaderboardTableCell::set_specialScore)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_specialScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
