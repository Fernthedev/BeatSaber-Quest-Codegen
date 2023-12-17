#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectSpawnController)
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class SliderData;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class __BeatmapObjectSpawnController__InitData;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class __BeatmapObjectSpawnController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnController);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapObjectSpawnController__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4719))
// CS Name: ::BeatmapObjectSpawnController::InitData*
class CORDL_TYPE __BeatmapObjectSpawnController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field beatsPerMinute offset 0x10
 __declspec(property(get=__get_beatsPerMinute, put=__set_beatsPerMinute)) float_t  beatsPerMinute;

/// @brief Field noteLinesCount offset 0x14
 __declspec(property(get=__get_noteLinesCount, put=__set_noteLinesCount)) int32_t  noteLinesCount;

/// @brief Field noteJumpMovementSpeed offset 0x18
 __declspec(property(get=__get_noteJumpMovementSpeed, put=__set_noteJumpMovementSpeed)) float_t  noteJumpMovementSpeed;

/// @brief Field noteJumpValueType offset 0x1c
 __declspec(property(get=__get_noteJumpValueType, put=__set_noteJumpValueType)) ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType  noteJumpValueType;

/// @brief Field noteJumpValue offset 0x20
 __declspec(property(get=__get_noteJumpValue, put=__set_noteJumpValue)) float_t  noteJumpValue;

constexpr void __set_beatsPerMinute(float_t  value) ;

constexpr float_t& __get_beatsPerMinute() ;

constexpr float_t const& __get_beatsPerMinute() const;

constexpr void __set_noteLinesCount(int32_t  value) ;

constexpr int32_t& __get_noteLinesCount() ;

constexpr int32_t const& __get_noteLinesCount() const;

constexpr void __set_noteJumpMovementSpeed(float_t  value) ;

constexpr float_t& __get_noteJumpMovementSpeed() ;

constexpr float_t const& __get_noteJumpMovementSpeed() const;

constexpr void __set_noteJumpValueType(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType  value) ;

constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType& __get_noteJumpValueType() ;

constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType const& __get_noteJumpValueType() const;

constexpr void __set_noteJumpValue(float_t  value) ;

constexpr float_t& __get_noteJumpValue() ;

constexpr float_t const& __get_noteJumpValue() const;

static inline ::GlobalNamespace::__BeatmapObjectSpawnController__InitData* New_ctor(float_t  beatsPerMinute, int32_t  noteLinesCount, float_t  noteJumpMovementSpeed, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType  noteJumpValueType, float_t  noteJumpValue) ;

/// @brief Method .ctor addr 0x23809d4 size 0x58 virtual false final false
inline void _ctor(float_t  beatsPerMinute, int32_t  noteLinesCount, float_t  noteJumpMovementSpeed, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType  noteJumpValueType, float_t  noteJumpValue) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectSpawnController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapObjectSpawnController__InitData(__BeatmapObjectSpawnController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectSpawnController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapObjectSpawnController__InitData(__BeatmapObjectSpawnController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapObjectSpawnController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectSpawnController__InitData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectSpawnController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4720))
// CS Name: ::BeatmapObjectSpawnController*
class CORDL_TYPE BeatmapObjectSpawnController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__BeatmapObjectSpawnController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _beatmapObjectSpawnMovementData offset 0x18
 __declspec(property(get=__get__beatmapObjectSpawnMovementData, put=__set__beatmapObjectSpawnMovementData)) ::GlobalNamespace::BeatmapObjectSpawnMovementData*  _beatmapObjectSpawnMovementData;

/// @brief Field _beatmapCallbacksController offset 0x20
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _beatmapObjectSpawner offset 0x28
 __declspec(property(get=__get__beatmapObjectSpawner, put=__set__beatmapObjectSpawner)) ::GlobalNamespace::IBeatmapObjectSpawner*  _beatmapObjectSpawner;

/// @brief Field _jumpOffsetYProvider offset 0x30
 __declspec(property(get=__get__jumpOffsetYProvider, put=__set__jumpOffsetYProvider)) ::GlobalNamespace::IJumpOffsetYProvider*  _jumpOffsetYProvider;

