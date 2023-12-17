#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ImageSource)
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct ImageSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::ImageSource);
// Type: UnityEngine.UIElements.StyleSheets::ImageSource
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7463))
// CS Name: ::UnityEngine.UIElements.StyleSheets::ImageSource
struct CORDL_TYPE ImageSource : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field texture offset 0x0
 __declspec(property(get=__get_texture, put=__set_texture)) ::UnityEngine::Texture2D*  texture;

/// @brief Field sprite offset 0x8
 __declspec(property(get=__get_sprite, put=__set_sprite)) ::UnityEngine::Sprite*  sprite;

/// @brief Field vectorImage offset 0x10
 __declspec(property(get=__get_vectorImage, put=__set_vectorImage)) ::UnityEngine::UIElements::VectorImage*  vectorImage;

/// @brief Field renderTexture offset 0x18
 __declspec(property(get=__get_renderTexture, put=__set_renderTexture)) ::UnityEngine::RenderTexture*  renderTexture;

constexpr void __set_texture(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_texture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_texture() const;

constexpr void __set_sprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_sprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_sprite() const;

constexpr void __set_vectorImage(::UnityEngine::UIElements::VectorImage*  value) ;

constexpr ::UnityEngine::UIElements::VectorImage* __get_vectorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VectorImage*> __get_vectorImage() const;

constexpr void __set_renderTexture(::UnityEngine::RenderTexture*  value) ;

constexpr ::UnityEngine::RenderTexture* __get_renderTexture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> __get_renderTexture() const;

/// @brief Method IsNull addr 0x2de5fbc size 0xe8 virtual false final false
inline bool IsNull() ;

// Ctor Parameters [CppParam { name: "texture", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: None }, CppParam { name: "sprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "vectorImage", ty: "::UnityEngine::UIElements::VectorImage*", modifiers: "", def_value: None }, CppParam { name: "renderTexture", ty: "::UnityEngine::RenderTexture*", modifiers: "", def_value: None }]
constexpr ImageSource(::UnityEngine::Texture2D*  texture, ::UnityEngine::Sprite*  sprite, ::UnityEngine::UIElements::VectorImage*  vectorImage, ::UnityEngine::RenderTexture*  renderTexture) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ImageSource(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ImageSource()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::ImageSource, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::ImageSource, "UnityEngine.UIElements.StyleSheets", "ImageSource");
