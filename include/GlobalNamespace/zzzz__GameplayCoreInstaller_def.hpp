#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(GameplayCoreInstaller)
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace GlobalNamespace {
class SongAutopilot;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class BadNoteCutEffectSpawner;
}
namespace GlobalNamespace {
class SongProfilingController;
}
namespace GlobalNamespace {
class BeatLineManager;
}
namespace GlobalNamespace {
class NoteCutScoreSpawner;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class MissedNoteEffectSpawner;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayCoreInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayCoreInstaller);
// Type: ::GameplayCoreInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5393))
// CS Name: ::GameplayCoreInstaller*
class CORDL_TYPE GameplayCoreInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _beatLineManagerPrefab offset 0x20
 __declspec(property(get=__get__beatLineManagerPrefab, put=__set__beatLineManagerPrefab)) ::GlobalNamespace::BeatLineManager*  _beatLineManagerPrefab;

/// @brief Field _songTimeTweeningManager offset 0x28
 __declspec(property(get=__get__songTimeTweeningManager, put=__set__songTimeTweeningManager)) ::Tweening::SongTimeTweeningManager*  _songTimeTweeningManager;

/// @brief Field _audioManager offset 0x30
 __declspec(property(get=__get__audioManager, put=__set__audioManager)) ::GlobalNamespace::AudioManagerSO*  _audioManager;

/// @brief Field _playerHeightDetectorPrefab offset 0x38
 __declspec(property(get=__get__playerHeightDetectorPrefab, put=__set__playerHeightDetectorPrefab)) ::GlobalNamespace::PlayerHeightDetector*  _playerHeightDetectorPrefab;

/// @brief Field _noteCutScoreSpawnerPrefab offset 0x40
 __declspec(property(get=__get__noteCutScoreSpawnerPrefab, put=__set__noteCutScoreSpawnerPrefab)) ::GlobalNamespace::NoteCutScoreSpawner*  _noteCutScoreSpawnerPrefab;

/// @brief Field _badNoteCutEffectSpawnerPrefab offset 0x48
 __declspec(property(get=__get__badNoteCutEffectSpawnerPrefab, put=__set__badNoteCutEffectSpawnerPrefab)) ::GlobalNamespace::BadNoteCutEffectSpawner*  _badNoteCutEffectSpawnerPrefab;

/// @brief Field _missedNoteEffectSpawnerPrefab offset 0x50
 __declspec(property(get=__get__missedNoteEffectSpawnerPrefab, put=__set__missedNoteEffectSpawnerPrefab)) ::GlobalNamespace::MissedNoteEffectSpawner*  _missedNoteEffectSpawnerPrefab;

/// @brief Field _effectPoolsManualInstaller offset 0x58
 __declspec(property(get=__get__effectPoolsManualInstaller, put=__set__effectPoolsManualInstaller)) ::GlobalNamespace::EffectPoolsManualInstaller*  _effectPoolsManualInstaller;

/// @brief Field songAutopilotPrefab offset 0x60
 __declspec(property(get=__get_songAutopilotPrefab, put=__set_songAutopilotPrefab)) ::GlobalNamespace::SongAutopilot*  songAutopilotPrefab;

/// @brief Field _songProfilingControllerPrefab offset 0x68
 __declspec(property(get=__get__songProfilingControllerPrefab, put=__set__songProfilingControllerPrefab)) ::GlobalNamespace::SongProfilingController*  _songProfilingControllerPrefab;

/// @brief Field _sceneSetupData offset 0x70
 __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData*  _sceneSetupData;

/// @brief Field _perceivedLoudnessPerLevelModel offset 0x78
 __declspec(property(get=__get__perceivedLoudnessPerLevelModel, put=__set__perceivedLoudnessPerLevelModel)) ::GlobalNamespace::PerceivedLoudnessPerLevelModel*  _perceivedLoudnessPerLevelModel;

/// @brief Field _relativeSfxVolumePerLevelModel offset 0x80
 __declspec(property(get=__get__relativeSfxVolumePerLevelModel, put=__set__relativeSfxVolumePerLevelModel)) ::GlobalNamespace::RelativeSfxVolumePerLevelModel*  _relativeSfxVolumePerLevelModel;

