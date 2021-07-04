// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: MultiplayerLobbyState
#include "GlobalNamespace/MultiplayerLobbyState.hpp"
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
  // Forward declaring type: GameServersFilterText
  class GameServersFilterText;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: BeatmapDifficultyMask
  struct BeatmapDifficultyMask;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xAD
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySetupViewController
  class QuickPlaySetupViewController : public HMUI::ViewController {
    public:
    // private EditableBeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditableBeatmapSelectionView*) == 0x8);
    // private GameServersFilterText _gameServersFilterText
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::GameServersFilterText* gameServersFilterText;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServersFilterText*) == 0x8);
    // private UnityEngine.UI.Button _readyButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* readyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _unreadyButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* unreadyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2624C
    // private System.Action suggestBeatmapEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* suggestBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2625C
    // private System.Action deleteSuggestedBeatmapEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action* deleteSuggestedBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2626C
    // private System.Action`1<System.Boolean> setPlayerReadyEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<bool>* setPlayerReadyEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private MultiplayerLobbyState _multiplayerLobbyState
    // Size: 0x4
    // Offset: 0xA8
    GlobalNamespace::MultiplayerLobbyState multiplayerLobbyState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyState) == 0x4);
    // private System.Boolean _isReady
    // Size: 0x1
    // Offset: 0xAC
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: QuickPlaySetupViewController
    QuickPlaySetupViewController(GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView_ = {}, GlobalNamespace::GameServersFilterText* gameServersFilterText_ = {}, UnityEngine::UI::Button* readyButton_ = {}, UnityEngine::UI::Button* unreadyButton_ = {}, System::Action* suggestBeatmapEvent_ = {}, System::Action* deleteSuggestedBeatmapEvent_ = {}, System::Action_1<bool>* setPlayerReadyEvent_ = {}, GlobalNamespace::MultiplayerLobbyState multiplayerLobbyState_ = {}, bool isReady_ = {}) noexcept : beatmapSelectionView{beatmapSelectionView_}, gameServersFilterText{gameServersFilterText_}, readyButton{readyButton_}, unreadyButton{unreadyButton_}, suggestBeatmapEvent{suggestBeatmapEvent_}, deleteSuggestedBeatmapEvent{deleteSuggestedBeatmapEvent_}, setPlayerReadyEvent{setPlayerReadyEvent_}, multiplayerLobbyState{multiplayerLobbyState_}, isReady{isReady_} {}
    // public System.Void add_suggestBeatmapEvent(System.Action value)
    // Offset: 0x10A9B70
    void add_suggestBeatmapEvent(System::Action* value);
    // public System.Void remove_suggestBeatmapEvent(System.Action value)
    // Offset: 0x10AA87C
    void remove_suggestBeatmapEvent(System::Action* value);
    // public System.Void add_deleteSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x10A9C14
    void add_deleteSuggestedBeatmapEvent(System::Action* value);
    // public System.Void remove_deleteSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x10AA920
    void remove_deleteSuggestedBeatmapEvent(System::Action* value);
    // public System.Void add_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x10A9ACC
    void add_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void remove_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x10AA7D8
    void remove_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void SetLocalPlayerData(ILobbyPlayerDataModel lobbyPlayerData)
    // Offset: 0x10AD0EC
    void SetLocalPlayerData(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerData);
    // public System.Void SetGameServerSettings(BeatmapDifficultyMask beatmapDifficultyMask, SongPackMask songPackMask)
    // Offset: 0x10AD31C
    void SetGameServerSettings(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, GlobalNamespace::SongPackMask songPackMask);
    // public System.Void SetLobbyState(MultiplayerLobbyState lobbyState)
    // Offset: 0x10A9CB8
    void SetLobbyState(GlobalNamespace::MultiplayerLobbyState lobbyState);
    // private System.Void SetReadyButtonsState()
    // Offset: 0x10AD638
    void SetReadyButtonsState();
    // private System.Void <DidActivate>b__18_0()
    // Offset: 0x10AD884
    void $DidActivate$b__18_0();
    // private System.Void <DidActivate>b__18_1()
    // Offset: 0x10AD898
    void $DidActivate$b__18_1();
    // private System.Void <DidActivate>b__18_2()
    // Offset: 0x10AD8AC
    void $DidActivate$b__18_2();
    // private System.Void <DidActivate>b__18_3()
    // Offset: 0x10AD910
    void $DidActivate$b__18_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10AD6C8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x10AD87C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlaySetupViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupViewController*, creationType>()));
    }
  }; // QuickPlaySetupViewController
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySetupViewController), 172 + sizeof(bool)> __GlobalNamespace_QuickPlaySetupViewControllerSizeCheck;
  static_assert(sizeof(QuickPlaySetupViewController) == 0xAD);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySetupViewController*, "", "QuickPlaySetupViewController");
