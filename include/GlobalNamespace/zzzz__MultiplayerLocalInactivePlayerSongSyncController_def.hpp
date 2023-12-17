#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerSongSyncController)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class CrossFadeAudioSource;
}
namespace UnityEngine {
class WaitUntil;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerSongSyncController__InitData;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerSongSyncController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5164))
// CS Name: ::MultiplayerLocalInactivePlayerSongSyncController::InitData*
class CORDL_TYPE __MultiplayerLocalInactivePlayerSongSyncController__InitData : public ::System::Object {
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

static inline ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* New_ctor(::UnityEngine::AudioClip*  audioClip, float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale) ;

/// @brief Method .ctor addr 0x23dd218 size 0x4c virtual false final false
inline void _ctor(::UnityEngine::AudioClip*  audioClip, float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale) ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalInactivePlayerSongSyncController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerLocalInactivePlayerSongSyncController__InitData(__MultiplayerLocalInactivePlayerSongSyncController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalInactivePlayerSongSyncController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerLocalInactivePlayerSongSyncController__InitData(__MultiplayerLocalInactivePlayerSongSyncController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerLocalInactivePlayerSongSyncController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerLocalInactivePlayerSongSyncController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5165))
// CS Name: ::MultiplayerLocalInactivePlayerSongSyncController*
class CORDL_TYPE MultiplayerLocalInactivePlayerSongSyncController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kReSyncThresholdMs offset 0x0
static constexpr int64_t  kReSyncThresholdMs{static_cast<int64_t>(0x32)};

/// @brief Field _audioSource offset 0x18
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::GlobalNamespace::CrossFadeAudioSource*  _audioSource;

/// @brief Field _audioLatency offset 0x20
 __declspec(property(get=__get__audioLatency, put=__set__audioLatency)) ::GlobalNamespace::FloatSO*  _audioLatency;

/// @brief Field _initData offset 0x28
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*  _initData;

/// @brief Field _multiplayerSessionManager offset 0x30
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _vrPlatformHelper offset 0x38
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

/// @brief Field _timeScale offset 0x40
 __declspec(property(get=__get__timeScale, put=__set__timeScale)) float_t  _timeScale;

/// @brief Field _startSongTime offset 0x44
 __declspec(property(get=__get__startSongTime, put=__set__startSongTime)) float_t  _startSongTime;

/// @brief Field _songTimeOffset offset 0x48
 __declspec(property(get=__get__songTimeOffset, put=__set__songTimeOffset)) float_t  _songTimeOffset;

/// @brief Field _songTime offset 0x4c
 __declspec(property(get=__get__songTime, put=__set__songTime)) float_t  _songTime;

/// @brief Field _audioStarted offset 0x50
 __declspec(property(get=__get__audioStarted, put=__set__audioStarted)) bool  _audioStarted;

/// @brief Field _currentObservableIsFailed offset 0x51
 __declspec(property(get=__get__currentObservableIsFailed, put=__set__currentObservableIsFailed)) bool  _currentObservableIsFailed;

/// @brief Field _observable offset 0x58
 __declspec(property(get=__get__observable, put=__set__observable)) ::GlobalNamespace::IMultiplayerObservable*  _observable;

/// @brief Field _lastLatencyOffsetTime offset 0x60
 __declspec(property(get=__get__lastLatencyOffsetTime, put=__set__lastLatencyOffsetTime)) int64_t  _lastLatencyOffsetTime;

 __declspec(property(get=get_waitUntilIsReadyToStartTheSong)) ::UnityEngine::WaitUntil*  waitUntilIsReadyToStartTheSong;

