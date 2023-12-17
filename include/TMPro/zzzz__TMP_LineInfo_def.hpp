#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_LineInfo)
namespace TMPro {
struct Extents;
}
namespace TMPro {
struct HorizontalAlignmentOptions;
}
// Forward declare root types
namespace TMPro {
struct TMP_LineInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_LineInfo);
// Type: TMPro::TMP_LineInfo
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12394))
// CS Name: ::TMPro::TMP_LineInfo
struct CORDL_TYPE TMP_LineInfo : public ::bs_hook::ValueTypeWrapper<0x5c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x5c};

/// @brief Field controlCharacterCount offset 0x0
 __declspec(property(get=__get_controlCharacterCount, put=__set_controlCharacterCount)) int32_t  controlCharacterCount;

/// @brief Field characterCount offset 0x4
 __declspec(property(get=__get_characterCount, put=__set_characterCount)) int32_t  characterCount;

/// @brief Field visibleCharacterCount offset 0x8
 __declspec(property(get=__get_visibleCharacterCount, put=__set_visibleCharacterCount)) int32_t  visibleCharacterCount;

/// @brief Field spaceCount offset 0xc
 __declspec(property(get=__get_spaceCount, put=__set_spaceCount)) int32_t  spaceCount;

/// @brief Field wordCount offset 0x10
 __declspec(property(get=__get_wordCount, put=__set_wordCount)) int32_t  wordCount;

/// @brief Field firstCharacterIndex offset 0x14
 __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex)) int32_t  firstCharacterIndex;

/// @brief Field firstVisibleCharacterIndex offset 0x18
 __declspec(property(get=__get_firstVisibleCharacterIndex, put=__set_firstVisibleCharacterIndex)) int32_t  firstVisibleCharacterIndex;

/// @brief Field lastCharacterIndex offset 0x1c
 __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex)) int32_t  lastCharacterIndex;

/// @brief Field lastVisibleCharacterIndex offset 0x20
 __declspec(property(get=__get_lastVisibleCharacterIndex, put=__set_lastVisibleCharacterIndex)) int32_t  lastVisibleCharacterIndex;

/// @brief Field length offset 0x24
 __declspec(property(get=__get_length, put=__set_length)) float_t  length;

/// @brief Field lineHeight offset 0x28
 __declspec(property(get=__get_lineHeight, put=__set_lineHeight)) float_t  lineHeight;

/// @brief Field ascender offset 0x2c
 __declspec(property(get=__get_ascender, put=__set_ascender)) float_t  ascender;

/// @brief Field baseline offset 0x30
 __declspec(property(get=__get_baseline, put=__set_baseline)) float_t  baseline;

/// @brief Field descender offset 0x34
 __declspec(property(get=__get_descender, put=__set_descender)) float_t  descender;

/// @brief Field maxAdvance offset 0x38
 __declspec(property(get=__get_maxAdvance, put=__set_maxAdvance)) float_t  maxAdvance;

/// @brief Field width offset 0x3c
 __declspec(property(get=__get_width, put=__set_width)) float_t  width;

/// @brief Field marginLeft offset 0x40
 __declspec(property(get=__get_marginLeft, put=__set_marginLeft)) float_t  marginLeft;

/// @brief Field marginRight offset 0x44
 __declspec(property(get=__get_marginRight, put=__set_marginRight)) float_t  marginRight;

/// @brief Field alignment offset 0x48
 __declspec(property(get=__get_alignment, put=__set_alignment)) ::TMPro::HorizontalAlignmentOptions  alignment;

/// @brief Field lineExtents offset 0x4c
 __declspec(property(get=__get_lineExtents, put=__set_lineExtents)) ::TMPro::Extents  lineExtents;

constexpr void __set_controlCharacterCount(int32_t  value) ;

constexpr int32_t& __get_controlCharacterCount() ;

constexpr int32_t const& __get_controlCharacterCount() const;

constexpr void __set_characterCount(int32_t  value) ;

constexpr int32_t& __get_characterCount() ;

