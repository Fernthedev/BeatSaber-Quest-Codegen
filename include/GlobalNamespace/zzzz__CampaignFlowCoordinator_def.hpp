#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CampaignFlowCoordinator)
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass22_0;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class MissionHelpViewController;
}
namespace GlobalNamespace {
class MissionResultsViewController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class MissionSelectionNavigationController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass20_0;
}
// Forward declare root types
namespace GlobalNamespace {
class CampaignFlowCoordinator;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass20_0;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass22_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CampaignFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0);
MARK_REF_PTR_T(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0);
// Type: ::<>c__DisplayClass20_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5487))
// CS Name: ::CampaignFlowCoordinator::<>c__DisplayClass20_0*
class CORDL_TYPE __CampaignFlowCoordinator____c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::CampaignFlowCoordinator*  __4__this;

/// @brief Field viewController offset 0x18
 __declspec(property(get=__get_viewController, put=__set_viewController)) ::GlobalNamespace::MissionHelpViewController*  viewController;

constexpr void __set___4__this(::GlobalNamespace::CampaignFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::CampaignFlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignFlowCoordinator*> __get___4__this() const;

constexpr void __set_viewController(::GlobalNamespace::MissionHelpViewController*  value) ;

constexpr ::GlobalNamespace::MissionHelpViewController* __get_viewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpViewController*> __get_viewController() const;

static inline ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0* New_ctor() ;

/// @brief Method .ctor addr 0x2287858 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleMissionHelpViewControllerDidFinish>b__0 addr 0x2287d20 size 0x50 virtual false final false
inline void _HandleMissionHelpViewControllerDidFinish_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CampaignFlowCoordinator____c__DisplayClass20_0(__CampaignFlowCoordinator____c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CampaignFlowCoordinator____c__DisplayClass20_0(__CampaignFlowCoordinator____c__DisplayClass20_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CampaignFlowCoordinator____c__DisplayClass20_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass22_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5488))
// CS Name: ::CampaignFlowCoordinator::<>c__DisplayClass22_0*
class CORDL_TYPE __CampaignFlowCoordinator____c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::CampaignFlowCoordinator*  __4__this;

/// @brief Field viewController offset 0x18
 __declspec(property(get=__get_viewController, put=__set_viewController)) ::GlobalNamespace::MissionResultsViewController*  viewController;

constexpr void __set___4__this(::GlobalNamespace::CampaignFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::CampaignFlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignFlowCoordinator*> __get___4__this() const;

constexpr void __set_viewController(::GlobalNamespace::MissionResultsViewController*  value) ;

constexpr ::GlobalNamespace::MissionResultsViewController* __get_viewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionResultsViewController*> __get_viewController() const;

static inline ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0* New_ctor() ;

/// @brief Method .ctor addr 0x22879c8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleMissionResultsViewControllerRetryButtonPressed>b__0 addr 0x2287d70 size 0x50 virtual false final false
inline void _HandleMissionResultsViewControllerRetryButtonPressed_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CampaignFlowCoordinator____c__DisplayClass22_0(__CampaignFlowCoordinator____c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CampaignFlowCoordinator____c__DisplayClass22_0(__CampaignFlowCoordinator____c__DisplayClass22_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CampaignFlowCoordinator____c__DisplayClass22_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CampaignFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5489))
// CS Name: ::CampaignFlowCoordinator*
class CORDL_TYPE CampaignFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
using __c__DisplayClass22_0 = ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0;

using __c__DisplayClass20_0 = ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x118};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x118 - sizeof(::HMUI::FlowCoordinator)]{};

/// @brief Field _defaultLightsPreset offset 0xa8
 __declspec(property(get=__get__defaultLightsPreset, put=__set__defaultLightsPreset)) ::GlobalNamespace::MenuLightsPresetSO*  _defaultLightsPreset;

/// @brief Field _resultsClearedLightsPreset offset 0xb0
 __declspec(property(get=__get__resultsClearedLightsPreset, put=__set__resultsClearedLightsPreset)) ::GlobalNamespace::MenuLightsPresetSO*  _resultsClearedLightsPreset;

