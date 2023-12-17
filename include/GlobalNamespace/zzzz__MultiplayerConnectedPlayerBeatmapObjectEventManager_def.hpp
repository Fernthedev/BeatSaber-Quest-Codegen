#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerBeatmapObjectEventManager)
namespace GlobalNamespace {
class IPoolableSerializable;
}
namespace GlobalNamespace {
struct __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
struct __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager);
MARK_VAL_T(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData);
// Type: ::TimestampedBeatmapObjectEventData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5116))
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData
struct CORDL_TYPE __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field time offset 0x0
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

/// @brief Field beatmapObjectEventData offset 0x8
 __declspec(property(get=__get_beatmapObjectEventData, put=__set_beatmapObjectEventData)) ::GlobalNamespace::IPoolableSerializable*  beatmapObjectEventData;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

constexpr void __set_beatmapObjectEventData(::GlobalNamespace::IPoolableSerializable*  value) ;

constexpr ::GlobalNamespace::IPoolableSerializable* __get_beatmapObjectEventData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPoolableSerializable*> __get_beatmapObjectEventData() const;

/// @brief Method .ctor addr 0x23d2bb0 size 0xc virtual false final false
inline void _ctor(float_t  time, ::GlobalNamespace::IPoolableSerializable*  beatmapObjectEventData) ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapObjectEventData", ty: "::GlobalNamespace::IPoolableSerializable*", modifiers: "", def_value: None }]
constexpr __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(float_t  time, ::GlobalNamespace::IPoolableSerializable*  beatmapObjectEventData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerConnectedPlayerBeatmapObjectEventManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5117))
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectEventManager*
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectEventManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TimestampedBeatmapObjectEventData = ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _connectedPlayer offset 0x18
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

/// @brief Field _gameplayRpcManager offset 0x20
 __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager*  _gameplayRpcManager;

/// @brief Field _songTimeController offset 0x28
 __declspec(property(get=__get__songTimeController, put=__set__songTimeController)) ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*  _songTimeController;

/// @brief Field connectedPlayerNoteWasSpawnedEvent offset 0x30
 __declspec(property(get=__get_connectedPlayerNoteWasSpawnedEvent, put=__set_connectedPlayerNoteWasSpawnedEvent)) ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*  connectedPlayerNoteWasSpawnedEvent;

/// @brief Field connectedPlayerObstacleWasSpawnedEvent offset 0x38
 __declspec(property(get=__get_connectedPlayerObstacleWasSpawnedEvent, put=__set_connectedPlayerObstacleWasSpawnedEvent)) ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*  connectedPlayerObstacleWasSpawnedEvent;

/// @brief Field connectedPlayerSliderWasSpawnedEvent offset 0x40
 __declspec(property(get=__get_connectedPlayerSliderWasSpawnedEvent, put=__set_connectedPlayerSliderWasSpawnedEvent)) ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*  connectedPlayerSliderWasSpawnedEvent;

/// @brief Field connectedPlayerNoteWasCutEvent offset 0x48
 __declspec(property(get=__get_connectedPlayerNoteWasCutEvent, put=__set_connectedPlayerNoteWasCutEvent)) ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*  connectedPlayerNoteWasCutEvent;

/// @brief Field connectedPlayerNoteWasMissedEvent offset 0x50
 __declspec(property(get=__get_connectedPlayerNoteWasMissedEvent, put=__set_connectedPlayerNoteWasMissedEvent)) ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*  connectedPlayerNoteWasMissedEvent;

