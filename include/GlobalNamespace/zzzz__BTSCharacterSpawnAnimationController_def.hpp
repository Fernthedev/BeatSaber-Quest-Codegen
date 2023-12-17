#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BTSCharacterSpawnAnimationController)
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace GlobalNamespace {
class SongSpeedData;
}
namespace UnityEngine::Timeline {
class ActivationTrack;
}
namespace GlobalNamespace {
class JumpReceiver;
}
namespace GlobalNamespace {
class MaterialPropertyBlockFloatAnimator;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class BTSCharacter;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnAnimationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterSpawnAnimationController);
// Type: ::BTSCharacterSpawnAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3970))
// CS Name: ::BTSCharacterSpawnAnimationController*
class CORDL_TYPE BTSCharacterSpawnAnimationController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kCharacterActivationStreamName offset 0x0
static constexpr ::ConstString  kCharacterActivationStreamName{u"CharacterActivationTrack"};

/// @brief Field _spawnCharacterPlayableDirector offset 0x18
 __declspec(property(get=__get__spawnCharacterPlayableDirector, put=__set__spawnCharacterPlayableDirector)) ::UnityEngine::Playables::PlayableDirector*  _spawnCharacterPlayableDirector;

/// @brief Field _jumpReceiver offset 0x20
 __declspec(property(get=__get__jumpReceiver, put=__set__jumpReceiver)) ::GlobalNamespace::JumpReceiver*  _jumpReceiver;

/// @brief Field _appearAnimationEndTime offset 0x28
 __declspec(property(get=__get__appearAnimationEndTime, put=__set__appearAnimationEndTime)) float_t  _appearAnimationEndTime;

/// @brief Field _disappearAnimationStartTime offset 0x2c
 __declspec(property(get=__get__disappearAnimationStartTime, put=__set__disappearAnimationStartTime)) float_t  _disappearAnimationStartTime;

/// @brief Field _rimLightColorSetter offset 0x30
 __declspec(property(get=__get__rimLightColorSetter, put=__set__rimLightColorSetter)) ::GlobalNamespace::MaterialPropertyBlockColorSetter*  _rimLightColorSetter;

/// @brief Field _rimLightIntensityAnimator offset 0x38
 __declspec(property(get=__get__rimLightIntensityAnimator, put=__set__rimLightIntensityAnimator)) ::GlobalNamespace::MaterialPropertyBlockFloatAnimator*  _rimLightIntensityAnimator;

/// @brief Field _rimLightEdgeStartAnimator offset 0x40
 __declspec(property(get=__get__rimLightEdgeStartAnimator, put=__set__rimLightEdgeStartAnimator)) ::GlobalNamespace::MaterialPropertyBlockFloatAnimator*  _rimLightEdgeStartAnimator;

/// @brief Field _songSpeedData offset 0x48
 __declspec(property(get=__get__songSpeedData, put=__set__songSpeedData)) ::GlobalNamespace::SongSpeedData*  _songSpeedData;

/// @brief Field _characterActivationTrack offset 0x50
 __declspec(property(get=__get__characterActivationTrack, put=__set__characterActivationTrack)) ::UnityEngine::Timeline::ActivationTrack*  _characterActivationTrack;

/// @brief Field _currentBtsCharacter offset 0x58
 __declspec(property(get=__get__currentBtsCharacter, put=__set__currentBtsCharacter)) ::GlobalNamespace::BTSCharacter*  _currentBtsCharacter;

/// @brief Field _defaultSpawnCharacterDuration offset 0x60
 __declspec(property(get=__get__defaultSpawnCharacterDuration, put=__set__defaultSpawnCharacterDuration)) float_t  _defaultSpawnCharacterDuration;

/// @brief Field _playableDirectorTimeBeforePause offset 0x68
 __declspec(property(get=__get__playableDirectorTimeBeforePause, put=__set__playableDirectorTimeBeforePause)) double_t  _playableDirectorTimeBeforePause;

/// @brief Field _animatorNormalizedTimeBeforePause offset 0x70
 __declspec(property(get=__get__animatorNormalizedTimeBeforePause, put=__set__animatorNormalizedTimeBeforePause)) float_t  _animatorNormalizedTimeBeforePause;

 __declspec(property(get=get_isCharacterVisible)) bool  isCharacterVisible;

 __declspec(property(get=get_duration)) float_t  duration;

 __declspec(property(get=get_characterActivationTrack)) ::UnityEngine::Timeline::ActivationTrack*  characterActivationTrack;

constexpr void __set__spawnCharacterPlayableDirector(::UnityEngine::Playables::PlayableDirector*  value) ;

constexpr ::UnityEngine::Playables::PlayableDirector* __get__spawnCharacterPlayableDirector() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> __get__spawnCharacterPlayableDirector() const;

