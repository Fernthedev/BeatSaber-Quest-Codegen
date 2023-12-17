#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioTimeSyncController)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class __AudioTimeSyncController__InitData;
}
namespace UnityEngine {
class WaitUntil;
}
namespace GlobalNamespace {
struct __AudioTimeSyncController__State;
}
namespace UnityEngine {
class AudioSource;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AudioTimeSyncController__State;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class __AudioTimeSyncController__InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AudioTimeSyncController__State);
MARK_REF_PTR_T(::GlobalNamespace::AudioTimeSyncController);
MARK_REF_PTR_T(::GlobalNamespace::__AudioTimeSyncController__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4051))
// CS Name: ::AudioTimeSyncController::InitData*
class CORDL_TYPE __AudioTimeSyncController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field audioClip offset 0x10
 __declspec(property(get=__get_audioClip, put=__set_audioClip)) ::UnityEngine::AudioClip*  audioClip;

/// @brief Field startSongTime offset 0x18
 __declspec(property(get=__get_startSongTime, put=__set_startSongTime)) float_t  startSongTime;

/// @brief Field songTimeOffset offset 0x1c
 __declspec(property(get=__get_songTimeOffset, put=__set_songTimeOffset)) float_t  songTimeOffset;

/// @brief Field timeScale offset 0x20
 __declspec(property(get=__get_timeScale, put=__set_timeScale)) float_t  timeScale;

constexpr void __set_audioClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get_audioClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get_audioClip() const;

constexpr void __set_startSongTime(float_t  value) ;

constexpr float_t& __get_startSongTime() ;

constexpr float_t const& __get_startSongTime() const;

constexpr void __set_songTimeOffset(float_t  value) ;

constexpr float_t& __get_songTimeOffset() ;

constexpr float_t const& __get_songTimeOffset() const;

constexpr void __set_timeScale(float_t  value) ;

constexpr float_t& __get_timeScale() ;

constexpr float_t const& __get_timeScale() const;

static inline ::GlobalNamespace::__AudioTimeSyncController__InitData* New_ctor(::UnityEngine::AudioClip*  audioClip, float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale) ;

/// @brief Method .ctor addr 0x222c22c size 0x4c virtual false final false
inline void _ctor(::UnityEngine::AudioClip*  audioClip, float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale) ;

