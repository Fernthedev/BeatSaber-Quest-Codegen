#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MainEffectSO)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectSO);
// Type: ::MainEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15293))
// CS Name: ::MainEffectSO*
class CORDL_TYPE MainEffectSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

 __declspec(property(get=get_hasPostProcessEffect)) bool  hasPostProcessEffect;

/// @brief Method PreRender addr 0x28089d0 size 0x4 virtual true final false
inline void PreRender() ;

/// @brief Method Render addr 0x28089d4 size 0x4 virtual true final false
inline void Render(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, float_t  fade) ;

/// @brief Method PostRender addr 0x28089d8 size 0x4 virtual true final false
inline void PostRender(float_t  fade) ;

/// @brief Method get_hasPostProcessEffect addr 0x28089dc size 0x8 virtual true final false
inline bool get_hasPostProcessEffect() ;

static inline ::GlobalNamespace::MainEffectSO* New_ctor() ;

/// @brief Method .ctor addr 0x28081d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainEffectSO(MainEffectSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainEffectSO(MainEffectSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainEffectSO()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectSO, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectSO*, "", "MainEffectSO");
