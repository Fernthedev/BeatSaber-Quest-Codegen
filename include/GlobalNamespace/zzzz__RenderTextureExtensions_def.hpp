#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RenderTextureExtensions)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class RenderTextureExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RenderTextureExtensions);
// Type: ::RenderTextureExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14347))
// CS Name: ::RenderTextureExtensions*
class CORDL_TYPE RenderTextureExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetTexture2D addr 0x20f073c size 0x154 virtual false final false
static inline ::UnityEngine::Texture2D* GetTexture2D(::UnityEngine::RenderTexture*  rt) ;

// Ctor Parameters [CppParam { name: "", ty: "RenderTextureExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTextureExtensions(RenderTextureExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTextureExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTextureExtensions(RenderTextureExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RenderTextureExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RenderTextureExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RenderTextureExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderTextureExtensions*, "", "RenderTextureExtensions");