// Writing includes for template specializations
#include "System/Action.hpp"
#include "System/Action_1.hpp"
#include "GlobalNamespace/ILobbyPlayerDataModel.hpp"
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "GlobalNamespace/SongPackMask.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::add_suggestBeatmapEvent
// Il2CppName: add_suggestBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(System::Action*)>(&GlobalNamespace::QuickPlaySetupViewController::add_suggestBeatmapEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "add_suggestBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::remove_suggestBeatmapEvent
// Il2CppName: remove_suggestBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(System::Action*)>(&GlobalNamespace::QuickPlaySetupViewController::remove_suggestBeatmapEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "remove_suggestBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::add_deleteSuggestedBeatmapEvent
// Il2CppName: add_deleteSuggestedBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(System::Action*)>(&GlobalNamespace::QuickPlaySetupViewController::add_deleteSuggestedBeatmapEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "add_deleteSuggestedBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::remove_deleteSuggestedBeatmapEvent
// Il2CppName: remove_deleteSuggestedBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(System::Action*)>(&GlobalNamespace::QuickPlaySetupViewController::remove_deleteSuggestedBeatmapEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "remove_deleteSuggestedBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::add_setPlayerReadyEvent
// Il2CppName: add_setPlayerReadyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(System::Action_1<bool>*)>(&GlobalNamespace::QuickPlaySetupViewController::add_setPlayerReadyEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "add_setPlayerReadyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<bool>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::remove_setPlayerReadyEvent
// Il2CppName: remove_setPlayerReadyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(System::Action_1<bool>*)>(&GlobalNamespace::QuickPlaySetupViewController::remove_setPlayerReadyEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "remove_setPlayerReadyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<bool>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::SetLocalPlayerData
// Il2CppName: SetLocalPlayerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(GlobalNamespace::ILobbyPlayerDataModel*)>(&GlobalNamespace::QuickPlaySetupViewController::SetLocalPlayerData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "SetLocalPlayerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ILobbyPlayerDataModel*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::SetGameServerSettings
// Il2CppName: SetGameServerSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(GlobalNamespace::BeatmapDifficultyMask, GlobalNamespace::SongPackMask)>(&GlobalNamespace::QuickPlaySetupViewController::SetGameServerSettings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "SetGameServerSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapDifficultyMask>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SongPackMask>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::SetLobbyState
// Il2CppName: SetLobbyState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(GlobalNamespace::MultiplayerLobbyState)>(&GlobalNamespace::QuickPlaySetupViewController::SetLobbyState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "SetLobbyState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MultiplayerLobbyState>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::SetReadyButtonsState
// Il2CppName: SetReadyButtonsState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)()>(&GlobalNamespace::QuickPlaySetupViewController::SetReadyButtonsState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "SetReadyButtonsState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::$DidActivate$b__18_0
// Il2CppName: <DidActivate>b__18_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)()>(&GlobalNamespace::QuickPlaySetupViewController::$DidActivate$b__18_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "<DidActivate>b__18_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::$DidActivate$b__18_1
// Il2CppName: <DidActivate>b__18_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)()>(&GlobalNamespace::QuickPlaySetupViewController::$DidActivate$b__18_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "<DidActivate>b__18_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::$DidActivate$b__18_2
// Il2CppName: <DidActivate>b__18_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)()>(&GlobalNamespace::QuickPlaySetupViewController::$DidActivate$b__18_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "<DidActivate>b__18_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::$DidActivate$b__18_3
// Il2CppName: <DidActivate>b__18_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)()>(&GlobalNamespace::QuickPlaySetupViewController::$DidActivate$b__18_3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "<DidActivate>b__18_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupViewController::*)(bool, bool, bool)>(&GlobalNamespace::QuickPlaySetupViewController::DidActivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
