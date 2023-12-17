#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationContextUtils)
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshGenerationContextUtils;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshGenerationContextUtils);
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams);
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams);
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams);
// Type: ::BorderParams
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7333))
// CS Name: ::MeshGenerationContextUtils::BorderParams
struct CORDL_TYPE __MeshGenerationContextUtils__BorderParams : public ::bs_hook::ValueTypeWrapper<0xb8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field rect offset 0x0
 __declspec(property(get=__get_rect, put=__set_rect)) ::UnityEngine::Rect  rect;

/// @brief Field playmodeTintColor offset 0x10
 __declspec(property(get=__get_playmodeTintColor, put=__set_playmodeTintColor)) ::UnityEngine::Color  playmodeTintColor;

/// @brief Field leftColor offset 0x20
 __declspec(property(get=__get_leftColor, put=__set_leftColor)) ::UnityEngine::Color  leftColor;

/// @brief Field topColor offset 0x30
 __declspec(property(get=__get_topColor, put=__set_topColor)) ::UnityEngine::Color  topColor;

/// @brief Field rightColor offset 0x40
 __declspec(property(get=__get_rightColor, put=__set_rightColor)) ::UnityEngine::Color  rightColor;

/// @brief Field bottomColor offset 0x50
 __declspec(property(get=__get_bottomColor, put=__set_bottomColor)) ::UnityEngine::Color  bottomColor;

/// @brief Field leftWidth offset 0x60
 __declspec(property(get=__get_leftWidth, put=__set_leftWidth)) float_t  leftWidth;

/// @brief Field topWidth offset 0x64
 __declspec(property(get=__get_topWidth, put=__set_topWidth)) float_t  topWidth;

/// @brief Field rightWidth offset 0x68
 __declspec(property(get=__get_rightWidth, put=__set_rightWidth)) float_t  rightWidth;

/// @brief Field bottomWidth offset 0x6c
 __declspec(property(get=__get_bottomWidth, put=__set_bottomWidth)) float_t  bottomWidth;

/// @brief Field topLeftRadius offset 0x70
 __declspec(property(get=__get_topLeftRadius, put=__set_topLeftRadius)) ::UnityEngine::Vector2  topLeftRadius;

/// @brief Field topRightRadius offset 0x78
 __declspec(property(get=__get_topRightRadius, put=__set_topRightRadius)) ::UnityEngine::Vector2  topRightRadius;

/// @brief Field bottomRightRadius offset 0x80
 __declspec(property(get=__get_bottomRightRadius, put=__set_bottomRightRadius)) ::UnityEngine::Vector2  bottomRightRadius;

/// @brief Field bottomLeftRadius offset 0x88
 __declspec(property(get=__get_bottomLeftRadius, put=__set_bottomLeftRadius)) ::UnityEngine::Vector2  bottomLeftRadius;

/// @brief Field material offset 0x90
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

/// @brief Field leftColorPage offset 0x98
 __declspec(property(get=__get_leftColorPage, put=__set_leftColorPage)) ::UnityEngine::UIElements::ColorPage  leftColorPage;

/// @brief Field topColorPage offset 0xa0
 __declspec(property(get=__get_topColorPage, put=__set_topColorPage)) ::UnityEngine::UIElements::ColorPage  topColorPage;

/// @brief Field rightColorPage offset 0xa8
 __declspec(property(get=__get_rightColorPage, put=__set_rightColorPage)) ::UnityEngine::UIElements::ColorPage  rightColorPage;

/// @brief Field bottomColorPage offset 0xb0
 __declspec(property(get=__get_bottomColorPage, put=__set_bottomColorPage)) ::UnityEngine::UIElements::ColorPage  bottomColorPage;

constexpr void __set_rect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_rect() ;

constexpr ::UnityEngine::Rect const& __get_rect() const;

constexpr void __set_playmodeTintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_playmodeTintColor() ;

constexpr ::UnityEngine::Color const& __get_playmodeTintColor() const;

constexpr void __set_leftColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_leftColor() ;

