#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_CharacterInfo)
namespace TMPro {
struct TMP_TextElementType;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
class TMP_TextElement;
}
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
struct TMP_Vertex;
}
namespace UnityEngine {
struct Vector3;
}
namespace TMPro {
struct HighlightState;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
struct TMP_CharacterInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_CharacterInfo);
// Type: TMPro::TMP_CharacterInfo
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12332))
// CS Name: ::TMPro::TMP_CharacterInfo
struct CORDL_TYPE TMP_CharacterInfo : public ::bs_hook::ValueTypeWrapper<0x178> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x178};

/// @brief Field character offset 0x0
 __declspec(property(get=__get_character, put=__set_character)) char16_t  character;

/// @brief Field index offset 0x4
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field stringLength offset 0x8
 __declspec(property(get=__get_stringLength, put=__set_stringLength)) int32_t  stringLength;

/// @brief Field elementType offset 0xc
 __declspec(property(get=__get_elementType, put=__set_elementType)) ::TMPro::TMP_TextElementType  elementType;

/// @brief Field textElement offset 0x10
 __declspec(property(get=__get_textElement, put=__set_textElement)) ::TMPro::TMP_TextElement*  textElement;

/// @brief Field fontAsset offset 0x18
 __declspec(property(get=__get_fontAsset, put=__set_fontAsset)) ::TMPro::TMP_FontAsset*  fontAsset;

/// @brief Field spriteAsset offset 0x20
 __declspec(property(get=__get_spriteAsset, put=__set_spriteAsset)) ::TMPro::TMP_SpriteAsset*  spriteAsset;

/// @brief Field spriteIndex offset 0x28
 __declspec(property(get=__get_spriteIndex, put=__set_spriteIndex)) int32_t  spriteIndex;

/// @brief Field material offset 0x30
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

/// @brief Field materialReferenceIndex offset 0x38
 __declspec(property(get=__get_materialReferenceIndex, put=__set_materialReferenceIndex)) int32_t  materialReferenceIndex;

/// @brief Field isUsingAlternateTypeface offset 0x3c
 __declspec(property(get=__get_isUsingAlternateTypeface, put=__set_isUsingAlternateTypeface)) bool  isUsingAlternateTypeface;

/// @brief Field pointSize offset 0x40
 __declspec(property(get=__get_pointSize, put=__set_pointSize)) float_t  pointSize;

/// @brief Field lineNumber offset 0x44
 __declspec(property(get=__get_lineNumber, put=__set_lineNumber)) int32_t  lineNumber;

/// @brief Field pageNumber offset 0x48
 __declspec(property(get=__get_pageNumber, put=__set_pageNumber)) int32_t  pageNumber;

/// @brief Field vertexIndex offset 0x4c
 __declspec(property(get=__get_vertexIndex, put=__set_vertexIndex)) int32_t  vertexIndex;

/// @brief Field vertex_BL offset 0x50
 __declspec(property(get=__get_vertex_BL, put=__set_vertex_BL)) ::TMPro::TMP_Vertex  vertex_BL;

/// @brief Field vertex_TL offset 0x78
 __declspec(property(get=__get_vertex_TL, put=__set_vertex_TL)) ::TMPro::TMP_Vertex  vertex_TL;

/// @brief Field vertex_TR offset 0xa0
 __declspec(property(get=__get_vertex_TR, put=__set_vertex_TR)) ::TMPro::TMP_Vertex  vertex_TR;

/// @brief Field vertex_BR offset 0xc8
 __declspec(property(get=__get_vertex_BR, put=__set_vertex_BR)) ::TMPro::TMP_Vertex  vertex_BR;

/// @brief Field topLeft offset 0xf0
 __declspec(property(get=__get_topLeft, put=__set_topLeft)) ::UnityEngine::Vector3  topLeft;

/// @brief Field bottomLeft offset 0xfc
 __declspec(property(get=__get_bottomLeft, put=__set_bottomLeft)) ::UnityEngine::Vector3  bottomLeft;

/// @brief Field topRight offset 0x108
 __declspec(property(get=__get_topRight, put=__set_topRight)) ::UnityEngine::Vector3  topRight;

