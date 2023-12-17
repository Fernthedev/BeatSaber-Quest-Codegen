#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionLevelFinishedController)
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelFinishedController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelFinishedController);
// Type: ::MissionLevelFinishedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5073))
// CS Name: ::MissionLevelFinishedController*
class CORDL_TYPE MissionLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _prepareLevelCompletionResults offset 0x18
 __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults)) ::GlobalNamespace::PrepareLevelCompletionResults*  _prepareLevelCompletionResults;

/// @brief Field _missionLevelSceneSetupData offset 0x20
 __declspec(property(get=__get__missionLevelSceneSetupData, put=__set__missionLevelSceneSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  _missionLevelSceneSetupData;

/// @brief Field _missionObjectiveCheckersManager offset 0x28
 __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager)) ::GlobalNamespace::MissionObjectiveCheckersManager*  _missionObjectiveCheckersManager;

/// @brief Field _gameplayManager offset 0x30
 __declspec(property(get=__get__gameplayManager, put=__set__gameplayManager)) ::GlobalNamespace::ILevelEndActions*  _gameplayManager;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults* __get__prepareLevelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> __get__prepareLevelCompletionResults() const;

constexpr void __set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* __get__missionLevelSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> __get__missionLevelSceneSetupData() const;

constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager*  value) ;

constexpr ::GlobalNamespace::MissionObjectiveCheckersManager* __get__missionObjectiveCheckersManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> __get__missionObjectiveCheckersManager() const;

constexpr void __set__gameplayManager(::GlobalNamespace::ILevelEndActions*  value) ;

constexpr ::GlobalNamespace::ILevelEndActions* __get__gameplayManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> __get__gameplayManager() const;

/// @brief Method Start addr 0x23c97a8 size 0xf0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23c9898 size 0x108 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleLevelFinished addr 0x23c99a0 size 0x4 virtual false final false
inline void HandleLevelFinished() ;

/// @brief Method StartLevelFinished addr 0x23c99a4 size 0xb0 virtual false final false
inline void StartLevelFinished() ;

static inline ::GlobalNamespace::MissionLevelFinishedController* New_ctor() ;

/// @brief Method .ctor addr 0x23c9a54 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelFinishedController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionLevelFinishedController(MissionLevelFinishedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelFinishedController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionLevelFinishedController(MissionLevelFinishedController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionLevelFinishedController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelFinishedController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelFinishedController*, "", "MissionLevelFinishedController");