constexpr ::UnityEngine::Color const& __get_leftColor() const;

constexpr void __set_topColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_topColor() ;

constexpr ::UnityEngine::Color const& __get_topColor() const;

constexpr void __set_rightColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_rightColor() ;

constexpr ::UnityEngine::Color const& __get_rightColor() const;

constexpr void __set_bottomColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_bottomColor() ;

constexpr ::UnityEngine::Color const& __get_bottomColor() const;

constexpr void __set_leftWidth(float_t  value) ;

constexpr float_t& __get_leftWidth() ;

constexpr float_t const& __get_leftWidth() const;

constexpr void __set_topWidth(float_t  value) ;

constexpr float_t& __get_topWidth() ;

constexpr float_t const& __get_topWidth() const;

constexpr void __set_rightWidth(float_t  value) ;

constexpr float_t& __get_rightWidth() ;

constexpr float_t const& __get_rightWidth() const;

constexpr void __set_bottomWidth(float_t  value) ;

constexpr float_t& __get_bottomWidth() ;

constexpr float_t const& __get_bottomWidth() const;

constexpr void __set_topLeftRadius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_topLeftRadius() ;

constexpr ::UnityEngine::Vector2 const& __get_topLeftRadius() const;

constexpr void __set_topRightRadius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_topRightRadius() ;

constexpr ::UnityEngine::Vector2 const& __get_topRightRadius() const;

constexpr void __set_bottomRightRadius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_bottomRightRadius() ;

constexpr ::UnityEngine::Vector2 const& __get_bottomRightRadius() const;

constexpr void __set_bottomLeftRadius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_bottomLeftRadius() ;

constexpr ::UnityEngine::Vector2 const& __get_bottomLeftRadius() const;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

constexpr void __set_leftColorPage(::UnityEngine::UIElements::ColorPage  value) ;

constexpr ::UnityEngine::UIElements::ColorPage& __get_leftColorPage() ;

constexpr ::UnityEngine::UIElements::ColorPage const& __get_leftColorPage() const;

constexpr void __set_topColorPage(::UnityEngine::UIElements::ColorPage  value) ;

constexpr ::UnityEngine::UIElements::ColorPage& __get_topColorPage() ;

constexpr ::UnityEngine::UIElements::ColorPage const& __get_topColorPage() const;

constexpr void __set_rightColorPage(::UnityEngine::UIElements::ColorPage  value) ;

constexpr ::UnityEngine::UIElements::ColorPage& __get_rightColorPage() ;

constexpr ::UnityEngine::UIElements::ColorPage const& __get_rightColorPage() const;

constexpr void __set_bottomColorPage(::UnityEngine::UIElements::ColorPage  value) ;

constexpr ::UnityEngine::UIElements::ColorPage& __get_bottomColorPage() ;

constexpr ::UnityEngine::UIElements::ColorPage const& __get_bottomColorPage() const;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "topColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "bottomColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }]
constexpr __MeshGenerationContextUtils__BorderParams(::UnityEngine::Rect  rect, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Color  leftColor, ::UnityEngine::Color  topColor, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  bottomColor, float_t  leftWidth, float_t  topWidth, float_t  rightWidth, float_t  bottomWidth, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::Material*  material, ::UnityEngine::UIElements::ColorPage  leftColorPage, ::UnityEngine::UIElements::ColorPage  topColorPage, ::UnityEngine::UIElements::ColorPage  rightColorPage, ::UnityEngine::UIElements::ColorPage  bottomColorPage) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MeshGenerationContextUtils__BorderParams(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xb8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MeshGenerationContextUtils__BorderParams()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, 0xb8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::RectangleParams
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7334))
// CS Name: ::MeshGenerationContextUtils::RectangleParams
struct CORDL_TYPE __MeshGenerationContextUtils__RectangleParams : public ::bs_hook::ValueTypeWrapper<0xb8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field rect offset 0x0
 __declspec(property(get=__get_rect, put=__set_rect)) ::UnityEngine::Rect  rect;

