#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutParticlesEffect)
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct __ParticleSystem__MainModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutParticlesEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutParticlesEffect);
// Type: ::NoteCutParticlesEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4871))
// CS Name: ::NoteCutParticlesEffect*
class CORDL_TYPE NoteCutParticlesEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x230};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x230 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _sparklesPS offset 0x18
 __declspec(property(get=__get__sparklesPS, put=__set__sparklesPS)) ::UnityEngine::ParticleSystem*  _sparklesPS;

/// @brief Field _explosionPS offset 0x20
 __declspec(property(get=__get__explosionPS, put=__set__explosionPS)) ::UnityEngine::ParticleSystem*  _explosionPS;

/// @brief Field _explosionCorePS offset 0x28
 __declspec(property(get=__get__explosionCorePS, put=__set__explosionCorePS)) ::UnityEngine::ParticleSystem*  _explosionCorePS;

/// @brief Field _explosionPrePassBloomPS offset 0x30
 __declspec(property(get=__get__explosionPrePassBloomPS, put=__set__explosionPrePassBloomPS)) ::UnityEngine::ParticleSystem*  _explosionPrePassBloomPS;

/// @brief Field _sparklesPSEmitParams offset 0x38
 __declspec(property(get=__get__sparklesPSEmitParams, put=__set__sparklesPSEmitParams)) ::UnityEngine::__ParticleSystem__EmitParams  _sparklesPSEmitParams;

/// @brief Field _sparklesPSMainModule offset 0xc8
 __declspec(property(get=__get__sparklesPSMainModule, put=__set__sparklesPSMainModule)) ::UnityEngine::__ParticleSystem__MainModule  _sparklesPSMainModule;

/// @brief Field _sparklesPSShapeModule offset 0xd0
 __declspec(property(get=__get__sparklesPSShapeModule, put=__set__sparklesPSShapeModule)) ::UnityEngine::__ParticleSystem__ShapeModule  _sparklesPSShapeModule;

/// @brief Field _sparklesLifetimeMinMaxCurve offset 0xd8
 __declspec(property(get=__get__sparklesLifetimeMinMaxCurve, put=__set__sparklesLifetimeMinMaxCurve)) ::UnityEngine::__ParticleSystem__MinMaxCurve  _sparklesLifetimeMinMaxCurve;

/// @brief Field _explosionPSEmitParams offset 0xf8
 __declspec(property(get=__get__explosionPSEmitParams, put=__set__explosionPSEmitParams)) ::UnityEngine::__ParticleSystem__EmitParams  _explosionPSEmitParams;

/// @brief Field _explosionCorePSEmitParams offset 0x188
 __declspec(property(get=__get__explosionCorePSEmitParams, put=__set__explosionCorePSEmitParams)) ::UnityEngine::__ParticleSystem__EmitParams  _explosionCorePSEmitParams;

/// @brief Field _explosionCorePSMainModule offset 0x218
 __declspec(property(get=__get__explosionCorePSMainModule, put=__set__explosionCorePSMainModule)) ::UnityEngine::__ParticleSystem__MainModule  _explosionCorePSMainModule;

/// @brief Field _explosionCorePSShapeModule offset 0x220
 __declspec(property(get=__get__explosionCorePSShapeModule, put=__set__explosionCorePSShapeModule)) ::UnityEngine::__ParticleSystem__ShapeModule  _explosionCorePSShapeModule;

/// @brief Field _explosionPrePassBloomPSShapeModule offset 0x228
 __declspec(property(get=__get__explosionPrePassBloomPSShapeModule, put=__set__explosionPrePassBloomPSShapeModule)) ::UnityEngine::__ParticleSystem__ShapeModule  _explosionPrePassBloomPSShapeModule;

constexpr void __set__sparklesPS(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__sparklesPS() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__sparklesPS() const;

constexpr void __set__explosionPS(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__explosionPS() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__explosionPS() const;

constexpr void __set__explosionCorePS(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__explosionCorePS() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__explosionCorePS() const;

constexpr void __set__explosionPrePassBloomPS(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__explosionPrePassBloomPS() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__explosionPrePassBloomPS() const;

constexpr void __set__sparklesPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__sparklesPSEmitParams() ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__sparklesPSEmitParams() const;

constexpr void __set__sparklesPSMainModule(::UnityEngine::__ParticleSystem__MainModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__MainModule& __get__sparklesPSMainModule() ;

constexpr ::UnityEngine::__ParticleSystem__MainModule const& __get__sparklesPSMainModule() const;

constexpr void __set__sparklesPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__ShapeModule& __get__sparklesPSShapeModule() ;

constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& __get__sparklesPSShapeModule() const;

constexpr void __set__sparklesLifetimeMinMaxCurve(::UnityEngine::__ParticleSystem__MinMaxCurve  value) ;

constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve& __get__sparklesLifetimeMinMaxCurve() ;

constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve const& __get__sparklesLifetimeMinMaxCurve() const;

constexpr void __set__explosionPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__explosionPSEmitParams() ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__explosionPSEmitParams() const;

constexpr void __set__explosionCorePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__explosionCorePSEmitParams() ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__explosionCorePSEmitParams() const;

constexpr void __set__explosionCorePSMainModule(::UnityEngine::__ParticleSystem__MainModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__MainModule& __get__explosionCorePSMainModule() ;

constexpr ::UnityEngine::__ParticleSystem__MainModule const& __get__explosionCorePSMainModule() const;

constexpr void __set__explosionCorePSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__ShapeModule& __get__explosionCorePSShapeModule() ;

constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& __get__explosionCorePSShapeModule() const;

constexpr void __set__explosionPrePassBloomPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__ShapeModule& __get__explosionPrePassBloomPSShapeModule() ;

constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& __get__explosionPrePassBloomPSShapeModule() const;

/// @brief Method Awake addr 0x239a95c size 0x148 virtual false final false
inline void Awake() ;

/// @brief Method SpawnParticles addr 0x239aaa4 size 0x4b0 virtual false final false
inline void SpawnParticles(::UnityEngine::Vector3  cutPoint, ::UnityEngine::Vector3  cutNormal, ::UnityEngine::Vector3  saberDir, float_t  saberSpeed, ::UnityEngine::Vector3  noteMovementVec, ::UnityEngine::Color32  color, int32_t  sparkleParticlesCount, int32_t  explosionParticlesCount, float_t  lifetimeMultiplier) ;

static inline ::GlobalNamespace::NoteCutParticlesEffect* New_ctor() ;

/// @brief Method .ctor addr 0x239af54 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutParticlesEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteCutParticlesEffect(NoteCutParticlesEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutParticlesEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteCutParticlesEffect(NoteCutParticlesEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteCutParticlesEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutParticlesEffect, 0x230>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutParticlesEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutParticlesEffect*, "", "NoteCutParticlesEffect");
