#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleController)
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class StretchableObstacle;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __ObstacleController___DissolveCoroutine_d__65;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace UnityEngine {
struct Bounds;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
class __ObstacleController___DissolveCoroutine_d__65;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleController);
MARK_REF_PTR_T(::GlobalNamespace::__ObstacleController__Pool);
MARK_REF_PTR_T(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65);
// Type: ::ObstacleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4793))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4792))
// CS Name: ::ObstacleController*
class CORDL_TYPE ObstacleController : public ::GlobalNamespace::ObstacleControllerBase {
public:
// Declarations
using _DissolveCoroutine_d__65 = ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65;

using Pool = ::GlobalNamespace::__ObstacleController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::GlobalNamespace::ObstacleControllerBase)]{};

/// @brief Field kAvoidMarkTimeOffset offset 0x0
static constexpr float_t  kAvoidMarkTimeOffset{0.15};

/// @brief Field _stretchableObstacle offset 0x28
 __declspec(property(get=__get__stretchableObstacle, put=__set__stretchableObstacle)) ::GlobalNamespace::StretchableObstacle*  _stretchableObstacle;

/// @brief Field _endDistanceOffset offset 0x30
 __declspec(property(get=__get__endDistanceOffset, put=__set__endDistanceOffset)) float_t  _endDistanceOffset;

/// @brief Field _visualWrappers offset 0x38
 __declspec(property(get=__get__visualWrappers, put=__set__visualWrappers)) ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  _visualWrappers;

/// @brief Field _playerTransforms offset 0x40
 __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms)) ::GlobalNamespace::PlayerTransforms*  _playerTransforms;

/// @brief Field _audioTimeSyncController offset 0x48
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSyncController;

/// @brief Field _colorManager offset 0x50
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field finishedMovementEvent offset 0x58
 __declspec(property(get=__get_finishedMovementEvent, put=__set_finishedMovementEvent)) ::System::Action_1<::GlobalNamespace::ObstacleController*>*  finishedMovementEvent;

/// @brief Field passedThreeQuartersOfMove2Event offset 0x60
 __declspec(property(get=__get_passedThreeQuartersOfMove2Event, put=__set_passedThreeQuartersOfMove2Event)) ::System::Action_1<::GlobalNamespace::ObstacleController*>*  passedThreeQuartersOfMove2Event;

/// @brief Field passedAvoidedMarkEvent offset 0x68
 __declspec(property(get=__get_passedAvoidedMarkEvent, put=__set_passedAvoidedMarkEvent)) ::System::Action_1<::GlobalNamespace::ObstacleController*>*  passedAvoidedMarkEvent;

/// @brief Field didDissolveEvent offset 0x70
 __declspec(property(get=__get_didDissolveEvent, put=__set_didDissolveEvent)) ::System::Action_1<::GlobalNamespace::ObstacleController*>*  didDissolveEvent;

/// @brief Field didUpdateProgress offset 0x78
 __declspec(property(get=__get_didUpdateProgress, put=__set_didUpdateProgress)) ::System::Action_2<::GlobalNamespace::ObstacleController*,float_t>*  didUpdateProgress;

/// @brief Field _width offset 0x80
 __declspec(property(get=__get__width, put=__set__width)) float_t  _width;

/// @brief Field _height offset 0x84
 __declspec(property(get=__get__height, put=__set__height)) float_t  _height;

/// @brief Field _length offset 0x88
 __declspec(property(get=__get__length, put=__set__length)) float_t  _length;

/// @brief Field _startPos offset 0x8c
 __declspec(property(get=__get__startPos, put=__set__startPos)) ::UnityEngine::Vector3  _startPos;

/// @brief Field _midPos offset 0x98
 __declspec(property(get=__get__midPos, put=__set__midPos)) ::UnityEngine::Vector3  _midPos;

/// @brief Field _endPos offset 0xa4
 __declspec(property(get=__get__endPos, put=__set__endPos)) ::UnityEngine::Vector3  _endPos;

/// @brief Field _move1Duration offset 0xb0
 __declspec(property(get=__get__move1Duration, put=__set__move1Duration)) float_t  _move1Duration;

/// @brief Field _move2Duration offset 0xb4
 __declspec(property(get=__get__move2Duration, put=__set__move2Duration)) float_t  _move2Duration;

/// @brief Field _startTimeOffset offset 0xb8
 __declspec(property(get=__get__startTimeOffset, put=__set__startTimeOffset)) float_t  _startTimeOffset;

