#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextNativeSettings)
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextNativeSettings);
// Type: UnityEngine.UIElements::TextNativeSettings
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15376))
// CS Name: ::UnityEngine.UIElements::TextNativeSettings
struct CORDL_TYPE TextNativeSettings : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field text offset 0x0
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field font offset 0x8
 __declspec(property(get=__get_font, put=__set_font)) ::UnityEngine::Font*  font;

/// @brief Field size offset 0x10
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field scaling offset 0x14
 __declspec(property(get=__get_scaling, put=__set_scaling)) float_t  scaling;

/// @brief Field style offset 0x18
 __declspec(property(get=__get_style, put=__set_style)) ::UnityEngine::FontStyle  style;

/// @brief Field color offset 0x1c
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field anchor offset 0x2c
 __declspec(property(get=__get_anchor, put=__set_anchor)) ::UnityEngine::TextAnchor  anchor;

/// @brief Field wordWrap offset 0x30
 __declspec(property(get=__get_wordWrap, put=__set_wordWrap)) bool  wordWrap;

/// @brief Field wordWrapWidth offset 0x34
 __declspec(property(get=__get_wordWrapWidth, put=__set_wordWrapWidth)) float_t  wordWrapWidth;

/// @brief Field richText offset 0x38
 __declspec(property(get=__get_richText, put=__set_richText)) bool  richText;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_font(::UnityEngine::Font*  value) ;

constexpr ::UnityEngine::Font* __get_font() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> __get_font() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set_scaling(float_t  value) ;

constexpr float_t& __get_scaling() ;

constexpr float_t const& __get_scaling() const;

constexpr void __set_style(::UnityEngine::FontStyle  value) ;

constexpr ::UnityEngine::FontStyle& __get_style() ;

constexpr ::UnityEngine::FontStyle const& __get_style() const;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

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

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scaling", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }]
constexpr TextNativeSettings(::StringW  text, ::UnityEngine::Font*  font, int32_t  size, float_t  scaling, ::UnityEngine::FontStyle  style, ::UnityEngine::Color  color, ::UnityEngine::TextAnchor  anchor, bool  wordWrap, float_t  wordWrapWidth, bool  richText) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextNativeSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextNativeSettings()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextNativeSettings, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextNativeSettings, "UnityEngine.UIElements", "TextNativeSettings");