/// @brief Field bottomRight offset 0x114
 __declspec(property(get=__get_bottomRight, put=__set_bottomRight)) ::UnityEngine::Vector3  bottomRight;

/// @brief Field origin offset 0x120
 __declspec(property(get=__get_origin, put=__set_origin)) float_t  origin;

/// @brief Field xAdvance offset 0x124
 __declspec(property(get=__get_xAdvance, put=__set_xAdvance)) float_t  xAdvance;

/// @brief Field ascender offset 0x128
 __declspec(property(get=__get_ascender, put=__set_ascender)) float_t  ascender;

/// @brief Field baseLine offset 0x12c
 __declspec(property(get=__get_baseLine, put=__set_baseLine)) float_t  baseLine;

/// @brief Field descender offset 0x130
 __declspec(property(get=__get_descender, put=__set_descender)) float_t  descender;

/// @brief Field adjustedAscender offset 0x134
 __declspec(property(get=__get_adjustedAscender, put=__set_adjustedAscender)) float_t  adjustedAscender;

/// @brief Field adjustedDescender offset 0x138
 __declspec(property(get=__get_adjustedDescender, put=__set_adjustedDescender)) float_t  adjustedDescender;

/// @brief Field aspectRatio offset 0x13c
 __declspec(property(get=__get_aspectRatio, put=__set_aspectRatio)) float_t  aspectRatio;

/// @brief Field scale offset 0x140
 __declspec(property(get=__get_scale, put=__set_scale)) float_t  scale;

/// @brief Field color offset 0x144
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color32  color;

/// @brief Field underlineColor offset 0x148
 __declspec(property(get=__get_underlineColor, put=__set_underlineColor)) ::UnityEngine::Color32  underlineColor;

/// @brief Field underlineVertexIndex offset 0x14c
 __declspec(property(get=__get_underlineVertexIndex, put=__set_underlineVertexIndex)) int32_t  underlineVertexIndex;

/// @brief Field strikethroughColor offset 0x150
 __declspec(property(get=__get_strikethroughColor, put=__set_strikethroughColor)) ::UnityEngine::Color32  strikethroughColor;

/// @brief Field strikethroughVertexIndex offset 0x154
 __declspec(property(get=__get_strikethroughVertexIndex, put=__set_strikethroughVertexIndex)) int32_t  strikethroughVertexIndex;

/// @brief Field highlightColor offset 0x158
 __declspec(property(get=__get_highlightColor, put=__set_highlightColor)) ::UnityEngine::Color32  highlightColor;

/// @brief Field highlightState offset 0x15c
 __declspec(property(get=__get_highlightState, put=__set_highlightState)) ::TMPro::HighlightState  highlightState;

/// @brief Field style offset 0x170
 __declspec(property(get=__get_style, put=__set_style)) ::TMPro::FontStyles  style;

/// @brief Field isVisible offset 0x174
 __declspec(property(get=__get_isVisible, put=__set_isVisible)) bool  isVisible;

constexpr void __set_character(char16_t  value) ;

constexpr char16_t& __get_character() ;

constexpr char16_t const& __get_character() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_stringLength(int32_t  value) ;

constexpr int32_t& __get_stringLength() ;

constexpr int32_t const& __get_stringLength() const;

constexpr void __set_elementType(::TMPro::TMP_TextElementType  value) ;

constexpr ::TMPro::TMP_TextElementType& __get_elementType() ;

constexpr ::TMPro::TMP_TextElementType const& __get_elementType() const;

constexpr void __set_textElement(::TMPro::TMP_TextElement*  value) ;

constexpr ::TMPro::TMP_TextElement* __get_textElement() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_TextElement*> __get_textElement() const;

constexpr void __set_fontAsset(::TMPro::TMP_FontAsset*  value) ;

constexpr ::TMPro::TMP_FontAsset* __get_fontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> __get_fontAsset() const;

constexpr void __set_spriteAsset(::TMPro::TMP_SpriteAsset*  value) ;

constexpr ::TMPro::TMP_SpriteAsset* __get_spriteAsset() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_SpriteAsset*> __get_spriteAsset() const;

