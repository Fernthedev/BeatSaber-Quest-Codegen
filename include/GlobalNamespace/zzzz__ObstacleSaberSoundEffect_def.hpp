#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleSaberSoundEffect)
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSoundEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSaberSoundEffect);
// Type: ::ObstacleSaberSoundEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4073))
// CS Name: ::ObstacleSaberSoundEffect*
class CORDL_TYPE ObstacleSaberSoundEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kSmooth offset 0x0
static constexpr float_t  kSmooth{8.0};

/// @brief Field _obstacleSaberSparkleEffectManager offset 0x18
 __declspec(property(get=__get__obstacleSaberSparkleEffectManager, put=__set__obstacleSaberSparkleEffectManager)) ::GlobalNamespace::ObstacleSaberSparkleEffectManager*  _obstacleSaberSparkleEffectManager;

/// @brief Field _saberType offset 0x20
 __declspec(property(get=__get__saberType, put=__set__saberType)) ::GlobalNamespace::SaberType  _saberType;

/// @brief Field _audioSource offset 0x28
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _volume offset 0x30
 __declspec(property(get=__get__volume, put=__set__volume)) float_t  _volume;

/// @brief Field _targetVolume offset 0x34
 __declspec(property(get=__get__targetVolume, put=__set__targetVolume)) float_t  _targetVolume;

constexpr void __set__obstacleSaberSparkleEffectManager(::GlobalNamespace::ObstacleSaberSparkleEffectManager*  value) ;

constexpr ::GlobalNamespace::ObstacleSaberSparkleEffectManager* __get__obstacleSaberSparkleEffectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleSaberSparkleEffectManager*> __get__obstacleSaberSparkleEffectManager() const;

constexpr void __set__saberType(::GlobalNamespace::SaberType  value) ;

constexpr ::GlobalNamespace::SaberType& __get__saberType() ;

constexpr ::GlobalNamespace::SaberType const& __get__saberType() const;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__volume(float_t  value) ;

constexpr float_t& __get__volume() ;

constexpr float_t const& __get__volume() const;

constexpr void __set__targetVolume(float_t  value) ;

constexpr float_t& __get__targetVolume() ;

constexpr float_t const& __get__targetVolume() const;

/// @brief Method Awake addr 0x222f834 size 0x104 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x222f938 size 0x12c virtual false final false
inline void OnDestroy() ;

/// @brief Method LateUpdate addr 0x222fa64 size 0x104 virtual false final false
inline void LateUpdate() ;

/// @brief Method HandleSparkleEffectDidStart addr 0x222fb68 size 0xc8 virtual false final false
inline void HandleSparkleEffectDidStart(::GlobalNamespace::SaberType  saberType) ;

/// @brief Method HandleSparkleEffecDidEnd addr 0x222fc30 size 0x14 virtual false final false
inline void HandleSparkleEffecDidEnd(::GlobalNamespace::SaberType  saberType) ;

static inline ::GlobalNamespace::ObstacleSaberSoundEffect* New_ctor() ;

/// @brief Method .ctor addr 0x222fc44 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSoundEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleSaberSoundEffect(ObstacleSaberSoundEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSoundEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleSaberSoundEffect(ObstacleSaberSoundEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObstacleSaberSoundEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSoundEffect, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSoundEffect*, "", "ObstacleSaberSoundEffect");
