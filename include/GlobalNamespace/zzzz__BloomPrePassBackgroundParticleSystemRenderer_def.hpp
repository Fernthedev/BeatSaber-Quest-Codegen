#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundParticleSystemRenderer)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundParticleSystemRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer);
// Type: ::BloomPrePassBackgroundParticleSystemRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14466))
// CS Name: ::BloomPrePassBackgroundParticleSystemRenderer*
class CORDL_TYPE BloomPrePassBackgroundParticleSystemRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore)]{};

/// @brief Field _particleSystem offset 0x48
 __declspec(property(get=__get__particleSystem, put=__set__particleSystem)) ::UnityEngine::ParticleSystem*  _particleSystem;

/// @brief Field _renderer offset 0x50
 __declspec(property(get=__get__renderer, put=__set__renderer)) ::UnityEngine::Renderer*  _renderer;

 __declspec(property(get=get_renderer)) ::UnityEngine::Renderer*  renderer;

constexpr void __set__particleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__particleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__particleSystem() const;

constexpr void __set__renderer(::UnityEngine::Renderer*  value) ;

constexpr ::UnityEngine::Renderer* __get__renderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> __get__renderer() const;

/// @brief Method get_renderer addr 0x2106130 size 0x8 virtual true final false
inline ::UnityEngine::Renderer* get_renderer() ;

/// @brief Method Awake addr 0x2106138 size 0x64 virtual true final false
inline void Awake() ;

static inline ::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer* New_ctor() ;

/// @brief Method .ctor addr 0x210619c size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundParticleSystemRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundParticleSystemRenderer(BloomPrePassBackgroundParticleSystemRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundParticleSystemRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundParticleSystemRenderer(BloomPrePassBackgroundParticleSystemRenderer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundParticleSystemRenderer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*, "", "BloomPrePassBackgroundParticleSystemRenderer");
