#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemLightWithId)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct __ParticleSystem__MainModule;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemLightWithId);
// Type: ::ParticleSystemLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14548))
// CS Name: ::ParticleSystemLightWithId*
class CORDL_TYPE ParticleSystemLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _particleSystem offset 0x30
 __declspec(property(get=__get__particleSystem, put=__set__particleSystem)) ::UnityEngine::ParticleSystem*  _particleSystem;

/// @brief Field setOnlyOnce offset 0x38
 __declspec(property(get=__get_setOnlyOnce, put=__set_setOnlyOnce)) bool  setOnlyOnce;

/// @brief Field _setColorOnly offset 0x39
 __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly)) bool  _setColorOnly;

/// @brief Field _intensity offset 0x3c
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _minAlpha offset 0x40
 __declspec(property(get=__get__minAlpha, put=__set__minAlpha)) float_t  _minAlpha;

/// @brief Field _mainModule offset 0x48
 __declspec(property(get=__get__mainModule, put=__set__mainModule)) ::UnityEngine::__ParticleSystem__MainModule  _mainModule;

/// @brief Field _particles offset 0x50
 __declspec(property(get=__get__particles, put=__set__particles)) ::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>  _particles;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set__particleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__particleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__particleSystem() const;

constexpr void __set_setOnlyOnce(bool  value) ;

constexpr bool& __get_setOnlyOnce() ;

constexpr bool const& __get_setOnlyOnce() const;

constexpr void __set__setColorOnly(bool  value) ;

constexpr bool& __get__setColorOnly() ;

constexpr bool const& __get__setColorOnly() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__minAlpha(float_t  value) ;

constexpr float_t& __get__minAlpha() ;

constexpr float_t const& __get__minAlpha() const;

constexpr void __set__mainModule(::UnityEngine::__ParticleSystem__MainModule  value) ;

constexpr ::UnityEngine::__ParticleSystem__MainModule& __get__mainModule() ;

constexpr ::UnityEngine::__ParticleSystem__MainModule const& __get__mainModule() const;

constexpr void __set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>  value) ;

constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>& __get__particles() ;

constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*> const& __get__particles() const;

/// @brief Method get_color addr 0x2111ec8 size 0x5c virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method Awake addr 0x2111f24 size 0x78 virtual false final false
inline void Awake() ;

/// @brief Method ColorWasSet addr 0x2111f9c size 0x464 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::ParticleSystemLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x2112400 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemLightWithId(ParticleSystemLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemLightWithId(ParticleSystemLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParticleSystemLightWithId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemLightWithId, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemLightWithId*, "", "ParticleSystemLightWithId");
