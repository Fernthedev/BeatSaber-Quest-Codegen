#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShockwaveEffect)
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace GlobalNamespace {
class IntSO;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ShockwaveEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShockwaveEffect);
// Type: ::ShockwaveEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4882))
// CS Name: ::ShockwaveEffect*
class CORDL_TYPE ShockwaveEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc0 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _shockwavePS offset 0x18
 __declspec(property(get=__get__shockwavePS, put=__set__shockwavePS)) ::UnityEngine::ParticleSystem*  _shockwavePS;

/// @brief Field _maxShockwaveParticles offset 0x20
 __declspec(property(get=__get__maxShockwaveParticles, put=__set__maxShockwaveParticles)) ::GlobalNamespace::IntSO*  _maxShockwaveParticles;

/// @brief Field _shockwavePSEmitParams offset 0x28
 __declspec(property(get=__get__shockwavePSEmitParams, put=__set__shockwavePSEmitParams)) ::UnityEngine::__ParticleSystem__EmitParams  _shockwavePSEmitParams;

/// @brief Field _prevShockwaveParticleSpawnTime offset 0xb8
 __declspec(property(get=__get__prevShockwaveParticleSpawnTime, put=__set__prevShockwaveParticleSpawnTime)) float_t  _prevShockwaveParticleSpawnTime;

constexpr void __set__shockwavePS(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__shockwavePS() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__shockwavePS() const;

constexpr void __set__maxShockwaveParticles(::GlobalNamespace::IntSO*  value) ;

constexpr ::GlobalNamespace::IntSO* __get__maxShockwaveParticles() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> __get__maxShockwaveParticles() const;

constexpr void __set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__shockwavePSEmitParams() ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__shockwavePSEmitParams() const;

constexpr void __set__prevShockwaveParticleSpawnTime(float_t  value) ;

constexpr float_t& __get__prevShockwaveParticleSpawnTime() ;

constexpr float_t const& __get__prevShockwaveParticleSpawnTime() const;

/// @brief Method Start addr 0x23a0adc size 0x11c virtual false final false
inline void Start() ;

/// @brief Method SpawnShockwave addr 0x23a0bf8 size 0xd4 virtual false final false
inline void SpawnShockwave(::UnityEngine::Vector3  pos) ;

static inline ::GlobalNamespace::ShockwaveEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23a0ccc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ShockwaveEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShockwaveEffect(ShockwaveEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShockwaveEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShockwaveEffect(ShockwaveEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ShockwaveEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShockwaveEffect, 0xc0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShockwaveEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShockwaveEffect*, "", "ShockwaveEffect");
