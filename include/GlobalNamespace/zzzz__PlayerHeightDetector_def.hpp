#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerHeightDetector)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class __PlayerHeightDetector__InitData;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class ObstacleData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace GlobalNamespace {
class __PlayerHeightDetector__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeightDetector);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerHeightDetector__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5279))
// CS Name: ::PlayerHeightDetector::InitData*
class CORDL_TYPE __PlayerHeightDetector__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field headPosToPlayerHeightOffset offset 0x10
 __declspec(property(get=__get_headPosToPlayerHeightOffset, put=__set_headPosToPlayerHeightOffset)) float_t  headPosToPlayerHeightOffset;

/// @brief Field startPlayerHeight offset 0x14
 __declspec(property(get=__get_startPlayerHeight, put=__set_startPlayerHeight)) float_t  startPlayerHeight;

constexpr void __set_headPosToPlayerHeightOffset(float_t  value) ;

constexpr float_t& __get_headPosToPlayerHeightOffset() ;

constexpr float_t const& __get_headPosToPlayerHeightOffset() const;

constexpr void __set_startPlayerHeight(float_t  value) ;

constexpr float_t& __get_startPlayerHeight() ;

constexpr float_t const& __get_startPlayerHeight() const;

static inline ::GlobalNamespace::__PlayerHeightDetector__InitData* New_ctor(float_t  headPosToPlayerHeightOffset, float_t  startPlayerHeight) ;

/// @brief Method .ctor addr 0x22615fc size 0x2c virtual false final false
inline void _ctor(float_t  headPosToPlayerHeightOffset, float_t  startPlayerHeight) ;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerHeightDetector__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlayerHeightDetector__InitData(__PlayerHeightDetector__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerHeightDetector__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlayerHeightDetector__InitData(__PlayerHeightDetector__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlayerHeightDetector__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerHeightDetector__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PlayerHeightDetector
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5280))
// CS Name: ::PlayerHeightDetector*
class CORDL_TYPE PlayerHeightDetector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__PlayerHeightDetector__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _playerTransforms offset 0x18
 __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms)) ::GlobalNamespace::PlayerTransforms*  _playerTransforms;

/// @brief Field _beatmapCallbacksController offset 0x20
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _audioTimeSyncController offset 0x28
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSyncController;

/// @brief Field _initData offset 0x30
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__PlayerHeightDetector__InitData*  _initData;

/// @brief Field playerHeightDidChangeEvent offset 0x38
 __declspec(property(get=__get_playerHeightDidChangeEvent, put=__set_playerHeightDidChangeEvent)) ::System::Action_1<float_t>*  playerHeightDidChangeEvent;

/// @brief Field _beatmapObjectCallbackWrapper offset 0x40
 __declspec(property(get=__get__beatmapObjectCallbackWrapper, put=__set__beatmapObjectCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapObjectCallbackWrapper;

/// @brief Field _noTopObstaclesStartTime offset 0x48
 __declspec(property(get=__get__noTopObstaclesStartTime, put=__set__noTopObstaclesStartTime)) float_t  _noTopObstaclesStartTime;

/// @brief Field _computedPlayerHeight offset 0x4c
 __declspec(property(get=__get__computedPlayerHeight, put=__set__computedPlayerHeight)) float_t  _computedPlayerHeight;

/// @brief Field _changeWeight offset 0x50
 __declspec(property(get=__get__changeWeight, put=__set__changeWeight)) float_t  _changeWeight;

/// @brief Field _lastReportedHeight offset 0x54
 __declspec(property(get=__get__lastReportedHeight, put=__set__lastReportedHeight)) float_t  _lastReportedHeight;

 __declspec(property(get=get_playerHeight)) float_t  playerHeight;

constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value) ;

constexpr ::GlobalNamespace::PlayerTransforms* __get__playerTransforms() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> __get__playerTransforms() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSyncController() const;

constexpr void __set__initData(::GlobalNamespace::__PlayerHeightDetector__InitData*  value) ;

constexpr ::GlobalNamespace::__PlayerHeightDetector__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerHeightDetector__InitData*> __get__initData() const;

constexpr void __set_playerHeightDidChangeEvent(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_playerHeightDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_playerHeightDidChangeEvent() const;

constexpr void __set__beatmapObjectCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapObjectCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapObjectCallbackWrapper() const;

constexpr void __set__noTopObstaclesStartTime(float_t  value) ;

constexpr float_t& __get__noTopObstaclesStartTime() ;

constexpr float_t const& __get__noTopObstaclesStartTime() const;

constexpr void __set__computedPlayerHeight(float_t  value) ;

constexpr float_t& __get__computedPlayerHeight() ;

constexpr float_t const& __get__computedPlayerHeight() const;

constexpr void __set__changeWeight(float_t  value) ;

constexpr float_t& __get__changeWeight() ;

constexpr float_t const& __get__changeWeight() const;

constexpr void __set__lastReportedHeight(float_t  value) ;

constexpr float_t& __get__lastReportedHeight() ;

constexpr float_t const& __get__lastReportedHeight() const;

/// @brief Method add_playerHeightDidChangeEvent addr 0x226117c size 0xb0 virtual false final false
inline void add_playerHeightDidChangeEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method remove_playerHeightDidChangeEvent addr 0x226122c size 0xb0 virtual false final false
inline void remove_playerHeightDidChangeEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method get_playerHeight addr 0x22612dc size 0x8 virtual false final false
inline float_t get_playerHeight() ;

/// @brief Method Start addr 0x22612e4 size 0xe4 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x22613c8 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method LateUpdate addr 0x22613e4 size 0x1cc virtual false final false
inline void LateUpdate() ;

/// @brief Method BeatmapObjectSpawnCallback addr 0x22615b0 size 0x44 virtual false final false
inline void BeatmapObjectSpawnCallback(::GlobalNamespace::ObstacleData*  obstacleData) ;

static inline ::GlobalNamespace::PlayerHeightDetector* New_ctor() ;

/// @brief Method .ctor addr 0x22615f4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightDetector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerHeightDetector(PlayerHeightDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightDetector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerHeightDetector(PlayerHeightDetector const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerHeightDetector()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeightDetector, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeightDetector);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightDetector*, "", "PlayerHeightDetector");
NEED_NO_BOX(::GlobalNamespace::__PlayerHeightDetector__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerHeightDetector__InitData*, "", "PlayerHeightDetector/InitData");
