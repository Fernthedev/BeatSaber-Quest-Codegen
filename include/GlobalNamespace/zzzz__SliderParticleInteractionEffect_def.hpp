#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderInteractionEffect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderParticleInteractionEffect)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderParticleInteractionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderParticleInteractionEffect);
// Type: ::SliderParticleInteractionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4819))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4825))
// CS Name: ::SliderParticleInteractionEffect*
class CORDL_TYPE SliderParticleInteractionEffect : public ::GlobalNamespace::SliderInteractionEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::SliderInteractionEffect)]{};

/// @brief Field _particleSystems offset 0x20
 __declspec(property(get=__get__particleSystems, put=__set__particleSystems)) ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>  _particleSystems;

/// @brief Field _colorManager offset 0x28
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field _saberManager offset 0x30
 __declspec(property(get=__get__saberManager, put=__set__saberManager)) ::GlobalNamespace::SaberManager*  _saberManager;

/// @brief Field _startColor offset 0x38
 __declspec(property(get=__get__startColor, put=__set__startColor)) ::UnityEngine::Color  _startColor;

/// @brief Field _saber offset 0x48
 __declspec(property(get=__get__saber, put=__set__saber)) ::GlobalNamespace::Saber*  _saber;

constexpr void __set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>& __get__particleSystems() ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*> const& __get__particleSystems() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager*  value) ;

constexpr ::GlobalNamespace::SaberManager* __get__saberManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> __get__saberManager() const;

constexpr void __set__startColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__startColor() ;

constexpr ::UnityEngine::Color const& __get__startColor() const;

constexpr void __set__saber(::GlobalNamespace::Saber*  value) ;

constexpr ::GlobalNamespace::Saber* __get__saber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> __get__saber() const;

/// @brief Method Start addr 0x2394f4c size 0x98 virtual true final false
inline void Start() ;

/// @brief Method Update addr 0x23950b8 size 0x6c virtual false final false
inline void Update() ;

/// @brief Method SetPSStartColor addr 0x2394fe4 size 0xd4 virtual false final false
inline void SetPSStartColor(::UnityEngine::Color  color) ;

/// @brief Method StartEffect addr 0x2395124 size 0xb8 virtual true final false
inline void StartEffect(float_t  saberInteractionParam) ;

/// @brief Method EndEffect addr 0x23951dc size 0x94 virtual true final false
inline void EndEffect() ;

static inline ::GlobalNamespace::SliderParticleInteractionEffect* New_ctor() ;

/// @brief Method .ctor addr 0x2395270 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SliderParticleInteractionEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderParticleInteractionEffect(SliderParticleInteractionEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderParticleInteractionEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderParticleInteractionEffect(SliderParticleInteractionEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SliderParticleInteractionEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderParticleInteractionEffect, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderParticleInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderParticleInteractionEffect*, "", "SliderParticleInteractionEffect");
