#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameplayLevelSceneTransitionEvents)
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayLevelSceneTransitionEvents);
// Type: ::GameplayLevelSceneTransitionEvents
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6064))
// CS Name: ::GameplayLevelSceneTransitionEvents*
class CORDL_TYPE GameplayLevelSceneTransitionEvents : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _standardLevelScenesTransitionSetupData offset 0x10
 __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  _standardLevelScenesTransitionSetupData;

/// @brief Field _missionLevelScenesTransitionSetupData offset 0x18
 __declspec(property(get=__get__missionLevelScenesTransitionSetupData, put=__set__missionLevelScenesTransitionSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  _missionLevelScenesTransitionSetupData;

/// @brief Field _multiplayerLevelScenesTransitionSetupData offset 0x20
 __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData)) ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  _multiplayerLevelScenesTransitionSetupData;

/// @brief Field anyGameplayLevelDidFinishEvent offset 0x28
 __declspec(property(get=__get_anyGameplayLevelDidFinishEvent, put=__set_anyGameplayLevelDidFinishEvent)) ::System::Action*  anyGameplayLevelDidFinishEvent;

constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* __get__standardLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> __get__standardLevelScenesTransitionSetupData() const;

constexpr void __set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* __get__missionLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> __get__missionLevelScenesTransitionSetupData() const;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* __get__multiplayerLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> __get__multiplayerLevelScenesTransitionSetupData() const;

constexpr void __set_anyGameplayLevelDidFinishEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_anyGameplayLevelDidFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_anyGameplayLevelDidFinishEvent() const;

/// @brief Method add_anyGameplayLevelDidFinishEvent addr 0x231d424 size 0x9c virtual false final false
inline void add_anyGameplayLevelDidFinishEvent(::System::Action*  value) ;

/// @brief Method remove_anyGameplayLevelDidFinishEvent addr 0x231d4c0 size 0x9c virtual false final false
inline void remove_anyGameplayLevelDidFinishEvent(::System::Action*  value) ;

static inline ::GlobalNamespace::GameplayLevelSceneTransitionEvents* New_ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelScenesTransitionSetupData, ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  missionLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x231d55c size 0x16c virtual false final false
inline void _ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelScenesTransitionSetupData, ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  missionLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData) ;

/// @brief Method Finalize addr 0x231d8d8 size 0x1e4 virtual true final false
inline void Finalize() ;

/// @brief Method HandleStandardLevelDidFinish addr 0x231dccc size 0x1c virtual false final false
inline void HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults) ;

/// @brief Method HandleMultiplayerLevelDidFinish addr 0x231dd04 size 0x1c virtual false final false
inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData*  multiplayerResultsData) ;

/// @brief Method HandleMissionLevelDidFinish addr 0x231dd20 size 0x1c virtual false final false
inline void HandleMissionLevelDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  missionLevelScenesTransitionSetupData, ::GlobalNamespace::MissionCompletionResults*  missionCompletionResults) ;

/// @brief Method InvokeAnyGameplayLevelDidFinish addr 0x231dce8 size 0x1c virtual false final false
inline void InvokeAnyGameplayLevelDidFinish() ;

// Ctor Parameters [CppParam { name: "", ty: "GameplayLevelSceneTransitionEvents", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayLevelSceneTransitionEvents(GameplayLevelSceneTransitionEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayLevelSceneTransitionEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayLevelSceneTransitionEvents(GameplayLevelSceneTransitionEvents const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayLevelSceneTransitionEvents()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayLevelSceneTransitionEvents, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayLevelSceneTransitionEvents);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayLevelSceneTransitionEvents*, "", "GameplayLevelSceneTransitionEvents");