constexpr void __set_spriteIndex(int32_t  value) ;

constexpr int32_t& __get_spriteIndex() ;

constexpr int32_t const& __get_spriteIndex() const;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

constexpr void __set_materialReferenceIndex(int32_t  value) ;

constexpr int32_t& __get_materialReferenceIndex() ;

constexpr int32_t const& __get_materialReferenceIndex() const;

constexpr void __set_isUsingAlternateTypeface(bool  value) ;

constexpr bool& __get_isUsingAlternateTypeface() ;

constexpr bool const& __get_isUsingAlternateTypeface() const;

constexpr void __set_pointSize(float_t  value) ;

constexpr float_t& __get_pointSize() ;

constexpr float_t const& __get_pointSize() const;

constexpr void __set_lineNumber(int32_t  value) ;

constexpr int32_t& __get_lineNumber() ;

constexpr int32_t const& __get_lineNumber() const;

constexpr void __set_pageNumber(int32_t  value) ;

constexpr int32_t& __get_pageNumber() ;

constexpr int32_t const& __get_pageNumber() const;

constexpr void __set_vertexIndex(int32_t  value) ;

constexpr int32_t& __get_vertexIndex() ;

constexpr int32_t const& __get_vertexIndex() const;

constexpr void __set_vertex_BL(::TMPro::TMP_Vertex  value) ;

constexpr ::TMPro::TMP_Vertex& __get_vertex_BL() ;

constexpr ::TMPro::TMP_Vertex const& __get_vertex_BL() const;

constexpr void __set_vertex_TL(::TMPro::TMP_Vertex  value) ;

constexpr ::TMPro::TMP_Vertex& __get_vertex_TL() ;

constexpr ::TMPro::TMP_Vertex const& __get_vertex_TL() const;

constexpr void __set_vertex_TR(::TMPro::TMP_Vertex  value) ;

constexpr ::TMPro::TMP_Vertex& __get_vertex_TR() ;

constexpr ::TMPro::TMP_Vertex const& __get_vertex_TR() const;

constexpr void __set_vertex_BR(::TMPro::TMP_Vertex  value) ;

constexpr ::TMPro::TMP_Vertex& __get_vertex_BR() ;

constexpr ::TMPro::TMP_Vertex const& __get_vertex_BR() const;

