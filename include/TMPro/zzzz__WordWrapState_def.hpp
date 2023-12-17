#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WordWrapState)
namespace TMPro {
class TMP_ColorGradient;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
struct TMP_FontStyleStack;
}
namespace TMPro {
struct TMP_LineInfo;
}
namespace TMPro {
struct HorizontalAlignmentOptions;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
struct Extents;
}
namespace TMPro {
struct HighlightState;
}
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
struct FontWeight;
}
namespace TMPro {
template<typename T>
struct TMP_TextProcessingStack_1;
}
namespace TMPro {
struct MaterialReference;
}
// Forward declare root types
namespace TMPro {
struct WordWrapState;
}
// Write type traits
MARK_VAL_T(::TMPro::WordWrapState);
// Type: TMPro::WordWrapState
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12324))
// CS Name: ::TMPro::WordWrapState
struct CORDL_TYPE WordWrapState : public ::bs_hook::ValueTypeWrapper<0x378> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x378};

/// @brief Field previous_WordBreak offset 0x0
 __declspec(property(get=__get_previous_WordBreak, put=__set_previous_WordBreak)) int32_t  previous_WordBreak;

/// @brief Field total_CharacterCount offset 0x4
 __declspec(property(get=__get_total_CharacterCount, put=__set_total_CharacterCount)) int32_t  total_CharacterCount;

/// @brief Field visible_CharacterCount offset 0x8
 __declspec(property(get=__get_visible_CharacterCount, put=__set_visible_CharacterCount)) int32_t  visible_CharacterCount;

/// @brief Field visible_SpriteCount offset 0xc
 __declspec(property(get=__get_visible_SpriteCount, put=__set_visible_SpriteCount)) int32_t  visible_SpriteCount;

/// @brief Field visible_LinkCount offset 0x10
 __declspec(property(get=__get_visible_LinkCount, put=__set_visible_LinkCount)) int32_t  visible_LinkCount;

/// @brief Field firstCharacterIndex offset 0x14
 __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex)) int32_t  firstCharacterIndex;

/// @brief Field firstVisibleCharacterIndex offset 0x18
 __declspec(property(get=__get_firstVisibleCharacterIndex, put=__set_firstVisibleCharacterIndex)) int32_t  firstVisibleCharacterIndex;

/// @brief Field lastCharacterIndex offset 0x1c
 __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex)) int32_t  lastCharacterIndex;

/// @brief Field lastVisibleCharIndex offset 0x20
 __declspec(property(get=__get_lastVisibleCharIndex, put=__set_lastVisibleCharIndex)) int32_t  lastVisibleCharIndex;

/// @brief Field lineNumber offset 0x24
 __declspec(property(get=__get_lineNumber, put=__set_lineNumber)) int32_t  lineNumber;

/// @brief Field maxCapHeight offset 0x28
 __declspec(property(get=__get_maxCapHeight, put=__set_maxCapHeight)) float_t  maxCapHeight;

/// @brief Field maxAscender offset 0x2c
 __declspec(property(get=__get_maxAscender, put=__set_maxAscender)) float_t  maxAscender;

/// @brief Field maxDescender offset 0x30
 __declspec(property(get=__get_maxDescender, put=__set_maxDescender)) float_t  maxDescender;

/// @brief Field startOfLineAscender offset 0x34
 __declspec(property(get=__get_startOfLineAscender, put=__set_startOfLineAscender)) float_t  startOfLineAscender;

/// @brief Field maxLineAscender offset 0x38
 __declspec(property(get=__get_maxLineAscender, put=__set_maxLineAscender)) float_t  maxLineAscender;

/// @brief Field maxLineDescender offset 0x3c
 __declspec(property(get=__get_maxLineDescender, put=__set_maxLineDescender)) float_t  maxLineDescender;

/// @brief Field pageAscender offset 0x40
 __declspec(property(get=__get_pageAscender, put=__set_pageAscender)) float_t  pageAscender;

/// @brief Field horizontalAlignment offset 0x44
 __declspec(property(get=__get_horizontalAlignment, put=__set_horizontalAlignment)) ::TMPro::HorizontalAlignmentOptions  horizontalAlignment;

