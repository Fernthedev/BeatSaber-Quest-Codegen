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
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: ObjectiveListItemsList
  class ObjectiveListItemsList;
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelDetailViewController
  class MissionLevelDetailViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE2576C
    // private UnityEngine.UI.Button _playButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* playButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // private ObjectiveListItemsList _objectiveListItems
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::ObjectiveListItemsList* objectiveListItems;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObjectiveListItemsList*) == 0x8);
    // private GameplayModifierInfoListItemsList _gameplayModifierInfoListItemsList
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::GameplayModifierInfoListItemsList* gameplayModifierInfoListItemsList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierInfoListItemsList*) == 0x8);
    // private UnityEngine.GameObject _modifiersPanelGO
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::GameObject* modifiersPanelGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE257E4
    // private System.Action`1<MissionLevelDetailViewController> didPressPlayButtonEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>* didPressPlayButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>*) == 0x8);
    // private MissionNode _missionNode
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::MissionNode* missionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // Creating value type constructor for type: MissionLevelDetailViewController
    MissionLevelDetailViewController(GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}, UnityEngine::UI::Button* playButton_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, GlobalNamespace::ObjectiveListItemsList* objectiveListItems_ = {}, GlobalNamespace::GameplayModifierInfoListItemsList* gameplayModifierInfoListItemsList_ = {}, UnityEngine::GameObject* modifiersPanelGO_ = {}, System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>* didPressPlayButtonEvent_ = {}, GlobalNamespace::MissionNode* missionNode_ = {}) noexcept : gameplayModifiersModel{gameplayModifiersModel_}, playButton{playButton_}, levelBar{levelBar_}, objectiveListItems{objectiveListItems_}, gameplayModifierInfoListItemsList{gameplayModifierInfoListItemsList_}, modifiersPanelGO{modifiersPanelGO_}, didPressPlayButtonEvent{didPressPlayButtonEvent_}, missionNode{missionNode_} {}
    // public System.Void add_didPressPlayButtonEvent(System.Action`1<MissionLevelDetailViewController> value)
    // Offset: 0x1094460
    void add_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>* value);
    // public System.Void remove_didPressPlayButtonEvent(System.Action`1<MissionLevelDetailViewController> value)
    // Offset: 0x1094504
    void remove_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>* value);
    // public MissionNode get_missionNode()
    // Offset: 0x10945A8
    GlobalNamespace::MissionNode* get_missionNode();
    // public System.Void Setup(MissionNode missionNode)
    // Offset: 0x10945B0
    void Setup(GlobalNamespace::MissionNode* missionNode);
    // public System.Void RefreshContent()
    // Offset: 0x10945EC
    void RefreshContent();
    // private System.Void PlayButtonPressed()
    // Offset: 0x109483C
    void PlayButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1094790
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x10948A0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelDetailViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelDetailViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelDetailViewController*, creationType>()));
    }
  }; // MissionLevelDetailViewController
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelDetailViewController), 168 + sizeof(GlobalNamespace::MissionNode*)> __GlobalNamespace_MissionLevelDetailViewControllerSizeCheck;
  static_assert(sizeof(MissionLevelDetailViewController) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelDetailViewController*, "", "MissionLevelDetailViewController");
// Writing includes for template specializations
#include "System/Action_1.hpp"
#include "GlobalNamespace/MissionNode.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent
// Il2CppName: add_didPressPlayButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)(System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>*)>(&GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "add_didPressPlayButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent
// Il2CppName: remove_didPressPlayButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)(System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>*)>(&GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "remove_didPressPlayButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MissionLevelDetailViewController*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::get_missionNode
// Il2CppName: get_missionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode* (GlobalNamespace::MissionLevelDetailViewController::*)()>(&GlobalNamespace::MissionLevelDetailViewController::get_missionNode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "get_missionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)(GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionLevelDetailViewController::Setup)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionNode*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::RefreshContent
// Il2CppName: RefreshContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)()>(&GlobalNamespace::MissionLevelDetailViewController::RefreshContent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "RefreshContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed
// Il2CppName: PlayButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)()>(&GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "PlayButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)(bool, bool, bool)>(&GlobalNamespace::MissionLevelDetailViewController::DidActivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