 __declspec(property(get=get_isAudioLoaded)) bool  isAudioLoaded;

/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
constexpr operator  ::GlobalNamespace::IStartSeekSongController*() noexcept;

constexpr void __set__audioSource(::GlobalNamespace::CrossFadeAudioSource*  value) ;

constexpr ::GlobalNamespace::CrossFadeAudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CrossFadeAudioSource*> __get__audioSource() const;

constexpr void __set__audioLatency(::GlobalNamespace::FloatSO*  value) ;

constexpr ::GlobalNamespace::FloatSO* __get__audioLatency() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> __get__audioLatency() const;

constexpr void __set__initData(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*  value) ;

constexpr ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*> __get__initData() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

constexpr void __set__timeScale(float_t  value) ;

constexpr float_t& __get__timeScale() ;

constexpr float_t const& __get__timeScale() const;

constexpr void __set__startSongTime(float_t  value) ;

constexpr float_t& __get__startSongTime() ;

constexpr float_t const& __get__startSongTime() const;

constexpr void __set__songTimeOffset(float_t  value) ;

constexpr float_t& __get__songTimeOffset() ;

constexpr float_t const& __get__songTimeOffset() const;

constexpr void __set__songTime(float_t  value) ;

constexpr float_t& __get__songTime() ;

constexpr float_t const& __get__songTime() const;

constexpr void __set__audioStarted(bool  value) ;

constexpr bool& __get__audioStarted() ;

constexpr bool const& __get__audioStarted() const;

constexpr void __set__currentObservableIsFailed(bool  value) ;

constexpr bool& __get__currentObservableIsFailed() ;

constexpr bool const& __get__currentObservableIsFailed() const;

constexpr void __set__observable(::GlobalNamespace::IMultiplayerObservable*  value) ;

constexpr ::GlobalNamespace::IMultiplayerObservable* __get__observable() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerObservable*> __get__observable() const;

constexpr void __set__lastLatencyOffsetTime(int64_t  value) ;

constexpr int64_t& __get__lastLatencyOffsetTime() ;

constexpr int64_t const& __get__lastLatencyOffsetTime() const;

/// @brief Method get_waitUntilIsReadyToStartTheSong addr 0x23dd2b0 size 0xac virtual true final true
inline ::UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong() ;

/// @brief Method get_isAudioLoaded addr 0x23dd35c size 0x9c virtual false final false
inline bool get_isAudioLoaded() ;

/// @brief Method Awake addr 0x23dd3f8 size 0x118 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x23dd510 size 0xf0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23dd600 size 0x108 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x23dd708 size 0x27c virtual false final false
inline void Update() ;

/// @brief Method StartSong addr 0x23ddae8 size 0xf0 virtual true final true
inline void StartSong(float_t  offsetTime) ;

/// @brief Method FollowOffsetSyncTime addr 0x23ddd38 size 0x1e4 virtual false final false
inline void FollowOffsetSyncTime(::GlobalNamespace::IMultiplayerObservable*  observable, bool  crossFade, bool  forceUpdate) ;

/// @brief Method UpdateOffsetSyncTime addr 0x23dd984 size 0x164 virtual false final false
inline void UpdateOffsetSyncTime(int64_t  offsetSyncTime, bool  crossFade, bool  forceUpdate) ;

/// @brief Method SeekTo addr 0x23ddf1c size 0xc virtual true final true
inline void SeekTo(float_t  offsetTime) ;

/// @brief Method SeekTo addr 0x23ddbd8 size 0x160 virtual false final false
inline void SeekTo(float_t  offsetTime, bool  crossFade, float_t  toVolume) ;

/// @brief Method HandleVrFocusWasReleased addr 0x23ddf28 size 0x4 virtual false final false
inline void HandleVrFocusWasReleased() ;

static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* New_ctor() ;

/// @brief Method .ctor addr 0x23ddf2c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <get_waitUntilIsReadyToStartTheSong>b__7_0 addr 0x23ddf34 size 0x4 virtual false final false
inline bool _get_waitUntilIsReadyToStartTheSong_b__7_0() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalInactivePlayerSongSyncController(MultiplayerLocalInactivePlayerSongSyncController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalInactivePlayerSongSyncController(MultiplayerLocalInactivePlayerSongSyncController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalInactivePlayerSongSyncController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, "", "MultiplayerLocalInactivePlayerSongSyncController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*, "", "MultiplayerLocalInactivePlayerSongSyncController/InitData");