/// @brief Field uv offset 0x10
 __declspec(property(get=__get_uv, put=__set_uv)) ::UnityEngine::Rect  uv;

/// @brief Field color offset 0x20
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field texture offset 0x30
 __declspec(property(get=__get_texture, put=__set_texture)) ::UnityEngine::Texture*  texture;

/// @brief Field sprite offset 0x38
 __declspec(property(get=__get_sprite, put=__set_sprite)) ::UnityEngine::Sprite*  sprite;

/// @brief Field vectorImage offset 0x40
 __declspec(property(get=__get_vectorImage, put=__set_vectorImage)) ::UnityEngine::UIElements::VectorImage*  vectorImage;

/// @brief Field material offset 0x48
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

/// @brief Field scaleMode offset 0x50
 __declspec(property(get=__get_scaleMode, put=__set_scaleMode)) ::UnityEngine::ScaleMode  scaleMode;

/// @brief Field playmodeTintColor offset 0x54
 __declspec(property(get=__get_playmodeTintColor, put=__set_playmodeTintColor)) ::UnityEngine::Color  playmodeTintColor;

/// @brief Field topLeftRadius offset 0x64
 __declspec(property(get=__get_topLeftRadius, put=__set_topLeftRadius)) ::UnityEngine::Vector2  topLeftRadius;

/// @brief Field topRightRadius offset 0x6c
 __declspec(property(get=__get_topRightRadius, put=__set_topRightRadius)) ::UnityEngine::Vector2  topRightRadius;

/// @brief Field bottomRightRadius offset 0x74
 __declspec(property(get=__get_bottomRightRadius, put=__set_bottomRightRadius)) ::UnityEngine::Vector2  bottomRightRadius;

/// @brief Field bottomLeftRadius offset 0x7c
 __declspec(property(get=__get_bottomLeftRadius, put=__set_bottomLeftRadius)) ::UnityEngine::Vector2  bottomLeftRadius;

/// @brief Field leftSlice offset 0x84
 __declspec(property(get=__get_leftSlice, put=__set_leftSlice)) int32_t  leftSlice;

/// @brief Field topSlice offset 0x88
 __declspec(property(get=__get_topSlice, put=__set_topSlice)) int32_t  topSlice;

/// @brief Field rightSlice offset 0x8c
 __declspec(property(get=__get_rightSlice, put=__set_rightSlice)) int32_t  rightSlice;

/// @brief Field bottomSlice offset 0x90
 __declspec(property(get=__get_bottomSlice, put=__set_bottomSlice)) int32_t  bottomSlice;

/// @brief Field sliceScale offset 0x94
 __declspec(property(get=__get_sliceScale, put=__set_sliceScale)) float_t  sliceScale;

/// @brief Field spriteGeomRect offset 0x98
 __declspec(property(get=__get_spriteGeomRect, put=__set_spriteGeomRect)) ::UnityEngine::Rect  spriteGeomRect;

/// @brief Field colorPage offset 0xa8
 __declspec(property(get=__get_colorPage, put=__set_colorPage)) ::UnityEngine::UIElements::ColorPage  colorPage;

/// @brief Field meshFlags offset 0xb0
 __declspec(property(get=__get_meshFlags, put=__set_meshFlags)) ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  meshFlags;

constexpr void __set_rect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_rect() ;

constexpr ::UnityEngine::Rect const& __get_rect() const;

