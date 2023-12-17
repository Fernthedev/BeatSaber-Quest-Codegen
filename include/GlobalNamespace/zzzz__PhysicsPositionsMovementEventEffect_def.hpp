#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicsPositionsMovementEventEffect)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class SongTimeFixedUpdateController;
}
// Forward declare root types
namespace GlobalNamespace {
class PhysicsPositionsMovementEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PhysicsPositionsMovementEventEffect);
// Type: ::PhysicsPositionsMovementEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4968))
// CS Name: ::PhysicsPositionsMovementEventEffect*
class CORDL_TYPE PhysicsPositionsMovementEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _event offset 0x18
 __declspec(property(get=__get__event, put=__set__event)) ::GlobalNamespace::BasicBeatmapEventType  _event;

/// @brief Field _movementVector offset 0x1c
 __declspec(property(get=__get__movementVector, put=__set__movementVector)) ::UnityEngine::Vector3  _movementVector;

/// @brief Field _stepSize offset 0x28
 __declspec(property(get=__get__stepSize, put=__set__stepSize)) float_t  _stepSize;

/// @brief Field _elasticity offset 0x2c
 __declspec(property(get=__get__elasticity, put=__set__elasticity)) float_t  _elasticity;

/// @brief Field _friction offset 0x30
 __declspec(property(get=__get__friction, put=__set__friction)) float_t  _friction;

/// @brief Field _minMaxSpeed offset 0x34
 __declspec(property(get=__get__minMaxSpeed, put=__set__minMaxSpeed)) float_t  _minMaxSpeed;

/// @brief Field _maxMaxSpeed offset 0x38
 __declspec(property(get=__get__maxMaxSpeed, put=__set__maxMaxSpeed)) float_t  _maxMaxSpeed;

/// @brief Field _maxAcceleration offset 0x3c
 __declspec(property(get=__get__maxAcceleration, put=__set__maxAcceleration)) float_t  _maxAcceleration;

/// @brief Field _beatmapCallbacksController offset 0x40
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _songTimeFixedUpdateController offset 0x48
 __declspec(property(get=__get__songTimeFixedUpdateController, put=__set__songTimeFixedUpdateController)) ::GlobalNamespace::SongTimeFixedUpdateController*  _songTimeFixedUpdateController;

/// @brief Field _transform offset 0x50
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

/// @brief Field _startPos offset 0x58
 __declspec(property(get=__get__startPos, put=__set__startPos)) ::UnityEngine::Vector3  _startPos;

/// @brief Field _velocity offset 0x64
 __declspec(property(get=__get__velocity, put=__set__velocity)) ::UnityEngine::Vector3  _velocity;

/// @brief Field _prevPosition offset 0x70
 __declspec(property(get=__get__prevPosition, put=__set__prevPosition)) ::UnityEngine::Vector3  _prevPosition;

/// @brief Field _position offset 0x7c
 __declspec(property(get=__get__position, put=__set__position)) ::UnityEngine::Vector3  _position;

/// @brief Field _targetPosition offset 0x88
 __declspec(property(get=__get__targetPosition, put=__set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Field _maxSpeed offset 0x94
 __declspec(property(get=__get__maxSpeed, put=__set__maxSpeed)) float_t  _maxSpeed;

/// @brief Field _sqrMaxSpeed offset 0x98
 __declspec(property(get=__get__sqrMaxSpeed, put=__set__sqrMaxSpeed)) float_t  _sqrMaxSpeed;

/// @brief Field _beatmapDataCallbackWrapper offset 0xa0
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__event() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__event() const;

constexpr void __set__movementVector(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__movementVector() ;

constexpr ::UnityEngine::Vector3 const& __get__movementVector() const;

constexpr void __set__stepSize(float_t  value) ;

constexpr float_t& __get__stepSize() ;

constexpr float_t const& __get__stepSize() const;

constexpr void __set__elasticity(float_t  value) ;

constexpr float_t& __get__elasticity() ;

constexpr float_t const& __get__elasticity() const;

constexpr void __set__friction(float_t  value) ;

constexpr float_t& __get__friction() ;

constexpr float_t const& __get__friction() const;

constexpr void __set__minMaxSpeed(float_t  value) ;

constexpr float_t& __get__minMaxSpeed() ;

constexpr float_t const& __get__minMaxSpeed() const;

constexpr void __set__maxMaxSpeed(float_t  value) ;

constexpr float_t& __get__maxMaxSpeed() ;

constexpr float_t const& __get__maxMaxSpeed() const;

constexpr void __set__maxAcceleration(float_t  value) ;

constexpr float_t& __get__maxAcceleration() ;

constexpr float_t const& __get__maxAcceleration() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__songTimeFixedUpdateController(::GlobalNamespace::SongTimeFixedUpdateController*  value) ;

constexpr ::GlobalNamespace::SongTimeFixedUpdateController* __get__songTimeFixedUpdateController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongTimeFixedUpdateController*> __get__songTimeFixedUpdateController() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

constexpr void __set__startPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__startPos() ;

constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

constexpr void __set__velocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__velocity() ;

constexpr ::UnityEngine::Vector3 const& __get__velocity() const;

constexpr void __set__prevPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__prevPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__prevPosition() const;

constexpr void __set__position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__position() ;

constexpr ::UnityEngine::Vector3 const& __get__position() const;

constexpr void __set__targetPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__targetPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__targetPosition() const;

constexpr void __set__maxSpeed(float_t  value) ;

constexpr float_t& __get__maxSpeed() ;

constexpr float_t const& __get__maxSpeed() const;

constexpr void __set__sqrMaxSpeed(float_t  value) ;

constexpr float_t& __get__sqrMaxSpeed() ;

constexpr float_t const& __get__sqrMaxSpeed() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x23b0b88 size 0x248 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23b0dd0 size 0x154 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleSongTimeFixedUpdate addr 0x23b0f24 size 0xdc virtual false final false
inline void HandleSongTimeFixedUpdate(float_t  fixedDeltaTime) ;

/// @brief Method HandleSongTimeUpdate addr 0x23b1000 size 0x70 virtual false final false
inline void HandleSongTimeUpdate() ;

/// @brief Method HandleBeatmapEvent addr 0x23b1070 size 0x7c virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

static inline ::GlobalNamespace::PhysicsPositionsMovementEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23b10ec size 0x107c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsPositionsMovementEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsPositionsMovementEventEffect(PhysicsPositionsMovementEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsPositionsMovementEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsPositionsMovementEventEffect(PhysicsPositionsMovementEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PhysicsPositionsMovementEventEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PhysicsPositionsMovementEventEffect, 0xa8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PhysicsPositionsMovementEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicsPositionsMovementEventEffect*, "", "PhysicsPositionsMovementEventEffect");
