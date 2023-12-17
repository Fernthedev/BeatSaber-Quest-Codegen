#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SmoothStepPositionEventEffect)
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace Tweening {
class Vector3Tween;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothStepPositionEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmoothStepPositionEventEffect);
// Type: ::SmoothStepPositionEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4970))
// CS Name: ::SmoothStepPositionEventEffect*
class CORDL_TYPE SmoothStepPositionEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _event offset 0x18
 __declspec(property(get=__get__event, put=__set__event)) ::GlobalNamespace::BasicBeatmapEventType  _event;

/// @brief Field _clampValue offset 0x1c
 __declspec(property(get=__get__clampValue, put=__set__clampValue)) bool  _clampValue;

/// @brief Field _eventValueMin offset 0x20
 __declspec(property(get=__get__eventValueMin, put=__set__eventValueMin)) int32_t  _eventValueMin;

/// @brief Field _eventValueMax offset 0x24
 __declspec(property(get=__get__eventValueMax, put=__set__eventValueMax)) int32_t  _eventValueMax;

/// @brief Field _movementVector offset 0x28
 __declspec(property(get=__get__movementVector, put=__set__movementVector)) ::UnityEngine::Vector3  _movementVector;

/// @brief Field _stepSize offset 0x34
 __declspec(property(get=__get__stepSize, put=__set__stepSize)) float_t  _stepSize;

/// @brief Field _beatmapCallbacksController offset 0x38
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _tweeningManager offset 0x40
 __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager)) ::Tweening::SongTimeTweeningManager*  _tweeningManager;

/// @brief Field _positionTween offset 0x48
 __declspec(property(get=__get__positionTween, put=__set__positionTween)) ::Tweening::Vector3Tween*  _positionTween;

/// @brief Field _transform offset 0x50
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

/// @brief Field _startPos offset 0x58
 __declspec(property(get=__get__startPos, put=__set__startPos)) ::UnityEngine::Vector3  _startPos;

/// @brief Field _beatmapDataCallbackWrapper offset 0x68
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__event() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__event() const;

constexpr void __set__clampValue(bool  value) ;

constexpr bool& __get__clampValue() ;

constexpr bool const& __get__clampValue() const;

constexpr void __set__eventValueMin(int32_t  value) ;

constexpr int32_t& __get__eventValueMin() ;

constexpr int32_t const& __get__eventValueMin() const;

constexpr void __set__eventValueMax(int32_t  value) ;

constexpr int32_t& __get__eventValueMax() ;

constexpr int32_t const& __get__eventValueMax() const;

constexpr void __set__movementVector(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__movementVector() ;

constexpr ::UnityEngine::Vector3 const& __get__movementVector() const;

constexpr void __set__stepSize(float_t  value) ;

constexpr float_t& __get__stepSize() ;

constexpr float_t const& __get__stepSize() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager*  value) ;

constexpr ::Tweening::SongTimeTweeningManager* __get__tweeningManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> __get__tweeningManager() const;

constexpr void __set__positionTween(::Tweening::Vector3Tween*  value) ;

constexpr ::Tweening::Vector3Tween* __get__positionTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> __get__positionTween() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

constexpr void __set__startPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__startPos() ;

constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Awake addr 0x23b242c size 0x110 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x23b253c size 0x124 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23b2660 size 0x9c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x23b26fc size 0xdc virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

/// @brief Method GetPositionForValue addr 0x23b27d8 size 0x60 virtual false final false
inline ::UnityEngine::Vector3 GetPositionForValue(int32_t  value) ;

/// @brief Method SetPosition addr 0x23b2838 size 0x48 virtual false final false
inline void SetPosition(::UnityEngine::Vector3  position) ;

static inline ::GlobalNamespace::SmoothStepPositionEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23b2880 size 0x70 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmoothStepPositionEventEffect(SmoothStepPositionEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmoothStepPositionEventEffect(SmoothStepPositionEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SmoothStepPositionEventEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothStepPositionEventEffect, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothStepPositionEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothStepPositionEventEffect*, "", "SmoothStepPositionEventEffect");
