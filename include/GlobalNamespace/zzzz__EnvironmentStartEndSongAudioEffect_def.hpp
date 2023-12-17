#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentStartEndSongAudioEffect)
namespace GlobalNamespace {
class IGamePause;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
namespace GlobalNamespace {
struct EnvironmentContext;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentStartEndSongAudioEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentStartEndSongAudioEffect);
// Type: ::EnvironmentStartEndSongAudioEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4063))
// CS Name: ::EnvironmentStartEndSongAudioEffect*
class CORDL_TYPE EnvironmentStartEndSongAudioEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kSmallSongTime offset 0x0
static constexpr float_t  kSmallSongTime{0.5};

/// @brief Field _playStartSongForNonZeroStartSongTime offset 0x18
 __declspec(property(get=__get__playStartSongForNonZeroStartSongTime, put=__set__playStartSongForNonZeroStartSongTime)) bool  _playStartSongForNonZeroStartSongTime;

/// @brief Field _songFinishedAheadTime offset 0x1c
 __declspec(property(get=__get__songFinishedAheadTime, put=__set__songFinishedAheadTime)) float_t  _songFinishedAheadTime;

/// @brief Field _songStartAudioClipVolume offset 0x20
 __declspec(property(get=__get__songStartAudioClipVolume, put=__set__songStartAudioClipVolume)) float_t  _songStartAudioClipVolume;

/// @brief Field _songFinishedAudioClipVolume offset 0x24
 __declspec(property(get=__get__songFinishedAudioClipVolume, put=__set__songFinishedAudioClipVolume)) float_t  _songFinishedAudioClipVolume;

/// @brief Field _songFailedAudioClipVolume offset 0x28
 __declspec(property(get=__get__songFailedAudioClipVolume, put=__set__songFailedAudioClipVolume)) float_t  _songFailedAudioClipVolume;

/// @brief Field _songStartAudioClips offset 0x30
 __declspec(property(get=__get__songStartAudioClips, put=__set__songStartAudioClips)) ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  _songStartAudioClips;

/// @brief Field _songFinishedAudioClips offset 0x38
 __declspec(property(get=__get__songFinishedAudioClips, put=__set__songFinishedAudioClips)) ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  _songFinishedAudioClips;

/// @brief Field _songFailedAudioClips offset 0x40
 __declspec(property(get=__get__songFailedAudioClips, put=__set__songFailedAudioClips)) ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  _songFailedAudioClips;

/// @brief Field _levelEndActions offset 0x48
 __declspec(property(get=__get__levelEndActions, put=__set__levelEndActions)) ::GlobalNamespace::ILevelEndActions*  _levelEndActions;

/// @brief Field _audioTimeSource offset 0x50
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field _gamePause offset 0x58
 __declspec(property(get=__get__gamePause, put=__set__gamePause)) ::GlobalNamespace::IGamePause*  _gamePause;

/// @brief Field _audioEffectsPlayer offset 0x60
 __declspec(property(get=__get__audioEffectsPlayer, put=__set__audioEffectsPlayer)) ::GlobalNamespace::EnvironmentAudioEffectsPlayer*  _audioEffectsPlayer;

/// @brief Field _environmentContext offset 0x68
 __declspec(property(get=__get__environmentContext, put=__set__environmentContext)) ::GlobalNamespace::EnvironmentContext  _environmentContext;

/// @brief Field _songFinishedPlayed offset 0x6c
 __declspec(property(get=__get__songFinishedPlayed, put=__set__songFinishedPlayed)) bool  _songFinishedPlayed;

/// @brief Field _isWaitingToPlayStartAudio offset 0x6d
 __declspec(property(get=__get__isWaitingToPlayStartAudio, put=__set__isWaitingToPlayStartAudio)) bool  _isWaitingToPlayStartAudio;

constexpr void __set__playStartSongForNonZeroStartSongTime(bool  value) ;

constexpr bool& __get__playStartSongForNonZeroStartSongTime() ;

constexpr bool const& __get__playStartSongForNonZeroStartSongTime() const;

constexpr void __set__songFinishedAheadTime(float_t  value) ;

constexpr float_t& __get__songFinishedAheadTime() ;

constexpr float_t const& __get__songFinishedAheadTime() const;

constexpr void __set__songStartAudioClipVolume(float_t  value) ;

constexpr float_t& __get__songStartAudioClipVolume() ;

constexpr float_t const& __get__songStartAudioClipVolume() const;

constexpr void __set__songFinishedAudioClipVolume(float_t  value) ;

constexpr float_t& __get__songFinishedAudioClipVolume() ;

constexpr float_t const& __get__songFinishedAudioClipVolume() const;

constexpr void __set__songFailedAudioClipVolume(float_t  value) ;

constexpr float_t& __get__songFailedAudioClipVolume() ;

constexpr float_t const& __get__songFailedAudioClipVolume() const;

constexpr void __set__songStartAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& __get__songStartAudioClips() ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& __get__songStartAudioClips() const;

constexpr void __set__songFinishedAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& __get__songFinishedAudioClips() ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& __get__songFinishedAudioClips() const;

constexpr void __set__songFailedAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& __get__songFailedAudioClips() ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& __get__songFailedAudioClips() const;

constexpr void __set__levelEndActions(::GlobalNamespace::ILevelEndActions*  value) ;

constexpr ::GlobalNamespace::ILevelEndActions* __get__levelEndActions() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> __get__levelEndActions() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set__gamePause(::GlobalNamespace::IGamePause*  value) ;

constexpr ::GlobalNamespace::IGamePause* __get__gamePause() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> __get__gamePause() const;

constexpr void __set__audioEffectsPlayer(::GlobalNamespace::EnvironmentAudioEffectsPlayer*  value) ;

constexpr ::GlobalNamespace::EnvironmentAudioEffectsPlayer* __get__audioEffectsPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentAudioEffectsPlayer*> __get__audioEffectsPlayer() const;

constexpr void __set__environmentContext(::GlobalNamespace::EnvironmentContext  value) ;

constexpr ::GlobalNamespace::EnvironmentContext& __get__environmentContext() ;

constexpr ::GlobalNamespace::EnvironmentContext const& __get__environmentContext() const;

constexpr void __set__songFinishedPlayed(bool  value) ;

constexpr bool& __get__songFinishedPlayed() ;

constexpr bool const& __get__songFinishedPlayed() const;

constexpr void __set__isWaitingToPlayStartAudio(bool  value) ;

constexpr bool& __get__isWaitingToPlayStartAudio() ;

constexpr bool const& __get__isWaitingToPlayStartAudio() const;

/// @brief Method Start addr 0x222d3bc size 0x478 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x222d834 size 0x254 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x222da88 size 0x2a8 virtual false final false
inline void Update() ;

/// @brief Method LevelWillFinishWithinAheadTime addr 0x222dd30 size 0x5c virtual false final false
inline void LevelWillFinishWithinAheadTime() ;

/// @brief Method HandleLevelFailed addr 0x222dd8c size 0x90 virtual false final false
inline void HandleLevelFailed() ;

/// @brief Method HandleGamePauseDidResume addr 0x222de1c size 0x24 virtual false final false
inline void HandleGamePauseDidResume() ;

/// @brief Method HandleGamePauseDidPause addr 0x222de40 size 0x24 virtual false final false
inline void HandleGamePauseDidPause() ;

static inline ::GlobalNamespace::EnvironmentStartEndSongAudioEffect* New_ctor() ;

/// @brief Method .ctor addr 0x222de64 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentStartEndSongAudioEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentStartEndSongAudioEffect(EnvironmentStartEndSongAudioEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentStartEndSongAudioEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentStartEndSongAudioEffect(EnvironmentStartEndSongAudioEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentStartEndSongAudioEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentStartEndSongAudioEffect, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentStartEndSongAudioEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentStartEndSongAudioEffect*, "", "EnvironmentStartEndSongAudioEffect");
