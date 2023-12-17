#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CursorPositionStylePainterParameters)
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CursorPositionStylePainterParameters);
// Type: UnityEngine.UIElements::CursorPositionStylePainterParameters
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6770))
// CS Name: ::UnityEngine.UIElements::CursorPositionStylePainterParameters
struct CORDL_TYPE CursorPositionStylePainterParameters : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field rect offset 0x0
 __declspec(property(get=__get_rect, put=__set_rect)) ::UnityEngine::Rect  rect;

/// @brief Field text offset 0x10
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field font offset 0x18
 __declspec(property(get=__get_font, put=__set_font)) ::UnityEngine::Font*  font;

/// @brief Field fontSize offset 0x20
 __declspec(property(get=__get_fontSize, put=__set_fontSize)) int32_t  fontSize;

/// @brief Field fontStyle offset 0x24
 __declspec(property(get=__get_fontStyle, put=__set_fontStyle)) ::UnityEngine::FontStyle  fontStyle;

/// @brief Field anchor offset 0x28
 __declspec(property(get=__get_anchor, put=__set_anchor)) ::UnityEngine::TextAnchor  anchor;

/// @brief Field wordWrapWidth offset 0x2c
 __declspec(property(get=__get_wordWrapWidth, put=__set_wordWrapWidth)) float_t  wordWrapWidth;

/// @brief Field richText offset 0x30
 __declspec(property(get=__get_richText, put=__set_richText)) bool  richText;

/// @brief Field cursorIndex offset 0x34
 __declspec(property(get=__get_cursorIndex, put=__set_cursorIndex)) int32_t  cursorIndex;

constexpr void __set_rect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_rect() ;

constexpr ::UnityEngine::Rect const& __get_rect() const;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_font(::UnityEngine::Font*  value) ;

constexpr ::UnityEngine::Font* __get_font() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> __get_font() const;

constexpr void __set_fontSize(int32_t  value) ;

constexpr int32_t& __get_fontSize() ;

constexpr int32_t const& __get_fontSize() const;

constexpr void __set_fontStyle(::UnityEngine::FontStyle  value) ;

constexpr ::UnityEngine::FontStyle& __get_fontStyle() ;

constexpr ::UnityEngine::FontStyle const& __get_fontStyle() const;

constexpr void __set_anchor(::UnityEngine::TextAnchor  value) ;

constexpr ::UnityEngine::TextAnchor& __get_anchor() ;

constexpr ::UnityEngine::TextAnchor const& __get_anchor() const;

constexpr void __set_wordWrapWidth(float_t  value) ;

constexpr float_t& __get_wordWrapWidth() ;

constexpr float_t const& __get_wordWrapWidth() const;

constexpr void __set_richText(bool  value) ;

constexpr bool& __get_richText() ;

constexpr bool const& __get_richText() const;

constexpr void __set_cursorIndex(int32_t  value) ;

constexpr int32_t& __get_cursorIndex() ;

constexpr int32_t const& __get_cursorIndex() const;

/// @brief Method GetDefault addr 0x2db6de0 size 0x148 virtual false final false
static inline ::UnityEngine::UIElements::CursorPositionStylePainterParameters GetDefault(::UnityEngine::UIElements::VisualElement*  ve, ::StringW  text) ;

/// @brief Method GetTextNativeSettings addr 0x2db6f28 size 0x50 virtual false final false
inline ::UnityEngine::UIElements::TextNativeSettings GetTextNativeSettings(float_t  scaling) ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cursorIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CursorPositionStylePainterParameters(::UnityEngine::Rect  rect, ::StringW  text, ::UnityEngine::Font*  font, int32_t  fontSize, ::UnityEngine::FontStyle  fontStyle, ::UnityEngine::TextAnchor  anchor, float_t  wordWrapWidth, bool  richText, int32_t  cursorIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CursorPositionStylePainterParameters(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CursorPositionStylePainterParameters()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CursorPositionStylePainterParameters, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CursorPositionStylePainterParameters, "UnityEngine.UIElements", "CursorPositionStylePainterParameters");
