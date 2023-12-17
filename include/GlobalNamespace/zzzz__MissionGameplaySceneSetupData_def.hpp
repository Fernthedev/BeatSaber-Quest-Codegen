#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionGameplaySceneSetupData)
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionGameplaySceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionGameplaySceneSetupData);
// Type: ::MissionGameplaySceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6054))
// CS Name: ::MissionGameplaySceneSetupData*
class CORDL_TYPE MissionGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::SceneSetupData)]{};

/// @brief Field missionObjectives offset 0x10
 __declspec(property(get=__get_missionObjectives, put=__set_missionObjectives)) ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives;

/// @brief Field autoRestart offset 0x18
 __declspec(property(get=__get_autoRestart, put=__set_autoRestart)) bool  autoRestart;

/// @brief Field previewBeatmapLevel offset 0x20
 __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel;

/// @brief Field beatmapDifficulty offset 0x28
 __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty;

/// @brief Field beatmapCharacteristic offset 0x30
 __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic;

/// @brief Field gameplayModifiers offset 0x38
 __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  gameplayModifiers;

/// @brief Field backButtonText offset 0x40
 __declspec(property(get=__get_backButtonText, put=__set_backButtonText)) ::StringW  backButtonText;

constexpr void __set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>& __get_missionObjectives() ;

constexpr ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*> const& __get_missionObjectives() const;

constexpr void __set_autoRestart(bool  value) ;

constexpr bool& __get_autoRestart() ;

constexpr bool const& __get_autoRestart() const;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_previewBeatmapLevel() const;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get_beatmapCharacteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get_beatmapCharacteristic() const;

constexpr void __set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value) ;

constexpr ::GlobalNamespace::GameplayModifiers* __get_gameplayModifiers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> __get_gameplayModifiers() const;

constexpr void __set_backButtonText(::StringW  value) ;

constexpr ::StringW& __get_backButtonText() ;

constexpr ::StringW const& __get_backButtonText() const;

static inline ::GlobalNamespace::MissionGameplaySceneSetupData* New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives, bool  autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::StringW  backButtonText) ;

/// @brief Method .ctor addr 0x231cce0 size 0x6c virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives, bool  autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::StringW  backButtonText) ;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplaySceneSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionGameplaySceneSetupData(MissionGameplaySceneSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplaySceneSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionGameplaySceneSetupData(MissionGameplaySceneSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionGameplaySceneSetupData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionGameplaySceneSetupData, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionGameplaySceneSetupData*, "", "MissionGameplaySceneSetupData");
