#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerationSettings)
namespace UnityEngine {
struct VerticalWrapMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct TextAnchor;
}
// Forward declare root types
namespace UnityEngine {
struct TextGenerationSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextGenerationSettings);
// Type: UnityEngine::TextGenerationSettings
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15898))
// CS Name: ::UnityEngine::TextGenerationSettings
struct CORDL_TYPE TextGenerationSettings : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field font offset 0x0
 __declspec(property(get=__get_font, put=__set_font)) ::UnityEngine::Font*  font;

/// @brief Field color offset 0x8
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field fontSize offset 0x18
 __declspec(property(get=__get_fontSize, put=__set_fontSize)) int32_t  fontSize;

/// @brief Field lineSpacing offset 0x1c
 __declspec(property(get=__get_lineSpacing, put=__set_lineSpacing)) float_t  lineSpacing;

/// @brief Field richText offset 0x20
 __declspec(property(get=__get_richText, put=__set_richText)) bool  richText;

/// @brief Field scaleFactor offset 0x24
 __declspec(property(get=__get_scaleFactor, put=__set_scaleFactor)) float_t  scaleFactor;

/// @brief Field fontStyle offset 0x28
 __declspec(property(get=__get_fontStyle, put=__set_fontStyle)) ::UnityEngine::FontStyle  fontStyle;

/// @brief Field textAnchor offset 0x2c
 __declspec(property(get=__get_textAnchor, put=__set_textAnchor)) ::UnityEngine::TextAnchor  textAnchor;

/// @brief Field alignByGeometry offset 0x30
 __declspec(property(get=__get_alignByGeometry, put=__set_alignByGeometry)) bool  alignByGeometry;

/// @brief Field resizeTextForBestFit offset 0x31
 __declspec(property(get=__get_resizeTextForBestFit, put=__set_resizeTextForBestFit)) bool  resizeTextForBestFit;

/// @brief Field resizeTextMinSize offset 0x34
 __declspec(property(get=__get_resizeTextMinSize, put=__set_resizeTextMinSize)) int32_t  resizeTextMinSize;

/// @brief Field resizeTextMaxSize offset 0x38
 __declspec(property(get=__get_resizeTextMaxSize, put=__set_resizeTextMaxSize)) int32_t  resizeTextMaxSize;

/// @brief Field updateBounds offset 0x3c
 __declspec(property(get=__get_updateBounds, put=__set_updateBounds)) bool  updateBounds;

/// @brief Field verticalOverflow offset 0x40
 __declspec(property(get=__get_verticalOverflow, put=__set_verticalOverflow)) ::UnityEngine::VerticalWrapMode  verticalOverflow;

/// @brief Field horizontalOverflow offset 0x44
 __declspec(property(get=__get_horizontalOverflow, put=__set_horizontalOverflow)) ::UnityEngine::HorizontalWrapMode  horizontalOverflow;

/// @brief Field generationExtents offset 0x48
 __declspec(property(get=__get_generationExtents, put=__set_generationExtents)) ::UnityEngine::Vector2  generationExtents;

/// @brief Field pivot offset 0x50
 __declspec(property(get=__get_pivot, put=__set_pivot)) ::UnityEngine::Vector2  pivot;

/// @brief Field generateOutOfBounds offset 0x58
 __declspec(property(get=__get_generateOutOfBounds, put=__set_generateOutOfBounds)) bool  generateOutOfBounds;

constexpr void __set_font(::UnityEngine::Font*  value) ;

constexpr ::UnityEngine::Font* __get_font() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> __get_font() const;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_fontSize(int32_t  value) ;

constexpr int32_t& __get_fontSize() ;

constexpr int32_t const& __get_fontSize() const;

constexpr void __set_lineSpacing(float_t  value) ;

constexpr float_t& __get_lineSpacing() ;

constexpr float_t const& __get_lineSpacing() const;

constexpr void __set_richText(bool  value) ;

constexpr bool& __get_richText() ;

constexpr bool const& __get_richText() const;

constexpr void __set_scaleFactor(float_t  value) ;

constexpr float_t& __get_scaleFactor() ;

constexpr float_t const& __get_scaleFactor() const;

constexpr void __set_fontStyle(::UnityEngine::FontStyle  value) ;

constexpr ::UnityEngine::FontStyle& __get_fontStyle() ;