/// @brief Field marginLeft offset 0x48
 __declspec(property(get=__get_marginLeft, put=__set_marginLeft)) float_t  marginLeft;

/// @brief Field marginRight offset 0x4c
 __declspec(property(get=__get_marginRight, put=__set_marginRight)) float_t  marginRight;

/// @brief Field xAdvance offset 0x50
 __declspec(property(get=__get_xAdvance, put=__set_xAdvance)) float_t  xAdvance;

/// @brief Field preferredWidth offset 0x54
 __declspec(property(get=__get_preferredWidth, put=__set_preferredWidth)) float_t  preferredWidth;

/// @brief Field preferredHeight offset 0x58
 __declspec(property(get=__get_preferredHeight, put=__set_preferredHeight)) float_t  preferredHeight;

/// @brief Field previousLineScale offset 0x5c
 __declspec(property(get=__get_previousLineScale, put=__set_previousLineScale)) float_t  previousLineScale;

/// @brief Field wordCount offset 0x60
 __declspec(property(get=__get_wordCount, put=__set_wordCount)) int32_t  wordCount;

/// @brief Field fontStyle offset 0x64
 __declspec(property(get=__get_fontStyle, put=__set_fontStyle)) ::TMPro::FontStyles  fontStyle;

/// @brief Field italicAngle offset 0x68
 __declspec(property(get=__get_italicAngle, put=__set_italicAngle)) int32_t  italicAngle;

/// @brief Field fontScaleMultiplier offset 0x6c
 __declspec(property(get=__get_fontScaleMultiplier, put=__set_fontScaleMultiplier)) float_t  fontScaleMultiplier;

/// @brief Field currentFontSize offset 0x70
 __declspec(property(get=__get_currentFontSize, put=__set_currentFontSize)) float_t  currentFontSize;

/// @brief Field baselineOffset offset 0x74
 __declspec(property(get=__get_baselineOffset, put=__set_baselineOffset)) float_t  baselineOffset;

/// @brief Field lineOffset offset 0x78
 __declspec(property(get=__get_lineOffset, put=__set_lineOffset)) float_t  lineOffset;

/// @brief Field isDrivenLineSpacing offset 0x7c
 __declspec(property(get=__get_isDrivenLineSpacing, put=__set_isDrivenLineSpacing)) bool  isDrivenLineSpacing;

/// @brief Field glyphHorizontalAdvanceAdjustment offset 0x80
 __declspec(property(get=__get_glyphHorizontalAdvanceAdjustment, put=__set_glyphHorizontalAdvanceAdjustment)) float_t  glyphHorizontalAdvanceAdjustment;

/// @brief Field cSpace offset 0x84
 __declspec(property(get=__get_cSpace, put=__set_cSpace)) float_t  cSpace;

/// @brief Field mSpace offset 0x88
 __declspec(property(get=__get_mSpace, put=__set_mSpace)) float_t  mSpace;

/// @brief Field textInfo offset 0x90
 __declspec(property(get=__get_textInfo, put=__set_textInfo)) ::TMPro::TMP_TextInfo*  textInfo;

/// @brief Field lineInfo offset 0x98
 __declspec(property(get=__get_lineInfo, put=__set_lineInfo)) ::TMPro::TMP_LineInfo  lineInfo;

/// @brief Field vertexColor offset 0xf4
 __declspec(property(get=__get_vertexColor, put=__set_vertexColor)) ::UnityEngine::Color32  vertexColor;

/// @brief Field underlineColor offset 0xf8
 __declspec(property(get=__get_underlineColor, put=__set_underlineColor)) ::UnityEngine::Color32  underlineColor;

/// @brief Field strikethroughColor offset 0xfc
 __declspec(property(get=__get_strikethroughColor, put=__set_strikethroughColor)) ::UnityEngine::Color32  strikethroughColor;

/// @brief Field highlightColor offset 0x100
 __declspec(property(get=__get_highlightColor, put=__set_highlightColor)) ::UnityEngine::Color32  highlightColor;

