#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaypointsTestGameplayManager)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
namespace UnityEngine {
struct LayerMask;
}
namespace GlobalNamespace {
class BTSCharacterSpawnController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointsTestGameplayManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointsTestGameplayManager);
// Type: ::WaypointsTestGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5029))
// CS Name: ::WaypointsTestGameplayManager*
class CORDL_TYPE WaypointsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _outerCapsuleStart offset 0x18
 __declspec(property(get=__get__outerCapsuleStart, put=__set__outerCapsuleStart)) ::UnityEngine::Vector3  _outerCapsuleStart;

/// @brief Field _outerCapsuleEnd offset 0x24
 __declspec(property(get=__get__outerCapsuleEnd, put=__set__outerCapsuleEnd)) ::UnityEngine::Vector3  _outerCapsuleEnd;

/// @brief Field _outerCapsuleRadius offset 0x30
 __declspec(property(get=__get__outerCapsuleRadius, put=__set__outerCapsuleRadius)) float_t  _outerCapsuleRadius;

/// @brief Field _innerSphereOffset offset 0x34
 __declspec(property(get=__get__innerSphereOffset, put=__set__innerSphereOffset)) ::UnityEngine::Vector3  _innerSphereOffset;

/// @brief Field _innerSphereRadius offset 0x40
 __declspec(property(get=__get__innerSphereRadius, put=__set__innerSphereRadius)) float_t  _innerSphereRadius;

/// @brief Field _layersToColliderWith offset 0x44
 __declspec(property(get=__get__layersToColliderWith, put=__set__layersToColliderWith)) ::UnityEngine::LayerMask  _layersToColliderWith;

/// @brief Field _characterSpawnController offset 0x48
 __declspec(property(get=__get__characterSpawnController, put=__set__characterSpawnController)) ::GlobalNamespace::BTSCharacterSpawnController*  _characterSpawnController;

/// @brief Field _audioTimeSource offset 0x50
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field _standardSceneSetupData offset 0x58
 __declspec(property(get=__get__standardSceneSetupData, put=__set__standardSceneSetupData)) ::GlobalNamespace::StandardGameplaySceneSetupData*  _standardSceneSetupData;

