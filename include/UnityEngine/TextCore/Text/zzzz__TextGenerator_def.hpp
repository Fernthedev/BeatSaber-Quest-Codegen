#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerator)
namespace UnityEngine::TextCore::Text {
struct WordWrapState;
}
namespace UnityEngine::TextCore::Text {
struct RichTextTagAttribute;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::TextCore::Text {
struct __TextGenerator__SpecialCharacter;
}
namespace UnityEngine::TextCore::Text {
class TextElement;
}
namespace UnityEngine::TextCore::Text {
struct Extents;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
struct FontStyleStack;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::TextCore::Text {
struct XmlTagAttribute;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine::TextCore::Text {
struct TextElementType;
}
namespace UnityEngine::TextCore::Text {
class Character;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGenerator;
}
namespace UnityEngine::TextCore::Text {
struct __TextGenerator__SpecialCharacter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextGenerator);
MARK_VAL_T(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter);
// Type: ::SpecialCharacter
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13690))
// CS Name: ::TextGenerator::SpecialCharacter
struct CORDL_TYPE __TextGenerator__SpecialCharacter : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field character offset 0x0
 __declspec(property(get=__get_character, put=__set_character)) ::UnityEngine::TextCore::Text::Character*  character;

/// @brief Field fontAsset offset 0x8
 __declspec(property(get=__get_fontAsset, put=__set_fontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  fontAsset;

/// @brief Field material offset 0x10
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

/// @brief Field materialIndex offset 0x18
 __declspec(property(get=__get_materialIndex, put=__set_materialIndex)) int32_t  materialIndex;

constexpr void __set_character(::UnityEngine::TextCore::Text::Character*  value) ;

constexpr ::UnityEngine::TextCore::Text::Character* __get_character() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::Character*> __get_character() const;

constexpr void __set_fontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_fontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_fontAsset() const;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

constexpr void __set_materialIndex(int32_t  value) ;

constexpr int32_t& __get_materialIndex() ;

constexpr int32_t const& __get_materialIndex() const;

/// @brief Method .ctor addr 0x2d412b8 size 0xec virtual false final false
inline void _ctor(::UnityEngine::TextCore::Text::Character*  character, int32_t  materialIndex) ;

// Ctor Parameters [CppParam { name: "character", ty: "::UnityEngine::TextCore::Text::Character*", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TextGenerator__SpecialCharacter(::UnityEngine::TextCore::Text::Character*  character, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset, ::UnityEngine::Material*  material, int32_t  materialIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TextGenerator__SpecialCharacter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TextGenerator__SpecialCharacter()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextGenerator
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13691))
// CS Name: ::UnityEngine.TextCore.Text::TextGenerator*
class CORDL_TYPE TextGenerator : public ::System::Object {
public:
// Declarations
using SpecialCharacter = ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa58 - sizeof(::System::Object)]{};

/// @brief Field m_RectTransformCorners offset 0x10
 __declspec(property(get=__get_m_RectTransformCorners, put=__set_m_RectTransformCorners)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  m_RectTransformCorners;

/// @brief Field m_MarginWidth offset 0x18
 __declspec(property(get=__get_m_MarginWidth, put=__set_m_MarginWidth)) float_t  m_MarginWidth;

/// @brief Field m_MarginHeight offset 0x1c
 __declspec(property(get=__get_m_MarginHeight, put=__set_m_MarginHeight)) float_t  m_MarginHeight;

/// @brief Field m_CharBuffer offset 0x20
 __declspec(property(get=__get_m_CharBuffer, put=__set_m_CharBuffer)) ::ArrayW<int32_t,::Array<int32_t>*>  m_CharBuffer;

/// @brief Field m_PreferredWidth offset 0x28
 __declspec(property(get=__get_m_PreferredWidth, put=__set_m_PreferredWidth)) float_t  m_PreferredWidth;

/// @brief Field m_PreferredHeight offset 0x2c
 __declspec(property(get=__get_m_PreferredHeight, put=__set_m_PreferredHeight)) float_t  m_PreferredHeight;

/// @brief Field m_CurrentFontAsset offset 0x30
 __declspec(property(get=__get_m_CurrentFontAsset, put=__set_m_CurrentFontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  m_CurrentFontAsset;

/// @brief Field m_CurrentMaterial offset 0x38
 __declspec(property(get=__get_m_CurrentMaterial, put=__set_m_CurrentMaterial)) ::UnityEngine::Material*  m_CurrentMaterial;

/// @brief Field m_CurrentMaterialIndex offset 0x40
 __declspec(property(get=__get_m_CurrentMaterialIndex, put=__set_m_CurrentMaterialIndex)) int32_t  m_CurrentMaterialIndex;

/// @brief Field m_MaterialReferenceStack offset 0x48
 __declspec(property(get=__get_m_MaterialReferenceStack, put=__set_m_MaterialReferenceStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>  m_MaterialReferenceStack;

/// @brief Field m_Padding offset 0xa0
 __declspec(property(get=__get_m_Padding, put=__set_m_Padding)) float_t  m_Padding;

/// @brief Field m_CurrentSpriteAsset offset 0xa8
 __declspec(property(get=__get_m_CurrentSpriteAsset, put=__set_m_CurrentSpriteAsset)) ::UnityEngine::TextCore::Text::SpriteAsset*  m_CurrentSpriteAsset;

/// @brief Field m_TotalCharacterCount offset 0xb0
 __declspec(property(get=__get_m_TotalCharacterCount, put=__set_m_TotalCharacterCount)) int32_t  m_TotalCharacterCount;

/// @brief Field m_FontScale offset 0xb4
 __declspec(property(get=__get_m_FontScale, put=__set_m_FontScale)) float_t  m_FontScale;

/// @brief Field m_FontSize offset 0xb8
 __declspec(property(get=__get_m_FontSize, put=__set_m_FontSize)) float_t  m_FontSize;

/// @brief Field m_FontScaleMultiplier offset 0xbc
 __declspec(property(get=__get_m_FontScaleMultiplier, put=__set_m_FontScaleMultiplier)) float_t  m_FontScaleMultiplier;

/// @brief Field m_CurrentFontSize offset 0xc0
 __declspec(property(get=__get_m_CurrentFontSize, put=__set_m_CurrentFontSize)) float_t  m_CurrentFontSize;

/// @brief Field m_SizeStack offset 0xc8
 __declspec(property(get=__get_m_SizeStack, put=__set_m_SizeStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  m_SizeStack;

/// @brief Field m_FontStyleInternal offset 0xe8
 __declspec(property(get=__get_m_FontStyleInternal, put=__set_m_FontStyleInternal)) ::UnityEngine::TextCore::Text::FontStyles  m_FontStyleInternal;

/// @brief Field m_FontStyleStack offset 0xec
 __declspec(property(get=__get_m_FontStyleStack, put=__set_m_FontStyleStack)) ::UnityEngine::TextCore::Text::FontStyleStack  m_FontStyleStack;

/// @brief Field m_FontWeightInternal offset 0xf8
 __declspec(property(get=__get_m_FontWeightInternal, put=__set_m_FontWeightInternal)) ::UnityEngine::TextCore::Text::TextFontWeight  m_FontWeightInternal;

/// @brief Field m_FontWeightStack offset 0x100
 __declspec(property(get=__get_m_FontWeightStack, put=__set_m_FontWeightStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>  m_FontWeightStack;

/// @brief Field m_LineJustification offset 0x120
 __declspec(property(get=__get_m_LineJustification, put=__set_m_LineJustification)) ::UnityEngine::TextCore::Text::TextAlignment  m_LineJustification;

/// @brief Field m_LineJustificationStack offset 0x128
 __declspec(property(get=__get_m_LineJustificationStack, put=__set_m_LineJustificationStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>  m_LineJustificationStack;

/// @brief Field m_BaselineOffset offset 0x148
 __declspec(property(get=__get_m_BaselineOffset, put=__set_m_BaselineOffset)) float_t  m_BaselineOffset;

/// @brief Field m_BaselineOffsetStack offset 0x150
 __declspec(property(get=__get_m_BaselineOffsetStack, put=__set_m_BaselineOffsetStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  m_BaselineOffsetStack;

/// @brief Field m_FontColor32 offset 0x170
 __declspec(property(get=__get_m_FontColor32, put=__set_m_FontColor32)) ::UnityEngine::Color32  m_FontColor32;

/// @brief Field m_HtmlColor offset 0x174
 __declspec(property(get=__get_m_HtmlColor, put=__set_m_HtmlColor)) ::UnityEngine::Color32  m_HtmlColor;

/// @brief Field m_UnderlineColor offset 0x178
 __declspec(property(get=__get_m_UnderlineColor, put=__set_m_UnderlineColor)) ::UnityEngine::Color32  m_UnderlineColor;

/// @brief Field m_StrikethroughColor offset 0x17c
 __declspec(property(get=__get_m_StrikethroughColor, put=__set_m_StrikethroughColor)) ::UnityEngine::Color32  m_StrikethroughColor;

/// @brief Field m_ColorStack offset 0x180
 __declspec(property(get=__get_m_ColorStack, put=__set_m_ColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  m_ColorStack;

/// @brief Field m_UnderlineColorStack offset 0x1a0
 __declspec(property(get=__get_m_UnderlineColorStack, put=__set_m_UnderlineColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  m_UnderlineColorStack;

/// @brief Field m_StrikethroughColorStack offset 0x1c0
 __declspec(property(get=__get_m_StrikethroughColorStack, put=__set_m_StrikethroughColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  m_StrikethroughColorStack;

/// @brief Field m_HighlightColorStack offset 0x1e0
 __declspec(property(get=__get_m_HighlightColorStack, put=__set_m_HighlightColorStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  m_HighlightColorStack;

/// @brief Field m_ColorGradientPreset offset 0x200
 __declspec(property(get=__get_m_ColorGradientPreset, put=__set_m_ColorGradientPreset)) ::UnityEngine::TextCore::Text::TextColorGradient*  m_ColorGradientPreset;

/// @brief Field m_ColorGradientStack offset 0x208
 __declspec(property(get=__get_m_ColorGradientStack, put=__set_m_ColorGradientStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>  m_ColorGradientStack;

/// @brief Field m_ActionStack offset 0x230
 __declspec(property(get=__get_m_ActionStack, put=__set_m_ActionStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  m_ActionStack;

/// @brief Field m_IsFxMatrixSet offset 0x250
 __declspec(property(get=__get_m_IsFxMatrixSet, put=__set_m_IsFxMatrixSet)) bool  m_IsFxMatrixSet;

/// @brief Field m_LineOffset offset 0x254
 __declspec(property(get=__get_m_LineOffset, put=__set_m_LineOffset)) float_t  m_LineOffset;

/// @brief Field m_LineHeight offset 0x258
 __declspec(property(get=__get_m_LineHeight, put=__set_m_LineHeight)) float_t  m_LineHeight;

/// @brief Field m_CSpacing offset 0x25c
 __declspec(property(get=__get_m_CSpacing, put=__set_m_CSpacing)) float_t  m_CSpacing;

/// @brief Field m_MonoSpacing offset 0x260
 __declspec(property(get=__get_m_MonoSpacing, put=__set_m_MonoSpacing)) float_t  m_MonoSpacing;

/// @brief Field m_XAdvance offset 0x264
 __declspec(property(get=__get_m_XAdvance, put=__set_m_XAdvance)) float_t  m_XAdvance;

/// @brief Field m_TagLineIndent offset 0x268
 __declspec(property(get=__get_m_TagLineIndent, put=__set_m_TagLineIndent)) float_t  m_TagLineIndent;

/// @brief Field m_TagIndent offset 0x26c
 __declspec(property(get=__get_m_TagIndent, put=__set_m_TagIndent)) float_t  m_TagIndent;

/// @brief Field m_IndentStack offset 0x270
 __declspec(property(get=__get_m_IndentStack, put=__set_m_IndentStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  m_IndentStack;

/// @brief Field m_TagNoParsing offset 0x290
 __declspec(property(get=__get_m_TagNoParsing, put=__set_m_TagNoParsing)) bool  m_TagNoParsing;

/// @brief Field m_CharacterCount offset 0x294
 __declspec(property(get=__get_m_CharacterCount, put=__set_m_CharacterCount)) int32_t  m_CharacterCount;

/// @brief Field m_FirstCharacterOfLine offset 0x298
 __declspec(property(get=__get_m_FirstCharacterOfLine, put=__set_m_FirstCharacterOfLine)) int32_t  m_FirstCharacterOfLine;

/// @brief Field m_LastCharacterOfLine offset 0x29c
 __declspec(property(get=__get_m_LastCharacterOfLine, put=__set_m_LastCharacterOfLine)) int32_t  m_LastCharacterOfLine;

/// @brief Field m_FirstVisibleCharacterOfLine offset 0x2a0
 __declspec(property(get=__get_m_FirstVisibleCharacterOfLine, put=__set_m_FirstVisibleCharacterOfLine)) int32_t  m_FirstVisibleCharacterOfLine;

/// @brief Field m_LastVisibleCharacterOfLine offset 0x2a4
 __declspec(property(get=__get_m_LastVisibleCharacterOfLine, put=__set_m_LastVisibleCharacterOfLine)) int32_t  m_LastVisibleCharacterOfLine;

/// @brief Field m_MaxLineAscender offset 0x2a8
 __declspec(property(get=__get_m_MaxLineAscender, put=__set_m_MaxLineAscender)) float_t  m_MaxLineAscender;

/// @brief Field m_MaxLineDescender offset 0x2ac
 __declspec(property(get=__get_m_MaxLineDescender, put=__set_m_MaxLineDescender)) float_t  m_MaxLineDescender;

/// @brief Field m_LineNumber offset 0x2b0
 __declspec(property(get=__get_m_LineNumber, put=__set_m_LineNumber)) int32_t  m_LineNumber;

/// @brief Field m_LineVisibleCharacterCount offset 0x2b4
 __declspec(property(get=__get_m_LineVisibleCharacterCount, put=__set_m_LineVisibleCharacterCount)) int32_t  m_LineVisibleCharacterCount;

/// @brief Field m_FirstOverflowCharacterIndex offset 0x2b8
 __declspec(property(get=__get_m_FirstOverflowCharacterIndex, put=__set_m_FirstOverflowCharacterIndex)) int32_t  m_FirstOverflowCharacterIndex;

/// @brief Field m_PageNumber offset 0x2bc
 __declspec(property(get=__get_m_PageNumber, put=__set_m_PageNumber)) int32_t  m_PageNumber;

/// @brief Field m_MarginLeft offset 0x2c0
 __declspec(property(get=__get_m_MarginLeft, put=__set_m_MarginLeft)) float_t  m_MarginLeft;

/// @brief Field m_MarginRight offset 0x2c4
 __declspec(property(get=__get_m_MarginRight, put=__set_m_MarginRight)) float_t  m_MarginRight;

/// @brief Field m_Width offset 0x2c8
 __declspec(property(get=__get_m_Width, put=__set_m_Width)) float_t  m_Width;

/// @brief Field m_MeshExtents offset 0x2cc
 __declspec(property(get=__get_m_MeshExtents, put=__set_m_MeshExtents)) ::UnityEngine::TextCore::Text::Extents  m_MeshExtents;

/// @brief Field m_MaxCapHeight offset 0x2dc
 __declspec(property(get=__get_m_MaxCapHeight, put=__set_m_MaxCapHeight)) float_t  m_MaxCapHeight;

/// @brief Field m_MaxAscender offset 0x2e0
 __declspec(property(get=__get_m_MaxAscender, put=__set_m_MaxAscender)) float_t  m_MaxAscender;

/// @brief Field m_MaxDescender offset 0x2e4
 __declspec(property(get=__get_m_MaxDescender, put=__set_m_MaxDescender)) float_t  m_MaxDescender;

/// @brief Field m_IsNewPage offset 0x2e8
 __declspec(property(get=__get_m_IsNewPage, put=__set_m_IsNewPage)) bool  m_IsNewPage;

/// @brief Field m_IsNonBreakingSpace offset 0x2e9
 __declspec(property(get=__get_m_IsNonBreakingSpace, put=__set_m_IsNonBreakingSpace)) bool  m_IsNonBreakingSpace;

/// @brief Field m_SavedWordWrapState offset 0x2f0
 __declspec(property(get=__get_m_SavedWordWrapState, put=__set_m_SavedWordWrapState)) ::UnityEngine::TextCore::Text::WordWrapState  m_SavedWordWrapState;

/// @brief Field m_SavedLineState offset 0x600
 __declspec(property(get=__get_m_SavedLineState, put=__set_m_SavedLineState)) ::UnityEngine::TextCore::Text::WordWrapState  m_SavedLineState;

/// @brief Field m_LoopCountA offset 0x910
 __declspec(property(get=__get_m_LoopCountA, put=__set_m_LoopCountA)) int32_t  m_LoopCountA;

/// @brief Field m_TextElementType offset 0x914
 __declspec(property(get=__get_m_TextElementType, put=__set_m_TextElementType)) ::UnityEngine::TextCore::Text::TextElementType  m_TextElementType;

/// @brief Field m_IsParsingText offset 0x915
 __declspec(property(get=__get_m_IsParsingText, put=__set_m_IsParsingText)) bool  m_IsParsingText;

/// @brief Field m_SpriteIndex offset 0x918
 __declspec(property(get=__get_m_SpriteIndex, put=__set_m_SpriteIndex)) int32_t  m_SpriteIndex;

/// @brief Field m_SpriteColor offset 0x91c
 __declspec(property(get=__get_m_SpriteColor, put=__set_m_SpriteColor)) ::UnityEngine::Color32  m_SpriteColor;

/// @brief Field m_CachedTextElement offset 0x920
 __declspec(property(get=__get_m_CachedTextElement, put=__set_m_CachedTextElement)) ::UnityEngine::TextCore::Text::TextElement*  m_CachedTextElement;

/// @brief Field m_HighlightColor offset 0x928
 __declspec(property(get=__get_m_HighlightColor, put=__set_m_HighlightColor)) ::UnityEngine::Color32  m_HighlightColor;

/// @brief Field m_CharWidthAdjDelta offset 0x92c
 __declspec(property(get=__get_m_CharWidthAdjDelta, put=__set_m_CharWidthAdjDelta)) float_t  m_CharWidthAdjDelta;

/// @brief Field m_FxMatrix offset 0x930
 __declspec(property(get=__get_m_FxMatrix, put=__set_m_FxMatrix)) ::UnityEngine::Matrix4x4  m_FxMatrix;

/// @brief Field m_MaxFontSize offset 0x970
 __declspec(property(get=__get_m_MaxFontSize, put=__set_m_MaxFontSize)) float_t  m_MaxFontSize;

/// @brief Field m_MinFontSize offset 0x974
 __declspec(property(get=__get_m_MinFontSize, put=__set_m_MinFontSize)) float_t  m_MinFontSize;

/// @brief Field m_IsCharacterWrappingEnabled offset 0x978
 __declspec(property(get=__get_m_IsCharacterWrappingEnabled, put=__set_m_IsCharacterWrappingEnabled)) bool  m_IsCharacterWrappingEnabled;

/// @brief Field m_StartOfLineAscender offset 0x97c
 __declspec(property(get=__get_m_StartOfLineAscender, put=__set_m_StartOfLineAscender)) float_t  m_StartOfLineAscender;

/// @brief Field m_LineSpacingDelta offset 0x980
 __declspec(property(get=__get_m_LineSpacingDelta, put=__set_m_LineSpacingDelta)) float_t  m_LineSpacingDelta;

/// @brief Field m_IsMaskingEnabled offset 0x984
 __declspec(property(get=__get_m_IsMaskingEnabled, put=__set_m_IsMaskingEnabled)) bool  m_IsMaskingEnabled;

/// @brief Field m_MaterialReferences offset 0x988
 __declspec(property(get=__get_m_MaterialReferences, put=__set_m_MaterialReferences)) ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>  m_MaterialReferences;

/// @brief Field m_SpriteCount offset 0x990
 __declspec(property(get=__get_m_SpriteCount, put=__set_m_SpriteCount)) int32_t  m_SpriteCount;

/// @brief Field m_StyleStack offset 0x998
 __declspec(property(get=__get_m_StyleStack, put=__set_m_StyleStack)) ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  m_StyleStack;

/// @brief Field m_SpriteAnimationId offset 0x9b8
 __declspec(property(get=__get_m_SpriteAnimationId, put=__set_m_SpriteAnimationId)) int32_t  m_SpriteAnimationId;

/// @brief Field m_InternalTextParsingBuffer offset 0x9c0
 __declspec(property(get=__get_m_InternalTextParsingBuffer, put=__set_m_InternalTextParsingBuffer)) ::ArrayW<uint32_t,::Array<uint32_t>*>  m_InternalTextParsingBuffer;

/// @brief Field m_Attributes offset 0x9c8
 __declspec(property(get=__get_m_Attributes, put=__set_m_Attributes)) ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>  m_Attributes;

/// @brief Field m_XmlAttribute offset 0x9d0
 __declspec(property(get=__get_m_XmlAttribute, put=__set_m_XmlAttribute)) ::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>  m_XmlAttribute;

/// @brief Field m_RichTextTag offset 0x9d8
 __declspec(property(get=__get_m_RichTextTag, put=__set_m_RichTextTag)) ::ArrayW<char16_t,::Array<char16_t>*>  m_RichTextTag;

/// @brief Field m_MaterialReferenceIndexLookup offset 0x9e0
 __declspec(property(get=__get_m_MaterialReferenceIndexLookup, put=__set_m_MaterialReferenceIndexLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  m_MaterialReferenceIndexLookup;

/// @brief Field m_IsCalculatingPreferredValues offset 0x9e8
 __declspec(property(get=__get_m_IsCalculatingPreferredValues, put=__set_m_IsCalculatingPreferredValues)) bool  m_IsCalculatingPreferredValues;

/// @brief Field m_DefaultSpriteAsset offset 0x9f0
 __declspec(property(get=__get_m_DefaultSpriteAsset, put=__set_m_DefaultSpriteAsset)) ::UnityEngine::TextCore::Text::SpriteAsset*  m_DefaultSpriteAsset;

/// @brief Field m_TintSprite offset 0x9f8
 __declspec(property(get=__get_m_TintSprite, put=__set_m_TintSprite)) bool  m_TintSprite;

/// @brief Field m_Ellipsis offset 0xa00
 __declspec(property(get=__get_m_Ellipsis, put=__set_m_Ellipsis)) ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter  m_Ellipsis;

/// @brief Field m_Underline offset 0xa20
 __declspec(property(get=__get_m_Underline, put=__set_m_Underline)) ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter  m_Underline;

/// @brief Field m_IsUsingBold offset 0xa40
 __declspec(property(get=__get_m_IsUsingBold, put=__set_m_IsUsingBold)) bool  m_IsUsingBold;

/// @brief Field m_IsSdfShader offset 0xa41
 __declspec(property(get=__get_m_IsSdfShader, put=__set_m_IsSdfShader)) bool  m_IsSdfShader;

/// @brief Field m_InternalTextElementInfo offset 0xa48
 __declspec(property(get=__get_m_InternalTextElementInfo, put=__set_m_InternalTextElementInfo)) ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>  m_InternalTextElementInfo;

/// @brief Field m_RecursiveCount offset 0xa50
 __declspec(property(get=__get_m_RecursiveCount, put=__set_m_RecursiveCount)) int32_t  m_RecursiveCount;

static inline void setStaticF_s_TextGenerator(::UnityEngine::TextCore::Text::TextGenerator*  value) ;

static inline ::UnityEngine::TextCore::Text::TextGenerator* getStaticF_s_TextGenerator() ;

constexpr void __set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_m_RectTransformCorners() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_m_RectTransformCorners() const;

constexpr void __set_m_MarginWidth(float_t  value) ;

constexpr float_t& __get_m_MarginWidth() ;

constexpr float_t const& __get_m_MarginWidth() const;

constexpr void __set_m_MarginHeight(float_t  value) ;

constexpr float_t& __get_m_MarginHeight() ;

constexpr float_t const& __get_m_MarginHeight() const;

constexpr void __set_m_CharBuffer(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_m_CharBuffer() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_m_CharBuffer() const;

constexpr void __set_m_PreferredWidth(float_t  value) ;

constexpr float_t& __get_m_PreferredWidth() ;

constexpr float_t const& __get_m_PreferredWidth() const;

constexpr void __set_m_PreferredHeight(float_t  value) ;

constexpr float_t& __get_m_PreferredHeight() ;

constexpr float_t const& __get_m_PreferredHeight() const;

constexpr void __set_m_CurrentFontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_m_CurrentFontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_m_CurrentFontAsset() const;

constexpr void __set_m_CurrentMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_m_CurrentMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_m_CurrentMaterial() const;

constexpr void __set_m_CurrentMaterialIndex(int32_t  value) ;

constexpr int32_t& __get_m_CurrentMaterialIndex() ;

constexpr int32_t const& __get_m_CurrentMaterialIndex() const;

constexpr void __set_m_MaterialReferenceStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>& __get_m_MaterialReferenceStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> const& __get_m_MaterialReferenceStack() const;

constexpr void __set_m_Padding(float_t  value) ;

constexpr float_t& __get_m_Padding() ;

constexpr float_t const& __get_m_Padding() const;

constexpr void __set_m_CurrentSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::SpriteAsset* __get_m_CurrentSpriteAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> __get_m_CurrentSpriteAsset() const;

constexpr void __set_m_TotalCharacterCount(int32_t  value) ;

constexpr int32_t& __get_m_TotalCharacterCount() ;

constexpr int32_t const& __get_m_TotalCharacterCount() const;

constexpr void __set_m_FontScale(float_t  value) ;

constexpr float_t& __get_m_FontScale() ;

constexpr float_t const& __get_m_FontScale() const;

constexpr void __set_m_FontSize(float_t  value) ;

constexpr float_t& __get_m_FontSize() ;

constexpr float_t const& __get_m_FontSize() const;

constexpr void __set_m_FontScaleMultiplier(float_t  value) ;

constexpr float_t& __get_m_FontScaleMultiplier() ;

constexpr float_t const& __get_m_FontScaleMultiplier() const;

constexpr void __set_m_CurrentFontSize(float_t  value) ;

constexpr float_t& __get_m_CurrentFontSize() ;

constexpr float_t const& __get_m_CurrentFontSize() const;

constexpr void __set_m_SizeStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __get_m_SizeStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __get_m_SizeStack() const;

constexpr void __set_m_FontStyleInternal(::UnityEngine::TextCore::Text::FontStyles  value) ;

constexpr ::UnityEngine::TextCore::Text::FontStyles& __get_m_FontStyleInternal() ;

constexpr ::UnityEngine::TextCore::Text::FontStyles const& __get_m_FontStyleInternal() const;

constexpr void __set_m_FontStyleStack(::UnityEngine::TextCore::Text::FontStyleStack  value) ;

constexpr ::UnityEngine::TextCore::Text::FontStyleStack& __get_m_FontStyleStack() ;

constexpr ::UnityEngine::TextCore::Text::FontStyleStack const& __get_m_FontStyleStack() const;

constexpr void __set_m_FontWeightInternal(::UnityEngine::TextCore::Text::TextFontWeight  value) ;

constexpr ::UnityEngine::TextCore::Text::TextFontWeight& __get_m_FontWeightInternal() ;

constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& __get_m_FontWeightInternal() const;

constexpr void __set_m_FontWeightStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>& __get_m_FontWeightStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> const& __get_m_FontWeightStack() const;

constexpr void __set_m_LineJustification(::UnityEngine::TextCore::Text::TextAlignment  value) ;

constexpr ::UnityEngine::TextCore::Text::TextAlignment& __get_m_LineJustification() ;

constexpr ::UnityEngine::TextCore::Text::TextAlignment const& __get_m_LineJustification() const;

constexpr void __set_m_LineJustificationStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>& __get_m_LineJustificationStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> const& __get_m_LineJustificationStack() const;

constexpr void __set_m_BaselineOffset(float_t  value) ;

constexpr float_t& __get_m_BaselineOffset() ;

constexpr float_t const& __get_m_BaselineOffset() const;

constexpr void __set_m_BaselineOffsetStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __get_m_BaselineOffsetStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __get_m_BaselineOffsetStack() const;

constexpr void __set_m_FontColor32(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_FontColor32() ;

constexpr ::UnityEngine::Color32 const& __get_m_FontColor32() const;

constexpr void __set_m_HtmlColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_HtmlColor() ;

constexpr ::UnityEngine::Color32 const& __get_m_HtmlColor() const;

constexpr void __set_m_UnderlineColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_UnderlineColor() ;

constexpr ::UnityEngine::Color32 const& __get_m_UnderlineColor() const;

constexpr void __set_m_StrikethroughColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_StrikethroughColor() ;

constexpr ::UnityEngine::Color32 const& __get_m_StrikethroughColor() const;

constexpr void __set_m_ColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __get_m_ColorStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __get_m_ColorStack() const;

constexpr void __set_m_UnderlineColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __get_m_UnderlineColorStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __get_m_UnderlineColorStack() const;

constexpr void __set_m_StrikethroughColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __get_m_StrikethroughColorStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __get_m_StrikethroughColorStack() const;

constexpr void __set_m_HighlightColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& __get_m_HighlightColorStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& __get_m_HighlightColorStack() const;

constexpr void __set_m_ColorGradientPreset(::UnityEngine::TextCore::Text::TextColorGradient*  value) ;

constexpr ::UnityEngine::TextCore::Text::TextColorGradient* __get_m_ColorGradientPreset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextColorGradient*> __get_m_ColorGradientPreset() const;

constexpr void __set_m_ColorGradientStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>& __get_m_ColorGradientStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*> const& __get_m_ColorGradientStack() const;

constexpr void __set_m_ActionStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& __get_m_ActionStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& __get_m_ActionStack() const;

constexpr void __set_m_IsFxMatrixSet(bool  value) ;

constexpr bool& __get_m_IsFxMatrixSet() ;

constexpr bool const& __get_m_IsFxMatrixSet() const;

constexpr void __set_m_LineOffset(float_t  value) ;

constexpr float_t& __get_m_LineOffset() ;

constexpr float_t const& __get_m_LineOffset() const;

constexpr void __set_m_LineHeight(float_t  value) ;

constexpr float_t& __get_m_LineHeight() ;

constexpr float_t const& __get_m_LineHeight() const;

constexpr void __set_m_CSpacing(float_t  value) ;

constexpr float_t& __get_m_CSpacing() ;

constexpr float_t const& __get_m_CSpacing() const;

constexpr void __set_m_MonoSpacing(float_t  value) ;

constexpr float_t& __get_m_MonoSpacing() ;

constexpr float_t const& __get_m_MonoSpacing() const;

constexpr void __set_m_XAdvance(float_t  value) ;

constexpr float_t& __get_m_XAdvance() ;

constexpr float_t const& __get_m_XAdvance() const;

constexpr void __set_m_TagLineIndent(float_t  value) ;

constexpr float_t& __get_m_TagLineIndent() ;

constexpr float_t const& __get_m_TagLineIndent() const;

constexpr void __set_m_TagIndent(float_t  value) ;

constexpr float_t& __get_m_TagIndent() ;

constexpr float_t const& __get_m_TagIndent() const;

constexpr void __set_m_IndentStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& __get_m_IndentStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& __get_m_IndentStack() const;

constexpr void __set_m_TagNoParsing(bool  value) ;

constexpr bool& __get_m_TagNoParsing() ;

constexpr bool const& __get_m_TagNoParsing() const;

constexpr void __set_m_CharacterCount(int32_t  value) ;

constexpr int32_t& __get_m_CharacterCount() ;

constexpr int32_t const& __get_m_CharacterCount() const;

constexpr void __set_m_FirstCharacterOfLine(int32_t  value) ;

constexpr int32_t& __get_m_FirstCharacterOfLine() ;

constexpr int32_t const& __get_m_FirstCharacterOfLine() const;

constexpr void __set_m_LastCharacterOfLine(int32_t  value) ;

constexpr int32_t& __get_m_LastCharacterOfLine() ;

constexpr int32_t const& __get_m_LastCharacterOfLine() const;

constexpr void __set_m_FirstVisibleCharacterOfLine(int32_t  value) ;

constexpr int32_t& __get_m_FirstVisibleCharacterOfLine() ;

constexpr int32_t const& __get_m_FirstVisibleCharacterOfLine() const;

constexpr void __set_m_LastVisibleCharacterOfLine(int32_t  value) ;

constexpr int32_t& __get_m_LastVisibleCharacterOfLine() ;

constexpr int32_t const& __get_m_LastVisibleCharacterOfLine() const;

constexpr void __set_m_MaxLineAscender(float_t  value) ;

constexpr float_t& __get_m_MaxLineAscender() ;

constexpr float_t const& __get_m_MaxLineAscender() const;

constexpr void __set_m_MaxLineDescender(float_t  value) ;

constexpr float_t& __get_m_MaxLineDescender() ;

constexpr float_t const& __get_m_MaxLineDescender() const;

constexpr void __set_m_LineNumber(int32_t  value) ;

constexpr int32_t& __get_m_LineNumber() ;

constexpr int32_t const& __get_m_LineNumber() const;

constexpr void __set_m_LineVisibleCharacterCount(int32_t  value) ;

constexpr int32_t& __get_m_LineVisibleCharacterCount() ;

constexpr int32_t const& __get_m_LineVisibleCharacterCount() const;

constexpr void __set_m_FirstOverflowCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_m_FirstOverflowCharacterIndex() ;

constexpr int32_t const& __get_m_FirstOverflowCharacterIndex() const;

constexpr void __set_m_PageNumber(int32_t  value) ;

constexpr int32_t& __get_m_PageNumber() ;

constexpr int32_t const& __get_m_PageNumber() const;

constexpr void __set_m_MarginLeft(float_t  value) ;

constexpr float_t& __get_m_MarginLeft() ;

constexpr float_t const& __get_m_MarginLeft() const;

constexpr void __set_m_MarginRight(float_t  value) ;

constexpr float_t& __get_m_MarginRight() ;

constexpr float_t const& __get_m_MarginRight() const;

constexpr void __set_m_Width(float_t  value) ;

constexpr float_t& __get_m_Width() ;

constexpr float_t const& __get_m_Width() const;

constexpr void __set_m_MeshExtents(::UnityEngine::TextCore::Text::Extents  value) ;

constexpr ::UnityEngine::TextCore::Text::Extents& __get_m_MeshExtents() ;

constexpr ::UnityEngine::TextCore::Text::Extents const& __get_m_MeshExtents() const;

constexpr void __set_m_MaxCapHeight(float_t  value) ;

constexpr float_t& __get_m_MaxCapHeight() ;

constexpr float_t const& __get_m_MaxCapHeight() const;

constexpr void __set_m_MaxAscender(float_t  value) ;

constexpr float_t& __get_m_MaxAscender() ;

constexpr float_t const& __get_m_MaxAscender() const;

constexpr void __set_m_MaxDescender(float_t  value) ;

constexpr float_t& __get_m_MaxDescender() ;

constexpr float_t const& __get_m_MaxDescender() const;

constexpr void __set_m_IsNewPage(bool  value) ;

constexpr bool& __get_m_IsNewPage() ;

constexpr bool const& __get_m_IsNewPage() const;

constexpr void __set_m_IsNonBreakingSpace(bool  value) ;

constexpr bool& __get_m_IsNonBreakingSpace() ;

constexpr bool const& __get_m_IsNonBreakingSpace() const;

constexpr void __set_m_SavedWordWrapState(::UnityEngine::TextCore::Text::WordWrapState  value) ;

constexpr ::UnityEngine::TextCore::Text::WordWrapState& __get_m_SavedWordWrapState() ;

constexpr ::UnityEngine::TextCore::Text::WordWrapState const& __get_m_SavedWordWrapState() const;

constexpr void __set_m_SavedLineState(::UnityEngine::TextCore::Text::WordWrapState  value) ;

constexpr ::UnityEngine::TextCore::Text::WordWrapState& __get_m_SavedLineState() ;

constexpr ::UnityEngine::TextCore::Text::WordWrapState const& __get_m_SavedLineState() const;

constexpr void __set_m_LoopCountA(int32_t  value) ;

constexpr int32_t& __get_m_LoopCountA() ;

constexpr int32_t const& __get_m_LoopCountA() const;

constexpr void __set_m_TextElementType(::UnityEngine::TextCore::Text::TextElementType  value) ;

constexpr ::UnityEngine::TextCore::Text::TextElementType& __get_m_TextElementType() ;

constexpr ::UnityEngine::TextCore::Text::TextElementType const& __get_m_TextElementType() const;

constexpr void __set_m_IsParsingText(bool  value) ;

constexpr bool& __get_m_IsParsingText() ;

constexpr bool const& __get_m_IsParsingText() const;

constexpr void __set_m_SpriteIndex(int32_t  value) ;

constexpr int32_t& __get_m_SpriteIndex() ;

constexpr int32_t const& __get_m_SpriteIndex() const;

constexpr void __set_m_SpriteColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_SpriteColor() ;

constexpr ::UnityEngine::Color32 const& __get_m_SpriteColor() const;

constexpr void __set_m_CachedTextElement(::UnityEngine::TextCore::Text::TextElement*  value) ;

constexpr ::UnityEngine::TextCore::Text::TextElement* __get_m_CachedTextElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextElement*> __get_m_CachedTextElement() const;

constexpr void __set_m_HighlightColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_HighlightColor() ;

constexpr ::UnityEngine::Color32 const& __get_m_HighlightColor() const;

constexpr void __set_m_CharWidthAdjDelta(float_t  value) ;

constexpr float_t& __get_m_CharWidthAdjDelta() ;

constexpr float_t const& __get_m_CharWidthAdjDelta() const;

constexpr void __set_m_FxMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_m_FxMatrix() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_m_FxMatrix() const;

constexpr void __set_m_MaxFontSize(float_t  value) ;

constexpr float_t& __get_m_MaxFontSize() ;

constexpr float_t const& __get_m_MaxFontSize() const;

constexpr void __set_m_MinFontSize(float_t  value) ;

constexpr float_t& __get_m_MinFontSize() ;

constexpr float_t const& __get_m_MinFontSize() const;

constexpr void __set_m_IsCharacterWrappingEnabled(bool  value) ;

constexpr bool& __get_m_IsCharacterWrappingEnabled() ;

constexpr bool const& __get_m_IsCharacterWrappingEnabled() const;

constexpr void __set_m_StartOfLineAscender(float_t  value) ;

constexpr float_t& __get_m_StartOfLineAscender() ;

constexpr float_t const& __get_m_StartOfLineAscender() const;

constexpr void __set_m_LineSpacingDelta(float_t  value) ;

constexpr float_t& __get_m_LineSpacingDelta() ;

constexpr float_t const& __get_m_LineSpacingDelta() const;

constexpr void __set_m_IsMaskingEnabled(bool  value) ;

constexpr bool& __get_m_IsMaskingEnabled() ;

constexpr bool const& __get_m_IsMaskingEnabled() const;

constexpr void __set_m_MaterialReferences(::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>  value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>& __get_m_MaterialReferences() ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*> const& __get_m_MaterialReferences() const;

constexpr void __set_m_SpriteCount(int32_t  value) ;

constexpr int32_t& __get_m_SpriteCount() ;

constexpr int32_t const& __get_m_SpriteCount() const;

constexpr void __set_m_StyleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>  value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& __get_m_StyleStack() ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& __get_m_StyleStack() const;

constexpr void __set_m_SpriteAnimationId(int32_t  value) ;

constexpr int32_t& __get_m_SpriteAnimationId() ;

constexpr int32_t const& __get_m_SpriteAnimationId() const;

constexpr void __set_m_InternalTextParsingBuffer(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_m_InternalTextParsingBuffer() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_m_InternalTextParsingBuffer() const;

constexpr void __set_m_Attributes(::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>  value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>& __get_m_Attributes() ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute,::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*> const& __get_m_Attributes() const;

constexpr void __set_m_XmlAttribute(::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>  value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*>& __get_m_XmlAttribute() ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute,::Array<::UnityEngine::TextCore::Text::XmlTagAttribute>*> const& __get_m_XmlAttribute() const;

constexpr void __set_m_RichTextTag(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get_m_RichTextTag() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get_m_RichTextTag() const;

constexpr void __set_m_MaterialReferenceIndexLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* __get_m_MaterialReferenceIndexLookup() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*> __get_m_MaterialReferenceIndexLookup() const;

constexpr void __set_m_IsCalculatingPreferredValues(bool  value) ;

constexpr bool& __get_m_IsCalculatingPreferredValues() ;

constexpr bool const& __get_m_IsCalculatingPreferredValues() const;

constexpr void __set_m_DefaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::SpriteAsset* __get_m_DefaultSpriteAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> __get_m_DefaultSpriteAsset() const;

constexpr void __set_m_TintSprite(bool  value) ;

constexpr bool& __get_m_TintSprite() ;

constexpr bool const& __get_m_TintSprite() const;

constexpr void __set_m_Ellipsis(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter  value) ;

constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter& __get_m_Ellipsis() ;

constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter const& __get_m_Ellipsis() const;

constexpr void __set_m_Underline(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter  value) ;

constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter& __get_m_Underline() ;

constexpr ::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter const& __get_m_Underline() const;

constexpr void __set_m_IsUsingBold(bool  value) ;

constexpr bool& __get_m_IsUsingBold() ;

constexpr bool const& __get_m_IsUsingBold() const;

constexpr void __set_m_IsSdfShader(bool  value) ;

constexpr bool& __get_m_IsSdfShader() ;

constexpr bool const& __get_m_IsSdfShader() const;

constexpr void __set_m_InternalTextElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>  value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>& __get_m_InternalTextElementInfo() ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> const& __get_m_InternalTextElementInfo() const;

constexpr void __set_m_RecursiveCount(int32_t  value) ;

constexpr int32_t& __get_m_RecursiveCount() ;

constexpr int32_t const& __get_m_RecursiveCount() const;

/// @brief Method GetTextGenerator addr 0x2d296a4 size 0x78 virtual false final false
static inline ::UnityEngine::TextCore::Text::TextGenerator* GetTextGenerator() ;

/// @brief Method GenerateText addr 0x2d29bf8 size 0x174 virtual false final false
static inline void GenerateText(::UnityEngine::TextCore::Text::TextGenerationSettings*  settings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method GetCursorPosition addr 0x2d29ea0 size 0x138 virtual false final false
static inline ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::TextCore::Text::TextInfo*  textInfo, ::UnityEngine::Rect  screenRect, int32_t  index, bool  inverseYAxis) ;

/// @brief Method GetPreferredValues addr 0x2d29fd8 size 0x12c virtual false final false
static inline ::UnityEngine::Vector2 GetPreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings*  settings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method Prepare addr 0x2d29d6c size 0x134 virtual false final false
inline void Prepare(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method GenerateTextMesh addr 0x2d22ddc size 0x68c8 virtual false final false
inline void GenerateTextMesh(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method SaveWordWrappingState addr 0x2d2b1f8 size 0x218 virtual false final false
inline void SaveWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState>  state, int32_t  index, int32_t  count, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method RestoreWordWrappingState addr 0x2d2b410 size 0x23c virtual false final false
inline int32_t RestoreWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState>  state, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method ValidateHtmlTag addr 0x2d2b64c size 0x42ac virtual false final false
inline bool ValidateHtmlTag(::ArrayW<int32_t,::Array<int32_t>*>  chars, int32_t  startIndex, ByRef<int32_t>  endIndex, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method SaveGlyphVertexInfo addr 0x2d2f8f8 size 0x1dec virtual false final false
inline void SaveGlyphVertexInfo(float_t  padding, float_t  stylePadding, ::UnityEngine::Color32  vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method SaveSpriteVertexInfo addr 0x2d316e4 size 0x1ab4 virtual false final false
inline void SaveSpriteVertexInfo(::UnityEngine::Color32  vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method DrawUnderlineMesh addr 0x2d33198 size 0xf68 virtual false final false
inline void DrawUnderlineMesh(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ByRef<int32_t>  index, float_t  startScale, float_t  endScale, float_t  maxScale, float_t  sdfScale, ::UnityEngine::Color32  underlineColor, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method DrawTextHighlight addr 0x2d34238 size 0x5ac virtual false final false
inline void DrawTextHighlight(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ByRef<int32_t>  index, ::UnityEngine::Color32  highlightColor, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method ClearMesh addr 0x2d347e4 size 0x20 virtual false final false
static inline void ClearMesh(bool  updateMesh, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method EnableMasking addr 0x2d34804 size 0xc virtual false final false
inline void EnableMasking() ;

/// @brief Method DisableMasking addr 0x2d34810 size 0x8 virtual false final false
inline void DisableMasking() ;

/// @brief Method SetArraySizes addr 0x2d2a380 size 0xe78 virtual false final false
inline void SetArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  chars, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method GetTextElement addr 0x2d34818 size 0x2ec virtual false final false
inline ::UnityEngine::TextCore::Text::TextElement* GetTextElement(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, uint32_t  unicode, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset, ::UnityEngine::TextCore::Text::FontStyles  fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight  fontWeight, ByRef<bool>  isUsingAlternativeTypeface) ;

/// @brief Method ComputeMarginSize addr 0x2d2a240 size 0x140 virtual false final false
inline void ComputeMarginSize(::UnityEngine::Rect  rect, ::UnityEngine::Vector4  margins) ;

/// @brief Method GetSpecialCharacters addr 0x2d2a218 size 0x28 virtual false final false
inline void GetSpecialCharacters(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings) ;

/// @brief Method GetEllipsisSpecialCharacter addr 0x2d34b04 size 0x18c virtual false final false
inline void GetEllipsisSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings) ;

/// @brief Method GetUnderlineSpecialCharacter addr 0x2d34100 size 0x138 virtual false final false
inline void GetUnderlineSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings) ;

/// @brief Method GetPaddingForMaterial addr 0x2d34c90 size 0x114 virtual false final false
inline float_t GetPaddingForMaterial(::UnityEngine::Material*  material, bool  extraPadding) ;

/// @brief Method GetPreferredValuesInternal addr 0x2d2a104 size 0x114 virtual false final false
inline ::UnityEngine::Vector2 GetPreferredValuesInternal(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method CalculatePreferredValues addr 0x2d34da4 size 0x2c10 virtual true final false
inline ::UnityEngine::Vector2 CalculatePreferredValues(float_t  defaultFontSize, ::UnityEngine::Vector2  marginSize, bool  ignoreTextAutoSizing, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

static inline ::UnityEngine::TextCore::Text::TextGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x2d2971c size 0x4dc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextGenerator(TextGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextGenerator(TextGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextGenerator()  = default;
public:


// Fields

// Static field s_TextGenerator


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextGenerator, 0xa58>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGenerator*, "UnityEngine.TextCore.Text", "TextGenerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__TextGenerator__SpecialCharacter, "UnityEngine.TextCore.Text", "TextGenerator/SpecialCharacter");
