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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: ClientLobbySetupViewController
  class ClientLobbySetupViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _readyButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* readyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _unreadyButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* unreadyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xE25BA4
    // private EditableBeatmapSelectionView _editableBeatmapSelectionView
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::EditableBeatmapSelectionView* editableBeatmapSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditableBeatmapSelectionView*) == 0x8);
    // private EditableModifiersSelectionView _editableModifiersSelectionView
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::EditableModifiersSelectionView* editableModifiersSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditableModifiersSelectionView*) == 0x8);
    // private UnityEngine.GameObject _spectatorWarningTextWrapper
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::GameObject* spectatorWarningTextWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25BFC
    // private System.Action suggestBeatmapEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action* suggestBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25C0C
    // private System.Action clearSuggestedBeatmapEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action* clearSuggestedBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25C1C
    // private System.Action suggestModifiersEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action* suggestModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25C2C
    // private System.Action clearSuggestedModifiersEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action* clearSuggestedModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25C3C
    // private System.Action`1<System.Boolean> setPlayerReadyEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action_1<bool>* setPlayerReadyEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xC0
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // Creating value type constructor for type: ClientLobbySetupViewController
    ClientLobbySetupViewController(UnityEngine::UI::Button* readyButton_ = {}, UnityEngine::UI::Button* unreadyButton_ = {}, GlobalNamespace::EditableBeatmapSelectionView* editableBeatmapSelectionView_ = {}, GlobalNamespace::EditableModifiersSelectionView* editableModifiersSelectionView_ = {}, UnityEngine::GameObject* spectatorWarningTextWrapper_ = {}, System::Action* suggestBeatmapEvent_ = {}, System::Action* clearSuggestedBeatmapEvent_ = {}, System::Action* suggestModifiersEvent_ = {}, System::Action* clearSuggestedModifiersEvent_ = {}, System::Action_1<bool>* setPlayerReadyEvent_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}) noexcept : readyButton{readyButton_}, unreadyButton{unreadyButton_}, editableBeatmapSelectionView{editableBeatmapSelectionView_}, editableModifiersSelectionView{editableModifiersSelectionView_}, spectatorWarningTextWrapper{spectatorWarningTextWrapper_}, suggestBeatmapEvent{suggestBeatmapEvent_}, clearSuggestedBeatmapEvent{clearSuggestedBeatmapEvent_}, suggestModifiersEvent{suggestModifiersEvent_}, clearSuggestedModifiersEvent{clearSuggestedModifiersEvent_}, setPlayerReadyEvent{setPlayerReadyEvent_}, toggleBinder{toggleBinder_} {}
    // public System.Void add_suggestBeatmapEvent(System.Action value)
    // Offset: 0x118C570
    void add_suggestBeatmapEvent(System::Action* value);
    // public System.Void remove_suggestBeatmapEvent(System.Action value)
    // Offset: 0x118D510
    void remove_suggestBeatmapEvent(System::Action* value);
    // public System.Void add_clearSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x118C75C
    void add_clearSuggestedBeatmapEvent(System::Action* value);
    // public System.Void remove_clearSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x118D6FC
    void remove_clearSuggestedBeatmapEvent(System::Action* value);
    // public System.Void add_suggestModifiersEvent(System.Action value)
    // Offset: 0x118C614
    void add_suggestModifiersEvent(System::Action* value);
    // public System.Void remove_suggestModifiersEvent(System.Action value)
    // Offset: 0x118D5B4
    void remove_suggestModifiersEvent(System::Action* value);
    // public System.Void add_clearSuggestedModifiersEvent(System.Action value)
    // Offset: 0x118C800
    void add_clearSuggestedModifiersEvent(System::Action* value);
    // public System.Void remove_clearSuggestedModifiersEvent(System.Action value)
    // Offset: 0x118D7A0
    void remove_clearSuggestedModifiersEvent(System::Action* value);
    // public System.Void add_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x118C6B8
    void add_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void remove_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x118D658
    void remove_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void SetLocalLobbyPlayerData(ILobbyPlayerDataModel lobbyPlayerData)
    // Offset: 0x118E85C
    void SetLocalLobbyPlayerData(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerData);
    // public System.Void SetLobbyState(MultiplayerLobbyState lobbyState)
    // Offset: 0x118CC8C
    void SetLobbyState(GlobalNamespace::MultiplayerLobbyState lobbyState);
    // public System.Void SetPlayerActiveState(System.Boolean isActive)
    // Offset: 0x118F214
    void SetPlayerActiveState(bool isActive);
    // private System.Void <DidActivate>b__24_0()
    // Offset: 0x118FD60
    void $DidActivate$b__24_0();
    // private System.Void <DidActivate>b__24_1()
    // Offset: 0x118FD74
    void $DidActivate$b__24_1();
    // private System.Void <DidActivate>b__24_2()
    // Offset: 0x118FD88
    void $DidActivate$b__24_2();
    // private System.Void <DidActivate>b__24_3()
    // Offset: 0x118FD9C
    void $DidActivate$b__24_3();
    // private System.Void <DidActivate>b__24_4()
    // Offset: 0x118FDB0
    void $DidActivate$b__24_4();
    // private System.Void <DidActivate>b__24_5()
    // Offset: 0x118FE14
    void $DidActivate$b__24_5();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x118FAAC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x118FCF8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientLobbySetupViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ClientLobbySetupViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientLobbySetupViewController*, creationType>()));
    }
  }; // ClientLobbySetupViewController
  #pragma pack(pop)
  static check_size<sizeof(ClientLobbySetupViewController), 192 + sizeof(HMUI::ToggleBinder*)> __GlobalNamespace_ClientLobbySetupViewControllerSizeCheck;
  static_assert(sizeof(ClientLobbySetupViewController) == 0xC8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ClientLobbySetupViewController*, "", "ClientLobbySetupViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::add_suggestBeatmapEvent
// Il2CppName: add_suggestBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::ClientLobbySetupViewController::add_suggestBeatmapEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "add_suggestBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::remove_suggestBeatmapEvent
// Il2CppName: remove_suggestBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::ClientLobbySetupViewController::remove_suggestBeatmapEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "remove_suggestBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::add_clearSuggestedBeatmapEvent
// Il2CppName: add_clearSuggestedBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::ClientLobbySetupViewController::add_clearSuggestedBeatmapEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "add_clearSuggestedBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::remove_clearSuggestedBeatmapEvent
// Il2CppName: remove_clearSuggestedBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::ClientLobbySetupViewController::remove_clearSuggestedBeatmapEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "remove_clearSuggestedBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::add_suggestModifiersEvent
// Il2CppName: add_suggestModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::ClientLobbySetupViewController::add_suggestModifiersEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "add_suggestModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::remove_suggestModifiersEvent
// Il2CppName: remove_suggestModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::ClientLobbySetupViewController::remove_suggestModifiersEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "remove_suggestModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::add_clearSuggestedModifiersEvent
// Il2CppName: add_clearSuggestedModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::ClientLobbySetupViewController::add_clearSuggestedModifiersEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "add_clearSuggestedModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::remove_clearSuggestedModifiersEvent
// Il2CppName: remove_clearSuggestedModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action*)>(&GlobalNamespace::ClientLobbySetupViewController::remove_clearSuggestedModifiersEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "remove_clearSuggestedModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::add_setPlayerReadyEvent
// Il2CppName: add_setPlayerReadyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action_1<bool>*)>(&GlobalNamespace::ClientLobbySetupViewController::add_setPlayerReadyEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "add_setPlayerReadyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::remove_setPlayerReadyEvent
// Il2CppName: remove_setPlayerReadyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(System::Action_1<bool>*)>(&GlobalNamespace::ClientLobbySetupViewController::remove_setPlayerReadyEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "remove_setPlayerReadyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::SetLocalLobbyPlayerData
// Il2CppName: SetLocalLobbyPlayerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(GlobalNamespace::ILobbyPlayerDataModel*)>(&GlobalNamespace::ClientLobbySetupViewController::SetLocalLobbyPlayerData)> {
  const MethodInfo* get() {
    static auto* lobbyPlayerData = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayerDataModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "SetLocalLobbyPlayerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyPlayerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::SetLobbyState
// Il2CppName: SetLobbyState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(GlobalNamespace::MultiplayerLobbyState)>(&GlobalNamespace::ClientLobbySetupViewController::SetLobbyState)> {
  const MethodInfo* get() {
    static auto* lobbyState = &::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "SetLobbyState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::SetPlayerActiveState
// Il2CppName: SetPlayerActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(bool)>(&GlobalNamespace::ClientLobbySetupViewController::SetPlayerActiveState)> {
  const MethodInfo* get() {
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "SetPlayerActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isActive});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_0
// Il2CppName: <DidActivate>b__24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)()>(&GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "<DidActivate>b__24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_1
// Il2CppName: <DidActivate>b__24_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)()>(&GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "<DidActivate>b__24_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_2
// Il2CppName: <DidActivate>b__24_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)()>(&GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "<DidActivate>b__24_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_3
// Il2CppName: <DidActivate>b__24_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)()>(&GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "<DidActivate>b__24_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_4
// Il2CppName: <DidActivate>b__24_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)()>(&GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_4)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "<DidActivate>b__24_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_5
// Il2CppName: <DidActivate>b__24_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)()>(&GlobalNamespace::ClientLobbySetupViewController::$DidActivate$b__24_5)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "<DidActivate>b__24_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClientLobbySetupViewController::*)(bool, bool, bool)>(&GlobalNamespace::ClientLobbySetupViewController::DidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClientLobbySetupViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClientLobbySetupViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
