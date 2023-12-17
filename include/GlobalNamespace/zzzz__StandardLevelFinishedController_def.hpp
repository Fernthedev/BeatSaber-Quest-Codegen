#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelFinishedController)
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelFinishedController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelFinishedController);
// Type: ::StandardLevelFinishedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5081))
// CS Name: ::StandardLevelFinishedController*
class CORDL_TYPE StandardLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _standardLevelSceneSetupData offset 0x18
 __declspec(property(get=__get__standardLevelSceneSetupData, put=__set__standardLevelSceneSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  _standardLevelSceneSetupData;

/// @brief Field _prepareLevelCompletionResults offset 0x20
 __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults)) ::GlobalNamespace::PrepareLevelCompletionResults*  _prepareLevelCompletionResults;

/// @brief Field _gameplayManager offset 0x28
 __declspec(property(get=__get__gameplayManager, put=__set__gameplayManager)) ::GlobalNamespace::ILevelEndActions*  _gameplayManager;

constexpr void __set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* __get__standardLevelSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> __get__standardLevelSceneSetupData() const;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults* __get__prepareLevelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> __get__prepareLevelCompletionResults() const;

constexpr void __set__gameplayManager(::GlobalNamespace::ILevelEndActions*  value) ;

constexpr ::GlobalNamespace::ILevelEndActions* __get__gameplayManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> __get__gameplayManager() const;

/// @brief Method Start addr 0x23cad44 size 0xf0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23cae34 size 0x108 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleLevelFinished addr 0x23caf3c size 0x4 virtual false final false
inline void HandleLevelFinished() ;

/// @brief Method StartLevelFinished addr 0x23caf40 size 0x40 virtual false final false
inline void StartLevelFinished() ;

static inline ::GlobalNamespace::StandardLevelFinishedController* New_ctor() ;

/// @brief Method .ctor addr 0x23caf80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelFinishedController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelFinishedController(StandardLevelFinishedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelFinishedController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelFinishedController(StandardLevelFinishedController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardLevelFinishedController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelFinishedController, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelFinishedController*, "", "StandardLevelFinishedController");
