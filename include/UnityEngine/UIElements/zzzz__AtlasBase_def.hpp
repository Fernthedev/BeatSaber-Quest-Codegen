#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(AtlasBase)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AtlasBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AtlasBase);
// Type: UnityEngine.UIElements::AtlasBase
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6758))
// CS Name: ::UnityEngine.UIElements::AtlasBase*
class CORDL_TYPE AtlasBase : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field textureRegistry offset 0x10
 __declspec(property(get=__get_textureRegistry, put=__set_textureRegistry)) ::UnityEngine::UIElements::TextureRegistry*  textureRegistry;

constexpr void __set_textureRegistry(::UnityEngine::UIElements::TextureRegistry*  value) ;

constexpr ::UnityEngine::UIElements::TextureRegistry* __get_textureRegistry() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextureRegistry*> __get_textureRegistry() const;

/// @brief Method TryGetAtlas addr 0x2db3fb0 size 0x74 virtual true final false
inline bool TryGetAtlas(::UnityEngine::UIElements::VisualElement*  ctx, ::UnityEngine::Texture2D*  src, ByRef<::UnityEngine::UIElements::TextureId>  atlas, ByRef<::UnityEngine::RectInt>  atlasRect) ;

/// @brief Method ReturnAtlas addr 0x2db4024 size 0x4 virtual true final false
inline void ReturnAtlas(::UnityEngine::UIElements::VisualElement*  ctx, ::UnityEngine::Texture2D*  src, ::UnityEngine::UIElements::TextureId  atlas) ;

/// @brief Method Reset addr 0x2db4028 size 0x4 virtual true final false
inline void Reset() ;

/// @brief Method OnAssignedToPanel addr 0x2db402c size 0x4 virtual true final false
inline void OnAssignedToPanel(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method OnRemovedFromPanel addr 0x2db4030 size 0x4 virtual true final false
inline void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method OnUpdateDynamicTextures addr 0x2db4034 size 0x4 virtual true final false
inline void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method InvokeAssignedToPanel addr 0x2db4038 size 0xc virtual false final false
inline void InvokeAssignedToPanel(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method InvokeRemovedFromPanel addr 0x2db4044 size 0xc virtual false final false
inline void InvokeRemovedFromPanel(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method InvokeUpdateDynamicTextures addr 0x2db4050 size 0xc virtual false final false
inline void InvokeUpdateDynamicTextures(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method RepaintTexturedElements addr 0x2db405c size 0xec virtual false final false
static inline void RepaintTexturedElements(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method SetDynamicTexture addr 0x2db4148 size 0x20 virtual false final false
inline void SetDynamicTexture(::UnityEngine::UIElements::TextureId  id, ::UnityEngine::Texture*  texture) ;

static inline ::UnityEngine::UIElements::AtlasBase* New_ctor() ;

/// @brief Method .ctor addr 0x2db4168 size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AtlasBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AtlasBase(AtlasBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AtlasBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AtlasBase(AtlasBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AtlasBase()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AtlasBase, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AtlasBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AtlasBase*, "UnityEngine.UIElements", "AtlasBase");
