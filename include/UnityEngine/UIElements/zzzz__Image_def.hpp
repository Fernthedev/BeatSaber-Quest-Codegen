#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Image)
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class __Image__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class __Image__UxmlFactory;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Image;
}
namespace UnityEngine::UIElements {
class __Image__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Image__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Image);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Image__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Image__UxmlTraits);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6737))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7080))
// CS Name: ::Image::UxmlTraits*
class CORDL_TYPE __Image__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::UIElements::__VisualElement__UxmlTraits)]{};

static inline ::UnityEngine::UIElements::__Image__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e32988 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Image__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Image__UxmlTraits(__Image__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Image__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Image__UxmlTraits(__Image__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Image__UxmlTraits()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Image__UxmlTraits, 0x70>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Image
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6744))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7081))
// CS Name: ::UnityEngine.UIElements::Image*
class CORDL_TYPE Image : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__Image__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__Image__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x3f8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x3f8 - sizeof(::UnityEngine::UIElements::VisualElement)]{};

/// @brief Field m_ScaleMode offset 0x3b0
 __declspec(property(get=__get_m_ScaleMode, put=__set_m_ScaleMode)) ::UnityEngine::ScaleMode  m_ScaleMode;

/// @brief Field m_Image offset 0x3b8
 __declspec(property(get=__get_m_Image, put=__set_m_Image)) ::UnityEngine::Texture*  m_Image;

/// @brief Field m_Sprite offset 0x3c0
 __declspec(property(get=__get_m_Sprite, put=__set_m_Sprite)) ::UnityEngine::Sprite*  m_Sprite;

/// @brief Field m_VectorImage offset 0x3c8
 __declspec(property(get=__get_m_VectorImage, put=__set_m_VectorImage)) ::UnityEngine::UIElements::VectorImage*  m_VectorImage;

/// @brief Field m_UV offset 0x3d0
 __declspec(property(get=__get_m_UV, put=__set_m_UV)) ::UnityEngine::Rect  m_UV;

/// @brief Field m_TintColor offset 0x3e0
 __declspec(property(get=__get_m_TintColor, put=__set_m_TintColor)) ::UnityEngine::Color  m_TintColor;

/// @brief Field m_ImageIsInline offset 0x3f0
 __declspec(property(get=__get_m_ImageIsInline, put=__set_m_ImageIsInline)) bool  m_ImageIsInline;

/// @brief Field m_ScaleModeIsInline offset 0x3f1
 __declspec(property(get=__get_m_ScaleModeIsInline, put=__set_m_ScaleModeIsInline)) bool  m_ScaleModeIsInline;

/// @brief Field m_TintColorIsInline offset 0x3f2
 __declspec(property(get=__get_m_TintColorIsInline, put=__set_m_TintColorIsInline)) bool  m_TintColorIsInline;

 __declspec(property(get=get_image)) ::UnityEngine::Texture*  image;

 __declspec(property(get=get_sprite)) ::UnityEngine::Sprite*  sprite;

 __declspec(property(get=get_vectorImage)) ::UnityEngine::UIElements::VectorImage*  vectorImage;

 __declspec(property(get=get_sourceRect)) ::UnityEngine::Rect  sourceRect;

 __declspec(property(get=get_uv)) ::UnityEngine::Rect  uv;

 __declspec(property(get=get_scaleMode)) ::UnityEngine::ScaleMode  scaleMode;

 __declspec(property(get=get_tintColor)) ::UnityEngine::Color  tintColor;

constexpr void __set_m_ScaleMode(::UnityEngine::ScaleMode  value) ;

constexpr ::UnityEngine::ScaleMode& __get_m_ScaleMode() ;

constexpr ::UnityEngine::ScaleMode const& __get_m_ScaleMode() const;

constexpr void __set_m_Image(::UnityEngine::Texture*  value) ;

constexpr ::UnityEngine::Texture* __get_m_Image() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> __get_m_Image() const;

constexpr void __set_m_Sprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_m_Sprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_m_Sprite() const;

constexpr void __set_m_VectorImage(::UnityEngine::UIElements::VectorImage*  value) ;

constexpr ::UnityEngine::UIElements::VectorImage* __get_m_VectorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VectorImage*> __get_m_VectorImage() const;

