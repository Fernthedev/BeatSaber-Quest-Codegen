#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionLevelRestartController)
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class ILevelRestartController;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelRestartController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelRestartController);
// Type: ::MissionLevelRestartController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5074))
// CS Name: ::MissionLevelRestartController*
class CORDL_TYPE MissionLevelRestartController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _missionLevelSceneSetupData offset 0x18
 __declspec(property(get=__get__missionLevelSceneSetupData, put=__set__missionLevelSceneSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  _missionLevelSceneSetupData;

/// @brief Field _prepareLevelCompletionResults offset 0x20
 __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults)) ::GlobalNamespace::PrepareLevelCompletionResults*  _prepareLevelCompletionResults;

/// @brief Field _missionObjectiveCheckersManager offset 0x28
 __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager)) ::GlobalNamespace::MissionObjectiveCheckersManager*  _missionObjectiveCheckersManager;

/// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
constexpr operator  ::GlobalNamespace::ILevelRestartController*() noexcept;

constexpr void __set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* __get__missionLevelSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> __get__missionLevelSceneSetupData() const;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults* __get__prepareLevelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> __get__prepareLevelCompletionResults() const;

constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager*  value) ;

constexpr ::GlobalNamespace::MissionObjectiveCheckersManager* __get__missionObjectiveCheckersManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> __get__missionObjectiveCheckersManager() const;

/// @brief Method RestartLevel addr 0x23c9a5c size 0xb0 virtual true final true
inline void RestartLevel() ;

static inline ::GlobalNamespace::MissionLevelRestartController* New_ctor() ;

/// @brief Method .ctor addr 0x23c9b0c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelRestartController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionLevelRestartController(MissionLevelRestartController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelRestartController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionLevelRestartController(MissionLevelRestartController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionLevelRestartController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelRestartController, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelRestartController*, "", "MissionLevelRestartController");