/// @brief Field _beatmapObjectEventQueue offset 0x58
 __declspec(property(get=__get__beatmapObjectEventQueue, put=__set__beatmapObjectEventQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*  _beatmapObjectEventQueue;

/// @brief Field _paused offset 0x60
 __declspec(property(get=__get__paused, put=__set__paused)) bool  _paused;

/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager"
constexpr operator  ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*() noexcept;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager*  value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager* __get__gameplayRpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> __get__gameplayRpcManager() const;

constexpr void __set__songTimeController(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*  value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* __get__songTimeController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*> __get__songTimeController() const;

constexpr void __set_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* __get_connectedPlayerNoteWasSpawnedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*> __get_connectedPlayerNoteWasSpawnedEvent() const;

constexpr void __set_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* __get_connectedPlayerObstacleWasSpawnedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*> __get_connectedPlayerObstacleWasSpawnedEvent() const;

constexpr void __set_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* __get_connectedPlayerSliderWasSpawnedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*> __get_connectedPlayerSliderWasSpawnedEvent() const;

constexpr void __set_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* __get_connectedPlayerNoteWasCutEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*> __get_connectedPlayerNoteWasCutEvent() const;

constexpr void __set_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* __get_connectedPlayerNoteWasMissedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*> __get_connectedPlayerNoteWasMissedEvent() const;

constexpr void __set__beatmapObjectEventQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* __get__beatmapObjectEventQueue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*> __get__beatmapObjectEventQueue() const;

constexpr void __set__paused(bool  value) ;

constexpr bool& __get__paused() ;

constexpr bool const& __get__paused() const;

/// @brief Method add_connectedPlayerNoteWasSpawnedEvent addr 0x23d19f0 size 0xb0 virtual true final true
inline void add_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*  value) ;

/// @brief Method remove_connectedPlayerNoteWasSpawnedEvent addr 0x23d1aa0 size 0xb0 virtual true final true
inline void remove_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*  value) ;

/// @brief Method add_connectedPlayerObstacleWasSpawnedEvent addr 0x23d1b50 size 0xb0 virtual true final true
inline void add_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*  value) ;

/// @brief Method remove_connectedPlayerObstacleWasSpawnedEvent addr 0x23d1c00 size 0xb0 virtual true final true
inline void remove_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*  value) ;

/// @brief Method add_connectedPlayerSliderWasSpawnedEvent addr 0x23d1cb0 size 0xb0 virtual true final true
inline void add_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*  value) ;

/// @brief Method remove_connectedPlayerSliderWasSpawnedEvent addr 0x23d1d60 size 0xb0 virtual true final true
inline void remove_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*  value) ;

/// @brief Method add_connectedPlayerNoteWasCutEvent addr 0x23d1e10 size 0xb0 virtual true final true
inline void add_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*  value) ;

/// @brief Method remove_connectedPlayerNoteWasCutEvent addr 0x23d1ec0 size 0xb0 virtual true final true
inline void remove_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*  value) ;

/// @brief Method add_connectedPlayerNoteWasMissedEvent addr 0x23d1f70 size 0xb0 virtual true final true
inline void add_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*  value) ;

/// @brief Method remove_connectedPlayerNoteWasMissedEvent addr 0x23d2020 size 0xb0 virtual true final true
inline void remove_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*  value) ;

/// @brief Method Start addr 0x23d20d0 size 0x3b8 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23d2488 size 0x3c8 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x23d2850 size 0xc0 virtual false final false
inline void Update() ;

/// @brief Method Pause addr 0x23d2b20 size 0xc virtual true final true
inline void Pause() ;

/// @brief Method Resume addr 0x23d2b2c size 0x8 virtual true final true
inline void Resume() ;

/// @brief Method HandleBeatmapObjectEventData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void HandleBeatmapObjectEventData(::StringW  userId, int64_t  syncTime, float_t  songTime, T  beatmapObjectEventData) ;

/// @brief Method InvokeCallback addr 0x23d2910 size 0x210 virtual false final false
inline void InvokeCallback(::GlobalNamespace::IPoolableSerializable*  noteEventData) ;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* New_ctor() ;

/// @brief Method .ctor addr 0x23d2b34 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectEventManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerBeatmapObjectEventManager(MultiplayerConnectedPlayerBeatmapObjectEventManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectEventManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerBeatmapObjectEventManager(MultiplayerConnectedPlayerBeatmapObjectEventManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerBeatmapObjectEventManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*, "", "MultiplayerConnectedPlayerBeatmapObjectEventManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData, "", "MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData");
