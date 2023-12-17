#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontStyleStack)
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontStyleStack;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::FontStyleStack);
// Type: UnityEngine.TextCore.Text::FontStyleStack
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13726))
// CS Name: ::UnityEngine.TextCore.Text::FontStyleStack
struct CORDL_TYPE FontStyleStack : public ::bs_hook::ValueTypeWrapper<0xa> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa};

/// @brief Field bold offset 0x0
 __declspec(property(get=__get_bold, put=__set_bold)) uint8_t  bold;

/// @brief Field italic offset 0x1
 __declspec(property(get=__get_italic, put=__set_italic)) uint8_t  italic;

/// @brief Field underline offset 0x2
 __declspec(property(get=__get_underline, put=__set_underline)) uint8_t  underline;

/// @brief Field strikethrough offset 0x3
 __declspec(property(get=__get_strikethrough, put=__set_strikethrough)) uint8_t  strikethrough;

/// @brief Field highlight offset 0x4
 __declspec(property(get=__get_highlight, put=__set_highlight)) uint8_t  highlight;

/// @brief Field superscript offset 0x5
 __declspec(property(get=__get_superscript, put=__set_superscript)) uint8_t  superscript;

/// @brief Field subscript offset 0x6
 __declspec(property(get=__get_subscript, put=__set_subscript)) uint8_t  subscript;

/// @brief Field uppercase offset 0x7
 __declspec(property(get=__get_uppercase, put=__set_uppercase)) uint8_t  uppercase;

/// @brief Field lowercase offset 0x8
 __declspec(property(get=__get_lowercase, put=__set_lowercase)) uint8_t  lowercase;

/// @brief Field smallcaps offset 0x9
 __declspec(property(get=__get_smallcaps, put=__set_smallcaps)) uint8_t  smallcaps;

constexpr void __set_bold(uint8_t  value) ;

constexpr uint8_t& __get_bold() ;

constexpr uint8_t const& __get_bold() const;

constexpr void __set_italic(uint8_t  value) ;

constexpr uint8_t& __get_italic() ;

constexpr uint8_t const& __get_italic() const;

constexpr void __set_underline(uint8_t  value) ;

constexpr uint8_t& __get_underline() ;

constexpr uint8_t const& __get_underline() const;

constexpr void __set_strikethrough(uint8_t  value) ;

constexpr uint8_t& __get_strikethrough() ;

constexpr uint8_t const& __get_strikethrough() const;

constexpr void __set_highlight(uint8_t  value) ;

constexpr uint8_t& __get_highlight() ;

constexpr uint8_t const& __get_highlight() const;

constexpr void __set_superscript(uint8_t  value) ;

constexpr uint8_t& __get_superscript() ;

constexpr uint8_t const& __get_superscript() const;

constexpr void __set_subscript(uint8_t  value) ;

constexpr uint8_t& __get_subscript() ;

constexpr uint8_t const& __get_subscript() const;

constexpr void __set_uppercase(uint8_t  value) ;

constexpr uint8_t& __get_uppercase() ;

constexpr uint8_t const& __get_uppercase() const;

constexpr void __set_lowercase(uint8_t  value) ;

constexpr uint8_t& __get_lowercase() ;

constexpr uint8_t const& __get_lowercase() const;

constexpr void __set_smallcaps(uint8_t  value) ;

constexpr uint8_t& __get_smallcaps() ;

constexpr uint8_t const& __get_smallcaps() const;

/// @brief Method Clear addr 0x2d4a820 size 0xc virtual false final false
inline void Clear() ;

/// @brief Method Add addr 0x2d4a82c size 0xfc virtual false final false
inline uint8_t Add(::UnityEngine::TextCore::Text::FontStyles  style) ;

/// @brief Method Remove addr 0x2d4a928 size 0x120 virtual false final false
inline uint8_t Remove(::UnityEngine::TextCore::Text::FontStyles  style) ;

// Ctor Parameters [CppParam { name: "bold", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "italic", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "underline", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "strikethrough", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "highlight", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "superscript", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "subscript", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "uppercase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "lowercase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "smallcaps", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr FontStyleStack(uint8_t  bold, uint8_t  italic, uint8_t  underline, uint8_t  strikethrough, uint8_t  highlight, uint8_t  superscript, uint8_t  subscript, uint8_t  uppercase, uint8_t  lowercase, uint8_t  smallcaps) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FontStyleStack(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xa>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FontStyleStack()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontStyleStack, 0xa>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontStyleStack, "UnityEngine.TextCore.Text", "FontStyleStack");