constexpr void __set_uv(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_uv() ;

constexpr ::UnityEngine::Rect const& __get_uv() const;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_texture(::UnityEngine::Texture*  value) ;

constexpr ::UnityEngine::Texture* __get_texture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> __get_texture() const;

constexpr void __set_sprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_sprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_sprite() const;

constexpr void __set_vectorImage(::UnityEngine::UIElements::VectorImage*  value) ;

constexpr ::UnityEngine::UIElements::VectorImage* __get_vectorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VectorImage*> __get_vectorImage() const;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

constexpr void __set_scaleMode(::UnityEngine::ScaleMode  value) ;

constexpr ::UnityEngine::ScaleMode& __get_scaleMode() ;

constexpr ::UnityEngine::ScaleMode const& __get_scaleMode() const;

constexpr void __set_playmodeTintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_playmodeTintColor() ;

constexpr ::UnityEngine::Color const& __get_playmodeTintColor() const;

constexpr void __set_topLeftRadius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_topLeftRadius() ;

constexpr ::UnityEngine::Vector2 const& __get_topLeftRadius() const;

constexpr void __set_topRightRadius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_topRightRadius() ;

constexpr ::UnityEngine::Vector2 const& __get_topRightRadius() const;

constexpr void __set_bottomRightRadius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_bottomRightRadius() ;

constexpr ::UnityEngine::Vector2 const& __get_bottomRightRadius() const;

constexpr void __set_bottomLeftRadius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_bottomLeftRadius() ;

constexpr ::UnityEngine::Vector2 const& __get_bottomLeftRadius() const;

constexpr void __set_leftSlice(int32_t  value) ;

constexpr int32_t& __get_leftSlice() ;

constexpr int32_t const& __get_leftSlice() const;

constexpr void __set_topSlice(int32_t  value) ;

constexpr int32_t& __get_topSlice() ;

constexpr int32_t const& __get_topSlice() const;

constexpr void __set_rightSlice(int32_t  value) ;

constexpr int32_t& __get_rightSlice() ;

constexpr int32_t const& __get_rightSlice() const;

constexpr void __set_bottomSlice(int32_t  value) ;

constexpr int32_t& __get_bottomSlice() ;

constexpr int32_t const& __get_bottomSlice() const;

constexpr void __set_sliceScale(float_t  value) ;

constexpr float_t& __get_sliceScale() ;

constexpr float_t const& __get_sliceScale() const;

constexpr void __set_spriteGeomRect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_spriteGeomRect() ;

constexpr ::UnityEngine::Rect const& __get_spriteGeomRect() const;

constexpr void __set_colorPage(::UnityEngine::UIElements::ColorPage  value) ;

constexpr ::UnityEngine::UIElements::ColorPage& __get_colorPage() ;

constexpr ::UnityEngine::UIElements::ColorPage const& __get_colorPage() const;

constexpr void __set_meshFlags(::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  value) ;

constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags& __get_meshFlags() ;

constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags const& __get_meshFlags() const;

/// @brief Method AdjustUVsForScaleMode addr 0x2e7a438 size 0x320 virtual false final false
static inline void AdjustUVsForScaleMode(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ByRef<::UnityEngine::Rect>  rectOut, ByRef<::UnityEngine::Rect>  uvOut) ;

/// @brief Method AdjustSpriteUVsForScaleMode addr 0x2e7a758 size 0x760 virtual false final false
static inline void AdjustSpriteUVsForScaleMode(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Rect  geomRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ByRef<::UnityEngine::Rect>  rectOut, ByRef<::UnityEngine::Rect>  uvOut) ;

/// @brief Method RectIntersection addr 0x2e7aeb8 size 0x120 virtual false final false
static inline ::UnityEngine::Rect RectIntersection(::UnityEngine::Rect  a, ::UnityEngine::Rect  b) ;

/// @brief Method ComputeGeomRect addr 0x2e7afd8 size 0xd8 virtual false final false
static inline ::UnityEngine::Rect ComputeGeomRect(::UnityEngine::Sprite*  sprite) ;

/// @brief Method ComputeUVRect addr 0x2e7b0b0 size 0xd8 virtual false final false
static inline ::UnityEngine::Rect ComputeUVRect(::UnityEngine::Sprite*  sprite) ;

/// @brief Method ApplyPackingRotation addr 0x2e7b188 size 0x12c virtual false final false
static inline ::UnityEngine::Rect ApplyPackingRotation(::UnityEngine::Rect  uv, ::UnityEngine::SpritePackingRotation  rotation) ;

/// @brief Method MakeTextured addr 0x2e7b2b4 size 0x16c virtual false final false
static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext) ;

