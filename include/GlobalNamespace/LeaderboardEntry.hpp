// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardEntry : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _playerNameText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* playerNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: LeaderboardEntry
    LeaderboardEntry(TMPro::TextMeshProUGUI* scoreText_ = {}, TMPro::TextMeshProUGUI* playerNameText_ = {}, TMPro::TextMeshProUGUI* rankText_ = {}, UnityEngine::Color color_ = {}) noexcept : scoreText{scoreText_}, playerNameText{playerNameText_}, rankText{rankText_}, color{color_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _scoreText
    TMPro::TextMeshProUGUI*& dyn__scoreText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _playerNameText
    TMPro::TextMeshProUGUI*& dyn__playerNameText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _rankText
    TMPro::TextMeshProUGUI*& dyn__rankText();
    // Get instance field reference: private UnityEngine.Color _color
    UnityEngine::Color& dyn__color();
    // public System.Void SetScore(System.Int32 score, System.String playerName, System.Int32 rank, System.Boolean highlighted, System.Boolean showSeparator)
    // Offset: 0x118AE90
    void SetScore(int score, ::Il2CppString* playerName, int rank, bool highlighted, bool showSeparator);
    // public System.Void .ctor()
    // Offset: 0x118B030
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntry*, creationType>()));
    }
  }; // LeaderboardEntry
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntry), 48 + sizeof(UnityEngine::Color)> __GlobalNamespace_LeaderboardEntrySizeCheck;
  static_assert(sizeof(LeaderboardEntry) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardEntry*, "", "LeaderboardEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardEntry::SetScore
// Il2CppName: SetScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardEntry::*)(int, ::Il2CppString*, int, bool, bool)>(&GlobalNamespace::LeaderboardEntry::SetScore)> {
  static const MethodInfo* get() {
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* rank = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* highlighted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* showSeparator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardEntry*), "SetScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{score, playerName, rank, highlighted, showSeparator});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