constexpr void __set_m_UV(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_m_UV() ;

constexpr ::UnityEngine::Rect const& __get_m_UV() const;

constexpr void __set_m_TintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_TintColor() ;

constexpr ::UnityEngine::Color const& __get_m_TintColor() const;

constexpr void __set_m_ImageIsInline(bool  value) ;

constexpr bool& __get_m_ImageIsInline() ;

constexpr bool const& __get_m_ImageIsInline() const;

constexpr void __set_m_ScaleModeIsInline(bool  value) ;

constexpr bool& __get_m_ScaleModeIsInline() ;

constexpr bool const& __get_m_ScaleModeIsInline() const;

constexpr void __set_m_TintColorIsInline(bool  value) ;

constexpr bool& __get_m_TintColorIsInline() ;

constexpr bool const& __get_m_TintColorIsInline() const;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_s_ImageProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Texture2D*>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Texture2D*> getStaticF_s_ImageProperty() ;

static inline void setStaticF_s_SpriteProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Sprite*>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Sprite*> getStaticF_s_SpriteProperty() ;

static inline void setStaticF_s_VectorImageProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::UIElements::VectorImage*>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::UIElements::VectorImage*> getStaticF_s_VectorImageProperty() ;

static inline void setStaticF_s_ScaleModeProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::StringW>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> getStaticF_s_ScaleModeProperty() ;

static inline void setStaticF_s_TintColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>  value) ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> getStaticF_s_TintColorProperty() ;

/// @brief Method get_image addr 0x2e315dc size 0x8 virtual false final false
inline ::UnityEngine::Texture* get_image() ;

/// @brief Method get_sprite addr 0x2e315e4 size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_sprite() ;

/// @brief Method get_vectorImage addr 0x2e315ec size 0x8 virtual false final false
inline ::UnityEngine::UIElements::VectorImage* get_vectorImage() ;

/// @brief Method get_sourceRect addr 0x2e315f4 size 0x4 virtual false final false
inline ::UnityEngine::Rect get_sourceRect() ;

/// @brief Method get_uv addr 0x2e3183c size 0x14 virtual false final false
inline ::UnityEngine::Rect get_uv() ;

/// @brief Method get_scaleMode addr 0x2e31850 size 0x8 virtual false final false
inline ::UnityEngine::ScaleMode get_scaleMode() ;

/// @brief Method get_tintColor addr 0x2e31858 size 0x14 virtual false final false
inline ::UnityEngine::Color get_tintColor() ;

static inline ::UnityEngine::UIElements::Image* New_ctor() ;

/// @brief Method .ctor addr 0x2e3186c size 0x1e8 virtual false final false
inline void _ctor() ;

/// @brief Method GetTextureDisplaySize addr 0x2e31a54 size 0xdc virtual false final false
inline ::UnityEngine::Vector2 GetTextureDisplaySize(::UnityEngine::Texture*  texture) ;

/// @brief Method GetTextureDisplaySize addr 0x2e31b30 size 0x108 virtual false final false
inline ::UnityEngine::Vector2 GetTextureDisplaySize(::UnityEngine::Sprite*  sprite) ;

/// @brief Method DoMeasure addr 0x2e31c38 size 0x244 virtual true final false
inline ::UnityEngine::Vector2 DoMeasure(float_t  desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode  widthMode, float_t  desiredHeight, ::UnityEngine::UIElements::__VisualElement__MeasureMode  heightMode) ;

/// @brief Method OnGenerateVisualContent addr 0x2e31e7c size 0x4cc virtual false final false
inline void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext*  mgc) ;

/// @brief Method OnCustomStyleResolved addr 0x2e32348 size 0x3f8 virtual false final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  e) ;

/// @brief Method SetScaleMode addr 0x2e32740 size 0x24 virtual false final false
inline void SetScaleMode(::UnityEngine::ScaleMode  mode) ;

/// @brief Method GetSourceRect addr 0x2e315f8 size 0x244 virtual false final false
inline ::UnityEngine::Rect GetSourceRect() ;

// Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Image(Image && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Image(Image const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Image()  = default;
public:


// Fields

// Static field ussClassName

// Static field s_ImageProperty

// Static field s_SpriteProperty

// Static field s_VectorImageProperty

// Static field s_ScaleModeProperty

// Static field s_TintColorProperty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Image, 0x3f8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7081)), TypeDefinitionIndex(TypeDefinitionIndex(7080)), TypeDefinitionIndex(TypeDefinitionIndex(6997)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5264 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7079))
// CS Name: ::Image::UxmlFactory*
class CORDL_TYPE __Image__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Image*,::UnityEngine::UIElements::__Image__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Image*,::UnityEngine::UIElements::__Image__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__Image__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e32940 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Image__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Image__UxmlFactory(__Image__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Image__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Image__UxmlFactory(__Image__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Image__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Image__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Image);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Image*, "UnityEngine.UIElements", "Image");
NEED_NO_BOX(::UnityEngine::UIElements::__Image__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Image__UxmlFactory*, "UnityEngine.UIElements", "Image/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Image__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Image__UxmlTraits*, "UnityEngine.UIElements", "Image/UxmlTraits");