constexpr void __set__jumpReceiver(::GlobalNamespace::JumpReceiver*  value) ;

constexpr ::GlobalNamespace::JumpReceiver* __get__jumpReceiver() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JumpReceiver*> __get__jumpReceiver() const;

constexpr void __set__appearAnimationEndTime(float_t  value) ;

constexpr float_t& __get__appearAnimationEndTime() ;

constexpr float_t const& __get__appearAnimationEndTime() const;

constexpr void __set__disappearAnimationStartTime(float_t  value) ;

constexpr float_t& __get__disappearAnimationStartTime() ;

constexpr float_t const& __get__disappearAnimationStartTime() const;

constexpr void __set__rimLightColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter* __get__rimLightColorSetter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> __get__rimLightColorSetter() const;

constexpr void __set__rimLightIntensityAnimator(::GlobalNamespace::MaterialPropertyBlockFloatAnimator*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* __get__rimLightIntensityAnimator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*> __get__rimLightIntensityAnimator() const;

constexpr void __set__rimLightEdgeStartAnimator(::GlobalNamespace::MaterialPropertyBlockFloatAnimator*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* __get__rimLightEdgeStartAnimator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*> __get__rimLightEdgeStartAnimator() const;

constexpr void __set__songSpeedData(::GlobalNamespace::SongSpeedData*  value) ;

constexpr ::GlobalNamespace::SongSpeedData* __get__songSpeedData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongSpeedData*> __get__songSpeedData() const;

constexpr void __set__characterActivationTrack(::UnityEngine::Timeline::ActivationTrack*  value) ;

constexpr ::UnityEngine::Timeline::ActivationTrack* __get__characterActivationTrack() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::ActivationTrack*> __get__characterActivationTrack() const;

constexpr void __set__currentBtsCharacter(::GlobalNamespace::BTSCharacter*  value) ;

constexpr ::GlobalNamespace::BTSCharacter* __get__currentBtsCharacter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacter*> __get__currentBtsCharacter() const;

constexpr void __set__defaultSpawnCharacterDuration(float_t  value) ;

constexpr float_t& __get__defaultSpawnCharacterDuration() ;

constexpr float_t const& __get__defaultSpawnCharacterDuration() const;

constexpr void __set__playableDirectorTimeBeforePause(double_t  value) ;

constexpr double_t& __get__playableDirectorTimeBeforePause() ;

constexpr double_t const& __get__playableDirectorTimeBeforePause() const;

constexpr void __set__animatorNormalizedTimeBeforePause(float_t  value) ;

constexpr float_t& __get__animatorNormalizedTimeBeforePause() ;

constexpr float_t const& __get__animatorNormalizedTimeBeforePause() const;

/// @brief Method get_isCharacterVisible addr 0x2219c34 size 0x28 virtual false final false
inline bool get_isCharacterVisible() ;

/// @brief Method get_duration addr 0x2219c5c size 0x38 virtual false final false
inline float_t get_duration() ;

/// @brief Method get_characterActivationTrack addr 0x2219c94 size 0x410 virtual false final false
inline ::UnityEngine::Timeline::ActivationTrack* get_characterActivationTrack() ;

/// @brief Method PlayAnimation addr 0x221a0a4 size 0xcc virtual false final false
inline void PlayAnimation() ;

/// @brief Method EndEarlyAnimation addr 0x221a170 size 0x74 virtual false final false
inline void EndEarlyAnimation() ;

/// @brief Method StopAnimation addr 0x221a1e4 size 0x1c virtual false final false
inline void StopAnimation() ;

/// @brief Method SetCharacter addr 0x221a200 size 0x94 virtual false final false
inline void SetCharacter(::GlobalNamespace::BTSCharacter*  btsCharacter) ;

/// @brief Method WillResumeAnimation addr 0x221a294 size 0x60 virtual false final false
inline void WillResumeAnimation() ;

/// @brief Method ResumeAnimation addr 0x221a2f4 size 0x60 virtual false final false
inline void ResumeAnimation() ;

/// @brief Method PauseAnimation addr 0x221a354 size 0x9c virtual false final false
inline void PauseAnimation() ;

static inline ::GlobalNamespace::BTSCharacterSpawnAnimationController* New_ctor() ;

/// @brief Method .ctor addr 0x221a3f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnAnimationController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BTSCharacterSpawnAnimationController(BTSCharacterSpawnAnimationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnAnimationController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BTSCharacterSpawnAnimationController(BTSCharacterSpawnAnimationController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BTSCharacterSpawnAnimationController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterSpawnAnimationController, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnAnimationController*, "", "BTSCharacterSpawnAnimationController");