/// @brief Field _obstacleDuration offset 0xbc
 __declspec(property(get=__get__obstacleDuration, put=__set__obstacleDuration)) float_t  _obstacleDuration;

/// @brief Field _passedThreeQuartersOfMove2Reported offset 0xc0
 __declspec(property(get=__get__passedThreeQuartersOfMove2Reported, put=__set__passedThreeQuartersOfMove2Reported)) bool  _passedThreeQuartersOfMove2Reported;

/// @brief Field _passedAvoidedMarkReported offset 0xc1
 __declspec(property(get=__get__passedAvoidedMarkReported, put=__set__passedAvoidedMarkReported)) bool  _passedAvoidedMarkReported;

/// @brief Field _passedAvoidedMarkTime offset 0xc4
 __declspec(property(get=__get__passedAvoidedMarkTime, put=__set__passedAvoidedMarkTime)) float_t  _passedAvoidedMarkTime;

/// @brief Field _finishMovementTime offset 0xc8
 __declspec(property(get=__get__finishMovementTime, put=__set__finishMovementTime)) float_t  _finishMovementTime;

/// @brief Field _bounds offset 0xcc
 __declspec(property(get=__get__bounds, put=__set__bounds)) ::UnityEngine::Bounds  _bounds;

/// @brief Field _dissolving offset 0xe4
 __declspec(property(get=__get__dissolving, put=__set__dissolving)) bool  _dissolving;

/// @brief Field _obstacleData offset 0xe8
 __declspec(property(get=__get__obstacleData, put=__set__obstacleData)) ::GlobalNamespace::ObstacleData*  _obstacleData;

/// @brief Field _color offset 0xf0
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _worldRotation offset 0x100
 __declspec(property(get=__get__worldRotation, put=__set__worldRotation)) ::UnityEngine::Quaternion  _worldRotation;

/// @brief Field _inverseWorldRotation offset 0x110
 __declspec(property(get=__get__inverseWorldRotation, put=__set__inverseWorldRotation)) ::UnityEngine::Quaternion  _inverseWorldRotation;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_obstacleData)) ::GlobalNamespace::ObstacleData*  obstacleData;

 __declspec(property(get=get_hasPassedAvoidedMark)) bool  hasPassedAvoidedMark;

 __declspec(property(get=get_move1Duration)) float_t  move1Duration;

 __declspec(property(get=get_move2Duration)) float_t  move2Duration;

 __declspec(property(get=get_width)) float_t  width;

 __declspec(property(get=get_height)) float_t  height;

 __declspec(property(get=get_length)) float_t  length;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
constexpr operator  ::GlobalNamespace::IBeatmapObjectController*() noexcept;

constexpr void __set__stretchableObstacle(::GlobalNamespace::StretchableObstacle*  value) ;

constexpr ::GlobalNamespace::StretchableObstacle* __get__stretchableObstacle() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StretchableObstacle*> __get__stretchableObstacle() const;

constexpr void __set__endDistanceOffset(float_t  value) ;

constexpr float_t& __get__endDistanceOffset() ;

constexpr float_t const& __get__endDistanceOffset() const;

constexpr void __set__visualWrappers(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& __get__visualWrappers() ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& __get__visualWrappers() const;

constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value) ;

constexpr ::GlobalNamespace::PlayerTransforms* __get__playerTransforms() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> __get__playerTransforms() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSyncController() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set_finishedMovementEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>* __get_finishedMovementEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> __get_finishedMovementEvent() const;

constexpr void __set_passedThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>* __get_passedThreeQuartersOfMove2Event() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> __get_passedThreeQuartersOfMove2Event() const;

constexpr void __set_passedAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>* __get_passedAvoidedMarkEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> __get_passedAvoidedMarkEvent() const;

constexpr void __set_didDissolveEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>* __get_didDissolveEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> __get_didDissolveEvent() const;

