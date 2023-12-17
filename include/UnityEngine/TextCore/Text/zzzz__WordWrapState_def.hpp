#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WordWrapState)
namespace UnityEngine::TextCore::Text {
struct FontStyleStack;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct Extents;
}
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct WordWrapState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::WordWrapState);
// Type: UnityEngine.TextCore.Text::WordWrapState
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13709))
// CS Name: ::UnityEngine.TextCore.Text::WordWrapState
struct CORDL_TYPE WordWrapState : public ::bs_hook::ValueTypeWrapper<0x310> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x310};

/// @brief Field previousWordBreak offset 0x0
 __declspec(property(get=__get_previousWordBreak, put=__set_previousWordBreak)) int32_t  previousWordBreak;

/// @brief Field totalCharacterCount offset 0x4
 __declspec(property(get=__get_totalCharacterCount, put=__set_totalCharacterCount)) int32_t  totalCharacterCount;

/// @brief Field visibleCharacterCount offset 0x8
 __declspec(property(get=__get_visibleCharacterCount, put=__set_visibleCharacterCount)) int32_t  visibleCharacterCount;

/// @brief Field visibleSpriteCount offset 0xc
 __declspec(property(get=__get_visibleSpriteCount, put=__set_visibleSpriteCount)) int32_t  visibleSpriteCount;

/// @brief Field visibleLinkCount offset 0x10
 __declspec(property(get=__get_visibleLinkCount, put=__set_visibleLinkCount)) int32_t  visibleLinkCount;

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

/// @brief Field maxLineAscender offset 0x34
 __declspec(property(get=__get_maxLineAscender, put=__set_maxLineAscender)) float_t  maxLineAscender;

/// @brief Field maxLineDescender offset 0x38
 __declspec(property(get=__get_maxLineDescender, put=__set_maxLineDescender)) float_t  maxLineDescender;

/// @brief Field previousLineAscender offset 0x3c
 __declspec(property(get=__get_previousLineAscender, put=__set_previousLineAscender)) float_t  previousLineAscender;

/// @brief Field xAdvance offset 0x40
 __declspec(property(get=__get_xAdvance, put=__set_xAdvance)) float_t  xAdvance;

/// @brief Field preferredWidth offset 0x44
 __declspec(property(get=__get_preferredWidth, put=__set_preferredWidth)) float_t  preferredWidth;

/// @brief Field preferredHeight offset 0x48
 __declspec(property(get=__get_preferredHeight, put=__set_preferredHeight)) float_t  preferredHeight;

/// @brief Field previousLineScale offset 0x4c
 __declspec(property(get=__get_previousLineScale, put=__set_previousLineScale)) float_t  previousLineScale;

/// @brief Field wordCount offset 0x50
 __declspec(property(get=__get_wordCount, put=__set_wordCount)) int32_t  wordCount;

/// @brief Field fontStyle offset 0x54
 __declspec(property(get=__get_fontStyle, put=__set_fontStyle)) ::UnityEngine::TextCore::Text::FontStyles  fontStyle;

/// @brief Field fontScale offset 0x58
 __declspec(property(get=__get_fontScale, put=__set_fontScale)) float_t  fontScale;

/// @brief Field fontScaleMultiplier offset 0x5c
 __declspec(property(get=__get_fontScaleMultiplier, put=__set_fontScaleMultiplier)) float_t  fontScaleMultiplier;

/// @brief Field currentFontSize offset 0x60
 __declspec(property(get=__get_currentFontSize, put=__set_currentFontSize)) float_t  currentFontSize;

/// @brief Field baselineOffset offset 0x64
 __declspec(property(get=__get_baselineOffset, put=__set_baselineOffset)) float_t  baselineOffset;

/// @brief Field lineOffset offset 0x68
 __declspec(property(get=__get_lineOffset, put=__set_lineOffset)) float_t  lineOffset;

/// @brief Field textInfo offset 0x70
 __declspec(property(get=__get_textInfo, put=__set_textInfo)) ::UnityEngine::TextCore::Text::TextInfo*  textInfo;

/// @brief Field lineInfo offset 0x78
 __declspec(property(get=__get_lineInfo, put=__set_lineInfo)) ::UnityEngine::TextCore::Text::LineInfo  lineInfo;

/// @brief Field vertexColor offset 0xd8
 __declspec(property(get=__get_vertexColor, put=__set_vertexColor)) ::UnityEngine::Color32  vertexColor;

