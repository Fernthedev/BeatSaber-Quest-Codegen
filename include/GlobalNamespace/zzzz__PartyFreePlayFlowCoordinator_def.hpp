#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PartyFreePlayFlowCoordinator)
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class EnterPlayerGuestNameViewController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass23_0;
}
namespace GlobalNamespace {
class LeaderboardViewController;
}
namespace GlobalNamespace {
class ResultsViewController;
}
namespace GlobalNamespace {
class LocalLeaderboardViewController;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class PartyFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PartyFreePlayFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0);
MARK_REF_PTR_T(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0);
// Type: ::<>c__DisplayClass18_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5518))
// CS Name: ::PartyFreePlayFlowCoordinator::<>c__DisplayClass18_0*
class CORDL_TYPE __PartyFreePlayFlowCoordinator____c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PartyFreePlayFlowCoordinator*  __4__this;

/// @brief Field levelCompletionResults offset 0x18
 __declspec(property(get=__get_levelCompletionResults, put=__set_levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults;

/// @brief Field leaderboardId offset 0x20
 __declspec(property(get=__get_leaderboardId, put=__set_leaderboardId)) ::StringW  leaderboardId;

/// @brief Field transformedBeatmapData offset 0x28
 __declspec(property(get=__get_transformedBeatmapData, put=__set_transformedBeatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  transformedBeatmapData;

/// @brief Field difficultyBeatmap offset 0x30
 __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap;

/// @brief Field practice offset 0x38
 __declspec(property(get=__get_practice, put=__set_practice)) bool  practice;

constexpr void __set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> __get___4__this() const;

constexpr void __set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::LevelCompletionResults* __get_levelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> __get_levelCompletionResults() const;

constexpr void __set_leaderboardId(::StringW  value) ;

constexpr ::StringW& __get_leaderboardId() ;

constexpr ::StringW const& __get_leaderboardId() const;

constexpr void __set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get_transformedBeatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get_transformedBeatmapData() const;

constexpr void __set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get_difficultyBeatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get_difficultyBeatmap() const;

constexpr void __set_practice(bool  value) ;

constexpr bool& __get_practice() ;

constexpr bool const& __get_practice() const;

static inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0* New_ctor() ;

/// @brief Method .ctor addr 0x229b118 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0 addr 0x229b388 size 0xc8 virtual false final false
inline void _ProcessLevelCompletionResultsAfterLevelDidFinish_b__0(::GlobalNamespace::EnterPlayerGuestNameViewController*  viewController, ::StringW  playerName) ;

// Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PartyFreePlayFlowCoordinator____c__DisplayClass18_0(__PartyFreePlayFlowCoordinator____c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PartyFreePlayFlowCoordinator____c__DisplayClass18_0(__PartyFreePlayFlowCoordinator____c__DisplayClass18_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PartyFreePlayFlowCoordinator____c__DisplayClass18_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass23_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5519))
// CS Name: ::PartyFreePlayFlowCoordinator::<>c__DisplayClass23_0*
class CORDL_TYPE __PartyFreePlayFlowCoordinator____c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PartyFreePlayFlowCoordinator*  __4__this;

/// @brief Field resultsViewController offset 0x18
 __declspec(property(get=__get_resultsViewController, put=__set_resultsViewController)) ::GlobalNamespace::ResultsViewController*  resultsViewController;

constexpr void __set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> __get___4__this() const;

constexpr void __set_resultsViewController(::GlobalNamespace::ResultsViewController*  value) ;

constexpr ::GlobalNamespace::ResultsViewController* __get_resultsViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> __get_resultsViewController() const;

static inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0* New_ctor() ;

/// @brief Method .ctor addr 0x229b370 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleResultsViewControllerRestartButtonPressed>b__0 addr 0x229b450 size 0x50 virtual false final false
inline void _HandleResultsViewControllerRestartButtonPressed_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PartyFreePlayFlowCoordinator____c__DisplayClass23_0(__PartyFreePlayFlowCoordinator____c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PartyFreePlayFlowCoordinator____c__DisplayClass23_0(__PartyFreePlayFlowCoordinator____c__DisplayClass23_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PartyFreePlayFlowCoordinator____c__DisplayClass23_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PartyFreePlayFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5526))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5520))
// CS Name: ::PartyFreePlayFlowCoordinator*
class CORDL_TYPE PartyFreePlayFlowCoordinator : public ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
public:
// Declarations
using __c__DisplayClass23_0 = ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0;

using __c__DisplayClass18_0 = ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x150};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x150 - sizeof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator)]{};

/// @brief Field _defaultLightsPreset offset 0x110
 __declspec(property(get=__get__defaultLightsPreset, put=__set__defaultLightsPreset)) ::GlobalNamespace::MenuLightsPresetSO*  _defaultLightsPreset;

/// @brief Field _resultsClearedLightsPreset offset 0x118
 __declspec(property(get=__get__resultsClearedLightsPreset, put=__set__resultsClearedLightsPreset)) ::GlobalNamespace::MenuLightsPresetSO*  _resultsClearedLightsPreset;

/// @brief Field _resultsFailedLightsPreset offset 0x120
 __declspec(property(get=__get__resultsFailedLightsPreset, put=__set__resultsFailedLightsPreset)) ::GlobalNamespace::MenuLightsPresetSO*  _resultsFailedLightsPreset;