/// @brief Field _resultsFailedLightsPreset offset 0xb8
 __declspec(property(get=__get__resultsFailedLightsPreset, put=__set__resultsFailedLightsPreset)) ::GlobalNamespace::MenuLightsPresetSO*  _resultsFailedLightsPreset;

/// @brief Field _newObjectiveLightsPreset offset 0xc0
 __declspec(property(get=__get__newObjectiveLightsPreset, put=__set__newObjectiveLightsPreset)) ::GlobalNamespace::MenuLightsPresetSO*  _newObjectiveLightsPreset;

/// @brief Field _menuTransitionsHelper offset 0xc8
 __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper)) ::GlobalNamespace::MenuTransitionsHelper*  _menuTransitionsHelper;

/// @brief Field _menuLightsManager offset 0xd0
 __declspec(property(get=__get__menuLightsManager, put=__set__menuLightsManager)) ::GlobalNamespace::MenuLightsManager*  _menuLightsManager;

/// @brief Field _missionSelectionNavigationController offset 0xd8
 __declspec(property(get=__get__missionSelectionNavigationController, put=__set__missionSelectionNavigationController)) ::GlobalNamespace::MissionSelectionNavigationController*  _missionSelectionNavigationController;

/// @brief Field _missionResultsViewController offset 0xe0
 __declspec(property(get=__get__missionResultsViewController, put=__set__missionResultsViewController)) ::GlobalNamespace::MissionResultsViewController*  _missionResultsViewController;

/// @brief Field _gameplaySetupViewController offset 0xe8
 __declspec(property(get=__get__gameplaySetupViewController, put=__set__gameplaySetupViewController)) ::GlobalNamespace::GameplaySetupViewController*  _gameplaySetupViewController;

/// @brief Field _missionHelpViewController offset 0xf0
 __declspec(property(get=__get__missionHelpViewController, put=__set__missionHelpViewController)) ::GlobalNamespace::MissionHelpViewController*  _missionHelpViewController;

/// @brief Field _playerDataModel offset 0xf8
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _campaignProgressModel offset 0x100
 __declspec(property(get=__get__campaignProgressModel, put=__set__campaignProgressModel)) ::GlobalNamespace::CampaignProgressModel*  _campaignProgressModel;

/// @brief Field didFinishEvent offset 0x108
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*  didFinishEvent;

/// @brief Field _showCredits offset 0x110
 __declspec(property(get=__get__showCredits, put=__set__showCredits)) bool  _showCredits;

constexpr void __set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO* __get__defaultLightsPreset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> __get__defaultLightsPreset() const;

constexpr void __set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO* __get__resultsClearedLightsPreset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> __get__resultsClearedLightsPreset() const;

constexpr void __set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO* __get__resultsFailedLightsPreset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> __get__resultsFailedLightsPreset() const;

constexpr void __set__newObjectiveLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO* __get__newObjectiveLightsPreset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> __get__newObjectiveLightsPreset() const;

constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper*  value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper* __get__menuTransitionsHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> __get__menuTransitionsHelper() const;

constexpr void __set__menuLightsManager(::GlobalNamespace::MenuLightsManager*  value) ;

constexpr ::GlobalNamespace::MenuLightsManager* __get__menuLightsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> __get__menuLightsManager() const;

constexpr void __set__missionSelectionNavigationController(::GlobalNamespace::MissionSelectionNavigationController*  value) ;

constexpr ::GlobalNamespace::MissionSelectionNavigationController* __get__missionSelectionNavigationController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionNavigationController*> __get__missionSelectionNavigationController() const;

constexpr void __set__missionResultsViewController(::GlobalNamespace::MissionResultsViewController*  value) ;

constexpr ::GlobalNamespace::MissionResultsViewController* __get__missionResultsViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionResultsViewController*> __get__missionResultsViewController() const;

constexpr void __set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController*  value) ;

constexpr ::GlobalNamespace::GameplaySetupViewController* __get__gameplaySetupViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplaySetupViewController*> __get__gameplaySetupViewController() const;

constexpr void __set__missionHelpViewController(::GlobalNamespace::MissionHelpViewController*  value) ;

constexpr ::GlobalNamespace::MissionHelpViewController* __get__missionHelpViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpViewController*> __get__missionHelpViewController() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__campaignProgressModel(::GlobalNamespace::CampaignProgressModel*  value) ;

