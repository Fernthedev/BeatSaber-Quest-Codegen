#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberClashEffect)
namespace GlobalNamespace {
class ColorManager;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class SaberClashChecker;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberClashEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberClashEffect);
// Type: ::SaberClashEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4969))
// CS Name: ::SaberClashEffect*
class CORDL_TYPE SaberClashEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _sparkleParticleSystem offset 0x18
 __declspec(property(get=__get__sparkleParticleSystem, put=__set__sparkleParticleSystem)) ::UnityEngine::ParticleSystem*  _sparkleParticleSystem;

/// @brief Field _glowParticleSystem offset 0x20
 __declspec(property(get=__get__glowParticleSystem, put=__set__glowParticleSystem)) ::UnityEngine::ParticleSystem*  _glowParticleSystem;

/// @brief Field _rumblePreset offset 0x28
 __declspec(property(get=__get__rumblePreset, put=__set__rumblePreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  _rumblePreset;

/// @brief Field _saberClashChecker offset 0x30
 __declspec(property(get=__get__saberClashChecker, put=__set__saberClashChecker)) ::GlobalNamespace::SaberClashChecker*  _saberClashChecker;

/// @brief Field _hapticFeedbackController offset 0x38
 __declspec(property(get=__get__hapticFeedbackController, put=__set__hapticFeedbackController)) ::GlobalNamespace::HapticFeedbackManager*  _hapticFeedbackController;

/// @brief Field _colorManager offset 0x40
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field _sparkleParticleSystemEmmisionModule offset 0x48
 __declspec(property(get=__get__sparkleParticleSystemEmmisionModule, put=__set__sparkleParticleSystemEmmisionModule)) ::UnityEngine::__ParticleSystem__EmissionModule  _sparkleParticleSystemEmmisionModule;

/// @brief Field _glowParticleSystemEmmisionModule offset 0x50
 __declspec(property(get=__get__glowParticleSystemEmmisionModule, put=__set__glowParticleSystemEmmisionModule)) ::UnityEngine::__ParticleSystem__EmissionModule  _glowParticleSystemEmmisionModule;

/// @brief Field _sabersAreClashing offset 0x58
 __declspec(property(get=__get__sabersAreClashing, put=__set__sabersAreClashing)) bool  _sabersAreClashing;

constexpr void __set__sparkleParticleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__sparkleParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__sparkleParticleSystem() const;

constexpr void __set__glowParticleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__glowParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__glowParticleSystem() const;

constexpr void __set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* __get__rumblePreset() ;

constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> __get__rumblePreset() const;

constexpr void __set__saberClashChecker(::GlobalNamespace::SaberClashChecker*  value) ;

constexpr ::GlobalNamespace::SaberClashChecker* __get__saberClashChecker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberClashChecker*> __get__saberClashChecker() const;

constexpr void __set__hapticFeedbackController(::GlobalNamespace::HapticFeedbackManager*  value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager* __get__hapticFeedbackController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> __get__hapticFeedbackController() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set__sparkleParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __get__sparkleParticleSystemEmmisionModule() ;

constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __get__sparkleParticleSystemEmmisionModule() const;

constexpr void __set__glowParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __get__glowParticleSystemEmmisionModule() ;

constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __get__glowParticleSystemEmmisionModule() const;

constexpr void __set__sabersAreClashing(bool  value) ;

constexpr bool& __get__sabersAreClashing() ;

constexpr bool const& __get__sabersAreClashing() const;

/// @brief Method Start addr 0x23b2168 size 0x1b0 virtual false final false
inline void Start() ;

/// @brief Method OnDisable addr 0x23b2318 size 0x10 virtual false final false
inline void OnDisable() ;

/// @brief Method LateUpdate addr 0x23b2328 size 0xfc virtual false final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SaberClashEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23b2424 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SaberClashEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaberClashEffect(SaberClashEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaberClashEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaberClashEffect(SaberClashEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaberClashEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberClashEffect, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberClashEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberClashEffect*, "", "SaberClashEffect");
