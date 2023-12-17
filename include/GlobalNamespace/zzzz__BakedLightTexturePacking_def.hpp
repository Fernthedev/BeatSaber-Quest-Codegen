#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightTexturePacking)
namespace UnityEngine {
class RenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightTexturePacking;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightTexturePacking);
// Type: ::BakedLightTexturePacking
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5852))
// CS Name: ::BakedLightTexturePacking*
class CORDL_TYPE BakedLightTexturePacking : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kBakedLightTexturePackingShaderName offset 0x0
static constexpr ::ConstString  kBakedLightTexturePackingShaderName{u"Hidden/BakedLightTexturePacking"};

static inline void setStaticF__texPropertyIds(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF__texPropertyIds() ;

static inline void setStaticF__material(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF__material() ;

/// @brief Method PackTextures addr 0x22f59b4 size 0x36c virtual false final false
static inline ::UnityEngine::RenderTexture* PackTextures(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture*>*  textures, ::UnityEngine::RenderTextureDescriptor  descriptor) ;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightTexturePacking", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BakedLightTexturePacking(BakedLightTexturePacking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightTexturePacking", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakedLightTexturePacking(BakedLightTexturePacking const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BakedLightTexturePacking()  = default;
public:


// Fields

// Static field _texPropertyIds

// Static field _material


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightTexturePacking, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightTexturePacking);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightTexturePacking*, "", "BakedLightTexturePacking");