/// @brief Field underlineColor offset 0xdc
 __declspec(property(get=__get_underlineColor, put=__set_underlineColor)) ::UnityEngine::Color32  underlineColor;

/// @brief Field strikethroughColor offset 0xe0
 __declspec(property(get=__get_strikethroughColor, put=__set_strikethroughColor)) ::UnityEngine::Color32  strikethroughColor;

/// @brief Field highlightColor offset 0xe4
 __declspec(property(get=__get_highlightColor, put=__set_highlightColor)) ::UnityEngine::Color32  highlightColor;

/// @brief Field basicStyleStack offset 0xe8
 __declspec(property(get=__get_basicStyleStack, put=__set_basicStyleStack)) ::UnityEngine::TextCore::Text::FontStyleStack  basicStyleStack;

/// @brief Field colorStack offset 0xf8
 __declspec(property(get=__get_colorStack, put=__set_colorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  colorStack;

/// @brief Field underlineColorStack offset 0x118
 __declspec(property(get=__get_underlineColorStack, put=__set_underlineColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  underlineColorStack;

/// @brief Field strikethroughColorStack offset 0x138
 __declspec(property(get=__get_strikethroughColorStack, put=__set_strikethroughColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  strikethroughColorStack;

/// @brief Field highlightColorStack offset 0x158
 __declspec(property(get=__get_highlightColorStack, put=__set_highlightColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  highlightColorStack;

/// @brief Field colorGradientStack offset 0x178
 __declspec(property(get=__get_colorGradientStack, put=__set_colorGradientStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>  colorGradientStack;

/// @brief Field sizeStack offset 0x1a0
 __declspec(property(get=__get_sizeStack, put=__set_sizeStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  sizeStack;

/// @brief Field indentStack offset 0x1c0
 __declspec(property(get=__get_indentStack, put=__set_indentStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  indentStack;

/// @brief Field fontWeightStack offset 0x1e0
 __declspec(property(get=__get_fontWeightStack, put=__set_fontWeightStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>  fontWeightStack;

/// @brief Field styleStack offset 0x200
 __declspec(property(get=__get_styleStack, put=__set_styleStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  styleStack;

/// @brief Field baselineStack offset 0x220
 __declspec(property(get=__get_baselineStack, put=__set_baselineStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  baselineStack;

/// @brief Field actionStack offset 0x240
 __declspec(property(get=__get_actionStack, put=__set_actionStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  actionStack;

/// @brief Field materialReferenceStack offset 0x260
 __declspec(property(get=__get_materialReferenceStack, put=__set_materialReferenceStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>  materialReferenceStack;

/// @brief Field lineJustificationStack offset 0x2b8
 __declspec(property(get=__get_lineJustificationStack, put=__set_lineJustificationStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>  lineJustificationStack;

/// @brief Field spriteAnimationId offset 0x2d8
 __declspec(property(get=__get_spriteAnimationId, put=__set_spriteAnimationId)) int32_t  spriteAnimationId;

/// @brief Field currentFontAsset offset 0x2e0
 __declspec(property(get=__get_currentFontAsset, put=__set_currentFontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  currentFontAsset;

/// @brief Field currentSpriteAsset offset 0x2e8
 __declspec(property(get=__get_currentSpriteAsset, put=__set_currentSpriteAsset)) ::UnityEngine::TextCore::Text::SpriteAsset*  currentSpriteAsset;

/// @brief Field currentMaterial offset 0x2f0
 __declspec(property(get=__get_currentMaterial, put=__set_currentMaterial)) ::UnityEngine::Material*  currentMaterial;

/// @brief Field currentMaterialIndex offset 0x2f8
 __declspec(property(get=__get_currentMaterialIndex, put=__set_currentMaterialIndex)) int32_t  currentMaterialIndex;

/// @brief Field meshExtents offset 0x2fc
 __declspec(property(get=__get_meshExtents, put=__set_meshExtents)) ::UnityEngine::TextCore::Text::Extents  meshExtents;

/// @brief Field tagNoParsing offset 0x30c
 __declspec(property(get=__get_tagNoParsing, put=__set_tagNoParsing)) bool  tagNoParsing;

/// @brief Field isNonBreakingSpace offset 0x30d
 __declspec(property(get=__get_isNonBreakingSpace, put=__set_isNonBreakingSpace)) bool  isNonBreakingSpace;

constexpr void __set_previousWordBreak(int32_t  value) ;

constexpr int32_t& __get_previousWordBreak() ;

constexpr int32_t const& __get_previousWordBreak() const;

constexpr void __set_totalCharacterCount(int32_t  value) ;

constexpr int32_t& __get_totalCharacterCount() ;

constexpr int32_t const& __get_totalCharacterCount() const;

constexpr void __set_visibleCharacterCount(int32_t  value) ;

constexpr int32_t& __get_visibleCharacterCount() ;

constexpr int32_t const& __get_visibleCharacterCount() const;

constexpr void __set_visibleSpriteCount(int32_t  value) ;

constexpr int32_t& __get_visibleSpriteCount() ;

constexpr int32_t const& __get_visibleSpriteCount() const;

constexpr void __set_visibleLinkCount(int32_t  value) ;

constexpr int32_t& __get_visibleLinkCount() ;

constexpr int32_t const& __get_visibleLinkCount() const;

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

constexpr void __set_maxLineAscender(float_t  value) ;

constexpr float_t& __get_maxLineAscender() ;

constexpr float_t const& __get_maxLineAscender() const;

constexpr void __set_maxLineDescender(float_t  value) ;

constexpr float_t& __get_maxLineDescender() ;

constexpr float_t const& __get_maxLineDescender() const;

constexpr void __set_previousLineAscender(float_t  value) ;

constexpr float_t& __get_previousLineAscender() ;

constexpr float_t const& __get_previousLineAscender() const;

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

constexpr void __set_fontStyle(::UnityEngine::TextCore::Text::FontStyles  value) ;

constexpr ::UnityEngine::TextCore::Text::FontStyles& __get_fontStyle() ;

constexpr ::UnityEngine::TextCore::Text::FontStyles const& __get_fontStyle() const;

constexpr void __set_fontScale(float_t  value) ;

constexpr float_t& __get_fontScale() ;

constexpr float_t const& __get_fontScale() const;

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

constexpr void __set_textInfo(::UnityEngine::TextCore::Text::TextInfo*  value) ;

constexpr ::UnityEngine::TextCore::Text::TextInfo* __get_textInfo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextInfo*> __get_textInfo() const;

constexpr void __set_lineInfo(::UnityEngine::TextCore::Text::LineInfo  value) ;

constexpr ::UnityEngine::TextCore::Text::LineInfo& __get_lineInfo() ;

constexpr ::UnityEngine::TextCore::Text::LineInfo const& __get_lineInfo() const;

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

constexpr void __set_basicStyleStack(::UnityEngine::TextCore::Text::FontStyleStack  value) ;

constexpr ::UnityEngine::TextCore::Text::FontStyleStack& __get_basicStyleStack() ;

constexpr ::UnityEngine::TextCore::Text::FontStyleStack const& __get_basicStyleStack() const;

constexpr void __set_colorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __get_colorStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __get_colorStack() const;

constexpr void __set_underlineColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __get_underlineColorStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __get_underlineColorStack() const;

constexpr void __set_strikethroughColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __get_strikethroughColorStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __get_strikethroughColorStack() const;

constexpr void __set_highlightColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __get_highlightColorStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __get_highlightColorStack() const;

constexpr void __set_colorGradientStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>& __get_colorGradientStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*> const& __get_colorGradientStack() const;

constexpr void __set_sizeStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __get_sizeStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __get_sizeStack() const;

constexpr void __set_indentStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __get_indentStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __get_indentStack() const;

constexpr void __set_fontWeightStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>& __get_fontWeightStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> const& __get_fontWeightStack() const;

constexpr void __set_styleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& __get_styleStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& __get_styleStack() const;

constexpr void __set_baselineStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __get_baselineStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __get_baselineStack() const;

constexpr void __set_actionStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& __get_actionStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& __get_actionStack() const;

constexpr void __set_materialReferenceStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>& __get_materialReferenceStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> const& __get_materialReferenceStack() const;

constexpr void __set_lineJustificationStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>& __get_lineJustificationStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> const& __get_lineJustificationStack() const;

constexpr void __set_spriteAnimationId(int32_t  value) ;

constexpr int32_t& __get_spriteAnimationId() ;

constexpr int32_t const& __get_spriteAnimationId() const;

constexpr void __set_currentFontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_currentFontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_currentFontAsset() const;

constexpr void __set_currentSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::SpriteAsset* __get_currentSpriteAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> __get_currentSpriteAsset() const;

constexpr void __set_currentMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_currentMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_currentMaterial() const;

constexpr void __set_currentMaterialIndex(int32_t  value) ;

constexpr int32_t& __get_currentMaterialIndex() ;

constexpr int32_t const& __get_currentMaterialIndex() const;

constexpr void __set_meshExtents(::UnityEngine::TextCore::Text::Extents  value) ;

constexpr ::UnityEngine::TextCore::Text::Extents& __get_meshExtents() ;

constexpr ::UnityEngine::TextCore::Text::Extents const& __get_meshExtents() const;

constexpr void __set_tagNoParsing(bool  value) ;

constexpr bool& __get_tagNoParsing() ;

constexpr bool const& __get_tagNoParsing() const;

constexpr void __set_isNonBreakingSpace(bool  value) ;

constexpr bool& __get_isNonBreakingSpace() ;

constexpr bool const& __get_isNonBreakingSpace() const;

// Ctor Parameters [CppParam { name: "previousWordBreak", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleSpriteCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleLinkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previousLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: None }, CppParam { name: "fontScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "textInfo", ty: "::UnityEngine::TextCore::Text::TextInfo*", modifiers: "", def_value: None }, CppParam { name: "lineInfo", ty: "::UnityEngine::TextCore::Text::LineInfo", modifiers: "", def_value: None }, CppParam { name: "vertexColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "basicStyleStack", ty: "::UnityEngine::TextCore::Text::FontStyleStack", modifiers: "", def_value: None }, CppParam { name: "colorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "underlineColorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "strikethroughColorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightColorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "colorGradientStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>", modifiers: "", def_value: None }, CppParam { name: "sizeStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "indentStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "fontWeightStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>", modifiers: "", def_value: None }, CppParam { name: "styleStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "baselineStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "actionStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialReferenceStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>", modifiers: "", def_value: None }, CppParam { name: "lineJustificationStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>", modifiers: "", def_value: None }, CppParam { name: "spriteAnimationId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentFontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }, CppParam { name: "currentSpriteAsset", ty: "::UnityEngine::TextCore::Text::SpriteAsset*", modifiers: "", def_value: None }, CppParam { name: "currentMaterial", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "meshExtents", ty: "::UnityEngine::TextCore::Text::Extents", modifiers: "", def_value: None }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: None }]
constexpr WordWrapState(int32_t  previousWordBreak, int32_t  totalCharacterCount, int32_t  visibleCharacterCount, int32_t  visibleSpriteCount, int32_t  visibleLinkCount, int32_t  firstCharacterIndex, int32_t  firstVisibleCharacterIndex, int32_t  lastCharacterIndex, int32_t  lastVisibleCharIndex, int32_t  lineNumber, float_t  maxCapHeight, float_t  maxAscender, float_t  maxDescender, float_t  maxLineAscender, float_t  maxLineDescender, float_t  previousLineAscender, float_t  xAdvance, float_t  preferredWidth, float_t  preferredHeight, float_t  previousLineScale, int32_t  wordCount, ::UnityEngine::TextCore::Text::FontStyles  fontStyle, float_t  fontScale, float_t  fontScaleMultiplier, float_t  currentFontSize, float_t  baselineOffset, float_t  lineOffset, ::UnityEngine::TextCore::Text::TextInfo*  textInfo, ::UnityEngine::TextCore::Text::LineInfo  lineInfo, ::UnityEngine::Color32  vertexColor, ::UnityEngine::Color32  underlineColor, ::UnityEngine::Color32  strikethroughColor, ::UnityEngine::Color32  highlightColor, ::UnityEngine::TextCore::Text::FontStyleStack  basicStyleStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  colorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  underlineColorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  strikethroughColorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  highlightColorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>  colorGradientStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  sizeStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  indentStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>  fontWeightStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  styleStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  baselineStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  actionStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>  materialReferenceStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>  lineJustificationStack, int32_t  spriteAnimationId, ::UnityEngine::TextCore::Text::FontAsset*  currentFontAsset, ::UnityEngine::TextCore::Text::SpriteAsset*  currentSpriteAsset, ::UnityEngine::Material*  currentMaterial, int32_t  currentMaterialIndex, ::UnityEngine::TextCore::Text::Extents  meshExtents, bool  tagNoParsing, bool  isNonBreakingSpace) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit WordWrapState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x310>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 WordWrapState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::WordWrapState, 0x310>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::WordWrapState, "UnityEngine.TextCore.Text", "WordWrapState");
