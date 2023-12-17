#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontAssetCreationEditorSettings)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontAssetCreationEditorSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings);
// Type: UnityEngine.TextCore.Text::FontAssetCreationEditorSettings
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13679))
// CS Name: ::UnityEngine.TextCore.Text::FontAssetCreationEditorSettings
struct CORDL_TYPE FontAssetCreationEditorSettings : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field sourceFontFileGUID offset 0x0
 __declspec(property(get=__get_sourceFontFileGUID, put=__set_sourceFontFileGUID)) ::StringW  sourceFontFileGUID;

/// @brief Field faceIndex offset 0x8
 __declspec(property(get=__get_faceIndex, put=__set_faceIndex)) int32_t  faceIndex;

/// @brief Field pointSizeSamplingMode offset 0xc
 __declspec(property(get=__get_pointSizeSamplingMode, put=__set_pointSizeSamplingMode)) int32_t  pointSizeSamplingMode;

/// @brief Field pointSize offset 0x10
 __declspec(property(get=__get_pointSize, put=__set_pointSize)) int32_t  pointSize;

/// @brief Field padding offset 0x14
 __declspec(property(get=__get_padding, put=__set_padding)) int32_t  padding;

/// @brief Field packingMode offset 0x18
 __declspec(property(get=__get_packingMode, put=__set_packingMode)) int32_t  packingMode;

/// @brief Field atlasWidth offset 0x1c
 __declspec(property(get=__get_atlasWidth, put=__set_atlasWidth)) int32_t  atlasWidth;

/// @brief Field atlasHeight offset 0x20
 __declspec(property(get=__get_atlasHeight, put=__set_atlasHeight)) int32_t  atlasHeight;

/// @brief Field characterSetSelectionMode offset 0x24
 __declspec(property(get=__get_characterSetSelectionMode, put=__set_characterSetSelectionMode)) int32_t  characterSetSelectionMode;

/// @brief Field characterSequence offset 0x28
 __declspec(property(get=__get_characterSequence, put=__set_characterSequence)) ::StringW  characterSequence;

/// @brief Field referencedFontAssetGUID offset 0x30
 __declspec(property(get=__get_referencedFontAssetGUID, put=__set_referencedFontAssetGUID)) ::StringW  referencedFontAssetGUID;

/// @brief Field referencedTextAssetGUID offset 0x38
 __declspec(property(get=__get_referencedTextAssetGUID, put=__set_referencedTextAssetGUID)) ::StringW  referencedTextAssetGUID;

/// @brief Field fontStyle offset 0x40
 __declspec(property(get=__get_fontStyle, put=__set_fontStyle)) int32_t  fontStyle;

/// @brief Field fontStyleModifier offset 0x44
 __declspec(property(get=__get_fontStyleModifier, put=__set_fontStyleModifier)) float_t  fontStyleModifier;

/// @brief Field renderMode offset 0x48
 __declspec(property(get=__get_renderMode, put=__set_renderMode)) int32_t  renderMode;

/// @brief Field includeFontFeatures offset 0x4c
 __declspec(property(get=__get_includeFontFeatures, put=__set_includeFontFeatures)) bool  includeFontFeatures;

constexpr void __set_sourceFontFileGUID(::StringW  value) ;

constexpr ::StringW& __get_sourceFontFileGUID() ;

constexpr ::StringW const& __get_sourceFontFileGUID() const;

constexpr void __set_faceIndex(int32_t  value) ;

constexpr int32_t& __get_faceIndex() ;

constexpr int32_t const& __get_faceIndex() const;

constexpr void __set_pointSizeSamplingMode(int32_t  value) ;

constexpr int32_t& __get_pointSizeSamplingMode() ;

constexpr int32_t const& __get_pointSizeSamplingMode() const;

constexpr void __set_pointSize(int32_t  value) ;

constexpr int32_t& __get_pointSize() ;

constexpr int32_t const& __get_pointSize() const;

constexpr void __set_padding(int32_t  value) ;

constexpr int32_t& __get_padding() ;

constexpr int32_t const& __get_padding() const;

constexpr void __set_packingMode(int32_t  value) ;

constexpr int32_t& __get_packingMode() ;

constexpr int32_t const& __get_packingMode() const;

constexpr void __set_atlasWidth(int32_t  value) ;

constexpr int32_t& __get_atlasWidth() ;

constexpr int32_t const& __get_atlasWidth() const;

constexpr void __set_atlasHeight(int32_t  value) ;

constexpr int32_t& __get_atlasHeight() ;

constexpr int32_t const& __get_atlasHeight() const;

constexpr void __set_characterSetSelectionMode(int32_t  value) ;

constexpr int32_t& __get_characterSetSelectionMode() ;

constexpr int32_t const& __get_characterSetSelectionMode() const;

constexpr void __set_characterSequence(::StringW  value) ;

constexpr ::StringW& __get_characterSequence() ;

constexpr ::StringW const& __get_characterSequence() const;

constexpr void __set_referencedFontAssetGUID(::StringW  value) ;

constexpr ::StringW& __get_referencedFontAssetGUID() ;

constexpr ::StringW const& __get_referencedFontAssetGUID() const;

constexpr void __set_referencedTextAssetGUID(::StringW  value) ;

constexpr ::StringW& __get_referencedTextAssetGUID() ;

constexpr ::StringW const& __get_referencedTextAssetGUID() const;

constexpr void __set_fontStyle(int32_t  value) ;

constexpr int32_t& __get_fontStyle() ;

constexpr int32_t const& __get_fontStyle() const;

constexpr void __set_fontStyleModifier(float_t  value) ;

constexpr float_t& __get_fontStyleModifier() ;

constexpr float_t const& __get_fontStyleModifier() const;

constexpr void __set_renderMode(int32_t  value) ;

constexpr int32_t& __get_renderMode() ;

constexpr int32_t const& __get_renderMode() const;

constexpr void __set_includeFontFeatures(bool  value) ;

constexpr bool& __get_includeFontFeatures() ;

constexpr bool const& __get_includeFontFeatures() const;

// Ctor Parameters [CppParam { name: "sourceFontFileGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointSizeSamplingMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "packingMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "atlasWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "atlasHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterSetSelectionMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterSequence", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "referencedFontAssetGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "referencedTextAssetGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyleModifier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "includeFontFeatures", ty: "bool", modifiers: "", def_value: None }]
constexpr FontAssetCreationEditorSettings(::StringW  sourceFontFileGUID, int32_t  faceIndex, int32_t  pointSizeSamplingMode, int32_t  pointSize, int32_t  padding, int32_t  packingMode, int32_t  atlasWidth, int32_t  atlasHeight, int32_t  characterSetSelectionMode, ::StringW  characterSequence, ::StringW  referencedFontAssetGUID, ::StringW  referencedTextAssetGUID, int32_t  fontStyle, float_t  fontStyleModifier, int32_t  renderMode, bool  includeFontFeatures) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FontAssetCreationEditorSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FontAssetCreationEditorSettings()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, "UnityEngine.TextCore.Text", "FontAssetCreationEditorSettings");
