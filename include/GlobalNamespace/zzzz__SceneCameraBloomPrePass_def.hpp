#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SceneCameraBloomPrePass)
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneCameraBloomPrePass;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneCameraBloomPrePass);
// Type: ::SceneCameraBloomPrePass
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14489))
// CS Name: ::SceneCameraBloomPrePass*
class CORDL_TYPE SceneCameraBloomPrePass : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _bloomPrepassRenderer offset 0x18
 __declspec(property(get=__get__bloomPrepassRenderer, put=__set__bloomPrepassRenderer)) ::GlobalNamespace::BloomPrePassRendererSO*  _bloomPrepassRenderer;

/// @brief Field _bloomPrePassEffectContainer offset 0x20
 __declspec(property(get=__get__bloomPrePassEffectContainer, put=__set__bloomPrePassEffectContainer)) ::GlobalNamespace::BloomPrePassEffectContainerSO*  _bloomPrePassEffectContainer;

/// @brief Field _bloomPrepassRenderTexture offset 0x28
 __declspec(property(get=__get__bloomPrepassRenderTexture, put=__set__bloomPrepassRenderTexture)) ::UnityEngine::RenderTexture*  _bloomPrepassRenderTexture;

constexpr void __set__bloomPrepassRenderer(::GlobalNamespace::BloomPrePassRendererSO*  value) ;

constexpr ::GlobalNamespace::BloomPrePassRendererSO* __get__bloomPrepassRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRendererSO*> __get__bloomPrepassRenderer() const;

constexpr void __set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO*  value) ;

constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO* __get__bloomPrePassEffectContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> __get__bloomPrePassEffectContainer() const;

constexpr void __set__bloomPrepassRenderTexture(::UnityEngine::RenderTexture*  value) ;

constexpr ::UnityEngine::RenderTexture* __get__bloomPrepassRenderTexture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> __get__bloomPrepassRenderTexture() const;

static inline ::GlobalNamespace::SceneCameraBloomPrePass* New_ctor() ;

/// @brief Method .ctor addr 0x2109848 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SceneCameraBloomPrePass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneCameraBloomPrePass(SceneCameraBloomPrePass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneCameraBloomPrePass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneCameraBloomPrePass(SceneCameraBloomPrePass const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SceneCameraBloomPrePass()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneCameraBloomPrePass, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneCameraBloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneCameraBloomPrePass*, "", "SceneCameraBloomPrePass");