constexpr void __set_didUpdateProgress(::System::Action_2<::GlobalNamespace::ObstacleController*,float_t>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::ObstacleController*,float_t>* __get_didUpdateProgress() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ObstacleController*,float_t>*> __get_didUpdateProgress() const;

constexpr void __set__width(float_t  value) ;

constexpr float_t& __get__width() ;

constexpr float_t const& __get__width() const;

constexpr void __set__height(float_t  value) ;

constexpr float_t& __get__height() ;

constexpr float_t const& __get__height() const;

constexpr void __set__length(float_t  value) ;

constexpr float_t& __get__length() ;

constexpr float_t const& __get__length() const;

constexpr void __set__startPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__startPos() ;

constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

constexpr void __set__midPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__midPos() ;

constexpr ::UnityEngine::Vector3 const& __get__midPos() const;

constexpr void __set__endPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__endPos() ;

constexpr ::UnityEngine::Vector3 const& __get__endPos() const;

constexpr void __set__move1Duration(float_t  value) ;

constexpr float_t& __get__move1Duration() ;

constexpr float_t const& __get__move1Duration() const;

constexpr void __set__move2Duration(float_t  value) ;

constexpr float_t& __get__move2Duration() ;

constexpr float_t const& __get__move2Duration() const;

constexpr void __set__startTimeOffset(float_t  value) ;

constexpr float_t& __get__startTimeOffset() ;

constexpr float_t const& __get__startTimeOffset() const;

constexpr void __set__obstacleDuration(float_t  value) ;

constexpr float_t& __get__obstacleDuration() ;

constexpr float_t const& __get__obstacleDuration() const;

constexpr void __set__passedThreeQuartersOfMove2Reported(bool  value) ;

constexpr bool& __get__passedThreeQuartersOfMove2Reported() ;

constexpr bool const& __get__passedThreeQuartersOfMove2Reported() const;

constexpr void __set__passedAvoidedMarkReported(bool  value) ;

constexpr bool& __get__passedAvoidedMarkReported() ;

constexpr bool const& __get__passedAvoidedMarkReported() const;

constexpr void __set__passedAvoidedMarkTime(float_t  value) ;

constexpr float_t& __get__passedAvoidedMarkTime() ;

constexpr float_t const& __get__passedAvoidedMarkTime() const;

constexpr void __set__finishMovementTime(float_t  value) ;

constexpr float_t& __get__finishMovementTime() ;

constexpr float_t const& __get__finishMovementTime() const;

constexpr void __set__bounds(::UnityEngine::Bounds  value) ;

constexpr ::UnityEngine::Bounds& __get__bounds() ;

constexpr ::UnityEngine::Bounds const& __get__bounds() const;

constexpr void __set__dissolving(bool  value) ;

constexpr bool& __get__dissolving() ;

constexpr bool const& __get__dissolving() const;

constexpr void __set__obstacleData(::GlobalNamespace::ObstacleData*  value) ;

constexpr ::GlobalNamespace::ObstacleData* __get__obstacleData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleData*> __get__obstacleData() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__worldRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__worldRotation() ;

constexpr ::UnityEngine::Quaternion const& __get__worldRotation() const;

constexpr void __set__inverseWorldRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__inverseWorldRotation() ;

constexpr ::UnityEngine::Quaternion const& __get__inverseWorldRotation() const;

/// @brief Method add_finishedMovementEvent addr 0x238d150 size 0xb0 virtual false final false
inline void add_finishedMovementEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

/// @brief Method remove_finishedMovementEvent addr 0x238d200 size 0xb0 virtual false final false
inline void remove_finishedMovementEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

/// @brief Method add_passedThreeQuartersOfMove2Event addr 0x238d2b0 size 0xb0 virtual false final false
inline void add_passedThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

/// @brief Method remove_passedThreeQuartersOfMove2Event addr 0x238d360 size 0xb0 virtual false final false
inline void remove_passedThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

/// @brief Method add_passedAvoidedMarkEvent addr 0x238d410 size 0xb0 virtual false final false
inline void add_passedAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

/// @brief Method remove_passedAvoidedMarkEvent addr 0x238d4c0 size 0xb0 virtual false final false
inline void remove_passedAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

/// @brief Method add_didDissolveEvent addr 0x238d570 size 0xb0 virtual false final false
inline void add_didDissolveEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

/// @brief Method remove_didDissolveEvent addr 0x238d620 size 0xb0 virtual false final false
inline void remove_didDissolveEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>*  value) ;

/// @brief Method add_didUpdateProgress addr 0x238d6d0 size 0xb0 virtual false final false
inline void add_didUpdateProgress(::System::Action_2<::GlobalNamespace::ObstacleController*,float_t>*  value) ;

/// @brief Method remove_didUpdateProgress addr 0x238d780 size 0xb0 virtual false final false
inline void remove_didUpdateProgress(::System::Action_2<::GlobalNamespace::ObstacleController*,float_t>*  value) ;

