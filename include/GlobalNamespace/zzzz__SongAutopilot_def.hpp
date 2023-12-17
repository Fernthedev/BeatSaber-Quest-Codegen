#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ZenjectSafeBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SongAutopilot)
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
struct __SongAutopilot__Frame;
}
namespace GlobalNamespace {
class PlayerVRControllersManager;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class SongAutopilot;
}
namespace GlobalNamespace {
struct __SongAutopilot__Frame;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongAutopilot);
MARK_VAL_T(::GlobalNamespace::__SongAutopilot__Frame);
// Type: ::Frame
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5378))
// CS Name: ::SongAutopilot::Frame
struct CORDL_TYPE __SongAutopilot__Frame : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field time offset 0x0
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

/// @brief Field pose offset 0x4
 __declspec(property(get=__get_pose, put=__set_pose)) ::UnityEngine::Pose  pose;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

constexpr void __set_pose(::UnityEngine::Pose  value) ;

constexpr ::UnityEngine::Pose& __get_pose() ;

constexpr ::UnityEngine::Pose const& __get_pose() const;

/// @brief Method .ctor addr 0x226db90 size 0x20 virtual false final false
inline void _ctor(float_t  time, ::UnityEngine::Pose  pose) ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
constexpr __SongAutopilot__Frame(float_t  time, ::UnityEngine::Pose  pose) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SongAutopilot__Frame(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SongAutopilot__Frame()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongAutopilot__Frame, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SongAutopilot
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5379))
// CS Name: ::SongAutopilot*
class CORDL_TYPE SongAutopilot : public ::GlobalNamespace::ZenjectSafeBehaviour {
public:
// Declarations
using Frame = ::GlobalNamespace::__SongAutopilot__Frame;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc0 - sizeof(::GlobalNamespace::ZenjectSafeBehaviour)]{};

/// @brief Field _cutAngle offset 0x1c
 __declspec(property(get=__get__cutAngle, put=__set__cutAngle)) float_t  _cutAngle;

/// @brief Field _cutStartOffset offset 0x20
 __declspec(property(get=__get__cutStartOffset, put=__set__cutStartOffset)) float_t  _cutStartOffset;

/// @brief Field _cutEndOffset offset 0x24
 __declspec(property(get=__get__cutEndOffset, put=__set__cutEndOffset)) float_t  _cutEndOffset;

/// @brief Field saberYOffset offset 0x28
 __declspec(property(get=__get_saberYOffset, put=__set_saberYOffset)) float_t  saberYOffset;

/// @brief Field _controllerPosition offset 0x30
 __declspec(property(get=__get__controllerPosition, put=__set__controllerPosition)) ::GlobalNamespace::Vector3SO*  _controllerPosition;

/// @brief Field _controllerRotation offset 0x38
 __declspec(property(get=__get__controllerRotation, put=__set__controllerRotation)) ::GlobalNamespace::Vector3SO*  _controllerRotation;

/// @brief Field _roomCenter offset 0x40
 __declspec(property(get=__get__roomCenter, put=__set__roomCenter)) ::GlobalNamespace::Vector3SO*  _roomCenter;

/// @brief Field _roomRotation offset 0x48
 __declspec(property(get=__get__roomRotation, put=__set__roomRotation)) ::GlobalNamespace::FloatSO*  _roomRotation;

/// @brief Field _drawHitTimeline offset 0x50
 __declspec(property(get=__get__drawHitTimeline, put=__set__drawHitTimeline)) bool  _drawHitTimeline;

/// @brief Field _drawAheadTime offset 0x54
 __declspec(property(get=__get__drawAheadTime, put=__set__drawAheadTime)) float_t  _drawAheadTime;

/// @brief Field _drawAfterTime offset 0x58
 __declspec(property(get=__get__drawAfterTime, put=__set__drawAfterTime)) float_t  _drawAfterTime;

/// @brief Field _bobFrequency offset 0x5c
 __declspec(property(get=__get__bobFrequency, put=__set__bobFrequency)) float_t  _bobFrequency;

/// @brief Field _bobAmplitude offset 0x60
 __declspec(property(get=__get__bobAmplitude, put=__set__bobAmplitude)) float_t  _bobAmplitude;

/// @brief Field _cameraLocation offset 0x64
 __declspec(property(get=__get__cameraLocation, put=__set__cameraLocation)) ::UnityEngine::Vector3  _cameraLocation;

/// @brief Field _cameraRotation offset 0x70
 __declspec(property(get=__get__cameraRotation, put=__set__cameraRotation)) ::UnityEngine::Vector3  _cameraRotation;

/// @brief Field _cameraMovementRange offset 0x7c
 __declspec(property(get=__get__cameraMovementRange, put=__set__cameraMovementRange)) ::UnityEngine::Vector2  _cameraMovementRange;

