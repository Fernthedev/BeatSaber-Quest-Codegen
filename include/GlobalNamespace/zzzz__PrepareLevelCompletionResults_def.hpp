#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PrepareLevelCompletionResults)
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class SaberActivityCounter;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class ComboController;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
// Forward declare root types
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrepareLevelCompletionResults);
// Type: ::PrepareLevelCompletionResults
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5273))
// CS Name: ::PrepareLevelCompletionResults*
class CORDL_TYPE PrepareLevelCompletionResults : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _gameplayModifiersModelSO offset 0x18
 __declspec(property(get=__get__gameplayModifiersModelSO, put=__set__gameplayModifiersModelSO)) ::GlobalNamespace::GameplayModifiersModelSO*  _gameplayModifiersModelSO;

/// @brief Field _saberActivityCounter offset 0x20
 __declspec(property(get=__get__saberActivityCounter, put=__set__saberActivityCounter)) ::GlobalNamespace::SaberActivityCounter*  _saberActivityCounter;

/// @brief Field _beatmapObjectExecutionRatingsRecorder offset 0x28
 __declspec(property(get=__get__beatmapObjectExecutionRatingsRecorder, put=__set__beatmapObjectExecutionRatingsRecorder)) ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*  _beatmapObjectExecutionRatingsRecorder;

/// @brief Field _scoreController offset 0x30
 __declspec(property(get=__get__scoreController, put=__set__scoreController)) ::GlobalNamespace::IScoreController*  _scoreController;

/// @brief Field _gameEnergyCounter offset 0x38
 __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter)) ::GlobalNamespace::GameEnergyCounter*  _gameEnergyCounter;

/// @brief Field _beatmapData offset 0x40
 __declspec(property(get=__get__beatmapData, put=__set__beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  _beatmapData;

/// @brief Field _audioTimeSyncController offset 0x48
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _gameplayModifiers offset 0x50
 __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  _gameplayModifiers;

/// @brief Field _comboController offset 0x58
 __declspec(property(get=__get__comboController, put=__set__comboController)) ::GlobalNamespace::ComboController*  _comboController;

constexpr void __set__gameplayModifiersModelSO(::GlobalNamespace::GameplayModifiersModelSO*  value) ;

constexpr ::GlobalNamespace::GameplayModifiersModelSO* __get__gameplayModifiersModelSO() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> __get__gameplayModifiersModelSO() const;

constexpr void __set__saberActivityCounter(::GlobalNamespace::SaberActivityCounter*  value) ;

constexpr ::GlobalNamespace::SaberActivityCounter* __get__saberActivityCounter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberActivityCounter*> __get__saberActivityCounter() const;

constexpr void __set__beatmapObjectExecutionRatingsRecorder(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* __get__beatmapObjectExecutionRatingsRecorder() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*> __get__beatmapObjectExecutionRatingsRecorder() const;

constexpr void __set__scoreController(::GlobalNamespace::IScoreController*  value) ;

constexpr ::GlobalNamespace::IScoreController* __get__scoreController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> __get__scoreController() const;

constexpr void __set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter*  value) ;

constexpr ::GlobalNamespace::GameEnergyCounter* __get__gameEnergyCounter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> __get__gameEnergyCounter() const;

constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get__beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get__beatmapData() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value) ;

constexpr ::GlobalNamespace::GameplayModifiers* __get__gameplayModifiers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> __get__gameplayModifiers() const;

constexpr void __set__comboController(::GlobalNamespace::ComboController*  value) ;

constexpr ::GlobalNamespace::ComboController* __get__comboController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> __get__comboController() const;

/// @brief Method FillLevelCompletionResults addr 0x22607b8 size 0x250 virtual false final false
inline ::GlobalNamespace::LevelCompletionResults* FillLevelCompletionResults(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  levelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  levelEndAction) ;

static inline ::GlobalNamespace::PrepareLevelCompletionResults* New_ctor() ;

/// @brief Method .ctor addr 0x2260a40 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PrepareLevelCompletionResults", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrepareLevelCompletionResults(PrepareLevelCompletionResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrepareLevelCompletionResults", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrepareLevelCompletionResults(PrepareLevelCompletionResults const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrepareLevelCompletionResults()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrepareLevelCompletionResults, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrepareLevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrepareLevelCompletionResults*, "", "PrepareLevelCompletionResults");
