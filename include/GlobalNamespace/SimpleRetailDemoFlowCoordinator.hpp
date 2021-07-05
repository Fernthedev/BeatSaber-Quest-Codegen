// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: SimpleRetailDemoViewController
#include "GlobalNamespace/SimpleRetailDemoViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: HowToPlayViewController
  class HowToPlayViewController;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x138
  #pragma pack(push, 1)
  // Autogenerated type: SimpleRetailDemoFlowCoordinator
  class SimpleRetailDemoFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::SimpleRetailDemoFlowCoordinator::$QuitApplicationCoroutine$d__22
    class $QuitApplicationCoroutine$d__22;
    // Nested type: GlobalNamespace::SimpleRetailDemoFlowCoordinator::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // private MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE23188
    // private BeatmapLevelSO _demoLevel1
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::BeatmapLevelSO* demoLevel1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _demoLevel1Characteristic
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::BeatmapCharacteristicSO* demoLevel1Characteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _demoLevel1Difficulty
    // Size: 0x4
    // Offset: 0xC8
    GlobalNamespace::BeatmapDifficulty demoLevel1Difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: demoLevel1Difficulty and: demoLevel2
    char __padding4[0x4] = {};
    // private BeatmapLevelSO _demoLevel2
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::BeatmapLevelSO* demoLevel2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _demoLevel2Characteristic
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::BeatmapCharacteristicSO* demoLevel2Characteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _demoLevel2Difficulty
    // Size: 0x4
    // Offset: 0xE0
    GlobalNamespace::BeatmapDifficulty demoLevel2Difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: demoLevel2Difficulty and: simpleDemoViewController
    char __padding7[0x4] = {};
    // [SpaceAttribute] Offset: 0xE23210
    // private SimpleRetailDemoViewController _simpleDemoViewController
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::SimpleRetailDemoViewController* simpleDemoViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleRetailDemoViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE23248
    // private readonly HowToPlayViewController _howToPlayViewController
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HowToPlayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE23258
    // private readonly ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE23268
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE23278
    // private readonly FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0x108
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // private IDifficultyBeatmap _level1DifficultyBeatmap
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::IDifficultyBeatmap* level1DifficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private IDifficultyBeatmap _level2DifficultyBeatmap
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::IDifficultyBeatmap* level2DifficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private IDifficultyBeatmap _selectedLevelDifficultyBeatmap
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::IDifficultyBeatmap* selectedLevelDifficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private System.Boolean _quittingApplication
    // Size: 0x1
    // Offset: 0x128
    bool quittingApplication;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: quittingApplication and: gameplayModifiers
    char __padding16[0x7] = {};
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // Creating value type constructor for type: SimpleRetailDemoFlowCoordinator
    SimpleRetailDemoFlowCoordinator(GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}, GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::BeatmapLevelSO* demoLevel1_ = {}, GlobalNamespace::BeatmapCharacteristicSO* demoLevel1Characteristic_ = {}, GlobalNamespace::BeatmapDifficulty demoLevel1Difficulty_ = {}, GlobalNamespace::BeatmapLevelSO* demoLevel2_ = {}, GlobalNamespace::BeatmapCharacteristicSO* demoLevel2Characteristic_ = {}, GlobalNamespace::BeatmapDifficulty demoLevel2Difficulty_ = {}, GlobalNamespace::SimpleRetailDemoViewController* simpleDemoViewController_ = {}, GlobalNamespace::HowToPlayViewController* howToPlayViewController_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::FadeInOutController* fadeInOut_ = {}, GlobalNamespace::IDifficultyBeatmap* level1DifficultyBeatmap_ = {}, GlobalNamespace::IDifficultyBeatmap* level2DifficultyBeatmap_ = {}, GlobalNamespace::IDifficultyBeatmap* selectedLevelDifficultyBeatmap_ = {}, bool quittingApplication_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : menuTransitionsHelper{menuTransitionsHelper_}, defaultLightsPreset{defaultLightsPreset_}, demoLevel1{demoLevel1_}, demoLevel1Characteristic{demoLevel1Characteristic_}, demoLevel1Difficulty{demoLevel1Difficulty_}, demoLevel2{demoLevel2_}, demoLevel2Characteristic{demoLevel2Characteristic_}, demoLevel2Difficulty{demoLevel2Difficulty_}, simpleDemoViewController{simpleDemoViewController_}, howToPlayViewController{howToPlayViewController_}, resultsViewController{resultsViewController_}, menuLightsManager{menuLightsManager_}, fadeInOut{fadeInOut_}, level1DifficultyBeatmap{level1DifficultyBeatmap_}, level2DifficultyBeatmap{level2DifficultyBeatmap_}, selectedLevelDifficultyBeatmap{selectedLevelDifficultyBeatmap_}, quittingApplication{quittingApplication_}, gameplayModifiers{gameplayModifiers_} {}
    // private System.Void HandleSimpleDemoViewControllerDidFinish(SimpleRetailDemoViewController viewController, SimpleRetailDemoViewController/MenuButton menuButton)
    // Offset: 0x10DF944
    void HandleSimpleDemoViewControllerDidFinish(GlobalNamespace::SimpleRetailDemoViewController* viewController, GlobalNamespace::SimpleRetailDemoViewController::MenuButton menuButton);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x10DFAF4
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Collections.IEnumerator QuitApplicationCoroutine()
    // Offset: 0x10DFB34
    System::Collections::IEnumerator* QuitApplicationCoroutine();
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x10DFBD0
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void StartLevel(System.Action beforeSceneSwitchCallback)
    // Offset: 0x10DF9C8
    void StartLevel(System::Action* beforeSceneSwitchCallback);
    // private System.Void HandleLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelSceneSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0x10DFC80
    void HandleLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10DF518
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10DF780
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x10DFD1C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleRetailDemoFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleRetailDemoFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleRetailDemoFlowCoordinator*, creationType>()));
    }
  }; // SimpleRetailDemoFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(SimpleRetailDemoFlowCoordinator), 304 + sizeof(GlobalNamespace::GameplayModifiers*)> __GlobalNamespace_SimpleRetailDemoFlowCoordinatorSizeCheck;
  static_assert(sizeof(SimpleRetailDemoFlowCoordinator) == 0x138);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleRetailDemoFlowCoordinator*, "", "SimpleRetailDemoFlowCoordinator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::HandleSimpleDemoViewControllerDidFinish
