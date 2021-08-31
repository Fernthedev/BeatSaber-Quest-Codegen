// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: MissionSelectionNavigationController
  class MissionSelectionNavigationController;
  // Forward declaring type: MissionResultsViewController
  class MissionResultsViewController;
  // Forward declaring type: GameplaySetupViewController
  class GameplaySetupViewController;
  // Forward declaring type: MissionHelpViewController
  class MissionHelpViewController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x111
  #pragma pack(push, 1)
  // Autogenerated type: CampaignFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class CampaignFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // Nested type: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsClearedLightsPreset
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsFailedLightsPreset
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _newObjectiveLightsPreset
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::MenuLightsPresetSO* newObjectiveLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F288
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F298
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F2A8
    // private readonly MissionSelectionNavigationController _missionSelectionNavigationController
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::MissionSelectionNavigationController* missionSelectionNavigationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionSelectionNavigationController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F2B8
    // private readonly MissionResultsViewController _missionResultsViewController
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::MissionResultsViewController* missionResultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F2C8
    // private readonly GameplaySetupViewController _gameplaySetupViewController
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplaySetupViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F2D8
    // private readonly MissionHelpViewController _missionHelpViewController
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::MissionHelpViewController* missionHelpViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionHelpViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F2E8
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE3F2F8
    // private readonly CampaignProgressModel _campaignProgressModel
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::CampaignProgressModel* campaignProgressModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CampaignProgressModel*) == 0x8);
    // private System.Action`1<CampaignFlowCoordinator> didFinishEvent
    // Size: 0x8
    // Offset: 0x108
    System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>*) == 0x8);
    // private System.Boolean _showCredits
    // Size: 0x1
    // Offset: 0x110
    bool showCredits;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CampaignFlowCoordinator
    CampaignFlowCoordinator(GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* newObjectiveLightsPreset_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::MissionSelectionNavigationController* missionSelectionNavigationController_ = {}, GlobalNamespace::MissionResultsViewController* missionResultsViewController_ = {}, GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController_ = {}, GlobalNamespace::MissionHelpViewController* missionHelpViewController_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::CampaignProgressModel* campaignProgressModel_ = {}, System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* didFinishEvent_ = {}, bool showCredits_ = {}) noexcept : defaultLightsPreset{defaultLightsPreset_}, resultsClearedLightsPreset{resultsClearedLightsPreset_}, resultsFailedLightsPreset{resultsFailedLightsPreset_}, newObjectiveLightsPreset{newObjectiveLightsPreset_}, menuTransitionsHelper{menuTransitionsHelper_}, menuLightsManager{menuLightsManager_}, missionSelectionNavigationController{missionSelectionNavigationController_}, missionResultsViewController{missionResultsViewController_}, gameplaySetupViewController{gameplaySetupViewController_}, missionHelpViewController{missionHelpViewController_}, playerDataModel{playerDataModel_}, campaignProgressModel{campaignProgressModel_}, didFinishEvent{didFinishEvent_}, showCredits{showCredits_} {}
    // Get instance field reference: private MenuLightsPresetSO _defaultLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__defaultLightsPreset();
    // Get instance field reference: private MenuLightsPresetSO _resultsClearedLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__resultsClearedLightsPreset();
    // Get instance field reference: private MenuLightsPresetSO _resultsFailedLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__resultsFailedLightsPreset();
    // Get instance field reference: private MenuLightsPresetSO _newObjectiveLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__newObjectiveLightsPreset();
    // Get instance field reference: private readonly MenuTransitionsHelper _menuTransitionsHelper
    GlobalNamespace::MenuTransitionsHelper*& dyn__menuTransitionsHelper();
    // Get instance field reference: private readonly MenuLightsManager _menuLightsManager
    GlobalNamespace::MenuLightsManager*& dyn__menuLightsManager();
    // Get instance field reference: private readonly MissionSelectionNavigationController _missionSelectionNavigationController
    GlobalNamespace::MissionSelectionNavigationController*& dyn__missionSelectionNavigationController();
    // Get instance field reference: private readonly MissionResultsViewController _missionResultsViewController
    GlobalNamespace::MissionResultsViewController*& dyn__missionResultsViewController();
    // Get instance field reference: private readonly GameplaySetupViewController _gameplaySetupViewController
    GlobalNamespace::GameplaySetupViewController*& dyn__gameplaySetupViewController();
    // Get instance field reference: private readonly MissionHelpViewController _missionHelpViewController
    GlobalNamespace::MissionHelpViewController*& dyn__missionHelpViewController();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private readonly CampaignProgressModel _campaignProgressModel
    GlobalNamespace::CampaignProgressModel*& dyn__campaignProgressModel();
    // Get instance field reference: private System.Action`1<CampaignFlowCoordinator> didFinishEvent
    System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>*& dyn_didFinishEvent();
    // Get instance field reference: private System.Boolean _showCredits
    bool& dyn__showCredits();
    // public System.Void add_didFinishEvent(System.Action`1<CampaignFlowCoordinator> value)
    // Offset: 0x10D4784
    void add_didFinishEvent(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<CampaignFlowCoordinator> value)
    // Offset: 0x10D482C
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* value);
    // private System.Void HandleMissionSelectionNavigationControllerDidPressPlayButton(MissionSelectionNavigationController viewController)
    // Offset: 0x10D4D70
    void HandleMissionSelectionNavigationControllerDidPressPlayButton(GlobalNamespace::MissionSelectionNavigationController* viewController);
    // private System.Void HandleMissionHelpViewControllerDidFinish(MissionHelpViewController viewController)
    // Offset: 0x10D5030
    void HandleMissionHelpViewControllerDidFinish(GlobalNamespace::MissionHelpViewController* viewController);
    // private System.Void HandleMissionResultsViewControllerContinueButtonPressed(MissionResultsViewController viewController)
    // Offset: 0x10D50D8
    void HandleMissionResultsViewControllerContinueButtonPressed(GlobalNamespace::MissionResultsViewController* viewController);
    // private System.Void HandleMissionResultsViewControllerRetryButtonPressed(MissionResultsViewController viewController)
    // Offset: 0x10D5184
    void HandleMissionResultsViewControllerRetryButtonPressed(GlobalNamespace::MissionResultsViewController* viewController);
    // private System.Void StartLevel(System.Action beforeSceneSwitchCallback)
    // Offset: 0x10D4EAC
    void StartLevel(System::Action* beforeSceneSwitchCallback);
    // private System.Void HandleMissionLevelSceneDidFinish(MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, MissionCompletionResults missionCompletionResults)
    // Offset: 0x10D522C
    void HandleMissionLevelSceneDidFinish(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Void <HandleMissionResultsViewControllerContinueButtonPressed>b__21_0()
    // Offset: 0x10D5474
    void $HandleMissionResultsViewControllerContinueButtonPressed$b__21_0();
    // private System.Void <HandleMissionResultsViewControllerContinueButtonPressed>b__21_1(System.Boolean presented)
    // Offset: 0x10D5508
    void $HandleMissionResultsViewControllerContinueButtonPressed$b__21_1(bool presented);
    // public System.Void .ctor()
    // Offset: 0x10D546C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CampaignFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CampaignFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CampaignFlowCoordinator*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10D48D4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10D4AE8
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/HMUI.AnimationType animationType)
    // Offset: 0x10D4C74
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/HMUI.AnimationType animationType)
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x10D53C0
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
  }; // CampaignFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(CampaignFlowCoordinator), 272 + sizeof(bool)> __GlobalNamespace_CampaignFlowCoordinatorSizeCheck;
  static_assert(sizeof(CampaignFlowCoordinator) == 0x111);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CampaignFlowCoordinator*, "", "CampaignFlowCoordinator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>*)>(&GlobalNamespace::CampaignFlowCoordinator::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "CampaignFlowCoordinator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>*)>(&GlobalNamespace::CampaignFlowCoordinator::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "CampaignFlowCoordinator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::HandleMissionSelectionNavigationControllerDidPressPlayButton
// Il2CppName: HandleMissionSelectionNavigationControllerDidPressPlayButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(GlobalNamespace::MissionSelectionNavigationController*)>(&GlobalNamespace::CampaignFlowCoordinator::HandleMissionSelectionNavigationControllerDidPressPlayButton)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "MissionSelectionNavigationController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "HandleMissionSelectionNavigationControllerDidPressPlayButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::HandleMissionHelpViewControllerDidFinish
// Il2CppName: HandleMissionHelpViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(GlobalNamespace::MissionHelpViewController*)>(&GlobalNamespace::CampaignFlowCoordinator::HandleMissionHelpViewControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "MissionHelpViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "HandleMissionHelpViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerContinueButtonPressed
// Il2CppName: HandleMissionResultsViewControllerContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(GlobalNamespace::MissionResultsViewController*)>(&GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerContinueButtonPressed)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "MissionResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "HandleMissionResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerRetryButtonPressed
// Il2CppName: HandleMissionResultsViewControllerRetryButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(GlobalNamespace::MissionResultsViewController*)>(&GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerRetryButtonPressed)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "MissionResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "HandleMissionResultsViewControllerRetryButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::StartLevel
// Il2CppName: StartLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(System::Action*)>(&GlobalNamespace::CampaignFlowCoordinator::StartLevel)> {
  static const MethodInfo* get() {
    static auto* beforeSceneSwitchCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "StartLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beforeSceneSwitchCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::HandleMissionLevelSceneDidFinish
// Il2CppName: HandleMissionLevelSceneDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*)>(&GlobalNamespace::CampaignFlowCoordinator::HandleMissionLevelSceneDidFinish)> {
  static const MethodInfo* get() {
    static auto* missionLevelScenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "MissionLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* missionCompletionResults = &::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "HandleMissionLevelSceneDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionLevelScenesTransitionSetupData, missionCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::$HandleMissionResultsViewControllerContinueButtonPressed$b__21_0
// Il2CppName: <HandleMissionResultsViewControllerContinueButtonPressed>b__21_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)()>(&GlobalNamespace::CampaignFlowCoordinator::$HandleMissionResultsViewControllerContinueButtonPressed$b__21_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "<HandleMissionResultsViewControllerContinueButtonPressed>b__21_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::$HandleMissionResultsViewControllerContinueButtonPressed$b__21_1
// Il2CppName: <HandleMissionResultsViewControllerContinueButtonPressed>b__21_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(bool)>(&GlobalNamespace::CampaignFlowCoordinator::$HandleMissionResultsViewControllerContinueButtonPressed$b__21_1)> {
  static const MethodInfo* get() {
    static auto* presented = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "<HandleMissionResultsViewControllerContinueButtonPressed>b__21_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{presented});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::CampaignFlowCoordinator::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::CampaignFlowCoordinator::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::TopViewControllerWillChange
// Il2CppName: TopViewControllerWillChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(HMUI::ViewController*, HMUI::ViewController*, HMUI::ViewController::AnimationType)>(&GlobalNamespace::CampaignFlowCoordinator::TopViewControllerWillChange)> {
  static const MethodInfo* get() {
    static auto* oldViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* newViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* animationType = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController/AnimationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "TopViewControllerWillChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldViewController, newViewController, animationType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::BackButtonWasPressed
// Il2CppName: BackButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::*)(HMUI::ViewController*)>(&GlobalNamespace::CampaignFlowCoordinator::BackButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* topViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator*), "BackButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topViewController});
  }
};
