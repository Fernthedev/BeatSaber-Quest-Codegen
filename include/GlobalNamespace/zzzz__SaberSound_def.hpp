#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaberSound)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberSound;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberSound);
// Type: ::SaberSound
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5300))
// CS Name: ::SaberSound*
class CORDL_TYPE SaberSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _saberTop offset 0x18
 __declspec(property(get=__get__saberTop, put=__set__saberTop)) ::UnityEngine::Transform*  _saberTop;

/// @brief Field _audioSource offset 0x20
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _pitchBySpeedCurve offset 0x28
 __declspec(property(get=__get__pitchBySpeedCurve, put=__set__pitchBySpeedCurve)) ::UnityEngine::AnimationCurve*  _pitchBySpeedCurve;

/// @brief Field _gainBySpeedCurve offset 0x30
 __declspec(property(get=__get__gainBySpeedCurve, put=__set__gainBySpeedCurve)) ::UnityEngine::AnimationCurve*  _gainBySpeedCurve;

/// @brief Field _speedMultiplier offset 0x38
 __declspec(property(get=__get__speedMultiplier, put=__set__speedMultiplier)) float_t  _speedMultiplier;

/// @brief Field _upSmooth offset 0x3c
 __declspec(property(get=__get__upSmooth, put=__set__upSmooth)) float_t  _upSmooth;

/// @brief Field _downSmooth offset 0x40
 __declspec(property(get=__get__downSmooth, put=__set__downSmooth)) float_t  _downSmooth;

/// @brief Field _noSoundTopThresholdSqr offset 0x44
 __declspec(property(get=__get__noSoundTopThresholdSqr, put=__set__noSoundTopThresholdSqr)) float_t  _noSoundTopThresholdSqr;

/// @brief Field _prevPos offset 0x48
 __declspec(property(get=__get__prevPos, put=__set__prevPos)) ::UnityEngine::Vector3  _prevPos;

/// @brief Field _speed offset 0x54
 __declspec(property(get=__get__speed, put=__set__speed)) float_t  _speed;

constexpr void __set__saberTop(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__saberTop() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__saberTop() const;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__pitchBySpeedCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__pitchBySpeedCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__pitchBySpeedCurve() const;

constexpr void __set__gainBySpeedCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__gainBySpeedCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__gainBySpeedCurve() const;

constexpr void __set__speedMultiplier(float_t  value) ;

constexpr float_t& __get__speedMultiplier() ;

constexpr float_t const& __get__speedMultiplier() const;

constexpr void __set__upSmooth(float_t  value) ;

constexpr float_t& __get__upSmooth() ;

constexpr float_t const& __get__upSmooth() const;

constexpr void __set__downSmooth(float_t  value) ;

constexpr float_t& __get__downSmooth() ;

constexpr float_t const& __get__downSmooth() const;

constexpr void __set__noSoundTopThresholdSqr(float_t  value) ;

constexpr float_t& __get__noSoundTopThresholdSqr() ;

constexpr float_t const& __get__noSoundTopThresholdSqr() const;

constexpr void __set__prevPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__prevPos() ;

constexpr ::UnityEngine::Vector3 const& __get__prevPos() const;

constexpr void __set__speed(float_t  value) ;

constexpr float_t& __get__speed() ;

constexpr float_t const& __get__speed() const;

/// @brief Method Start addr 0x226458c size 0x2c virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x22645b8 size 0x1cc virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::SaberSound* New_ctor() ;

/// @brief Method .ctor addr 0x2264784 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SaberSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaberSound(SaberSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaberSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaberSound(SaberSound const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaberSound()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberSound, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberSound);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSound*, "", "SaberSound");