// Ctor Parameters [CppParam { name: "", ty: "__AudioTimeSyncController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AudioTimeSyncController__InitData(__AudioTimeSyncController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AudioTimeSyncController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AudioTimeSyncController__InitData(__AudioTimeSyncController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AudioTimeSyncController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioTimeSyncController__InitData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::State
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4052))
// CS Name: ::AudioTimeSyncController::State
struct CORDL_TYPE __AudioTimeSyncController__State : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AudioTimeSyncController__State_Unwrapped
enum struct ____AudioTimeSyncController__State_Unwrapped : int32_t {
__E_Playing = static_cast<int32_t>(0x0),
__E_Paused = static_cast<int32_t>(0x1),
__E_Stopped = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Playing value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__AudioTimeSyncController__State const Playing;

/// @brief Field Paused value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__AudioTimeSyncController__State const Paused;

/// @brief Field Stopped value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__AudioTimeSyncController__State const Stopped;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AudioTimeSyncController__State_Unwrapped () const noexcept {
return std::bit_cast<____AudioTimeSyncController__State_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AudioTimeSyncController__State(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AudioTimeSyncController__State(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AudioTimeSyncController__State()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioTimeSyncController__State, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AudioTimeSyncController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4053))
// CS Name: ::AudioTimeSyncController*
class CORDL_TYPE AudioTimeSyncController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::__AudioTimeSyncController__State;

using InitData = ::GlobalNamespace::__AudioTimeSyncController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioSyncLerpSpeed offset 0x18
 __declspec(property(get=__get__audioSyncLerpSpeed, put=__set__audioSyncLerpSpeed)) float_t  _audioSyncLerpSpeed;

/// @brief Field _forcedSyncDeltaTime offset 0x1c
 __declspec(property(get=__get__forcedSyncDeltaTime, put=__set__forcedSyncDeltaTime)) float_t  _forcedSyncDeltaTime;

/// @brief Field _startSyncDeltaTime offset 0x20
 __declspec(property(get=__get__startSyncDeltaTime, put=__set__startSyncDeltaTime)) float_t  _startSyncDeltaTime;

/// @brief Field _stopSyncDeltaTime offset 0x24
 __declspec(property(get=__get__stopSyncDeltaTime, put=__set__stopSyncDeltaTime)) float_t  _stopSyncDeltaTime;

/// @brief Field _audioSource offset 0x28
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _audioLatency offset 0x30
 __declspec(property(get=__get__audioLatency, put=__set__audioLatency)) ::GlobalNamespace::FloatSO*  _audioLatency;

/// @brief Field _initData offset 0x38
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__AudioTimeSyncController__InitData*  _initData;

/// @brief Field forcedNoAudioSync offset 0x40
 __declspec(property(get=__get_forcedNoAudioSync, put=__set_forcedNoAudioSync)) bool  forcedNoAudioSync;

/// @brief Field stateChangedEvent offset 0x48
 __declspec(property(get=__get_stateChangedEvent, put=__set_stateChangedEvent)) ::System::Action*  stateChangedEvent;

/// @brief Field _fixingAudioSyncError offset 0x50
 __declspec(property(get=__get__fixingAudioSyncError, put=__set__fixingAudioSyncError)) bool  _fixingAudioSyncError;

/// @brief Field _audioStartTimeOffsetSinceStart offset 0x54
 __declspec(property(get=__get__audioStartTimeOffsetSinceStart, put=__set__audioStartTimeOffsetSinceStart)) float_t  _audioStartTimeOffsetSinceStart;

/// @brief Field _playbackLoopIndex offset 0x58
 __declspec(property(get=__get__playbackLoopIndex, put=__set__playbackLoopIndex)) int32_t  _playbackLoopIndex;

/// @brief Field _prevAudioSamplePos offset 0x5c
 __declspec(property(get=__get__prevAudioSamplePos, put=__set__prevAudioSamplePos)) int32_t  _prevAudioSamplePos;

/// @brief Field _startSongTime offset 0x60
 __declspec(property(get=__get__startSongTime, put=__set__startSongTime)) float_t  _startSongTime;

/// @brief Field _songTimeOffset offset 0x64
 __declspec(property(get=__get__songTimeOffset, put=__set__songTimeOffset)) float_t  _songTimeOffset;

/// @brief Field _audioStarted offset 0x68
 __declspec(property(get=__get__audioStarted, put=__set__audioStarted)) bool  _audioStarted;

/// @brief Field _timeScale offset 0x6c
 __declspec(property(get=__get__timeScale, put=__set__timeScale)) float_t  _timeScale;

/// @brief Field _songTime offset 0x70
 __declspec(property(get=__get__songTime, put=__set__songTime)) float_t  _songTime;

/// @brief Field _dspTimeOffset offset 0x78
 __declspec(property(get=__get__dspTimeOffset, put=__set__dspTimeOffset)) double_t  _dspTimeOffset;

/// @brief Field _state offset 0x80
 __declspec(property(get=__get__state, put=__set__state)) ::GlobalNamespace::__AudioTimeSyncController__State  _state;

/// @brief Field _canStartSong offset 0x84
 __declspec(property(get=__get__canStartSong, put=__set__canStartSong)) bool  _canStartSong;

/// @brief Field _isReady offset 0x85
 __declspec(property(get=__get__isReady, put=__set__isReady)) bool  _isReady;

/// @brief Field _lastFrameDeltaSongTime offset 0x88
 __declspec(property(get=__get__lastFrameDeltaSongTime, put=__set__lastFrameDeltaSongTime)) float_t  _lastFrameDeltaSongTime;

/// @brief Field _forceNoAudioSyncOrAudioSyncErrorFixing offset 0x8c
 __declspec(property(get=__get__forceNoAudioSyncOrAudioSyncErrorFixing, put=__set__forceNoAudioSyncOrAudioSyncErrorFixing)) bool  _forceNoAudioSyncOrAudioSyncErrorFixing;

 __declspec(property(get=get_state)) ::GlobalNamespace::__AudioTimeSyncController__State  state;

 __declspec(property(get=get_songTime)) float_t  songTime;

 __declspec(property(get=get_lastFrameDeltaSongTime)) float_t  lastFrameDeltaSongTime;

 __declspec(property(get=get_songLength)) float_t  songLength;

 __declspec(property(get=get_isAudioLoaded)) bool  isAudioLoaded;

 __declspec(property(get=get_songEndTime)) float_t  songEndTime;

 __declspec(property(get=get_timeScale)) float_t  timeScale;

 __declspec(property(get=get_dspTimeOffset)) double_t  dspTimeOffset;

 __declspec(property(get=get_waitUntilAudioIsLoaded)) ::UnityEngine::WaitUntil*  waitUntilAudioIsLoaded;

 __declspec(property(get=get_isReady)) bool  isReady;

 __declspec(property(get=get_songTimeOffset)) float_t  songTimeOffset;

