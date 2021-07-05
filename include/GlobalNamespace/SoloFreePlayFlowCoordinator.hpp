// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
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
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: PlatformLeaderboardViewController
  class PlatformLeaderboardViewController;
  // Forward declaring type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel;
  // Forward declaring type: PlayerLevelStatsData
  class PlayerLevelStatsData;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x148
  #pragma pack(push, 1)
  // Autogenerated type: SoloFreePlayFlowCoordinator
  class SoloFreePlayFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsClearedLightsPreset
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsFailedLightsPreset
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE23338
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE23348
    // private readonly ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE23358
    // private readonly PlatformLeaderboardViewController _platformLeaderboardViewController
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::PlatformLeaderboardViewController* platformLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE23368
    // private readonly PlatformLeaderboardsModel _platformLeaderboardsModel
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel*) == 0x8);
    // Creating value type constructor for type: SoloFreePlayFlowCoordinator
    SoloFreePlayFlowCoordinator(GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}, GlobalNamespace::PlatformLeaderboardViewController* platformLeaderboardViewController_ = {}, GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel_ = {}) noexcept : defaultLightsPreset{defaultLightsPreset_}, resultsClearedLightsPreset{resultsClearedLightsPreset_}, resultsFailedLightsPreset{resultsFailedLightsPreset_}, menuLightsManager{menuLightsManager_}, resultsViewController{resultsViewController_}, platformLeaderboardViewController{platformLeaderboardViewController_}, platformLeaderboardsModel{platformLeaderboardsModel_} {}
    // private System.Boolean IsNewHighScore(PlayerLevelStatsData playerLevelStats, LevelCompletionResults levelCompletionResults)
    // Offset: 0x1154DCC
    bool IsNewHighScore(GlobalNamespace::PlayerLevelStatsData* playerLevelStats, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController viewController)
    // Offset: 0x1154E44
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* viewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x1154E8C
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // protected override System.String get_gameMode()
    // Offset: 0x1154904
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x115494C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0x1154954
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_showBackButtonForMainViewController()
    // Offset: 0x115495C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController()
    bool get_showBackButtonForMainViewController();
    // protected override System.String get_mainTitle()
    // Offset: 0x1154964
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.String LevelSelectionFlowCoordinator::get_mainTitle()
    ::Il2CppString* get_mainTitle();
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x11549B0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x1154B2C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x1154C58
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // protected override System.Void Refresh()
    // Offset: 0x1154DF8
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::Refresh()
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1154F4C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoloFreePlayFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SoloFreePlayFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoloFreePlayFlowCoordinator*, creationType>()));
    }
  }; // SoloFreePlayFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(SoloFreePlayFlowCoordinator), 320 + sizeof(GlobalNamespace::PlatformLeaderboardsModel*)> __GlobalNamespace_SoloFreePlayFlowCoordinatorSizeCheck;
  static_assert(sizeof(SoloFreePlayFlowCoordinator) == 0x148);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SoloFreePlayFlowCoordinator*, "", "SoloFreePlayFlowCoordinator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::IsNewHighScore
// Il2CppName: IsNewHighScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SoloFreePlayFlowCoordinator::*)(GlobalNamespace::PlayerLevelStatsData*, GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::SoloFreePlayFlowCoordinator::IsNewHighScore)> {
  const MethodInfo* get() {
    static auto* playerLevelStats = &::il2cpp_utils::GetClassFromName("", "PlayerLevelStatsData")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "IsNewHighScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerLevelStats, levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed
// Il2CppName: HandleResultsViewControllerContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloFreePlayFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::SoloFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "HandleResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed
// Il2CppName: HandleResultsViewControllerRestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloFreePlayFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::SoloFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  const MethodInfo* get() {
    static auto* resultsViewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SoloFreePlayFlowCoordinator::*)()>(&GlobalNamespace::SoloFreePlayFlowCoordinator::get_gameMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::get_leaderboardViewController
// Il2CppName: get_leaderboardViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LeaderboardViewController* (GlobalNamespace::SoloFreePlayFlowCoordinator::*)()>(&GlobalNamespace::SoloFreePlayFlowCoordinator::get_leaderboardViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "get_leaderboardViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::get_showPlayerStatsInDetailView
// Il2CppName: get_showPlayerStatsInDetailView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SoloFreePlayFlowCoordinator::*)()>(&GlobalNamespace::SoloFreePlayFlowCoordinator::get_showPlayerStatsInDetailView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "get_showPlayerStatsInDetailView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::get_showBackButtonForMainViewController
// Il2CppName: get_showBackButtonForMainViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SoloFreePlayFlowCoordinator::*)()>(&GlobalNamespace::SoloFreePlayFlowCoordinator::get_showBackButtonForMainViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "get_showBackButtonForMainViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::get_mainTitle
// Il2CppName: get_mainTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SoloFreePlayFlowCoordinator::*)()>(&GlobalNamespace::SoloFreePlayFlowCoordinator::get_mainTitle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "get_mainTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloFreePlayFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::SoloFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloFreePlayFlowCoordinator::*)(bool)>(&GlobalNamespace::SoloFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish
// Il2CppName: ProcessLevelCompletionResultsAfterLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloFreePlayFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::SoloFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "ProcessLevelCompletionResultsAfterLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoloFreePlayFlowCoordinator::*)()>(&GlobalNamespace::SoloFreePlayFlowCoordinator::Refresh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoloFreePlayFlowCoordinator*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoloFreePlayFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
