#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightDynamicRenderer)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightDynamicRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer);
// Type: ::BloomPrePassBackgroundNonLightDynamicRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14460))
// CS Name: ::BloomPrePassBackgroundNonLightDynamicRenderer*
class CORDL_TYPE BloomPrePassBackgroundNonLightDynamicRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore)]{};

/// @brief Field _renderer offset 0x48
 __declspec(property(get=__get__renderer, put=__set__renderer)) ::UnityEngine::Renderer*  _renderer;

 __declspec(property(get=get_renderer)) ::UnityEngine::Renderer*  renderer;

constexpr void __set__renderer(::UnityEngine::Renderer*  value) ;

constexpr ::UnityEngine::Renderer* __get__renderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> __get__renderer() const;

/// @brief Method get_renderer addr 0x21049bc size 0x8 virtual true final false
inline ::UnityEngine::Renderer* get_renderer() ;

/// @brief Method SetRenderer addr 0x21049c4 size 0x8 virtual false final false
inline void SetRenderer(::UnityEngine::Renderer*  renderer) ;

static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer* New_ctor() ;

/// @brief Method .ctor addr 0x21049cc size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightDynamicRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundNonLightDynamicRenderer(BloomPrePassBackgroundNonLightDynamicRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightDynamicRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundNonLightDynamicRenderer(BloomPrePassBackgroundNonLightDynamicRenderer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundNonLightDynamicRenderer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*, "", "BloomPrePassBackgroundNonLightDynamicRenderer");