constexpr void __set__beatLineManagerPrefab(::GlobalNamespace::BeatLineManager*  value) ;

constexpr ::GlobalNamespace::BeatLineManager* __get__beatLineManagerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatLineManager*> __get__beatLineManagerPrefab() const;

constexpr void __set__songTimeTweeningManager(::Tweening::SongTimeTweeningManager*  value) ;

constexpr ::Tweening::SongTimeTweeningManager* __get__songTimeTweeningManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> __get__songTimeTweeningManager() const;

constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO*  value) ;

constexpr ::GlobalNamespace::AudioManagerSO* __get__audioManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> __get__audioManager() const;

constexpr void __set__playerHeightDetectorPrefab(::GlobalNamespace::PlayerHeightDetector*  value) ;

constexpr ::GlobalNamespace::PlayerHeightDetector* __get__playerHeightDetectorPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightDetector*> __get__playerHeightDetectorPrefab() const;

constexpr void __set__noteCutScoreSpawnerPrefab(::GlobalNamespace::NoteCutScoreSpawner*  value) ;

constexpr ::GlobalNamespace::NoteCutScoreSpawner* __get__noteCutScoreSpawnerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutScoreSpawner*> __get__noteCutScoreSpawnerPrefab() const;

constexpr void __set__badNoteCutEffectSpawnerPrefab(::GlobalNamespace::BadNoteCutEffectSpawner*  value) ;

constexpr ::GlobalNamespace::BadNoteCutEffectSpawner* __get__badNoteCutEffectSpawnerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BadNoteCutEffectSpawner*> __get__badNoteCutEffectSpawnerPrefab() const;

constexpr void __set__missedNoteEffectSpawnerPrefab(::GlobalNamespace::MissedNoteEffectSpawner*  value) ;

constexpr ::GlobalNamespace::MissedNoteEffectSpawner* __get__missedNoteEffectSpawnerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissedNoteEffectSpawner*> __get__missedNoteEffectSpawnerPrefab() const;

constexpr void __set__effectPoolsManualInstaller(::GlobalNamespace::EffectPoolsManualInstaller*  value) ;

constexpr ::GlobalNamespace::EffectPoolsManualInstaller* __get__effectPoolsManualInstaller() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EffectPoolsManualInstaller*> __get__effectPoolsManualInstaller() const;

constexpr void __set_songAutopilotPrefab(::GlobalNamespace::SongAutopilot*  value) ;

constexpr ::GlobalNamespace::SongAutopilot* __get_songAutopilotPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongAutopilot*> __get_songAutopilotPrefab() const;

constexpr void __set__songProfilingControllerPrefab(::GlobalNamespace::SongProfilingController*  value) ;

constexpr ::GlobalNamespace::SongProfilingController* __get__songProfilingControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongProfilingController*> __get__songProfilingControllerPrefab() const;

constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* __get__sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> __get__sceneSetupData() const;

constexpr void __set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel*  value) ;

constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* __get__perceivedLoudnessPerLevelModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> __get__perceivedLoudnessPerLevelModel() const;

constexpr void __set__relativeSfxVolumePerLevelModel(::GlobalNamespace::RelativeSfxVolumePerLevelModel*  value) ;

constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel* __get__relativeSfxVolumePerLevelModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelModel*> __get__relativeSfxVolumePerLevelModel() const;

/// @brief Method InstallBindings addr 0x226ff3c size 0x1b30 virtual true final false
inline void InstallBindings() ;

/// @brief Method InstallRecordingTool addr 0x2271a6c size 0x124 virtual false final false
inline void InstallRecordingTool() ;

static inline ::GlobalNamespace::GameplayCoreInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x2271b90 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameplayCoreInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayCoreInstaller(GameplayCoreInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayCoreInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayCoreInstaller(GameplayCoreInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayCoreInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreInstaller, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreInstaller*, "", "GameplayCoreInstaller");