/// @brief Field _cameraRotationRange offset 0x84
 __declspec(property(get=__get__cameraRotationRange, put=__set__cameraRotationRange)) ::UnityEngine::Vector2  _cameraRotationRange;

/// @brief Field _sceneSetupData offset 0x90
 __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData*  _sceneSetupData;

/// @brief Field _playerVRControllersManager offset 0x98
 __declspec(property(get=__get__playerVRControllersManager, put=__set__playerVRControllersManager)) ::GlobalNamespace::PlayerVRControllersManager*  _playerVRControllersManager;

/// @brief Field _beatmapObjectSpawnController offset 0xa0
 __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController)) ::GlobalNamespace::IBeatmapObjectSpawnController*  _beatmapObjectSpawnController;

/// @brief Field _beatmapCallbacksController offset 0xa8
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _vrPlatformHelper offset 0xb0
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

/// @brief Field _hmdCamera offset 0xb8
 __declspec(property(get=__get__hmdCamera, put=__set__hmdCamera)) ::UnityEngine::Camera*  _hmdCamera;

constexpr void __set__cutAngle(float_t  value) ;

constexpr float_t& __get__cutAngle() ;

constexpr float_t const& __get__cutAngle() const;

constexpr void __set__cutStartOffset(float_t  value) ;

constexpr float_t& __get__cutStartOffset() ;

constexpr float_t const& __get__cutStartOffset() const;

constexpr void __set__cutEndOffset(float_t  value) ;

constexpr float_t& __get__cutEndOffset() ;

constexpr float_t const& __get__cutEndOffset() const;

constexpr void __set_saberYOffset(float_t  value) ;

constexpr float_t& __get_saberYOffset() ;

constexpr float_t const& __get_saberYOffset() const;

constexpr void __set__controllerPosition(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__controllerPosition() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__controllerPosition() const;

constexpr void __set__controllerRotation(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__controllerRotation() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__controllerRotation() const;

constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__roomCenter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__roomCenter() const;

constexpr void __set__roomRotation(::GlobalNamespace::FloatSO*  value) ;

constexpr ::GlobalNamespace::FloatSO* __get__roomRotation() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> __get__roomRotation() const;

constexpr void __set__drawHitTimeline(bool  value) ;

constexpr bool& __get__drawHitTimeline() ;

constexpr bool const& __get__drawHitTimeline() const;

constexpr void __set__drawAheadTime(float_t  value) ;

constexpr float_t& __get__drawAheadTime() ;

constexpr float_t const& __get__drawAheadTime() const;

constexpr void __set__drawAfterTime(float_t  value) ;

constexpr float_t& __get__drawAfterTime() ;

constexpr float_t const& __get__drawAfterTime() const;

constexpr void __set__bobFrequency(float_t  value) ;

constexpr float_t& __get__bobFrequency() ;

constexpr float_t const& __get__bobFrequency() const;

constexpr void __set__bobAmplitude(float_t  value) ;

constexpr float_t& __get__bobAmplitude() ;

constexpr float_t const& __get__bobAmplitude() const;

constexpr void __set__cameraLocation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__cameraLocation() ;

constexpr ::UnityEngine::Vector3 const& __get__cameraLocation() const;

constexpr void __set__cameraRotation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__cameraRotation() ;

constexpr ::UnityEngine::Vector3 const& __get__cameraRotation() const;

constexpr void __set__cameraMovementRange(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__cameraMovementRange() ;

constexpr ::UnityEngine::Vector2 const& __get__cameraMovementRange() const;

constexpr void __set__cameraRotationRange(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__cameraRotationRange() ;

constexpr ::UnityEngine::Vector2 const& __get__cameraRotationRange() const;

constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* __get__sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> __get__sceneSetupData() const;

constexpr void __set__playerVRControllersManager(::GlobalNamespace::PlayerVRControllersManager*  value) ;

constexpr ::GlobalNamespace::PlayerVRControllersManager* __get__playerVRControllersManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerVRControllersManager*> __get__playerVRControllersManager() const;

constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController*  value) ;

constexpr ::GlobalNamespace::IBeatmapObjectSpawnController* __get__beatmapObjectSpawnController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> __get__beatmapObjectSpawnController() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

constexpr void __set__hmdCamera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__hmdCamera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__hmdCamera() const;

static inline ::GlobalNamespace::SongAutopilot* New_ctor() ;

/// @brief Method .ctor addr 0x226db50 size 0x40 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SongAutopilot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongAutopilot(SongAutopilot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongAutopilot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongAutopilot(SongAutopilot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongAutopilot()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongAutopilot, 0xc0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongAutopilot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongAutopilot*, "", "SongAutopilot");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongAutopilot__Frame, "", "SongAutopilot/Frame");