/// @brief Field _initData offset 0x38
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__BeatmapObjectSpawnController__InitData*  _initData;

/// @brief Field didInitEvent offset 0x40
 __declspec(property(get=__get_didInitEvent, put=__set_didInitEvent)) ::System::Action*  didInitEvent;

/// @brief Field _disableSpawning offset 0x48
 __declspec(property(get=__get__disableSpawning, put=__set__disableSpawning)) bool  _disableSpawning;

/// @brief Field _isInitialized offset 0x49
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

/// @brief Field _obstacleDataCallbackWrapper offset 0x50
 __declspec(property(get=__get__obstacleDataCallbackWrapper, put=__set__obstacleDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _obstacleDataCallbackWrapper;

/// @brief Field _noteDataCallbackWrapper offset 0x58
 __declspec(property(get=__get__noteDataCallbackWrapper, put=__set__noteDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _noteDataCallbackWrapper;

/// @brief Field _sliderDataCallbackWrapper offset 0x60
 __declspec(property(get=__get__sliderDataCallbackWrapper, put=__set__sliderDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _sliderDataCallbackWrapper;

/// @brief Field _spawnRotationCallbackWrapper offset 0x68
 __declspec(property(get=__get__spawnRotationCallbackWrapper, put=__set__spawnRotationCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _spawnRotationCallbackWrapper;

/// @brief Field _spawnRotation offset 0x70
 __declspec(property(get=__get__spawnRotation, put=__set__spawnRotation)) float_t  _spawnRotation;

 __declspec(property(get=get_noteLinesCount)) int32_t  noteLinesCount;

 __declspec(property(get=get_jumpOffsetY)) float_t  jumpOffsetY;

 __declspec(property(get=get_moveDuration)) float_t  moveDuration;

 __declspec(property(get=get_jumpDuration)) float_t  jumpDuration;

 __declspec(property(get=get_jumpDistance)) float_t  jumpDistance;

 __declspec(property(get=get_verticalLayerDistance)) float_t  verticalLayerDistance;

 __declspec(property(get=get_noteJumpMovementSpeed)) float_t  noteJumpMovementSpeed;

 __declspec(property(get=get_noteLinesDistance)) float_t  noteLinesDistance;

 __declspec(property(get=get_beatmapObjectSpawnMovementData)) ::GlobalNamespace::BeatmapObjectSpawnMovementData*  beatmapObjectSpawnMovementData;

 __declspec(property(get=get_isInitialized)) bool  isInitialized;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectSpawnController"
constexpr operator  ::GlobalNamespace::IBeatmapObjectSpawnController*() noexcept;

constexpr void __set__beatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData* __get__beatmapObjectSpawnMovementData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnMovementData*> __get__beatmapObjectSpawnMovementData() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__beatmapObjectSpawner(::GlobalNamespace::IBeatmapObjectSpawner*  value) ;

constexpr ::GlobalNamespace::IBeatmapObjectSpawner* __get__beatmapObjectSpawner() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawner*> __get__beatmapObjectSpawner() const;

constexpr void __set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider*  value) ;

constexpr ::GlobalNamespace::IJumpOffsetYProvider* __get__jumpOffsetYProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IJumpOffsetYProvider*> __get__jumpOffsetYProvider() const;

constexpr void __set__initData(::GlobalNamespace::__BeatmapObjectSpawnController__InitData*  value) ;

constexpr ::GlobalNamespace::__BeatmapObjectSpawnController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectSpawnController__InitData*> __get__initData() const;

constexpr void __set_didInitEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didInitEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didInitEvent() const;

constexpr void __set__disableSpawning(bool  value) ;

constexpr bool& __get__disableSpawning() ;

constexpr bool const& __get__disableSpawning() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

constexpr void __set__obstacleDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__obstacleDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__obstacleDataCallbackWrapper() const;

constexpr void __set__noteDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__noteDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__noteDataCallbackWrapper() const;

constexpr void __set__sliderDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__sliderDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__sliderDataCallbackWrapper() const;

constexpr void __set__spawnRotationCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__spawnRotationCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__spawnRotationCallbackWrapper() const;

constexpr void __set__spawnRotation(float_t  value) ;

constexpr float_t& __get__spawnRotation() ;

constexpr float_t const& __get__spawnRotation() const;

/// @brief Method get_noteLinesCount addr 0x237f8fc size 0x1c virtual true final true
inline int32_t get_noteLinesCount() ;

/// @brief Method get_jumpOffsetY addr 0x237f918 size 0x18 virtual true final true
inline float_t get_jumpOffsetY() ;

/// @brief Method get_moveDuration addr 0x237f9d0 size 0x1c virtual true final true
inline float_t get_moveDuration() ;

/// @brief Method get_jumpDuration addr 0x237f9ec size 0x1c virtual true final true
inline float_t get_jumpDuration() ;

/// @brief Method get_jumpDistance addr 0x237fa08 size 0x1c virtual true final true
inline float_t get_jumpDistance() ;

/// @brief Method get_verticalLayerDistance addr 0x237fa24 size 0x20 virtual true final true
inline float_t get_verticalLayerDistance() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x237fa50 size 0x1c virtual true final true
inline float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteLinesDistance addr 0x237fa6c size 0x20 virtual true final true
inline float_t get_noteLinesDistance() ;

/// @brief Method get_beatmapObjectSpawnMovementData addr 0x237fa98 size 0x8 virtual true final true
inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* get_beatmapObjectSpawnMovementData() ;

/// @brief Method get_isInitialized addr 0x237faa0 size 0x8 virtual true final true
inline bool get_isInitialized() ;

/// @brief Method add_didInitEvent addr 0x237faa8 size 0x9c virtual true final true
inline void add_didInitEvent(::System::Action*  value) ;

/// @brief Method remove_didInitEvent addr 0x237fb44 size 0x9c virtual true final true
inline void remove_didInitEvent(::System::Action*  value) ;

/// @brief Method Start addr 0x237fbe0 size 0x384 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23800b4 size 0x58 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleObstacleDataCallback addr 0x238010c size 0x110 virtual false final false
inline void HandleObstacleDataCallback(::GlobalNamespace::ObstacleData*  obstacleData) ;

/// @brief Method HandleNoteDataCallback addr 0x238038c size 0x108 virtual false final false
inline void HandleNoteDataCallback(::GlobalNamespace::NoteData*  noteData) ;

/// @brief Method HandleSliderDataCallback addr 0x238058c size 0x118 virtual false final false
inline void HandleSliderDataCallback(::GlobalNamespace::SliderData*  sliderNoteData) ;

/// @brief Method HandleSpawnRotationCallback addr 0x238082c size 0x1c virtual false final false
inline void HandleSpawnRotationCallback(::GlobalNamespace::SpawnRotationBeatmapEventData*  beatmapEventData) ;

/// @brief Method StopSpawning addr 0x2380848 size 0xc virtual false final false
inline void StopSpawning() ;

/// @brief Method Get2DNoteOffset addr 0x2380854 size 0x24 virtual true final true
inline ::UnityEngine::Vector2 Get2DNoteOffset(int32_t  noteLineIndex, ::GlobalNamespace::NoteLineLayer  noteLineLayer) ;

/// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset addr 0x238088c size 0x18 virtual true final true
inline float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer  lineLayer, float_t  distanceFromPlayer) ;

static inline ::GlobalNamespace::BeatmapObjectSpawnController* New_ctor() ;

/// @brief Method .ctor addr 0x2380914 size 0x90 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapObjectSpawnController(BeatmapObjectSpawnController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapObjectSpawnController(BeatmapObjectSpawnController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapObjectSpawnController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnController, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnController*, "", "BeatmapObjectSpawnController");
NEED_NO_BOX(::GlobalNamespace::__BeatmapObjectSpawnController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectSpawnController__InitData*, "", "BeatmapObjectSpawnController/InitData");
