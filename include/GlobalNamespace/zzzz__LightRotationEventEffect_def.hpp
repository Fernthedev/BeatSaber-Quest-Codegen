#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightRotationEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationEventEffect);
// Type: ::LightRotationEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4953))
// CS Name: ::LightRotationEventEffect*
class CORDL_TYPE LightRotationEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kSpeedMultiplier offset 0x0
static constexpr float_t  kSpeedMultiplier{20.0};

/// @brief Field _event offset 0x18
 __declspec(property(get=__get__event, put=__set__event)) ::GlobalNamespace::BasicBeatmapEventType  _event;

/// @brief Field _rotationVector offset 0x1c
 __declspec(property(get=__get__rotationVector, put=__set__rotationVector)) ::UnityEngine::Vector3  _rotationVector;

/// @brief Field _rotationSpeedMultiplier offset 0x28
 __declspec(property(get=__get__rotationSpeedMultiplier, put=__set__rotationSpeedMultiplier)) float_t  _rotationSpeedMultiplier;

/// @brief Field _beatmapCallbacksController offset 0x30
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _audioTimeSource offset 0x38
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field _transform offset 0x40
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

/// @brief Field _startRotation offset 0x48
 __declspec(property(get=__get__startRotation, put=__set__startRotation)) ::UnityEngine::Quaternion  _startRotation;

/// @brief Field _rotationSpeed offset 0x58
 __declspec(property(get=__get__rotationSpeed, put=__set__rotationSpeed)) float_t  _rotationSpeed;

/// @brief Field _beatmapDataCallbackWrapper offset 0x60
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__event() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__event() const;

constexpr void __set__rotationVector(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__rotationVector() ;

constexpr ::UnityEngine::Vector3 const& __get__rotationVector() const;

constexpr void __set__rotationSpeedMultiplier(float_t  value) ;

constexpr float_t& __get__rotationSpeedMultiplier() ;

constexpr float_t const& __get__rotationSpeedMultiplier() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

constexpr void __set__startRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__startRotation() ;

constexpr ::UnityEngine::Quaternion const& __get__startRotation() const;

constexpr void __set__rotationSpeed(float_t  value) ;

constexpr float_t& __get__rotationSpeed() ;

constexpr float_t const& __get__rotationSpeed() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x23ad5a4 size 0x154 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x23ad6f8 size 0xe8 virtual false final false
inline void Update() ;

/// @brief Method OnDestroy addr 0x23ad7e0 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x23ad7fc size 0x124 virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

static inline ::GlobalNamespace::LightRotationEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23ad920 size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightRotationEventEffect(LightRotationEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightRotationEventEffect(LightRotationEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightRotationEventEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationEventEffect, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationEventEffect*, "", "LightRotationEventEffect");
