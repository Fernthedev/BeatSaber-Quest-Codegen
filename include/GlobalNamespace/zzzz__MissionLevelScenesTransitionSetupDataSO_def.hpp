#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionLevelScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO);
// Type: ::MissionLevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6067))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6075))
// CS Name: ::MissionLevelScenesTransitionSetupDataSO*
class CORDL_TYPE MissionLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::GlobalNamespace::LevelScenesTransitionSetupDataSO)]{};

/// @brief Field _missionGameplaySceneInfo offset 0x38
 __declspec(property(get=__get__missionGameplaySceneInfo, put=__set__missionGameplaySceneInfo)) ::GlobalNamespace::SceneInfo*  _missionGameplaySceneInfo;

/// @brief Field _gameCoreSceneInfo offset 0x40
 __declspec(property(get=__get__gameCoreSceneInfo, put=__set__gameCoreSceneInfo)) ::GlobalNamespace::SceneInfo*  _gameCoreSceneInfo;

/// @brief Field _mainSettingsModel offset 0x48
 __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel)) ::GlobalNamespace::MainSettingsModelSO*  _mainSettingsModel;

/// @brief Field didFinishEvent offset 0x50
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*  didFinishEvent;

/// @brief Field <missionId>k__BackingField offset 0x58
 __declspec(property(get=__get__missionId_k__BackingField, put=__set__missionId_k__BackingField)) ::StringW  _missionId_k__BackingField;

/// @brief Field <difficultyBeatmap>k__BackingField offset 0x60
 __declspec(property(get=__get__difficultyBeatmap_k__BackingField, put=__set__difficultyBeatmap_k__BackingField)) ::GlobalNamespace::IDifficultyBeatmap*  _difficultyBeatmap_k__BackingField;

 __declspec(property(get=get_missionId, put=set_missionId)) ::StringW  missionId;

 __declspec(property(get=get_difficultyBeatmap, put=set_difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap;

constexpr void __set__missionGameplaySceneInfo(::GlobalNamespace::SceneInfo*  value) ;

constexpr ::GlobalNamespace::SceneInfo* __get__missionGameplaySceneInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> __get__missionGameplaySceneInfo() const;

constexpr void __set__gameCoreSceneInfo(::GlobalNamespace::SceneInfo*  value) ;

constexpr ::GlobalNamespace::SceneInfo* __get__gameCoreSceneInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> __get__gameCoreSceneInfo() const;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO* __get__mainSettingsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> __get__mainSettingsModel() const;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*> __get_didFinishEvent() const;

constexpr void __set__missionId_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__missionId_k__BackingField() ;

constexpr ::StringW const& __get__missionId_k__BackingField() const;

constexpr void __set__difficultyBeatmap_k__BackingField(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get__difficultyBeatmap_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get__difficultyBeatmap_k__BackingField() const;

/// @brief Method add_didFinishEvent addr 0x231d828 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x231dc1c size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*  value) ;

/// @brief Method get_missionId addr 0x231fe6c size 0x8 virtual false final false
inline ::StringW get_missionId() ;

/// @brief Method set_missionId addr 0x231fe74 size 0x8 virtual false final false
inline void set_missionId(::StringW  value) ;

/// @brief Method get_difficultyBeatmap addr 0x231fe7c size 0x8 virtual false final false
inline ::GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap() ;

/// @brief Method set_difficultyBeatmap addr 0x231fe84 size 0x8 virtual false final false
inline void set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

/// @brief Method Init addr 0x231b1b4 size 0x534 virtual false final false
inline void Init(::StringW  missionId, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives, ::GlobalNamespace::ColorScheme*  overrideColorScheme, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::StringW  backButtonText) ;

/// @brief Method Finish addr 0x231fe8c size 0x28 virtual false final false
inline void Finish(::GlobalNamespace::MissionCompletionResults*  levelCompletionResults) ;

static inline ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x231feb4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionLevelScenesTransitionSetupDataSO(MissionLevelScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionLevelScenesTransitionSetupDataSO(MissionLevelScenesTransitionSetupDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionLevelScenesTransitionSetupDataSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, "", "MissionLevelScenesTransitionSetupDataSO");