/// @brief Method MakeSprite addr 0x2e7b420 size 0x6c4 virtual false final false
static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeSprite(::UnityEngine::Rect  rect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext, bool  hasRadius, ByRef<::UnityEngine::Vector4>  slices) ;

/// @brief Method MakeVectorTextured addr 0x2e7bae4 size 0x11c virtual false final false
static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeVectorTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::UIElements::VectorImage*  vectorImage, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext) ;

/// @brief Method HasRadius addr 0x2e7bc00 size 0x74 virtual false final false
inline bool HasRadius(float_t  epsilon) ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "sprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "vectorImage", ty: "::UnityEngine::UIElements::VectorImage*", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "meshFlags", ty: "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers: "", def_value: None }]
constexpr __MeshGenerationContextUtils__RectangleParams(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Color  color, ::UnityEngine::Texture*  texture, ::UnityEngine::Sprite*  sprite, ::UnityEngine::UIElements::VectorImage*  vectorImage, ::UnityEngine::Material*  material, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, int32_t  leftSlice, int32_t  topSlice, int32_t  rightSlice, int32_t  bottomSlice, float_t  sliceScale, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::UIElements::ColorPage  colorPage, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  meshFlags) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MeshGenerationContextUtils__RectangleParams(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xb8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MeshGenerationContextUtils__RectangleParams()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, 0xb8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::TextParams
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7335))
// CS Name: ::MeshGenerationContextUtils::TextParams
struct CORDL_TYPE __MeshGenerationContextUtils__TextParams : public ::bs_hook::ValueTypeWrapper<0x98> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field rect offset 0x0
 __declspec(property(get=__get_rect, put=__set_rect)) ::UnityEngine::Rect  rect;

/// @brief Field text offset 0x10
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field font offset 0x18
 __declspec(property(get=__get_font, put=__set_font)) ::UnityEngine::Font*  font;

/// @brief Field fontDefinition offset 0x20
 __declspec(property(get=__get_fontDefinition, put=__set_fontDefinition)) ::UnityEngine::UIElements::FontDefinition  fontDefinition;

/// @brief Field fontSize offset 0x30
 __declspec(property(get=__get_fontSize, put=__set_fontSize)) int32_t  fontSize;

/// @brief Field letterSpacing offset 0x34
 __declspec(property(get=__get_letterSpacing, put=__set_letterSpacing)) ::UnityEngine::UIElements::Length  letterSpacing;

/// @brief Field wordSpacing offset 0x3c
 __declspec(property(get=__get_wordSpacing, put=__set_wordSpacing)) ::UnityEngine::UIElements::Length  wordSpacing;

/// @brief Field paragraphSpacing offset 0x44
 __declspec(property(get=__get_paragraphSpacing, put=__set_paragraphSpacing)) ::UnityEngine::UIElements::Length  paragraphSpacing;

/// @brief Field fontStyle offset 0x4c
 __declspec(property(get=__get_fontStyle, put=__set_fontStyle)) ::UnityEngine::FontStyle  fontStyle;

/// @brief Field fontColor offset 0x50
 __declspec(property(get=__get_fontColor, put=__set_fontColor)) ::UnityEngine::Color  fontColor;

/// @brief Field anchor offset 0x60
 __declspec(property(get=__get_anchor, put=__set_anchor)) ::UnityEngine::TextAnchor  anchor;

/// @brief Field wordWrap offset 0x64
 __declspec(property(get=__get_wordWrap, put=__set_wordWrap)) bool  wordWrap;

/// @brief Field wordWrapWidth offset 0x68
 __declspec(property(get=__get_wordWrapWidth, put=__set_wordWrapWidth)) float_t  wordWrapWidth;

/// @brief Field richText offset 0x6c
 __declspec(property(get=__get_richText, put=__set_richText)) bool  richText;

/// @brief Field playmodeTintColor offset 0x70
 __declspec(property(get=__get_playmodeTintColor, put=__set_playmodeTintColor)) ::UnityEngine::Color  playmodeTintColor;