/// @brief Method get_bounds addr 0x238d830 size 0x14 virtual false final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_obstacleData addr 0x238d844 size 0x8 virtual false final false
inline ::GlobalNamespace::ObstacleData* get_obstacleData() ;

/// @brief Method get_hasPassedAvoidedMark addr 0x238d84c size 0x8 virtual false final false
inline bool get_hasPassedAvoidedMark() ;

/// @brief Method get_move1Duration addr 0x238d854 size 0x8 virtual false final false
inline float_t get_move1Duration() ;

/// @brief Method get_move2Duration addr 0x238d85c size 0x8 virtual false final false
inline float_t get_move2Duration() ;

/// @brief Method get_width addr 0x238d864 size 0x8 virtual false final false
inline float_t get_width() ;

/// @brief Method get_height addr 0x238d86c size 0x8 virtual false final false
inline float_t get_height() ;

/// @brief Method get_length addr 0x238d874 size 0x8 virtual false final false
inline float_t get_length() ;

/// @brief Method get_color addr 0x238d87c size 0xc virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method Init addr 0x238d888 size 0x2d4 virtual true final false
inline void Init(::GlobalNamespace::ObstacleData*  obstacleData, float_t  worldRotation, ::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  midPos, ::UnityEngine::Vector3  endPos, float_t  move1Duration, float_t  move2Duration, float_t  singleLineWidth, float_t  height) ;

/// @brief Method Update addr 0x238db5c size 0xc virtual false final false
inline void Update() ;

/// @brief Method ManualUpdate addr 0x238db68 size 0x1ec virtual true final false
inline void ManualUpdate() ;

/// @brief Method GetPosForTime addr 0x238dd54 size 0x124 virtual false final false
inline ::UnityEngine::Vector3 GetPosForTime(float_t  time) ;

/// @brief Method DissolveCoroutine addr 0x238de78 size 0x78 virtual false final false
inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t  duration) ;

/// @brief Method Dissolve addr 0x238df18 size 0x38 virtual true final true
inline void Dissolve(float_t  duration) ;

/// @brief Method Hide addr 0x238df50 size 0x6c virtual true final true
inline void Hide(bool  hide) ;

/// @brief Method Pause addr 0x238dfbc size 0x10 virtual true final true
inline void Pause(bool  pause) ;

static inline ::GlobalNamespace::ObstacleController* New_ctor() ;

/// @brief Method .ctor addr 0x238dfcc size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleController(ObstacleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleController(ObstacleController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObstacleController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleController, 0x120>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 372 }), TypeDefinitionIndex(TypeDefinitionIndex(11050)), TypeDefinitionIndex(TypeDefinitionIndex(4792))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4790))
// CS Name: ::ObstacleController::Pool*
class CORDL_TYPE __ObstacleController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::ObstacleController*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::ObstacleController*>)]{};

static inline ::GlobalNamespace::__ObstacleController__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x238dfdc size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ObstacleController__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ObstacleController__Pool(__ObstacleController__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ObstacleController__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ObstacleController__Pool(__ObstacleController__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ObstacleController__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObstacleController__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<DissolveCoroutine>d__65
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4791))
// CS Name: ::ObstacleController::<DissolveCoroutine>d__65*
class CORDL_TYPE __ObstacleController___DissolveCoroutine_d__65 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::ObstacleController*  __4__this;

/// @brief Field duration offset 0x28
 __declspec(property(get=__get_duration, put=__set_duration)) float_t  duration;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::ObstacleController*  value) ;

constexpr ::GlobalNamespace::ObstacleController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> __get___4__this() const;

constexpr void __set_duration(float_t  value) ;

constexpr float_t& __get_duration() ;

constexpr float_t const& __get_duration() const;

static inline ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x238def0 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x238e024 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x238e028 size 0xe8 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x238e110 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x238e118 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x238e158 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__ObstacleController___DissolveCoroutine_d__65", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ObstacleController___DissolveCoroutine_d__65(__ObstacleController___DissolveCoroutine_d__65 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ObstacleController___DissolveCoroutine_d__65", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ObstacleController___DissolveCoroutine_d__65(__ObstacleController___DissolveCoroutine_d__65 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ObstacleController___DissolveCoroutine_d__65()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleController*, "", "ObstacleController");
NEED_NO_BOX(::GlobalNamespace::__ObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObstacleController__Pool*, "", "ObstacleController/Pool");
NEED_NO_BOX(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*, "", "ObstacleController/<DissolveCoroutine>d__65");