constexpr void __set_topLeft(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_topLeft() ;

constexpr ::UnityEngine::Vector3 const& __get_topLeft() const;

constexpr void __set_bottomLeft(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bottomLeft() ;

constexpr ::UnityEngine::Vector3 const& __get_bottomLeft() const;

constexpr void __set_topRight(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_topRight() ;

constexpr ::UnityEngine::Vector3 const& __get_topRight() const;

constexpr void __set_bottomRight(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bottomRight() ;

constexpr ::UnityEngine::Vector3 const& __get_bottomRight() const;

constexpr void __set_origin(float_t  value) ;

constexpr float_t& __get_origin() ;

constexpr float_t const& __get_origin() const;

constexpr void __set_xAdvance(float_t  value) ;

constexpr float_t& __get_xAdvance() ;

constexpr float_t const& __get_xAdvance() const;

constexpr void __set_ascender(float_t  value) ;

constexpr float_t& __get_ascender() ;

constexpr float_t const& __get_ascender() const;

constexpr void __set_baseLine(float_t  value) ;

constexpr float_t& __get_baseLine() ;

constexpr float_t const& __get_baseLine() const;

constexpr void __set_descender(float_t  value) ;

constexpr float_t& __get_descender() ;

constexpr float_t const& __get_descender() const;

constexpr void __set_adjustedAscender(float_t  value) ;

constexpr float_t& __get_adjustedAscender() ;

constexpr float_t const& __get_adjustedAscender() const;

constexpr void __set_adjustedDescender(float_t  value) ;

constexpr float_t& __get_adjustedDescender() ;

constexpr float_t const& __get_adjustedDescender() const;

constexpr void __set_aspectRatio(float_t  value) ;

constexpr float_t& __get_aspectRatio() ;

constexpr float_t const& __get_aspectRatio() const;

constexpr void __set_scale(float_t  value) ;

constexpr float_t& __get_scale() ;

constexpr float_t const& __get_scale() const;

constexpr void __set_color(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_color() ;

constexpr ::UnityEngine::Color32 const& __get_color() const;

constexpr void __set_underlineColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_underlineColor() ;

constexpr ::UnityEngine::Color32 const& __get_underlineColor() const;

constexpr void __set_underlineVertexIndex(int32_t  value) ;

constexpr int32_t& __get_underlineVertexIndex() ;

constexpr int32_t const& __get_underlineVertexIndex() const;

constexpr void __set_strikethroughColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_strikethroughColor() ;

constexpr ::UnityEngine::Color32 const& __get_strikethroughColor() const;

constexpr void __set_strikethroughVertexIndex(int32_t  value) ;

constexpr int32_t& __get_strikethroughVertexIndex() ;

constexpr int32_t const& __get_strikethroughVertexIndex() const;

constexpr void __set_highlightColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_highlightColor() ;

constexpr ::UnityEngine::Color32 const& __get_highlightColor() const;

constexpr void __set_highlightState(::TMPro::HighlightState  value) ;

constexpr ::TMPro::HighlightState& __get_highlightState() ;

constexpr ::TMPro::HighlightState const& __get_highlightState() const;

constexpr void __set_style(::TMPro::FontStyles  value) ;

constexpr ::TMPro::FontStyles& __get_style() ;

constexpr ::TMPro::FontStyles const& __get_style() const;

constexpr void __set_isVisible(bool  value) ;

constexpr bool& __get_isVisible() ;

constexpr bool const& __get_isVisible() const;

// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stringLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementType", ty: "::TMPro::TMP_TextElementType", modifiers: "", def_value: None }, CppParam { name: "textElement", ty: "::TMPro::TMP_TextElement*", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::TMPro::TMP_FontAsset*", modifiers: "", def_value: None }, CppParam { name: "spriteAsset", ty: "::TMPro::TMP_SpriteAsset*", modifiers: "", def_value: None }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertex_BL", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "vertex_TL", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "vertex_TR", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "vertex_BR", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "topLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "adjustedAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "adjustedDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineVertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "strikethroughVertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightState", ty: "::TMPro::HighlightState", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::TMPro::FontStyles", modifiers: "", def_value: None }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: None }]
constexpr TMP_CharacterInfo(char16_t  character, int32_t  index, int32_t  stringLength, ::TMPro::TMP_TextElementType  elementType, ::TMPro::TMP_TextElement*  textElement, ::TMPro::TMP_FontAsset*  fontAsset, ::TMPro::TMP_SpriteAsset*  spriteAsset, int32_t  spriteIndex, ::UnityEngine::Material*  material, int32_t  materialReferenceIndex, bool  isUsingAlternateTypeface, float_t  pointSize, int32_t  lineNumber, int32_t  pageNumber, int32_t  vertexIndex, ::TMPro::TMP_Vertex  vertex_BL, ::TMPro::TMP_Vertex  vertex_TL, ::TMPro::TMP_Vertex  vertex_TR, ::TMPro::TMP_Vertex  vertex_BR, ::UnityEngine::Vector3  topLeft, ::UnityEngine::Vector3  bottomLeft, ::UnityEngine::Vector3  topRight, ::UnityEngine::Vector3  bottomRight, float_t  origin, float_t  xAdvance, float_t  ascender, float_t  baseLine, float_t  descender, float_t  adjustedAscender, float_t  adjustedDescender, float_t  aspectRatio, float_t  scale, ::UnityEngine::Color32  color, ::UnityEngine::Color32  underlineColor, int32_t  underlineVertexIndex, ::UnityEngine::Color32  strikethroughColor, int32_t  strikethroughVertexIndex, ::UnityEngine::Color32  highlightColor, ::TMPro::HighlightState  highlightState, ::TMPro::FontStyles  style, bool  isVisible) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_CharacterInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x178>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_CharacterInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_CharacterInfo, 0x178>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_CharacterInfo, "TMPro", "TMP_CharacterInfo");
