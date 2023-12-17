#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObstacleSaberSparkleEffect)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSparkleEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSaberSparkleEffect);
// Type: ::ObstacleSaberSparkleEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4958))
// CS Name: ::ObstacleSaberSparkleEffect*
class CORDL_TYPE ObstacleSaberSparkleEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _sparkleParticleSystem offset 0x18
 __declspec(property(get=__get__sparkleParticleSystem, put=__set__sparkleParticleSystem)) ::UnityEngine::ParticleSystem*  _sparkleParticleSystem;

/// @brief Field _burnParticleSystem offset 0x20
 __declspec(property(get=__get__burnParticleSystem, put=__set__burnParticleSystem)) ::UnityEngine::ParticleSystem*  _burnParticleSystem;

/// @brief Field _sparkleParticleSystemEmissionModule offset 0x28
 __declspec(property(get=__get__sparkleParticleSystemEmissionModule, put=__set__sparkleParticleSystemEmissionModule)) ::UnityEngine::__ParticleSystem__EmissionModule  _sparkleParticleSystemEmissionModule;

/// @brief Field _burnParticleSystemEmissionModule offset 0x30
 __declspec(property(get=__get__burnParticleSystemEmissionModule, put=__set__burnParticleSystemEmissionModule)) ::UnityEngine::__ParticleSystem__EmissionModule  _burnParticleSystemEmissionModule;

 __declspec(property(put=set_color)) ::UnityEngine::Color  color;

constexpr void __set__sparkleParticleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__sparkleParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__sparkleParticleSystem() const;

constexpr void __set__burnParticleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__burnParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__burnParticleSystem() const;

constexpr void __set__sparkleParticleSystemEmissionModule(::UnityEngine::__ParticleSystem__EmissionModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __get__sparkleParticleSystemEmissionModule() ;

constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __get__sparkleParticleSystemEmissionModule() const;

constexpr void __set__burnParticleSystemEmissionModule(::UnityEngine::__ParticleSystem__EmissionModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __get__burnParticleSystemEmissionModule() ;

constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __get__burnParticleSystemEmissionModule() const;

/// @brief Method set_color addr 0x23a4274 size 0xfc virtual false final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method Awake addr 0x23aec1c size 0x5c virtual false final false
inline void Awake() ;

/// @brief Method SetPositionAndRotation addr 0x23a4dcc size 0x78 virtual false final false
inline void SetPositionAndRotation(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method StartEmission addr 0x23a4e44 size 0x54 virtual false final false
inline void StartEmission() ;

/// @brief Method StopEmission addr 0x23a4e98 size 0x68 virtual false final false
inline void StopEmission() ;

static inline ::GlobalNamespace::ObstacleSaberSparkleEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23aec78 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleSaberSparkleEffect(ObstacleSaberSparkleEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleSaberSparkleEffect(ObstacleSaberSparkleEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObstacleSaberSparkleEffect()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSparkleEffect, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSparkleEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSparkleEffect*, "", "ObstacleSaberSparkleEffect");