constexpr int32_t const& __get_characterCount() const;

constexpr void __set_visibleCharacterCount(int32_t  value) ;

constexpr int32_t& __get_visibleCharacterCount() ;

constexpr int32_t const& __get_visibleCharacterCount() const;

constexpr void __set_spaceCount(int32_t  value) ;

constexpr int32_t& __get_spaceCount() ;

constexpr int32_t const& __get_spaceCount() const;

constexpr void __set_wordCount(int32_t  value) ;

constexpr int32_t& __get_wordCount() ;

constexpr int32_t const& __get_wordCount() const;

constexpr void __set_firstCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_firstCharacterIndex() ;

constexpr int32_t const& __get_firstCharacterIndex() const;

constexpr void __set_firstVisibleCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_firstVisibleCharacterIndex() ;

constexpr int32_t const& __get_firstVisibleCharacterIndex() const;

constexpr void __set_lastCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_lastCharacterIndex() ;

constexpr int32_t const& __get_lastCharacterIndex() const;

constexpr void __set_lastVisibleCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_lastVisibleCharacterIndex() ;

constexpr int32_t const& __get_lastVisibleCharacterIndex() const;

constexpr void __set_length(float_t  value) ;

constexpr float_t& __get_length() ;

constexpr float_t const& __get_length() const;

constexpr void __set_lineHeight(float_t  value) ;

constexpr float_t& __get_lineHeight() ;

constexpr float_t const& __get_lineHeight() const;

constexpr void __set_ascender(float_t  value) ;

constexpr float_t& __get_ascender() ;

constexpr float_t const& __get_ascender() const;

constexpr void __set_baseline(float_t  value) ;

constexpr float_t& __get_baseline() ;

constexpr float_t const& __get_baseline() const;

constexpr void __set_descender(float_t  value) ;

constexpr float_t& __get_descender() ;

constexpr float_t const& __get_descender() const;

constexpr void __set_maxAdvance(float_t  value) ;

constexpr float_t& __get_maxAdvance() ;

constexpr float_t const& __get_maxAdvance() const;

constexpr void __set_width(float_t  value) ;

constexpr float_t& __get_width() ;

constexpr float_t const& __get_width() const;

constexpr void __set_marginLeft(float_t  value) ;

constexpr float_t& __get_marginLeft() ;

constexpr float_t const& __get_marginLeft() const;

constexpr void __set_marginRight(float_t  value) ;

constexpr float_t& __get_marginRight() ;

constexpr float_t const& __get_marginRight() const;

constexpr void __set_alignment(::TMPro::HorizontalAlignmentOptions  value) ;

constexpr ::TMPro::HorizontalAlignmentOptions& __get_alignment() ;

constexpr ::TMPro::HorizontalAlignmentOptions const& __get_alignment() const;

constexpr void __set_lineExtents(::TMPro::Extents  value) ;

constexpr ::TMPro::Extents& __get_lineExtents() ;

constexpr ::TMPro::Extents const& __get_lineExtents() const;

// Ctor Parameters [CppParam { name: "controlCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "spaceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseline", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "alignment", ty: "::TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: None }, CppParam { name: "lineExtents", ty: "::TMPro::Extents", modifiers: "", def_value: None }]
constexpr TMP_LineInfo(int32_t  controlCharacterCount, int32_t  characterCount, int32_t  visibleCharacterCount, int32_t  spaceCount, int32_t  wordCount, int32_t  firstCharacterIndex, int32_t  firstVisibleCharacterIndex, int32_t  lastCharacterIndex, int32_t  lastVisibleCharacterIndex, float_t  length, float_t  lineHeight, float_t  ascender, float_t  baseline, float_t  descender, float_t  maxAdvance, float_t  width, float_t  marginLeft, float_t  marginRight, ::TMPro::HorizontalAlignmentOptions  alignment, ::TMPro::Extents  lineExtents) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_LineInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x5c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_LineInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_LineInfo, 0x5c>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_LineInfo, "TMPro", "TMP_LineInfo");
