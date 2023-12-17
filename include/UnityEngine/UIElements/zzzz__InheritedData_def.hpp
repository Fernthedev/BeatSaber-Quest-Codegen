#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InheritedData)
namespace System {
class Object;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace UnityEngine {
class Font;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct InheritedData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::InheritedData);
// Type: UnityEngine.UIElements::InheritedData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7356))
// CS Name: ::UnityEngine.UIElements::InheritedData
struct CORDL_TYPE InheritedData : public ::bs_hook::ValueTypeWrapper<0x90> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field color offset 0x0
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field fontSize offset 0x10
 __declspec(property(get=__get_fontSize, put=__set_fontSize)) ::UnityEngine::UIElements::Length  fontSize;

/// @brief Field letterSpacing offset 0x18
 __declspec(property(get=__get_letterSpacing, put=__set_letterSpacing)) ::UnityEngine::UIElements::Length  letterSpacing;

/// @brief Field textShadow offset 0x20
 __declspec(property(get=__get_textShadow, put=__set_textShadow)) ::UnityEngine::UIElements::TextShadow  textShadow;

/// @brief Field unityFont offset 0x40
 __declspec(property(get=__get_unityFont, put=__set_unityFont)) ::UnityEngine::Font*  unityFont;

/// @brief Field unityFontDefinition offset 0x48
 __declspec(property(get=__get_unityFontDefinition, put=__set_unityFontDefinition)) ::UnityEngine::UIElements::FontDefinition  unityFontDefinition;

/// @brief Field unityFontStyleAndWeight offset 0x58
 __declspec(property(get=__get_unityFontStyleAndWeight, put=__set_unityFontStyleAndWeight)) ::UnityEngine::FontStyle  unityFontStyleAndWeight;

/// @brief Field unityParagraphSpacing offset 0x5c
 __declspec(property(get=__get_unityParagraphSpacing, put=__set_unityParagraphSpacing)) ::UnityEngine::UIElements::Length  unityParagraphSpacing;

/// @brief Field unityTextAlign offset 0x64
 __declspec(property(get=__get_unityTextAlign, put=__set_unityTextAlign)) ::UnityEngine::TextAnchor  unityTextAlign;

/// @brief Field unityTextOutlineColor offset 0x68
 __declspec(property(get=__get_unityTextOutlineColor, put=__set_unityTextOutlineColor)) ::UnityEngine::Color  unityTextOutlineColor;

/// @brief Field unityTextOutlineWidth offset 0x78
 __declspec(property(get=__get_unityTextOutlineWidth, put=__set_unityTextOutlineWidth)) float_t  unityTextOutlineWidth;

/// @brief Field visibility offset 0x7c
 __declspec(property(get=__get_visibility, put=__set_visibility)) ::UnityEngine::UIElements::Visibility  visibility;

/// @brief Field whiteSpace offset 0x80
 __declspec(property(get=__get_whiteSpace, put=__set_whiteSpace)) ::UnityEngine::UIElements::WhiteSpace  whiteSpace;

/// @brief Field wordSpacing offset 0x84
 __declspec(property(get=__get_wordSpacing, put=__set_wordSpacing)) ::UnityEngine::UIElements::Length  wordSpacing;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>"
constexpr operator  ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>*() ;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_fontSize(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_fontSize() ;

constexpr ::UnityEngine::UIElements::Length const& __get_fontSize() const;

constexpr void __set_letterSpacing(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_letterSpacing() ;

constexpr ::UnityEngine::UIElements::Length const& __get_letterSpacing() const;

constexpr void __set_textShadow(::UnityEngine::UIElements::TextShadow  value) ;

constexpr ::UnityEngine::UIElements::TextShadow& __get_textShadow() ;

constexpr ::UnityEngine::UIElements::TextShadow const& __get_textShadow() const;

constexpr void __set_unityFont(::UnityEngine::Font*  value) ;

constexpr ::UnityEngine::Font* __get_unityFont() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> __get_unityFont() const;

constexpr void __set_unityFontDefinition(::UnityEngine::UIElements::FontDefinition  value) ;

constexpr ::UnityEngine::UIElements::FontDefinition& __get_unityFontDefinition() ;

constexpr ::UnityEngine::UIElements::FontDefinition const& __get_unityFontDefinition() const;

constexpr void __set_unityFontStyleAndWeight(::UnityEngine::FontStyle  value) ;

constexpr ::UnityEngine::FontStyle& __get_unityFontStyleAndWeight() ;

constexpr ::UnityEngine::FontStyle const& __get_unityFontStyleAndWeight() const;

constexpr void __set_unityParagraphSpacing(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_unityParagraphSpacing() ;

constexpr ::UnityEngine::UIElements::Length const& __get_unityParagraphSpacing() const;

constexpr void __set_unityTextAlign(::UnityEngine::TextAnchor  value) ;

constexpr ::UnityEngine::TextAnchor& __get_unityTextAlign() ;

constexpr ::UnityEngine::TextAnchor const& __get_unityTextAlign() const;

constexpr void __set_unityTextOutlineColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_unityTextOutlineColor() ;

constexpr ::UnityEngine::Color const& __get_unityTextOutlineColor() const;

constexpr void __set_unityTextOutlineWidth(float_t  value) ;

constexpr float_t& __get_unityTextOutlineWidth() ;

constexpr float_t const& __get_unityTextOutlineWidth() const;

constexpr void __set_visibility(::UnityEngine::UIElements::Visibility  value) ;

constexpr ::UnityEngine::UIElements::Visibility& __get_visibility() ;

constexpr ::UnityEngine::UIElements::Visibility const& __get_visibility() const;

constexpr void __set_whiteSpace(::UnityEngine::UIElements::WhiteSpace  value) ;

constexpr ::UnityEngine::UIElements::WhiteSpace& __get_whiteSpace() ;

constexpr ::UnityEngine::UIElements::WhiteSpace const& __get_whiteSpace() const;

constexpr void __set_wordSpacing(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_wordSpacing() ;

constexpr ::UnityEngine::UIElements::Length const& __get_wordSpacing() const;

/// @brief Method Copy addr 0x2e83514 size 0x1c virtual true final true
inline ::UnityEngine::UIElements::InheritedData Copy() ;

/// @brief Method CopyFrom addr 0x2e83530 size 0x14 virtual true final true
inline void CopyFrom(ByRef<::UnityEngine::UIElements::InheritedData>  other) ;

/// @brief Method op_Equality addr 0x2e83544 size 0x200 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::InheritedData  lhs, ::UnityEngine::UIElements::InheritedData  rhs) ;

/// @brief Method Equals addr 0x2e83744 size 0x4c virtual true final true
inline bool Equals(::UnityEngine::UIElements::InheritedData  other) ;

/// @brief Method Equals addr 0x2e83790 size 0xa8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e83838 size 0x24c virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "letterSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "textShadow", ty: "::UnityEngine::UIElements::TextShadow", modifiers: "", def_value: None }, CppParam { name: "unityFont", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "unityFontDefinition", ty: "::UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: None }, CppParam { name: "unityFontStyleAndWeight", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "unityParagraphSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "unityTextAlign", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "unityTextOutlineColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "unityTextOutlineWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "visibility", ty: "::UnityEngine::UIElements::Visibility", modifiers: "", def_value: None }, CppParam { name: "whiteSpace", ty: "::UnityEngine::UIElements::WhiteSpace", modifiers: "", def_value: None }, CppParam { name: "wordSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
constexpr InheritedData(::UnityEngine::Color  color, ::UnityEngine::UIElements::Length  fontSize, ::UnityEngine::UIElements::Length  letterSpacing, ::UnityEngine::UIElements::TextShadow  textShadow, ::UnityEngine::Font*  unityFont, ::UnityEngine::UIElements::FontDefinition  unityFontDefinition, ::UnityEngine::FontStyle  unityFontStyleAndWeight, ::UnityEngine::UIElements::Length  unityParagraphSpacing, ::UnityEngine::TextAnchor  unityTextAlign, ::UnityEngine::Color  unityTextOutlineColor, float_t  unityTextOutlineWidth, ::UnityEngine::UIElements::Visibility  visibility, ::UnityEngine::UIElements::WhiteSpace  whiteSpace, ::UnityEngine::UIElements::Length  wordSpacing) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InheritedData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x90>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InheritedData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InheritedData, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InheritedData, "UnityEngine.UIElements", "InheritedData");