 __declspec(property(get=get_forceNoAudioSyncOrAudioSyncErrorFixing, put=set_forceNoAudioSyncOrAudioSyncErrorFixing)) bool  forceNoAudioSyncOrAudioSyncErrorFixing;

 __declspec(property(get=get_timeSinceStart)) float_t  timeSinceStart;

/// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
constexpr operator  ::GlobalNamespace::IAudioTimeSource*() noexcept;

constexpr void __set__audioSyncLerpSpeed(float_t  value) ;

constexpr float_t& __get__audioSyncLerpSpeed() ;

constexpr float_t const& __get__audioSyncLerpSpeed() const;

constexpr void __set__forcedSyncDeltaTime(float_t  value) ;

constexpr float_t& __get__forcedSyncDeltaTime() ;

constexpr float_t const& __get__forcedSyncDeltaTime() const;

constexpr void __set__startSyncDeltaTime(float_t  value) ;

constexpr float_t& __get__startSyncDeltaTime() ;

constexpr float_t const& __get__startSyncDeltaTime() const;

constexpr void __set__stopSyncDeltaTime(float_t  value) ;

constexpr float_t& __get__stopSyncDeltaTime() ;

constexpr float_t const& __get__stopSyncDeltaTime() const;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__audioLatency(::GlobalNamespace::FloatSO*  value) ;

constexpr ::GlobalNamespace::FloatSO* __get__audioLatency() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> __get__audioLatency() const;

constexpr void __set__initData(::GlobalNamespace::__AudioTimeSyncController__InitData*  value) ;

constexpr ::GlobalNamespace::__AudioTimeSyncController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AudioTimeSyncController__InitData*> __get__initData() const;

constexpr void __set_forcedNoAudioSync(bool  value) ;

constexpr bool& __get_forcedNoAudioSync() ;

constexpr bool const& __get_forcedNoAudioSync() const;

constexpr void __set_stateChangedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_stateChangedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_stateChangedEvent() const;

constexpr void __set__fixingAudioSyncError(bool  value) ;

constexpr bool& __get__fixingAudioSyncError() ;

constexpr bool const& __get__fixingAudioSyncError() const;

constexpr void __set__audioStartTimeOffsetSinceStart(float_t  value) ;

constexpr float_t& __get__audioStartTimeOffsetSinceStart() ;

constexpr float_t const& __get__audioStartTimeOffsetSinceStart() const;

constexpr void __set__playbackLoopIndex(int32_t  value) ;

constexpr int32_t& __get__playbackLoopIndex() ;

constexpr int32_t const& __get__playbackLoopIndex() const;

constexpr void __set__prevAudioSamplePos(int32_t  value) ;

constexpr int32_t& __get__prevAudioSamplePos() ;

constexpr int32_t const& __get__prevAudioSamplePos() const;

constexpr void __set__startSongTime(float_t  value) ;

constexpr float_t& __get__startSongTime() ;

constexpr float_t const& __get__startSongTime() const;

constexpr void __set__songTimeOffset(float_t  value) ;

constexpr float_t& __get__songTimeOffset() ;

constexpr float_t const& __get__songTimeOffset() const;

constexpr void __set__audioStarted(bool  value) ;

constexpr bool& __get__audioStarted() ;

constexpr bool const& __get__audioStarted() const;

constexpr void __set__timeScale(float_t  value) ;

constexpr float_t& __get__timeScale() ;

constexpr float_t const& __get__timeScale() const;

constexpr void __set__songTime(float_t  value) ;

constexpr float_t& __get__songTime() ;

constexpr float_t const& __get__songTime() const;

constexpr void __set__dspTimeOffset(double_t  value) ;

constexpr double_t& __get__dspTimeOffset() ;

constexpr double_t const& __get__dspTimeOffset() const;

constexpr void __set__state(::GlobalNamespace::__AudioTimeSyncController__State  value) ;

constexpr ::GlobalNamespace::__AudioTimeSyncController__State& __get__state() ;

constexpr ::GlobalNamespace::__AudioTimeSyncController__State const& __get__state() const;

constexpr void __set__canStartSong(bool  value) ;

constexpr bool& __get__canStartSong() ;

constexpr bool const& __get__canStartSong() const;

constexpr void __set__isReady(bool  value) ;

constexpr bool& __get__isReady() ;

constexpr bool const& __get__isReady() const;

constexpr void __set__lastFrameDeltaSongTime(float_t  value) ;

constexpr float_t& __get__lastFrameDeltaSongTime() ;

constexpr float_t const& __get__lastFrameDeltaSongTime() const;

constexpr void __set__forceNoAudioSyncOrAudioSyncErrorFixing(bool  value) ;

constexpr bool& __get__forceNoAudioSyncOrAudioSyncErrorFixing() ;

constexpr bool const& __get__forceNoAudioSyncOrAudioSyncErrorFixing() const;

/// @brief Method get_state addr 0x222b684 size 0x8 virtual false final false
inline ::GlobalNamespace::__AudioTimeSyncController__State get_state() ;

/// @brief Method get_songTime addr 0x222b68c size 0x8 virtual true final true
inline float_t get_songTime() ;

/// @brief Method get_lastFrameDeltaSongTime addr 0x222b694 size 0x8 virtual true final true
inline float_t get_lastFrameDeltaSongTime() ;

/// @brief Method get_songLength addr 0x222b69c size 0x98 virtual true final true
inline float_t get_songLength() ;

/// @brief Method get_isAudioLoaded addr 0x222b734 size 0x30 virtual false final false
inline bool get_isAudioLoaded() ;

/// @brief Method get_songEndTime addr 0x222b764 size 0x6c virtual true final true
inline float_t get_songEndTime() ;

/// @brief Method get_timeScale addr 0x222b7d0 size 0x8 virtual false final false
inline float_t get_timeScale() ;

/// @brief Method get_dspTimeOffset addr 0x222b7d8 size 0x8 virtual false final false
inline double_t get_dspTimeOffset() ;

/// @brief Method get_waitUntilAudioIsLoaded addr 0x222b7e0 size 0xac virtual false final false
inline ::UnityEngine::WaitUntil* get_waitUntilAudioIsLoaded() ;

/// @brief Method get_isReady addr 0x222b88c size 0x8 virtual true final true
inline bool get_isReady() ;

/// @brief Method get_songTimeOffset addr 0x222b894 size 0x8 virtual false final false
inline float_t get_songTimeOffset() ;

/// @brief Method get_forceNoAudioSyncOrAudioSyncErrorFixing addr 0x222b89c size 0x8 virtual false final false
inline bool get_forceNoAudioSyncOrAudioSyncErrorFixing() ;

/// @brief Method set_forceNoAudioSyncOrAudioSyncErrorFixing addr 0x222b8a4 size 0xc virtual false final false
inline void set_forceNoAudioSyncOrAudioSyncErrorFixing(bool  value) ;

/// @brief Method add_stateChangedEvent addr 0x222b8b0 size 0x9c virtual false final false
inline void add_stateChangedEvent(::System::Action*  value) ;

/// @brief Method remove_stateChangedEvent addr 0x222b94c size 0x9c virtual false final false
inline void remove_stateChangedEvent(::System::Action*  value) ;

/// @brief Method get_timeSinceStart addr 0x222b9e8 size 0x20 virtual false final false
inline float_t get_timeSinceStart() ;

/// @brief Method Awake addr 0x222ba08 size 0x48 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x222ba50 size 0xd8 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x222bb28 size 0x358 virtual false final false
inline void Update() ;

/// @brief Method StartSong addr 0x222be80 size 0x44 virtual false final false
inline void StartSong(float_t  startTimeOffset) ;

/// @brief Method SeekTo addr 0x222bec4 size 0x180 virtual false final false
inline void SeekTo(float_t  startTimeOffset) ;

/// @brief Method StopSong addr 0x222c044 size 0x48 virtual false final false
inline void StopSong() ;

/// @brief Method Pause addr 0x222c08c size 0x58 virtual false final false
inline void Pause() ;

/// @brief Method Resume addr 0x222c0e4 size 0x50 virtual false final false
inline void Resume() ;

/// @brief Method SetSongTimeIntoAudioTime addr 0x222c134 size 0xe0 virtual false final false
inline void SetSongTimeIntoAudioTime() ;

static inline ::GlobalNamespace::AudioTimeSyncController* New_ctor() ;

/// @brief Method .ctor addr 0x222c214 size 0x14 virtual false final false
inline void _ctor() ;

/// @brief Method <get_waitUntilAudioIsLoaded>b__27_0 addr 0x222c228 size 0x4 virtual false final false
inline bool _get_waitUntilAudioIsLoaded_b__27_0() ;

// Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioTimeSyncController(AudioTimeSyncController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioTimeSyncController(AudioTimeSyncController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioTimeSyncController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioTimeSyncController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioTimeSyncController__State, "", "AudioTimeSyncController/State");
NEED_NO_BOX(::GlobalNamespace::AudioTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTimeSyncController*, "", "AudioTimeSyncController");
NEED_NO_BOX(::GlobalNamespace::__AudioTimeSyncController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioTimeSyncController__InitData*, "", "AudioTimeSyncController/InitData");