/// @brief Field _menuLightsManager offset 0x128
 __declspec(property(get=__get__menuLightsManager, put=__set__menuLightsManager)) ::GlobalNamespace::MenuLightsManager*  _menuLightsManager;

/// @brief Field _resultsViewController offset 0x130
 __declspec(property(get=__get__resultsViewController, put=__set__resultsViewController)) ::GlobalNamespace::ResultsViewController*  _resultsViewController;

/// @brief Field _localLeaderboardViewController offset 0x138
 __declspec(property(get=__get__localLeaderboardViewController, put=__set__localLeaderboardViewController)) ::GlobalNamespace::LocalLeaderboardViewController*  _localLeaderboardViewController;

/// @brief Field _enterNameViewController offset 0x140
 __declspec(property(get=__get__enterNameViewController, put=__set__enterNameViewController)) ::GlobalNamespace::EnterPlayerGuestNameViewController*  _enterNameViewController;

/// @brief Field _saveData offset 0x148
 __declspec(property(get=__get__saveData, put=__set__saveData)) ::GlobalNamespace::ISaveData*  _saveData;

 __declspec(property(get=get_gameMode)) ::StringW  gameMode;

 __declspec(property(get=get_leaderboardViewController)) ::GlobalNamespace::LeaderboardViewController*  leaderboardViewController;

 __declspec(property(get=get_showBackButtonForMainViewController)) bool  showBackButtonForMainViewController;

 __declspec(property(get=get_mainTitle)) ::StringW  mainTitle;

constexpr void __set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO* __get__defaultLightsPreset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> __get__defaultLightsPreset() const;

constexpr void __set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO* __get__resultsClearedLightsPreset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> __get__resultsClearedLightsPreset() const;

constexpr void __set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO* __get__resultsFailedLightsPreset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> __get__resultsFailedLightsPreset() const;

constexpr void __set__menuLightsManager(::GlobalNamespace::MenuLightsManager*  value) ;

constexpr ::GlobalNamespace::MenuLightsManager* __get__menuLightsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> __get__menuLightsManager() const;

constexpr void __set__resultsViewController(::GlobalNamespace::ResultsViewController*  value) ;

constexpr ::GlobalNamespace::ResultsViewController* __get__resultsViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> __get__resultsViewController() const;

constexpr void __set__localLeaderboardViewController(::GlobalNamespace::LocalLeaderboardViewController*  value) ;

constexpr ::GlobalNamespace::LocalLeaderboardViewController* __get__localLeaderboardViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardViewController*> __get__localLeaderboardViewController() const;

constexpr void __set__enterNameViewController(::GlobalNamespace::EnterPlayerGuestNameViewController*  value) ;

constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController* __get__enterNameViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnterPlayerGuestNameViewController*> __get__enterNameViewController() const;

constexpr void __set__saveData(::GlobalNamespace::ISaveData*  value) ;

constexpr ::GlobalNamespace::ISaveData* __get__saveData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> __get__saveData() const;

/// @brief Method get_gameMode addr 0x229aaf4 size 0x40 virtual true final false
inline ::StringW get_gameMode() ;

/// @brief Method get_leaderboardViewController addr 0x229ab34 size 0x8 virtual true final false
inline ::GlobalNamespace::LeaderboardViewController* get_leaderboardViewController() ;

/// @brief Method get_showBackButtonForMainViewController addr 0x229ab3c size 0x8 virtual true final false
inline bool get_showBackButtonForMainViewController() ;

/// @brief Method get_mainTitle addr 0x229ab44 size 0x44 virtual true final false
inline ::StringW get_mainTitle() ;

/// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate addr 0x229ab88 size 0x1d0 virtual true final false
inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool  firstActivation, bool  addedToHierarchy) ;

/// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate addr 0x229ad88 size 0x14c virtual true final false
inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool  removedFromHierarchy) ;

/// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish addr 0x229aed4 size 0x244 virtual true final false
inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData*  transformedBeatmapData, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, bool  practice) ;

/// @brief Method WillScoreGoToLeaderboard addr 0x229b144 size 0x50 virtual false final false
inline bool WillScoreGoToLeaderboard(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::StringW  leaderboardId, bool  practice) ;

/// @brief Method IsNewHighScore addr 0x229b194 size 0x44 virtual false final false
inline bool IsNewHighScore(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::StringW  leaderboardId) ;

/// @brief Method ProcessScore addr 0x229b1d8 size 0x94 virtual false final false
inline void ProcessScore(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::StringW  leaderboardId, ::StringW  playerName) ;

/// @brief Method HandleResultsViewControllerContinueButtonPressed addr 0x229b26c size 0x3c virtual false final false
inline void HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController*  resultsViewController) ;

/// @brief Method HandleResultsViewControllerRestartButtonPressed addr 0x229b2a8 size 0xc8 virtual false final false
inline void HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController*  resultsViewController) ;

static inline ::GlobalNamespace::PartyFreePlayFlowCoordinator* New_ctor() ;

/// @brief Method .ctor addr 0x229b378 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PartyFreePlayFlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PartyFreePlayFlowCoordinator(PartyFreePlayFlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartyFreePlayFlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartyFreePlayFlowCoordinator(PartyFreePlayFlowCoordinator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PartyFreePlayFlowCoordinator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyFreePlayFlowCoordinator, 0x150>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PartyFreePlayFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyFreePlayFlowCoordinator*, "", "PartyFreePlayFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass18_0");
NEED_NO_BOX(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass23_0");