// Il2CppName: HandleSimpleDemoViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoFlowCoordinator::*)(GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton)>(&GlobalNamespace::SimpleRetailDemoFlowCoordinator::HandleSimpleDemoViewControllerDidFinish)> {
  const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "SimpleRetailDemoViewController")->byval_arg;
    static auto* menuButton = &::il2cpp_utils::GetClassFromName("", "SimpleRetailDemoViewController/MenuButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoFlowCoordinator*), "HandleSimpleDemoViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController, menuButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::HandleResultsViewControllerContinueButtonPressed
// Il2CppName: HandleResultsViewControllerContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::SimpleRetailDemoFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  const MethodInfo* get() {
    static auto* resultsViewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoFlowCoordinator*), "HandleResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::QuitApplicationCoroutine
// Il2CppName: QuitApplicationCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::SimpleRetailDemoFlowCoordinator::*)()>(&GlobalNamespace::SimpleRetailDemoFlowCoordinator::QuitApplicationCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoFlowCoordinator*), "QuitApplicationCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::HandleResultsViewControllerRestartButtonPressed
// Il2CppName: HandleResultsViewControllerRestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::SimpleRetailDemoFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  const MethodInfo* get() {
    static auto* resultsViewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoFlowCoordinator*), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::StartLevel
// Il2CppName: StartLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoFlowCoordinator::*)(System::Action*)>(&GlobalNamespace::SimpleRetailDemoFlowCoordinator::StartLevel)> {
  const MethodInfo* get() {
    static auto* beforeSceneSwitchCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoFlowCoordinator*), "StartLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beforeSceneSwitchCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::HandleLevelDidFinish
// Il2CppName: HandleLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoFlowCoordinator::*)(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::SimpleRetailDemoFlowCoordinator::HandleLevelDidFinish)> {
  const MethodInfo* get() {
    static auto* standardLevelSceneSetupData = &::il2cpp_utils::GetClassFromName("", "StandardLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoFlowCoordinator*), "HandleLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standardLevelSceneSetupData, levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::SimpleRetailDemoFlowCoordinator::DidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::SimpleRetailDemoFlowCoordinator::DidDeactivate)> {
  const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoFlowCoordinator*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
