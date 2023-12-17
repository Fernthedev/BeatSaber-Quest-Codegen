#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TextureEffectSO)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextureEffectSO);
// Type: ::TextureEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14579))
// CS Name: ::TextureEffectSO*
class CORDL_TYPE TextureEffectSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Method Render addr 0x2115dd4 size 0x68 virtual true final false
inline void Render(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest) ;

static inline ::GlobalNamespace::TextureEffectSO* New_ctor() ;

/// @brief Method .ctor addr 0x2115e3c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextureEffectSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureEffectSO(TextureEffectSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureEffectSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureEffectSO(TextureEffectSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextureEffectSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureEffectSO, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureEffectSO*, "", "TextureEffectSO");
