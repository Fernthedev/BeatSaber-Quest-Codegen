// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
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
  // Autogenerated type: PartyFreePlayFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class PartyFreePlayFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // Nested type: GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
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
    // [InjectAttribute] Offset: 0xE459F8
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE45A08
    // private readonly ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE45A18
    // private readonly LocalLeaderboardViewController _localLeaderboardViewController
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE45A28
    // private readonly EnterPlayerGuestNameViewController _enterNameViewController
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*) == 0x8);
    // Creating value type constructor for type: PartyFreePlayFlowCoordinator
    PartyFreePlayFlowCoordinator(GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}, GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController_ = {}, GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController_ = {}) noexcept : defaultLightsPreset{defaultLightsPreset_}, resultsClearedLightsPreset{resultsClearedLightsPreset_}, resultsFailedLightsPreset{resultsFailedLightsPreset_}, menuLightsManager{menuLightsManager_}, resultsViewController{resultsViewController_}, localLeaderboardViewController{localLeaderboardViewController_}, enterNameViewController{enterNameViewController_} {}
    // Get instance field reference: private MenuLightsPresetSO _defaultLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__defaultLightsPreset();
    // Get instance field reference: private MenuLightsPresetSO _resultsClearedLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__resultsClearedLightsPreset();
    // Get instance field reference: private MenuLightsPresetSO _resultsFailedLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__resultsFailedLightsPreset();
    // Get instance field reference: private readonly MenuLightsManager _menuLightsManager
    GlobalNamespace::MenuLightsManager*& dyn__menuLightsManager();
    // Get instance field reference: private readonly ResultsViewController _resultsViewController
    GlobalNamespace::ResultsViewController*& dyn__resultsViewController();
    // Get instance field reference: private readonly LocalLeaderboardViewController _localLeaderboardViewController
    GlobalNamespace::LocalLeaderboardViewController*& dyn__localLeaderboardViewController();
    // Get instance field reference: private readonly EnterPlayerGuestNameViewController _enterNameViewController
    GlobalNamespace::EnterPlayerGuestNameViewController*& dyn__enterNameViewController();
    // private System.Boolean WillScoreGoToLeaderboard(LevelCompletionResults levelCompletionResults, System.String leaderboardId, System.Boolean practice)
    // Offset: 0x1037070
    bool WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId, bool practice);
    // private System.Boolean IsNewHighScore(LevelCompletionResults levelCompletionResults, System.String leaderboardId)
    // Offset: 0x10370C4
    bool IsNewHighScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId);
    // private System.Void ProcessScore(LevelCompletionResults levelCompletionResults, System.String leaderboardId, System.String playerName)
    // Offset: 0x1037114
    void ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId, ::Il2CppString* playerName);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x10371A8
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x10371F0
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // protected override System.String get_gameMode()
    // Offset: 0x1036AD0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x1036B18
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0x1036B20
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_showBackButtonForMainViewController()
    // Offset: 0x1036B28
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController()
    bool get_showBackButtonForMainViewController();
    // protected override System.String get_mainTitle()
    // Offset: 0x1036B30
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.String LevelSelectionFlowCoordinator::get_mainTitle()
    ::Il2CppString* get_mainTitle();
    // public System.Void .ctor()
    // Offset: 0x10372B0
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
    static PartyFreePlayFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyFreePlayFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyFreePlayFlowCoordinator*, creationType>()));
    }
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x1036B7C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x1036D08
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x1036E4C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
  }; // PartyFreePlayFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(PartyFreePlayFlowCoordinator), 320 + sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*)> __GlobalNamespace_PartyFreePlayFlowCoordinatorSizeCheck;
  static_assert(sizeof(PartyFreePlayFlowCoordinator) == 0x148);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyFreePlayFlowCoordinator*, "", "PartyFreePlayFlowCoordinator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard
// Il2CppName: WillScoreGoToLeaderboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PartyFreePlayFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, ::Il2CppString*, bool)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "WillScoreGoToLeaderboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, leaderboardId, practice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore
// Il2CppName: IsNewHighScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PartyFreePlayFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, ::Il2CppString*)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "IsNewHighScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, leaderboardId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore
// Il2CppName: ProcessScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyFreePlayFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "ProcessScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, leaderboardId, playerName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed
// Il2CppName: HandleResultsViewControllerContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyFreePlayFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  static const MethodInfo* get() {
    static auto* resultsViewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "HandleResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed
// Il2CppName: HandleResultsViewControllerRestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyFreePlayFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  static const MethodInfo* get() {
    static auto* resultsViewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController
// Il2CppName: get_leaderboardViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LeaderboardViewController* (GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "get_leaderboardViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::get_showPlayerStatsInDetailView
// Il2CppName: get_showPlayerStatsInDetailView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&GlobalNamespace::PartyFreePlayFlowCoordinator::get_showPlayerStatsInDetailView)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "get_showPlayerStatsInDetailView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController
// Il2CppName: get_showBackButtonForMainViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "get_showBackButtonForMainViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle
// Il2CppName: get_mainTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "get_mainTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyFreePlayFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyFreePlayFlowCoordinator::*)(bool)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish
// Il2CppName: ProcessLevelCompletionResultsAfterLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyFreePlayFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator*), "ProcessLevelCompletionResultsAfterLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice});
  }
};