constexpr ::GlobalNamespace::CampaignProgressModel* __get__campaignProgressModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> __get__campaignProgressModel() const;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*> __get_didFinishEvent() const;

constexpr void __set__showCredits(bool  value) ;

constexpr bool& __get__showCredits() ;

constexpr bool const& __get__showCredits() const;

/// @brief Method add_didFinishEvent addr 0x2286e58 size 0xb4 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x2286f0c size 0xb4 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*  value) ;

/// @brief Method DidActivate addr 0x2286fc0 size 0x254 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2287214 size 0x1b8 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method TopViewControllerWillChange addr 0x22873cc size 0xf8 virtual true final false
inline void TopViewControllerWillChange(::HMUI::ViewController*  oldViewController, ::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method HandleMissionSelectionNavigationControllerDidPressPlayButton addr 0x22874c4 size 0x120 virtual false final false
inline void HandleMissionSelectionNavigationControllerDidPressPlayButton(::GlobalNamespace::MissionSelectionNavigationController*  viewController) ;

/// @brief Method HandleMissionHelpViewControllerDidFinish addr 0x228779c size 0xbc virtual false final false
inline void HandleMissionHelpViewControllerDidFinish(::GlobalNamespace::MissionHelpViewController*  viewController) ;

/// @brief Method HandleMissionResultsViewControllerContinueButtonPressed addr 0x2287860 size 0xac virtual false final false
inline void HandleMissionResultsViewControllerContinueButtonPressed(::GlobalNamespace::MissionResultsViewController*  viewController) ;

/// @brief Method HandleMissionResultsViewControllerRetryButtonPressed addr 0x228790c size 0xbc virtual false final false
inline void HandleMissionResultsViewControllerRetryButtonPressed(::GlobalNamespace::MissionResultsViewController*  viewController) ;

/// @brief Method StartLevel addr 0x22875e4 size 0x1b8 virtual false final false
inline void StartLevel(::System::Action*  beforeSceneSwitchCallback) ;

/// @brief Method HandleMissionLevelSceneDidFinish addr 0x22879d0 size 0xe0 virtual false final false
inline void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  missionLevelScenesTransitionSetupData, ::GlobalNamespace::MissionCompletionResults*  missionCompletionResults) ;

/// @brief Method HandleMissionLevelSceneRestarted addr 0x2287b78 size 0x3c virtual false final false
inline void HandleMissionLevelSceneRestarted(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  missionLevelScenesTransitionSetupData, ::GlobalNamespace::MissionCompletionResults*  missionCompletionResults) ;

/// @brief Method UpdatePlayerStatistics addr 0x2287ab0 size 0xc8 virtual false final false
inline void UpdatePlayerStatistics(::GlobalNamespace::MissionCompletionResults*  missionCompletionResults, ::GlobalNamespace::MissionNode*  missionNode) ;

/// @brief Method BackButtonWasPressed addr 0x2287bb4 size 0xa0 virtual true final false
inline void BackButtonWasPressed(::HMUI::ViewController*  topViewController) ;

static inline ::GlobalNamespace::CampaignFlowCoordinator* New_ctor() ;

/// @brief Method .ctor addr 0x2287c54 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleMissionResultsViewControllerContinueButtonPressed>b__21_0 addr 0x2287c5c size 0x8c virtual false final false
inline void _HandleMissionResultsViewControllerContinueButtonPressed_b__21_0() ;

/// @brief Method <HandleMissionResultsViewControllerContinueButtonPressed>b__21_1 addr 0x2287ce8 size 0x38 virtual false final false
inline void _HandleMissionResultsViewControllerContinueButtonPressed_b__21_1(bool  presented) ;

// Ctor Parameters [CppParam { name: "", ty: "CampaignFlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CampaignFlowCoordinator(CampaignFlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CampaignFlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CampaignFlowCoordinator(CampaignFlowCoordinator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CampaignFlowCoordinator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CampaignFlowCoordinator, 0x118>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CampaignFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CampaignFlowCoordinator*, "", "CampaignFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass20_0");
NEED_NO_BOX(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass22_0");