/// @brief Field textOverflow offset 0x80
 __declspec(property(get=__get_textOverflow, put=__set_textOverflow)) ::UnityEngine::UIElements::TextOverflow  textOverflow;

/// @brief Field textOverflowPosition offset 0x84
 __declspec(property(get=__get_textOverflowPosition, put=__set_textOverflowPosition)) ::UnityEngine::UIElements::TextOverflowPosition  textOverflowPosition;

/// @brief Field overflow offset 0x88
 __declspec(property(get=__get_overflow, put=__set_overflow)) ::UnityEngine::UIElements::OverflowInternal  overflow;

/// @brief Field panel offset 0x90
 __declspec(property(get=__get_panel, put=__set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

constexpr void __set_rect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_rect() ;

constexpr ::UnityEngine::Rect const& __get_rect() const;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_font(::UnityEngine::Font*  value) ;

constexpr ::UnityEngine::Font* __get_font() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> __get_font() const;

constexpr void __set_fontDefinition(::UnityEngine::UIElements::FontDefinition  value) ;

constexpr ::UnityEngine::UIElements::FontDefinition& __get_fontDefinition() ;

constexpr ::UnityEngine::UIElements::FontDefinition const& __get_fontDefinition() const;

constexpr void __set_fontSize(int32_t  value) ;

constexpr int32_t& __get_fontSize() ;

constexpr int32_t const& __get_fontSize() const;

constexpr void __set_letterSpacing(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_letterSpacing() ;

constexpr ::UnityEngine::UIElements::Length const& __get_letterSpacing() const;

constexpr void __set_wordSpacing(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_wordSpacing() ;

constexpr ::UnityEngine::UIElements::Length const& __get_wordSpacing() const;

constexpr void __set_paragraphSpacing(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_paragraphSpacing() ;

constexpr ::UnityEngine::UIElements::Length const& __get_paragraphSpacing() const;

constexpr void __set_fontStyle(::UnityEngine::FontStyle  value) ;

constexpr ::UnityEngine::FontStyle& __get_fontStyle() ;

constexpr ::UnityEngine::FontStyle const& __get_fontStyle() const;

constexpr void __set_fontColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_fontColor() ;

constexpr ::UnityEngine::Color const& __get_fontColor() const;

constexpr void __set_anchor(::UnityEngine::TextAnchor  value) ;

constexpr ::UnityEngine::TextAnchor& __get_anchor() ;

constexpr ::UnityEngine::TextAnchor const& __get_anchor() const;

constexpr void __set_wordWrap(bool  value) ;

constexpr bool& __get_wordWrap() ;

constexpr bool const& __get_wordWrap() const;

constexpr void __set_wordWrapWidth(float_t  value) ;

constexpr float_t& __get_wordWrapWidth() ;

constexpr float_t const& __get_wordWrapWidth() const;

constexpr void __set_richText(bool  value) ;

constexpr bool& __get_richText() ;

constexpr bool const& __get_richText() const;

constexpr void __set_playmodeTintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_playmodeTintColor() ;

constexpr ::UnityEngine::Color const& __get_playmodeTintColor() const;

constexpr void __set_textOverflow(::UnityEngine::UIElements::TextOverflow  value) ;

constexpr ::UnityEngine::UIElements::TextOverflow& __get_textOverflow() ;

constexpr ::UnityEngine::UIElements::TextOverflow const& __get_textOverflow() const;

constexpr void __set_textOverflowPosition(::UnityEngine::UIElements::TextOverflowPosition  value) ;

constexpr ::UnityEngine::UIElements::TextOverflowPosition& __get_textOverflowPosition() ;

constexpr ::UnityEngine::UIElements::TextOverflowPosition const& __get_textOverflowPosition() const;

constexpr void __set_overflow(::UnityEngine::UIElements::OverflowInternal  value) ;

constexpr ::UnityEngine::UIElements::OverflowInternal& __get_overflow() ;

constexpr ::UnityEngine::UIElements::OverflowInternal const& __get_overflow() const;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_panel() const;

/// @brief Method GetHashCode addr 0x2e7bc74 size 0x2a0 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method MakeStyleBased addr 0x2e7bf14 size 0x3a8 virtual false final false
static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams MakeStyleBased(::UnityEngine::UIElements::VisualElement*  ve, ::StringW  text) ;

/// @brief Method GetTextNativeSettings addr 0x2e7c2bc size 0xd4 virtual false final false
static inline ::UnityEngine::UIElements::TextNativeSettings GetTextNativeSettings(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams  textParams, float_t  scaling) ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "fontDefinition", ty: "::UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "letterSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "wordSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paragraphSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "fontColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "textOverflow", ty: "::UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: None }, CppParam { name: "textOverflowPosition", ty: "::UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: None }, CppParam { name: "overflow", ty: "::UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value: None }, CppParam { name: "panel", ty: "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: None }]
constexpr __MeshGenerationContextUtils__TextParams(::UnityEngine::Rect  rect, ::StringW  text, ::UnityEngine::Font*  font, ::UnityEngine::UIElements::FontDefinition  fontDefinition, int32_t  fontSize, ::UnityEngine::UIElements::Length  letterSpacing, ::UnityEngine::UIElements::Length  wordSpacing, ::UnityEngine::UIElements::Length  paragraphSpacing, ::UnityEngine::FontStyle  fontStyle, ::UnityEngine::Color  fontColor, ::UnityEngine::TextAnchor  anchor, bool  wordWrap, float_t  wordWrapWidth, bool  richText, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::UIElements::TextOverflow  textOverflow, ::UnityEngine::UIElements::TextOverflowPosition  textOverflowPosition, ::UnityEngine::UIElements::OverflowInternal  overflow, ::UnityEngine::UIElements::IPanel*  panel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MeshGenerationContextUtils__TextParams(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x98>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MeshGenerationContextUtils__TextParams()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MeshGenerationContextUtils
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7336))
// CS Name: ::UnityEngine.UIElements::MeshGenerationContextUtils*
class CORDL_TYPE MeshGenerationContextUtils : public ::System::Object {
public:
// Declarations
using TextParams = ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams;

using RectangleParams = ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams;

using BorderParams = ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Rectangle addr 0x2e79ad8 size 0x100 virtual false final false
static inline void Rectangle(::UnityEngine::UIElements::MeshGenerationContext*  mgc, ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams  rectParams) ;

/// @brief Method Text addr 0x2e79bd8 size 0x134 virtual false final false
static inline void Text(::UnityEngine::UIElements::MeshGenerationContext*  mgc, ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams  textParams, ::UnityEngine::UIElements::ITextHandle*  handle, float_t  pixelsPerPoint) ;

/// @brief Method ConvertBorderRadiusPercentToPoints addr 0x2e79d0c size 0x3c virtual false final false
static inline ::UnityEngine::Vector2 ConvertBorderRadiusPercentToPoints(::UnityEngine::Vector2  borderRectSize, ::UnityEngine::UIElements::Length  length) ;

/// @brief Method GetVisualElementRadii addr 0x2e79d48 size 0x29c virtual false final false
static inline void GetVisualElementRadii(::UnityEngine::UIElements::VisualElement*  ve, ByRef<::UnityEngine::Vector2>  topLeft, ByRef<::UnityEngine::Vector2>  bottomLeft, ByRef<::UnityEngine::Vector2>  topRight, ByRef<::UnityEngine::Vector2>  bottomRight) ;

/// @brief Method AdjustBackgroundSizeForBorders addr 0x2e79fe4 size 0x454 virtual false final false
static inline void AdjustBackgroundSizeForBorders(::UnityEngine::UIElements::VisualElement*  visualElement, ByRef<::UnityEngine::Rect>  rect) ;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContextUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshGenerationContextUtils(MeshGenerationContextUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContextUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshGenerationContextUtils(MeshGenerationContextUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MeshGenerationContextUtils()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationContextUtils, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationContextUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContextUtils*, "UnityEngine.UIElements", "MeshGenerationContextUtils");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/BorderParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/RectangleParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/TextParams");
