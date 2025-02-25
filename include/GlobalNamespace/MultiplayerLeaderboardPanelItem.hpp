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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLeaderboardPanelItem
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLeaderboardPanelItem : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _playerNameText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* playerNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _positionText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* positionText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _backgroundImage
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Image* backgroundImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Color _normalPlayerTextColor
    // Size: 0x10
    // Offset: 0x38
    UnityEngine::Color normalPlayerTextColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _failedPlayerTextColor
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Color failedPlayerTextColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _firstPlayerBackgroundColor
    // Size: 0x10
    // Offset: 0x58
    UnityEngine::Color firstPlayerBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _lastPlayerBackgroundColor
    // Size: 0x10
    // Offset: 0x68
    UnityEngine::Color lastPlayerBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Int32 _prevPosition
    // Size: 0x4
    // Offset: 0x78
    int prevPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: prevPosition and: prevPlayerName
    char __padding8[0x4] = {};
    // private System.String _prevPlayerName
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* prevPlayerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _prevScore
    // Size: 0x4
    // Offset: 0x88
    int prevScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _prevFailed
    // Size: 0x1
    // Offset: 0x8C
    bool prevFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: prevFailed and: prevNumberOfPlayers
    char __padding11[0x3] = {};
    // private System.Int32 _prevNumberOfPlayers
    // Size: 0x4
    // Offset: 0x90
    int prevNumberOfPlayers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerLeaderboardPanelItem
    MultiplayerLeaderboardPanelItem(TMPro::TextMeshProUGUI* playerNameText_ = {}, TMPro::TextMeshProUGUI* scoreText_ = {}, TMPro::TextMeshProUGUI* positionText_ = {}, UnityEngine::UI::Image* backgroundImage_ = {}, UnityEngine::Color normalPlayerTextColor_ = {}, UnityEngine::Color failedPlayerTextColor_ = {}, UnityEngine::Color firstPlayerBackgroundColor_ = {}, UnityEngine::Color lastPlayerBackgroundColor_ = {}, int prevPosition_ = {}, ::Il2CppString* prevPlayerName_ = {}, int prevScore_ = {}, bool prevFailed_ = {}, int prevNumberOfPlayers_ = {}) noexcept : playerNameText{playerNameText_}, scoreText{scoreText_}, positionText{positionText_}, backgroundImage{backgroundImage_}, normalPlayerTextColor{normalPlayerTextColor_}, failedPlayerTextColor{failedPlayerTextColor_}, firstPlayerBackgroundColor{firstPlayerBackgroundColor_}, lastPlayerBackgroundColor{lastPlayerBackgroundColor_}, prevPosition{prevPosition_}, prevPlayerName{prevPlayerName_}, prevScore{prevScore_}, prevFailed{prevFailed_}, prevNumberOfPlayers{prevNumberOfPlayers_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _playerNameText
    TMPro::TextMeshProUGUI*& dyn__playerNameText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _scoreText
    TMPro::TextMeshProUGUI*& dyn__scoreText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _positionText
    TMPro::TextMeshProUGUI*& dyn__positionText();
    // Get instance field reference: private UnityEngine.UI.Image _backgroundImage
    UnityEngine::UI::Image*& dyn__backgroundImage();
    // Get instance field reference: private UnityEngine.Color _normalPlayerTextColor
    UnityEngine::Color& dyn__normalPlayerTextColor();
    // Get instance field reference: private UnityEngine.Color _failedPlayerTextColor
    UnityEngine::Color& dyn__failedPlayerTextColor();
    // Get instance field reference: private UnityEngine.Color _firstPlayerBackgroundColor
    UnityEngine::Color& dyn__firstPlayerBackgroundColor();
    // Get instance field reference: private UnityEngine.Color _lastPlayerBackgroundColor
    UnityEngine::Color& dyn__lastPlayerBackgroundColor();
    // Get instance field reference: private System.Int32 _prevPosition
    int& dyn__prevPosition();
    // Get instance field reference: private System.String _prevPlayerName
    ::Il2CppString*& dyn__prevPlayerName();
    // Get instance field reference: private System.Int32 _prevScore
    int& dyn__prevScore();
    // Get instance field reference: private System.Boolean _prevFailed
    bool& dyn__prevFailed();
    // Get instance field reference: private System.Int32 _prevNumberOfPlayers
    int& dyn__prevNumberOfPlayers();
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x11D6B38
    void set_hide(bool value);
    // public System.Void SetData(System.Int32 position, System.String playerName, System.Int32 score, System.Boolean failed, System.Int32 numberOfPlayers)
    // Offset: 0x11D6DF0
    void SetData(int position, ::Il2CppString* playerName, int score, bool failed, int numberOfPlayers);
    // public System.Void .ctor()
    // Offset: 0x11D710C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLeaderboardPanelItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLeaderboardPanelItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLeaderboardPanelItem*, creationType>()));
    }
  }; // MultiplayerLeaderboardPanelItem
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLeaderboardPanelItem), 144 + sizeof(int)> __GlobalNamespace_MultiplayerLeaderboardPanelItemSizeCheck;
  static_assert(sizeof(MultiplayerLeaderboardPanelItem) == 0x94);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLeaderboardPanelItem*, "", "MultiplayerLeaderboardPanelItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(bool)>(&GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeaderboardPanelItem*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(int, ::Il2CppString*, int, bool, int)>(&GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* failed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* numberOfPlayers = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeaderboardPanelItem*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, playerName, score, failed, numberOfPlayers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