constexpr ::UnityEngine::FontStyle const& __get_fontStyle() const;

constexpr void __set_textAnchor(::UnityEngine::TextAnchor  value) ;

constexpr ::UnityEngine::TextAnchor& __get_textAnchor() ;

constexpr ::UnityEngine::TextAnchor const& __get_textAnchor() const;

constexpr void __set_alignByGeometry(bool  value) ;

constexpr bool& __get_alignByGeometry() ;

constexpr bool const& __get_alignByGeometry() const;

constexpr void __set_resizeTextForBestFit(bool  value) ;

constexpr bool& __get_resizeTextForBestFit() ;

constexpr bool const& __get_resizeTextForBestFit() const;

constexpr void __set_resizeTextMinSize(int32_t  value) ;

constexpr int32_t& __get_resizeTextMinSize() ;

constexpr int32_t const& __get_resizeTextMinSize() const;

constexpr void __set_resizeTextMaxSize(int32_t  value) ;

constexpr int32_t& __get_resizeTextMaxSize() ;

constexpr int32_t const& __get_resizeTextMaxSize() const;

constexpr void __set_updateBounds(bool  value) ;

constexpr bool& __get_updateBounds() ;

constexpr bool const& __get_updateBounds() const;

constexpr void __set_verticalOverflow(::UnityEngine::VerticalWrapMode  value) ;

constexpr ::UnityEngine::VerticalWrapMode& __get_verticalOverflow() ;

constexpr ::UnityEngine::VerticalWrapMode const& __get_verticalOverflow() const;

constexpr void __set_horizontalOverflow(::UnityEngine::HorizontalWrapMode  value) ;

constexpr ::UnityEngine::HorizontalWrapMode& __get_horizontalOverflow() ;

constexpr ::UnityEngine::HorizontalWrapMode const& __get_horizontalOverflow() const;

constexpr void __set_generationExtents(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_generationExtents() ;

constexpr ::UnityEngine::Vector2 const& __get_generationExtents() const;

constexpr void __set_pivot(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_pivot() ;

constexpr ::UnityEngine::Vector2 const& __get_pivot() const;

constexpr void __set_generateOutOfBounds(bool  value) ;

constexpr bool& __get_generateOutOfBounds() ;

constexpr bool const& __get_generateOutOfBounds() const;

/// @brief Method CompareColors addr 0x2d4dab8 size 0x138 virtual false final false
inline bool CompareColors(::UnityEngine::Color  left, ::UnityEngine::Color  right) ;

/// @brief Method CompareVector2 addr 0x2d4dbf0 size 0xc8 virtual false final false
inline bool CompareVector2(::UnityEngine::Vector2  left, ::UnityEngine::Vector2  right) ;

/// @brief Method Equals addr 0x2d4dcb8 size 0x220 virtual false final false
inline bool Equals(::UnityEngine::TextGenerationSettings  other) ;

// Ctor Parameters [CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineSpacing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scaleFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "textAnchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "alignByGeometry", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resizeTextForBestFit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resizeTextMinSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resizeTextMaxSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "updateBounds", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "verticalOverflow", ty: "::UnityEngine::VerticalWrapMode", modifiers: "", def_value: None }, CppParam { name: "horizontalOverflow", ty: "::UnityEngine::HorizontalWrapMode", modifiers: "", def_value: None }, CppParam { name: "generationExtents", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "generateOutOfBounds", ty: "bool", modifiers: "", def_value: None }]
constexpr TextGenerationSettings(::UnityEngine::Font*  font, ::UnityEngine::Color  color, int32_t  fontSize, float_t  lineSpacing, bool  richText, float_t  scaleFactor, ::UnityEngine::FontStyle  fontStyle, ::UnityEngine::TextAnchor  textAnchor, bool  alignByGeometry, bool  resizeTextForBestFit, int32_t  resizeTextMinSize, int32_t  resizeTextMaxSize, bool  updateBounds, ::UnityEngine::VerticalWrapMode  verticalOverflow, ::UnityEngine::HorizontalWrapMode  horizontalOverflow, ::UnityEngine::Vector2  generationExtents, ::UnityEngine::Vector2  pivot, bool  generateOutOfBounds) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextGenerationSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextGenerationSettings()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextGenerationSettings, 0x60>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGenerationSettings, "UnityEngine", "TextGenerationSettings");
