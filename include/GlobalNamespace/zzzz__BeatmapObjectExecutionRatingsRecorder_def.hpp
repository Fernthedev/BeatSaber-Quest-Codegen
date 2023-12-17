#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatmapObjectExecutionRatingsRecorder)
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ScoringElement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRating;
}
namespace GlobalNamespace {
class IScoreController;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder);
// Type: ::BeatmapObjectExecutionRatingsRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4714))
// CS Name: ::BeatmapObjectExecutionRatingsRecorder*
class CORDL_TYPE BeatmapObjectExecutionRatingsRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _scoreController offset 0x18
 __declspec(property(get=__get__scoreController, put=__set__scoreController)) ::GlobalNamespace::IScoreController*  _scoreController;

/// @brief Field _beatmapObjectManager offset 0x20
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _playerHeadAndObstacleInteraction offset 0x28
 __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction)) ::GlobalNamespace::PlayerHeadAndObstacleInteraction*  _playerHeadAndObstacleInteraction;

/// @brief Field _audioTimeSyncController offset 0x30
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _beatmapObjectExecutionRatings offset 0x38
 __declspec(property(get=__get__beatmapObjectExecutionRatings, put=__set__beatmapObjectExecutionRatings)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*  _beatmapObjectExecutionRatings;

/// @brief Field _hitObstacles offset 0x40
 __declspec(property(get=__get__hitObstacles, put=__set__hitObstacles)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*  _hitObstacles;

 __declspec(property(get=get_beatmapObjectExecutionRatings)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*  beatmapObjectExecutionRatings;

constexpr void __set__scoreController(::GlobalNamespace::IScoreController*  value) ;

constexpr ::GlobalNamespace::IScoreController* __get__scoreController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> __get__scoreController() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction*  value) ;

constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction* __get__playerHeadAndObstacleInteraction() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> __get__playerHeadAndObstacleInteraction() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__beatmapObjectExecutionRatings(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* __get__beatmapObjectExecutionRatings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*> __get__beatmapObjectExecutionRatings() const;

constexpr void __set__hitObstacles(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>* __get__hitObstacles() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*> __get__hitObstacles() const;

/// @brief Method get_beatmapObjectExecutionRatings addr 0x237c3c4 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* get_beatmapObjectExecutionRatings() ;

/// @brief Method Start addr 0x237c3cc size 0x1a0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x237c61c size 0x1ec virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleScoringForNoteDidFinish addr 0x237c8b8 size 0x474 virtual false final false
inline void HandleScoringForNoteDidFinish(::GlobalNamespace::ScoringElement*  scoringElement) ;

/// @brief Method HandlePlayerHeadDidEnterObstacle addr 0x237cd2c size 0x120 virtual false final false
inline void HandlePlayerHeadDidEnterObstacle(::GlobalNamespace::ObstacleController*  obstacleController) ;

/// @brief Method HandleObstacleDidPassAvoidedMark addr 0x237ce4c size 0x15c virtual false final false
inline void HandleObstacleDidPassAvoidedMark(::GlobalNamespace::ObstacleController*  obstacleController) ;

static inline ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* New_ctor() ;

/// @brief Method .ctor addr 0x237cfa8 size 0xc4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRatingsRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapObjectExecutionRatingsRecorder(BeatmapObjectExecutionRatingsRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRatingsRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapObjectExecutionRatingsRecorder(BeatmapObjectExecutionRatingsRecorder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapObjectExecutionRatingsRecorder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, "", "BeatmapObjectExecutionRatingsRecorder");
