#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrackLaneRingsPositionStepEffectSpawner)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsPositionStepEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner);
// Type: ::TrackLaneRingsPositionStepEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5005))
// CS Name: ::TrackLaneRingsPositionStepEffectSpawner*
class CORDL_TYPE TrackLaneRingsPositionStepEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _trackLaneRingsManager offset 0x18
 __declspec(property(get=__get__trackLaneRingsManager, put=__set__trackLaneRingsManager)) ::GlobalNamespace::TrackLaneRingsManager*  _trackLaneRingsManager;

/// @brief Field _beatmapEventType offset 0x20
 __declspec(property(get=__get__beatmapEventType, put=__set__beatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType  _beatmapEventType;

/// @brief Field _minPositionStep offset 0x24
 __declspec(property(get=__get__minPositionStep, put=__set__minPositionStep)) float_t  _minPositionStep;

/// @brief Field _maxPositionStep offset 0x28
 __declspec(property(get=__get__maxPositionStep, put=__set__maxPositionStep)) float_t  _maxPositionStep;

/// @brief Field _moveSpeed offset 0x2c
 __declspec(property(get=__get__moveSpeed, put=__set__moveSpeed)) float_t  _moveSpeed;

/// @brief Field _beatmapCallbacksController offset 0x30
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _beatmapDataCallbackWrapper offset 0x38
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__trackLaneRingsManager(::GlobalNamespace::TrackLaneRingsManager*  value) ;

constexpr ::GlobalNamespace::TrackLaneRingsManager* __get__trackLaneRingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrackLaneRingsManager*> __get__trackLaneRingsManager() const;

constexpr void __set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__beatmapEventType() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__beatmapEventType() const;

constexpr void __set__minPositionStep(float_t  value) ;

constexpr float_t& __get__minPositionStep() ;

constexpr float_t const& __get__minPositionStep() const;

constexpr void __set__maxPositionStep(float_t  value) ;

constexpr float_t& __get__maxPositionStep() ;

constexpr float_t const& __get__maxPositionStep() const;

constexpr void __set__moveSpeed(float_t  value) ;

constexpr float_t& __get__moveSpeed() ;

constexpr float_t const& __get__moveSpeed() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x23b7fac size 0x124 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23b80d0 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x23b80ec size 0x78 virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

static inline ::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner* New_ctor() ;

/// @brief Method .ctor addr 0x23b8164 size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsPositionStepEffectSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackLaneRingsPositionStepEffectSpawner(TrackLaneRingsPositionStepEffectSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsPositionStepEffectSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackLaneRingsPositionStepEffectSpawner(TrackLaneRingsPositionStepEffectSpawner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackLaneRingsPositionStepEffectSpawner()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*, "", "TrackLaneRingsPositionStepEffectSpawner");