/// @brief Field _levelSceneSetupData offset 0x60
 __declspec(property(get=__get__levelSceneSetupData, put=__set__levelSceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData*  _levelSceneSetupData;

/// @brief Field _target offset 0x68
 __declspec(property(get=__get__target, put=__set__target)) ::UnityEngine::Transform*  _target;

/// @brief Field _firstPosSaved offset 0x70
 __declspec(property(get=__get__firstPosSaved, put=__set__firstPosSaved)) bool  _firstPosSaved;

/// @brief Field _speedSaved offset 0x71
 __declspec(property(get=__get__speedSaved, put=__set__speedSaved)) bool  _speedSaved;

/// @brief Field _lastFramePos offset 0x74
 __declspec(property(get=__get__lastFramePos, put=__set__lastFramePos)) ::UnityEngine::Vector3  _lastFramePos;

/// @brief Field _lastFrameSpeed offset 0x80
 __declspec(property(get=__get__lastFrameSpeed, put=__set__lastFrameSpeed)) float_t  _lastFrameSpeed;

/// @brief Field _biggestFrameSpeed offset 0x84
 __declspec(property(get=__get__biggestFrameSpeed, put=__set__biggestFrameSpeed)) float_t  _biggestFrameSpeed;

/// @brief Field _biggestFrameSpeedSongTime offset 0x88
 __declspec(property(get=__get__biggestFrameSpeedSongTime, put=__set__biggestFrameSpeedSongTime)) float_t  _biggestFrameSpeedSongTime;

/// @brief Field _biggestAcceleration offset 0x8c
 __declspec(property(get=__get__biggestAcceleration, put=__set__biggestAcceleration)) float_t  _biggestAcceleration;

/// @brief Field _biggestAccelerationSongTime offset 0x90
 __declspec(property(get=__get__biggestAccelerationSongTime, put=__set__biggestAccelerationSongTime)) float_t  _biggestAccelerationSongTime;

constexpr void __set__outerCapsuleStart(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__outerCapsuleStart() ;

constexpr ::UnityEngine::Vector3 const& __get__outerCapsuleStart() const;

constexpr void __set__outerCapsuleEnd(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__outerCapsuleEnd() ;

constexpr ::UnityEngine::Vector3 const& __get__outerCapsuleEnd() const;

constexpr void __set__outerCapsuleRadius(float_t  value) ;

constexpr float_t& __get__outerCapsuleRadius() ;

constexpr float_t const& __get__outerCapsuleRadius() const;

constexpr void __set__innerSphereOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__innerSphereOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__innerSphereOffset() const;

constexpr void __set__innerSphereRadius(float_t  value) ;

constexpr float_t& __get__innerSphereRadius() ;

constexpr float_t const& __get__innerSphereRadius() const;

constexpr void __set__layersToColliderWith(::UnityEngine::LayerMask  value) ;

constexpr ::UnityEngine::LayerMask& __get__layersToColliderWith() ;

constexpr ::UnityEngine::LayerMask const& __get__layersToColliderWith() const;

constexpr void __set__characterSpawnController(::GlobalNamespace::BTSCharacterSpawnController*  value) ;

constexpr ::GlobalNamespace::BTSCharacterSpawnController* __get__characterSpawnController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterSpawnController*> __get__characterSpawnController() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData*  value) ;

constexpr ::GlobalNamespace::StandardGameplaySceneSetupData* __get__standardSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardGameplaySceneSetupData*> __get__standardSceneSetupData() const;

constexpr void __set__levelSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* __get__levelSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> __get__levelSceneSetupData() const;

constexpr void __set__target(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__target() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__target() const;

constexpr void __set__firstPosSaved(bool  value) ;

constexpr bool& __get__firstPosSaved() ;

constexpr bool const& __get__firstPosSaved() const;

constexpr void __set__speedSaved(bool  value) ;

constexpr bool& __get__speedSaved() ;

constexpr bool const& __get__speedSaved() const;

constexpr void __set__lastFramePos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__lastFramePos() ;

constexpr ::UnityEngine::Vector3 const& __get__lastFramePos() const;

constexpr void __set__lastFrameSpeed(float_t  value) ;

constexpr float_t& __get__lastFrameSpeed() ;

constexpr float_t const& __get__lastFrameSpeed() const;

constexpr void __set__biggestFrameSpeed(float_t  value) ;

constexpr float_t& __get__biggestFrameSpeed() ;

constexpr float_t const& __get__biggestFrameSpeed() const;

constexpr void __set__biggestFrameSpeedSongTime(float_t  value) ;

constexpr float_t& __get__biggestFrameSpeedSongTime() ;

constexpr float_t const& __get__biggestFrameSpeedSongTime() const;

constexpr void __set__biggestAcceleration(float_t  value) ;

constexpr float_t& __get__biggestAcceleration() ;

constexpr float_t const& __get__biggestAcceleration() const;

constexpr void __set__biggestAccelerationSongTime(float_t  value) ;

constexpr float_t& __get__biggestAccelerationSongTime() ;

constexpr float_t const& __get__biggestAccelerationSongTime() const;

/// @brief Method Start addr 0x23bde08 size 0x34 virtual false final false
inline void Start() ;

/// @brief Method LateUpdate addr 0x23bde3c size 0x1200 virtual false final false
inline void LateUpdate() ;

/// @brief Method OnDestroy addr 0x23bf2ac size 0x550 virtual false final false
inline void OnDestroy() ;

/// @brief Method GetBar addr 0x23bf03c size 0x270 virtual false final false
inline ::StringW GetBar(float_t  songTime) ;

/// @brief Method OnDrawGizmos addr 0x23bf7fc size 0x1d4 virtual false final false
inline void OnDrawGizmos() ;

static inline ::GlobalNamespace::WaypointsTestGameplayManager* New_ctor() ;

/// @brief Method .ctor addr 0x23bf9d0 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "WaypointsTestGameplayManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaypointsTestGameplayManager(WaypointsTestGameplayManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaypointsTestGameplayManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaypointsTestGameplayManager(WaypointsTestGameplayManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WaypointsTestGameplayManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointsTestGameplayManager, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestGameplayManager*, "", "WaypointsTestGameplayManager");
