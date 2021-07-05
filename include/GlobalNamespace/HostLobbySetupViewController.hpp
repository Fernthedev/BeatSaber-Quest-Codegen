// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EditableBeatmapSelectionView
  class EditableBeatmapSelectionView;
  // Forward declaring type: EditableModifiersSelectionView
  class EditableModifiersSelectionView;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: MultiplayerLobbyState
  struct MultiplayerLobbyState;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: HostLobbySetupViewController
  class HostLobbySetupViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason
    struct CannotStartGameReason;
    // private UnityEngine.UI.Button _startGameButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* startGameButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelStartGameButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* cancelStartGameButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xE25FBC
    // private EditableBeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditableBeatmapSelectionView*) == 0x8);
    // private EditableModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::EditableModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditableModifiersSelectionView*) == 0x8);
    // private HMUI.HoverHint _cantStartGameHoverHint
    // Size: 0x8
    // Offset: 0x90
    HMUI::HoverHint* cantStartGameHoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // private UnityEngine.GameObject _playerMissingLevelHoverHintWrapper
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::GameObject* playerMissingLevelHoverHintWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private HMUI.HoverHint _playersMissingLevelHoverHint
    // Size: 0x8
    // Offset: 0xA0
    HMUI::HoverHint* playersMissingLevelHoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // private UnityEngine.GameObject _spectatorWarningTextWrapper
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::GameObject* spectatorWarningTextWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xB0
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26044
    // private System.Action selectBeatmapEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action* selectBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26054
    // private System.Action selectModifiersEvent
    // Size: 0x8
    // Offset: 0xC0
    System::Action* selectModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26064
    // private System.Action startGameEvent
    // Size: 0x8
    // Offset: 0xC8
    System::Action* startGameEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26074
    // private System.Action cancelStartGameEvent
    // Size: 0x8
    // Offset: 0xD0
    System::Action* cancelStartGameEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: HostLobbySetupViewController
    HostLobbySetupViewController(UnityEngine::UI::Button* startGameButton_ = {}, UnityEngine::UI::Button* cancelStartGameButton_ = {}, GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView_ = {}, GlobalNamespace::EditableModifiersSelectionView* modifiersSelectionView_ = {}, HMUI::HoverHint* cantStartGameHoverHint_ = {}, UnityEngine::GameObject* playerMissingLevelHoverHintWrapper_ = {}, HMUI::HoverHint* playersMissingLevelHoverHint_ = {}, UnityEngine::GameObject* spectatorWarningTextWrapper_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, System::Action* selectBeatmapEvent_ = {}, System::Action* selectModifiersEvent_ = {}, System::Action* startGameEvent_ = {}, System::Action* cancelStartGameEvent_ = {}) noexcept : startGameButton{startGameButton_}, cancelStartGameButton{cancelStartGameButton_}, beatmapSelectionView{beatmapSelectionView_}, modifiersSelectionView{modifiersSelectionView_}, cantStartGameHoverHint{cantStartGameHoverHint_}, playerMissingLevelHoverHintWrapper{playerMissingLevelHoverHintWrapper_}, playersMissingLevelHoverHint{playersMissingLevelHoverHint_}, spectatorWarningTextWrapper{spectatorWarningTextWrapper_}, toggleBinder{toggleBinder_}, selectBeatmapEvent{selectBeatmapEvent_}, selectModifiersEvent{selectModifiersEvent_}, startGameEvent{startGameEvent_}, cancelStartGameEvent{cancelStartGameEvent_} {}
    // public System.Void add_selectBeatmapEvent(System.Action value)
    // Offset: 0x10BE5D0
    void add_selectBeatmapEvent(System::Action* value);
    // public System.Void remove_selectBeatmapEvent(System.Action value)
    // Offset: 0x10BF994
    void remove_selectBeatmapEvent(System::Action* value);
    // public System.Void add_selectModifiersEvent(System.Action value)
    // Offset: 0x10BE674
    void add_selectModifiersEvent(System::Action* value);
    // public System.Void remove_selectModifiersEvent(System.Action value)
    // Offset: 0x10BFA38
    void remove_selectModifiersEvent(System::Action* value);
    // public System.Void add_startGameEvent(System.Action value)
    // Offset: 0x10BE718
    void add_startGameEvent(System::Action* value);
    // public System.Void remove_startGameEvent(System.Action value)
    // Offset: 0x10BFADC
    void remove_startGameEvent(System::Action* value);
    // public System.Void add_cancelStartGameEvent(System.Action value)
    // Offset: 0x10BE7BC
    void add_cancelStartGameEvent(System::Action* value);
    // public System.Void remove_cancelStartGameEvent(System.Action value)
    // Offset: 0x10BFB80
    void remove_cancelStartGameEvent(System::Action* value);
    // public System.Void SetLobbyPlayerData(ILobbyPlayerDataModel lobbyPlayerDataModel)
    // Offset: 0x10C0790
    void SetLobbyPlayerData(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerDataModel);
    // public System.Void SetPlayersMissingLevelText(System.String playersMissingLevelText)
    // Offset: 0x10C1E78
    void SetPlayersMissingLevelText(::Il2CppString* playersMissingLevelText);
    // public System.Void SetPlayerActiveState(System.Boolean isActive)
    // Offset: 0x10C18E8
    void SetPlayerActiveState(bool isActive);
    // public System.Void SetStartGameEnabled(System.Boolean startGameEnabled, HostLobbySetupViewController/CannotStartGameReason cannotStartGameReason)
    // Offset: 0x10C1D7C
    void SetStartGameEnabled(bool startGameEnabled, GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason cannotStartGameReason);
    // public System.Void SetLobbyState(MultiplayerLobbyState lobbyState)
    // Offset: 0x10BF010
    void SetLobbyState(GlobalNamespace::MultiplayerLobbyState lobbyState);
    // private System.Void <DidActivate>b__27_0()
    // Offset: 0x10C32D4
    void $DidActivate$b__27_0();
    // private System.Void <DidActivate>b__27_1()
    // Offset: 0x10C32E8
    void $DidActivate$b__27_1();
    // private System.Void <DidActivate>b__27_2()
    // Offset: 0x10C32FC
    void $DidActivate$b__27_2();
    // private System.Void <DidActivate>b__27_3()
    // Offset: 0x10C3310
    void $DidActivate$b__27_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10C309C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x10C3250
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x10C326C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostLobbySetupViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HostLobbySetupViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostLobbySetupViewController*, creationType>()));
    }
  }; // HostLobbySetupViewController
  #pragma pack(pop)
  static check_size<sizeof(HostLobbySetupViewController), 208 + sizeof(System::Action*)> __GlobalNamespace_HostLobbySetupViewControllerSizeCheck;
  static_assert(sizeof(HostLobbySetupViewController) == 0xD8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HostLobbySetupViewController*, "", "HostLobbySetupViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::add_selectBeatmapEvent
// Il2CppName: add_selectBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::HostLobbySetupViewController::add_selectBeatmapEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "add_selectBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::remove_selectBeatmapEvent
// Il2CppName: remove_selectBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::HostLobbySetupViewController::remove_selectBeatmapEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "remove_selectBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::add_selectModifiersEvent
// Il2CppName: add_selectModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::HostLobbySetupViewController::add_selectModifiersEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "add_selectModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::remove_selectModifiersEvent
// Il2CppName: remove_selectModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::HostLobbySetupViewController::remove_selectModifiersEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "remove_selectModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::add_startGameEvent
// Il2CppName: add_startGameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::HostLobbySetupViewController::add_startGameEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "add_startGameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::remove_startGameEvent
// Il2CppName: remove_startGameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::HostLobbySetupViewController::remove_startGameEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "remove_startGameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::add_cancelStartGameEvent
// Il2CppName: add_cancelStartGameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::HostLobbySetupViewController::add_cancelStartGameEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "add_cancelStartGameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::remove_cancelStartGameEvent
// Il2CppName: remove_cancelStartGameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::HostLobbySetupViewController::remove_cancelStartGameEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "remove_cancelStartGameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::SetLobbyPlayerData
// Il2CppName: SetLobbyPlayerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(GlobalNamespace::ILobbyPlayerDataModel*)>(&GlobalNamespace::HostLobbySetupViewController::SetLobbyPlayerData)> {
  const MethodInfo* get() {
    static auto* lobbyPlayerDataModel = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayerDataModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "SetLobbyPlayerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyPlayerDataModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::SetPlayersMissingLevelText
// Il2CppName: SetPlayersMissingLevelText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(::Il2CppString*)>(&GlobalNamespace::HostLobbySetupViewController::SetPlayersMissingLevelText)> {
  const MethodInfo* get() {
    static auto* playersMissingLevelText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "SetPlayersMissingLevelText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playersMissingLevelText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::SetPlayerActiveState
// Il2CppName: SetPlayerActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(bool)>(&GlobalNamespace::HostLobbySetupViewController::SetPlayerActiveState)> {
  const MethodInfo* get() {
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "SetPlayerActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isActive});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::SetStartGameEnabled
// Il2CppName: SetStartGameEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(bool, GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason)>(&GlobalNamespace::HostLobbySetupViewController::SetStartGameEnabled)> {
  const MethodInfo* get() {
    static auto* startGameEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cannotStartGameReason = &::il2cpp_utils::GetClassFromName("", "HostLobbySetupViewController/CannotStartGameReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "SetStartGameEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startGameEnabled, cannotStartGameReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::SetLobbyState
// Il2CppName: SetLobbyState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(GlobalNamespace::MultiplayerLobbyState)>(&GlobalNamespace::HostLobbySetupViewController::SetLobbyState)> {
  const MethodInfo* get() {
    static auto* lobbyState = &::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "SetLobbyState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::$DidActivate$b__27_0
// Il2CppName: <DidActivate>b__27_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)()>(&GlobalNamespace::HostLobbySetupViewController::$DidActivate$b__27_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "<DidActivate>b__27_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::$DidActivate$b__27_1
// Il2CppName: <DidActivate>b__27_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)()>(&GlobalNamespace::HostLobbySetupViewController::$DidActivate$b__27_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "<DidActivate>b__27_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::$DidActivate$b__27_2
// Il2CppName: <DidActivate>b__27_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)()>(&GlobalNamespace::HostLobbySetupViewController::$DidActivate$b__27_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "<DidActivate>b__27_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::$DidActivate$b__27_3
// Il2CppName: <DidActivate>b__27_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)()>(&GlobalNamespace::HostLobbySetupViewController::$DidActivate$b__27_3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "<DidActivate>b__27_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)(bool, bool, bool)>(&GlobalNamespace::HostLobbySetupViewController::DidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HostLobbySetupViewController::*)()>(&GlobalNamespace::HostLobbySetupViewController::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HostLobbySetupViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HostLobbySetupViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