/// @brief Field basicStyleStack offset 0x104
 __declspec(property(get=__get_basicStyleStack, put=__set_basicStyleStack)) ::TMPro::TMP_FontStyleStack  basicStyleStack;

/// @brief Field italicAngleStack offset 0x110
 __declspec(property(get=__get_italicAngleStack, put=__set_italicAngleStack)) ::TMPro::TMP_TextProcessingStack_1<int32_t>  italicAngleStack;

/// @brief Field colorStack offset 0x130
 __declspec(property(get=__get_colorStack, put=__set_colorStack)) ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  colorStack;

/// @brief Field underlineColorStack offset 0x150
 __declspec(property(get=__get_underlineColorStack, put=__set_underlineColorStack)) ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  underlineColorStack;

/// @brief Field strikethroughColorStack offset 0x170
 __declspec(property(get=__get_strikethroughColorStack, put=__set_strikethroughColorStack)) ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  strikethroughColorStack;

/// @brief Field highlightColorStack offset 0x190
 __declspec(property(get=__get_highlightColorStack, put=__set_highlightColorStack)) ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  highlightColorStack;

/// @brief Field highlightStateStack offset 0x1b0
 __declspec(property(get=__get_highlightStateStack, put=__set_highlightStateStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>  highlightStateStack;

/// @brief Field colorGradientStack offset 0x1e0
 __declspec(property(get=__get_colorGradientStack, put=__set_colorGradientStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*>  colorGradientStack;

/// @brief Field sizeStack offset 0x208
 __declspec(property(get=__get_sizeStack, put=__set_sizeStack)) ::TMPro::TMP_TextProcessingStack_1<float_t>  sizeStack;

/// @brief Field indentStack offset 0x228
 __declspec(property(get=__get_indentStack, put=__set_indentStack)) ::TMPro::TMP_TextProcessingStack_1<float_t>  indentStack;

/// @brief Field fontWeightStack offset 0x248
 __declspec(property(get=__get_fontWeightStack, put=__set_fontWeightStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>  fontWeightStack;

/// @brief Field styleStack offset 0x268
 __declspec(property(get=__get_styleStack, put=__set_styleStack)) ::TMPro::TMP_TextProcessingStack_1<int32_t>  styleStack;

/// @brief Field baselineStack offset 0x288
 __declspec(property(get=__get_baselineStack, put=__set_baselineStack)) ::TMPro::TMP_TextProcessingStack_1<float_t>  baselineStack;

/// @brief Field actionStack offset 0x2a8
 __declspec(property(get=__get_actionStack, put=__set_actionStack)) ::TMPro::TMP_TextProcessingStack_1<int32_t>  actionStack;

/// @brief Field materialReferenceStack offset 0x2c8
 __declspec(property(get=__get_materialReferenceStack, put=__set_materialReferenceStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>  materialReferenceStack;

/// @brief Field lineJustificationStack offset 0x320
 __declspec(property(get=__get_lineJustificationStack, put=__set_lineJustificationStack)) ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>  lineJustificationStack;

/// @brief Field spriteAnimationID offset 0x340
 __declspec(property(get=__get_spriteAnimationID, put=__set_spriteAnimationID)) int32_t  spriteAnimationID;

/// @brief Field currentFontAsset offset 0x348
 __declspec(property(get=__get_currentFontAsset, put=__set_currentFontAsset)) ::TMPro::TMP_FontAsset*  currentFontAsset;

/// @brief Field currentSpriteAsset offset 0x350
 __declspec(property(get=__get_currentSpriteAsset, put=__set_currentSpriteAsset)) ::TMPro::TMP_SpriteAsset*  currentSpriteAsset;

/// @brief Field currentMaterial offset 0x358
 __declspec(property(get=__get_currentMaterial, put=__set_currentMaterial)) ::UnityEngine::Material*  currentMaterial;

/// @brief Field currentMaterialIndex offset 0x360
 __declspec(property(get=__get_currentMaterialIndex, put=__set_currentMaterialIndex)) int32_t  currentMaterialIndex;

/// @brief Field meshExtents offset 0x364
 __declspec(property(get=__get_meshExtents, put=__set_meshExtents)) ::TMPro::Extents  meshExtents;

/// @brief Field tagNoParsing offset 0x374
 __declspec(property(get=__get_tagNoParsing, put=__set_tagNoParsing)) bool  tagNoParsing;

/// @brief Field isNonBreakingSpace offset 0x375
 __declspec(property(get=__get_isNonBreakingSpace, put=__set_isNonBreakingSpace)) bool  isNonBreakingSpace;

constexpr void __set_previous_WordBreak(int32_t  value) ;

constexpr int32_t& __get_previous_WordBreak() ;

constexpr int32_t const& __get_previous_WordBreak() const;

constexpr void __set_total_CharacterCount(int32_t  value) ;

constexpr int32_t& __get_total_CharacterCount() ;

constexpr int32_t const& __get_total_CharacterCount() const;

constexpr void __set_visible_CharacterCount(int32_t  value) ;

constexpr int32_t& __get_visible_CharacterCount() ;

constexpr int32_t const& __get_visible_CharacterCount() const;

constexpr void __set_visible_SpriteCount(int32_t  value) ;

constexpr int32_t& __get_visible_SpriteCount() ;

constexpr int32_t const& __get_visible_SpriteCount() const;

constexpr void __set_visible_LinkCount(int32_t  value) ;

constexpr int32_t& __get_visible_LinkCount() ;

constexpr int32_t const& __get_visible_LinkCount() const;

constexpr void __set_firstCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_firstCharacterIndex() ;

constexpr int32_t const& __get_firstCharacterIndex() const;

constexpr void __set_firstVisibleCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_firstVisibleCharacterIndex() ;

constexpr int32_t const& __get_firstVisibleCharacterIndex() const;

constexpr void __set_lastCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_lastCharacterIndex() ;

constexpr int32_t const& __get_lastCharacterIndex() const;

constexpr void __set_lastVisibleCharIndex(int32_t  value) ;

constexpr int32_t& __get_lastVisibleCharIndex() ;

constexpr int32_t const& __get_lastVisibleCharIndex() const;

constexpr void __set_lineNumber(int32_t  value) ;

constexpr int32_t& __get_lineNumber() ;

constexpr int32_t const& __get_lineNumber() const;

constexpr void __set_maxCapHeight(float_t  value) ;

constexpr float_t& __get_maxCapHeight() ;

constexpr float_t const& __get_maxCapHeight() const;

constexpr void __set_maxAscender(float_t  value) ;

constexpr float_t& __get_maxAscender() ;

constexpr float_t const& __get_maxAscender() const;

constexpr void __set_maxDescender(float_t  value) ;

constexpr float_t& __get_maxDescender() ;

constexpr float_t const& __get_maxDescender() const;

constexpr void __set_startOfLineAscender(float_t  value) ;

constexpr float_t& __get_startOfLineAscender() ;

constexpr float_t const& __get_startOfLineAscender() const;

constexpr void __set_maxLineAscender(float_t  value) ;

constexpr float_t& __get_maxLineAscender() ;

constexpr float_t const& __get_maxLineAscender() const;

constexpr void __set_maxLineDescender(float_t  value) ;

constexpr float_t& __get_maxLineDescender() ;

constexpr float_t const& __get_maxLineDescender() const;

constexpr void __set_pageAscender(float_t  value) ;

constexpr float_t& __get_pageAscender() ;

constexpr float_t const& __get_pageAscender() const;

constexpr void __set_horizontalAlignment(::TMPro::HorizontalAlignmentOptions  value) ;

constexpr ::TMPro::HorizontalAlignmentOptions& __get_horizontalAlignment() ;

constexpr ::TMPro::HorizontalAlignmentOptions const& __get_horizontalAlignment() const;

constexpr void __set_marginLeft(float_t  value) ;

constexpr float_t& __get_marginLeft() ;

constexpr float_t const& __get_marginLeft() const;

constexpr void __set_marginRight(float_t  value) ;

constexpr float_t& __get_marginRight() ;

constexpr float_t const& __get_marginRight() const;

constexpr void __set_xAdvance(float_t  value) ;

constexpr float_t& __get_xAdvance() ;

constexpr float_t const& __get_xAdvance() const;

constexpr void __set_preferredWidth(float_t  value) ;

constexpr float_t& __get_preferredWidth() ;

constexpr float_t const& __get_preferredWidth() const;

constexpr void __set_preferredHeight(float_t  value) ;

constexpr float_t& __get_preferredHeight() ;

constexpr float_t const& __get_preferredHeight() const;

constexpr void __set_previousLineScale(float_t  value) ;

constexpr float_t& __get_previousLineScale() ;

constexpr float_t const& __get_previousLineScale() const;

constexpr void __set_wordCount(int32_t  value) ;

constexpr int32_t& __get_wordCount() ;

constexpr int32_t const& __get_wordCount() const;

constexpr void __set_fontStyle(::TMPro::FontStyles  value) ;

constexpr ::TMPro::FontStyles& __get_fontStyle() ;

constexpr ::TMPro::FontStyles const& __get_fontStyle() const;

constexpr void __set_italicAngle(int32_t  value) ;

constexpr int32_t& __get_italicAngle() ;

constexpr int32_t const& __get_italicAngle() const;

constexpr void __set_fontScaleMultiplier(float_t  value) ;

constexpr float_t& __get_fontScaleMultiplier() ;

constexpr float_t const& __get_fontScaleMultiplier() const;

constexpr void __set_currentFontSize(float_t  value) ;

constexpr float_t& __get_currentFontSize() ;

constexpr float_t const& __get_currentFontSize() const;

constexpr void __set_baselineOffset(float_t  value) ;

constexpr float_t& __get_baselineOffset() ;

constexpr float_t const& __get_baselineOffset() const;

constexpr void __set_lineOffset(float_t  value) ;

constexpr float_t& __get_lineOffset() ;

constexpr float_t const& __get_lineOffset() const;

constexpr void __set_isDrivenLineSpacing(bool  value) ;

constexpr bool& __get_isDrivenLineSpacing() ;

constexpr bool const& __get_isDrivenLineSpacing() const;

constexpr void __set_glyphHorizontalAdvanceAdjustment(float_t  value) ;

constexpr float_t& __get_glyphHorizontalAdvanceAdjustment() ;

constexpr float_t const& __get_glyphHorizontalAdvanceAdjustment() const;

constexpr void __set_cSpace(float_t  value) ;

constexpr float_t& __get_cSpace() ;

constexpr float_t const& __get_cSpace() const;

constexpr void __set_mSpace(float_t  value) ;

constexpr float_t& __get_mSpace() ;

constexpr float_t const& __get_mSpace() const;

constexpr void __set_textInfo(::TMPro::TMP_TextInfo*  value) ;

constexpr ::TMPro::TMP_TextInfo* __get_textInfo() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_TextInfo*> __get_textInfo() const;

constexpr void __set_lineInfo(::TMPro::TMP_LineInfo  value) ;

constexpr ::TMPro::TMP_LineInfo& __get_lineInfo() ;

constexpr ::TMPro::TMP_LineInfo const& __get_lineInfo() const;

constexpr void __set_vertexColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_vertexColor() ;

constexpr ::UnityEngine::Color32 const& __get_vertexColor() const;

constexpr void __set_underlineColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_underlineColor() ;

constexpr ::UnityEngine::Color32 const& __get_underlineColor() const;

constexpr void __set_strikethroughColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_strikethroughColor() ;

constexpr ::UnityEngine::Color32 const& __get_strikethroughColor() const;

constexpr void __set_highlightColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_highlightColor() ;

constexpr ::UnityEngine::Color32 const& __get_highlightColor() const;

constexpr void __set_basicStyleStack(::TMPro::TMP_FontStyleStack  value) ;

constexpr ::TMPro::TMP_FontStyleStack& __get_basicStyleStack() ;

constexpr ::TMPro::TMP_FontStyleStack const& __get_basicStyleStack() const;

constexpr void __set_italicAngleStack(::TMPro::TMP_TextProcessingStack_1<int32_t>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t>& __get_italicAngleStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> const& __get_italicAngleStack() const;

constexpr void __set_colorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>& __get_colorStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> const& __get_colorStack() const;

constexpr void __set_underlineColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>& __get_underlineColorStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> const& __get_underlineColorStack() const;

constexpr void __set_strikethroughColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>& __get_strikethroughColorStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> const& __get_strikethroughColorStack() const;

constexpr void __set_highlightColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>& __get_highlightColorStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> const& __get_highlightColorStack() const;

constexpr void __set_highlightStateStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>& __get_highlightStateStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> const& __get_highlightStateStack() const;

constexpr void __set_colorGradientStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*>& __get_colorGradientStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*> const& __get_colorGradientStack() const;

constexpr void __set_sizeStack(::TMPro::TMP_TextProcessingStack_1<float_t>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t>& __get_sizeStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> const& __get_sizeStack() const;

constexpr void __set_indentStack(::TMPro::TMP_TextProcessingStack_1<float_t>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t>& __get_indentStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> const& __get_indentStack() const;

constexpr void __set_fontWeightStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>& __get_fontWeightStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> const& __get_fontWeightStack() const;

constexpr void __set_styleStack(::TMPro::TMP_TextProcessingStack_1<int32_t>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t>& __get_styleStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> const& __get_styleStack() const;

constexpr void __set_baselineStack(::TMPro::TMP_TextProcessingStack_1<float_t>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t>& __get_baselineStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> const& __get_baselineStack() const;

constexpr void __set_actionStack(::TMPro::TMP_TextProcessingStack_1<int32_t>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t>& __get_actionStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> const& __get_actionStack() const;

constexpr void __set_materialReferenceStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>& __get_materialReferenceStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> const& __get_materialReferenceStack() const;

constexpr void __set_lineJustificationStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>  value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>& __get_lineJustificationStack() ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> const& __get_lineJustificationStack() const;

constexpr void __set_spriteAnimationID(int32_t  value) ;

constexpr int32_t& __get_spriteAnimationID() ;

constexpr int32_t const& __get_spriteAnimationID() const;

constexpr void __set_currentFontAsset(::TMPro::TMP_FontAsset*  value) ;

constexpr ::TMPro::TMP_FontAsset* __get_currentFontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> __get_currentFontAsset() const;

constexpr void __set_currentSpriteAsset(::TMPro::TMP_SpriteAsset*  value) ;

constexpr ::TMPro::TMP_SpriteAsset* __get_currentSpriteAsset() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_SpriteAsset*> __get_currentSpriteAsset() const;

constexpr void __set_currentMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_currentMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_currentMaterial() const;

constexpr void __set_currentMaterialIndex(int32_t  value) ;

constexpr int32_t& __get_currentMaterialIndex() ;

constexpr int32_t const& __get_currentMaterialIndex() const;

constexpr void __set_meshExtents(::TMPro::Extents  value) ;

constexpr ::TMPro::Extents& __get_meshExtents() ;

constexpr ::TMPro::Extents const& __get_meshExtents() const;

constexpr void __set_tagNoParsing(bool  value) ;

constexpr bool& __get_tagNoParsing() ;

constexpr bool const& __get_tagNoParsing() const;

constexpr void __set_isNonBreakingSpace(bool  value) ;

constexpr bool& __get_isNonBreakingSpace() ;

constexpr bool const& __get_isNonBreakingSpace() const;

// Ctor Parameters [CppParam { name: "previous_WordBreak", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "total_CharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visible_CharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visible_SpriteCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visible_LinkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startOfLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pageAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "horizontalAlignment", ty: "::TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::TMPro::FontStyles", modifiers: "", def_value: None }, CppParam { name: "italicAngle", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isDrivenLineSpacing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "glyphHorizontalAdvanceAdjustment", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cSpace", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "mSpace", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "textInfo", ty: "::TMPro::TMP_TextInfo*", modifiers: "", def_value: None }, CppParam { name: "lineInfo", ty: "::TMPro::TMP_LineInfo", modifiers: "", def_value: None }, CppParam { name: "vertexColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "basicStyleStack", ty: "::TMPro::TMP_FontStyleStack", modifiers: "", def_value: None }, CppParam { name: "italicAngleStack", ty: "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "colorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "underlineColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "strikethroughColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightStateStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>", modifiers: "", def_value: None }, CppParam { name: "colorGradientStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*>", modifiers: "", def_value: None }, CppParam { name: "sizeStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "indentStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "fontWeightStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>", modifiers: "", def_value: None }, CppParam { name: "styleStack", ty: "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "baselineStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "actionStack", ty: "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialReferenceStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>", modifiers: "", def_value: None }, CppParam { name: "lineJustificationStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>", modifiers: "", def_value: None }, CppParam { name: "spriteAnimationID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentFontAsset", ty: "::TMPro::TMP_FontAsset*", modifiers: "", def_value: None }, CppParam { name: "currentSpriteAsset", ty: "::TMPro::TMP_SpriteAsset*", modifiers: "", def_value: None }, CppParam { name: "currentMaterial", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "meshExtents", ty: "::TMPro::Extents", modifiers: "", def_value: None }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: None }]
constexpr WordWrapState(int32_t  previous_WordBreak, int32_t  total_CharacterCount, int32_t  visible_CharacterCount, int32_t  visible_SpriteCount, int32_t  visible_LinkCount, int32_t  firstCharacterIndex, int32_t  firstVisibleCharacterIndex, int32_t  lastCharacterIndex, int32_t  lastVisibleCharIndex, int32_t  lineNumber, float_t  maxCapHeight, float_t  maxAscender, float_t  maxDescender, float_t  startOfLineAscender, float_t  maxLineAscender, float_t  maxLineDescender, float_t  pageAscender, ::TMPro::HorizontalAlignmentOptions  horizontalAlignment, float_t  marginLeft, float_t  marginRight, float_t  xAdvance, float_t  preferredWidth, float_t  preferredHeight, float_t  previousLineScale, int32_t  wordCount, ::TMPro::FontStyles  fontStyle, int32_t  italicAngle, float_t  fontScaleMultiplier, float_t  currentFontSize, float_t  baselineOffset, float_t  lineOffset, bool  isDrivenLineSpacing, float_t  glyphHorizontalAdvanceAdjustment, float_t  cSpace, float_t  mSpace, ::TMPro::TMP_TextInfo*  textInfo, ::TMPro::TMP_LineInfo  lineInfo, ::UnityEngine::Color32  vertexColor, ::UnityEngine::Color32  underlineColor, ::UnityEngine::Color32  strikethroughColor, ::UnityEngine::Color32  highlightColor, ::TMPro::TMP_FontStyleStack  basicStyleStack, ::TMPro::TMP_TextProcessingStack_1<int32_t>  italicAngleStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  colorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  underlineColorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  strikethroughColorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>  highlightColorStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>  highlightStateStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*>  colorGradientStack, ::TMPro::TMP_TextProcessingStack_1<float_t>  sizeStack, ::TMPro::TMP_TextProcessingStack_1<float_t>  indentStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>  fontWeightStack, ::TMPro::TMP_TextProcessingStack_1<int32_t>  styleStack, ::TMPro::TMP_TextProcessingStack_1<float_t>  baselineStack, ::TMPro::TMP_TextProcessingStack_1<int32_t>  actionStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>  materialReferenceStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>  lineJustificationStack, int32_t  spriteAnimationID, ::TMPro::TMP_FontAsset*  currentFontAsset, ::TMPro::TMP_SpriteAsset*  currentSpriteAsset, ::UnityEngine::Material*  currentMaterial, int32_t  currentMaterialIndex, ::TMPro::Extents  meshExtents, bool  tagNoParsing, bool  isNonBreakingSpace) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit WordWrapState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x378>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 WordWrapState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::WordWrapState, 0x378>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::WordWrapState, "TMPro", "WordWrapState");
