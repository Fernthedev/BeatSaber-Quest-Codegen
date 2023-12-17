#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundSpriteRenderer)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundSpriteRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer);
// Type: ::BloomPrePassBackgroundSpriteRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14467))
// CS Name: ::BloomPrePassBackgroundSpriteRenderer*
class CORDL_TYPE BloomPrePassBackgroundSpriteRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore)]{};

/// @brief Field _spriteRenderer offset 0x48
 __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer)) ::UnityEngine::SpriteRenderer*  _spriteRenderer;

 __declspec(property(get=get_renderer)) ::UnityEngine::Renderer*  renderer;

constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer*  value) ;

constexpr ::UnityEngine::SpriteRenderer* __get__spriteRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> __get__spriteRenderer() const;

/// @brief Method get_renderer addr 0x21061f0 size 0x8 virtual true final false
inline ::UnityEngine::Renderer* get_renderer() ;

static inline ::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer* New_ctor() ;

/// @brief Method .ctor addr 0x21061f8 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundSpriteRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundSpriteRenderer(BloomPrePassBackgroundSpriteRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundSpriteRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundSpriteRenderer(BloomPrePassBackgroundSpriteRenderer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundSpriteRenderer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*, "", "BloomPrePassBackgroundSpriteRenderer");
