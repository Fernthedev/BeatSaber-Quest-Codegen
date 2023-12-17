#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSettings)
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class UnicodeLineBreakingRules;
}
namespace UnityEngine::TextCore::Text {
struct __TextSettings__FontReferenceMap;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine::TextCore::Text {
struct __TextSettings__FontReferenceMap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextSettings);
MARK_VAL_T(::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap);
// Type: ::FontReferenceMap
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13683))
// CS Name: ::TextSettings::FontReferenceMap
struct CORDL_TYPE __TextSettings__FontReferenceMap : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field font offset 0x0
 __declspec(property(get=__get_font, put=__set_font)) ::UnityEngine::Font*  font;

/// @brief Field fontAsset offset 0x8
 __declspec(property(get=__get_fontAsset, put=__set_fontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  fontAsset;

constexpr void __set_font(::UnityEngine::Font*  value) ;

constexpr ::UnityEngine::Font* __get_font() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> __get_font() const;

constexpr void __set_fontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_fontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_fontAsset() const;

/// @brief Method .ctor addr 0x2d3fedc size 0x8 virtual false final false
inline void _ctor(::UnityEngine::Font*  font, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset) ;

// Ctor Parameters [CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }]
constexpr __TextSettings__FontReferenceMap(::UnityEngine::Font*  font, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TextSettings__FontReferenceMap(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TextSettings__FontReferenceMap()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextSettings
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13684))
// CS Name: ::UnityEngine.TextCore.Text::TextSettings*
class CORDL_TYPE TextSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FontReferenceMap = ::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field m_Version offset 0x18
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) ::StringW  m_Version;

/// @brief Field m_DefaultFontAsset offset 0x20
 __declspec(property(get=__get_m_DefaultFontAsset, put=__set_m_DefaultFontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  m_DefaultFontAsset;

/// @brief Field m_DefaultFontAssetPath offset 0x28
 __declspec(property(get=__get_m_DefaultFontAssetPath, put=__set_m_DefaultFontAssetPath)) ::StringW  m_DefaultFontAssetPath;

/// @brief Field m_FallbackFontAssets offset 0x30
 __declspec(property(get=__get_m_FallbackFontAssets, put=__set_m_FallbackFontAssets)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*  m_FallbackFontAssets;

/// @brief Field m_MatchMaterialPreset offset 0x38
 __declspec(property(get=__get_m_MatchMaterialPreset, put=__set_m_MatchMaterialPreset)) bool  m_MatchMaterialPreset;

/// @brief Field m_MissingCharacterUnicode offset 0x3c
 __declspec(property(get=__get_m_MissingCharacterUnicode, put=__set_m_MissingCharacterUnicode)) int32_t  m_MissingCharacterUnicode;

/// @brief Field m_ClearDynamicDataOnBuild offset 0x40
 __declspec(property(get=__get_m_ClearDynamicDataOnBuild, put=__set_m_ClearDynamicDataOnBuild)) bool  m_ClearDynamicDataOnBuild;

/// @brief Field m_DefaultSpriteAsset offset 0x48
 __declspec(property(get=__get_m_DefaultSpriteAsset, put=__set_m_DefaultSpriteAsset)) ::UnityEngine::TextCore::Text::SpriteAsset*  m_DefaultSpriteAsset;

/// @brief Field m_DefaultSpriteAssetPath offset 0x50
 __declspec(property(get=__get_m_DefaultSpriteAssetPath, put=__set_m_DefaultSpriteAssetPath)) ::StringW  m_DefaultSpriteAssetPath;

/// @brief Field m_FallbackSpriteAssets offset 0x58
 __declspec(property(get=__get_m_FallbackSpriteAssets, put=__set_m_FallbackSpriteAssets)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*  m_FallbackSpriteAssets;

/// @brief Field m_MissingSpriteCharacterUnicode offset 0x60
 __declspec(property(get=__get_m_MissingSpriteCharacterUnicode, put=__set_m_MissingSpriteCharacterUnicode)) uint32_t  m_MissingSpriteCharacterUnicode;

/// @brief Field m_DefaultStyleSheet offset 0x68
 __declspec(property(get=__get_m_DefaultStyleSheet, put=__set_m_DefaultStyleSheet)) ::UnityEngine::TextCore::Text::TextStyleSheet*  m_DefaultStyleSheet;

/// @brief Field m_StyleSheetsResourcePath offset 0x70
 __declspec(property(get=__get_m_StyleSheetsResourcePath, put=__set_m_StyleSheetsResourcePath)) ::StringW  m_StyleSheetsResourcePath;

/// @brief Field m_DefaultColorGradientPresetsPath offset 0x78
 __declspec(property(get=__get_m_DefaultColorGradientPresetsPath, put=__set_m_DefaultColorGradientPresetsPath)) ::StringW  m_DefaultColorGradientPresetsPath;

/// @brief Field m_UnicodeLineBreakingRules offset 0x80
 __declspec(property(get=__get_m_UnicodeLineBreakingRules, put=__set_m_UnicodeLineBreakingRules)) ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*  m_UnicodeLineBreakingRules;

/// @brief Field m_DisplayWarnings offset 0x88
 __declspec(property(get=__get_m_DisplayWarnings, put=__set_m_DisplayWarnings)) bool  m_DisplayWarnings;

/// @brief Field m_FontLookup offset 0x90
 __declspec(property(get=__get_m_FontLookup, put=__set_m_FontLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset*>*  m_FontLookup;

/// @brief Field m_FontReferences offset 0x98
 __declspec(property(get=__get_m_FontReferences, put=__set_m_FontReferences)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>*  m_FontReferences;

 __declspec(property(get=get_version, put=set_version)) ::StringW  version;

 __declspec(property(get=get_defaultFontAsset, put=set_defaultFontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  defaultFontAsset;

 __declspec(property(get=get_defaultFontAssetPath, put=set_defaultFontAssetPath)) ::StringW  defaultFontAssetPath;

 __declspec(property(get=get_fallbackFontAssets, put=set_fallbackFontAssets)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*  fallbackFontAssets;

 __declspec(property(get=get_matchMaterialPreset, put=set_matchMaterialPreset)) bool  matchMaterialPreset;

 __declspec(property(get=get_missingCharacterUnicode, put=set_missingCharacterUnicode)) int32_t  missingCharacterUnicode;

 __declspec(property(get=get_clearDynamicDataOnBuild, put=set_clearDynamicDataOnBuild)) bool  clearDynamicDataOnBuild;

 __declspec(property(get=get_defaultSpriteAsset, put=set_defaultSpriteAsset)) ::UnityEngine::TextCore::Text::SpriteAsset*  defaultSpriteAsset;

 __declspec(property(get=get_defaultSpriteAssetPath, put=set_defaultSpriteAssetPath)) ::StringW  defaultSpriteAssetPath;

 __declspec(property(get=get_fallbackSpriteAssets, put=set_fallbackSpriteAssets)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*  fallbackSpriteAssets;

 __declspec(property(get=get_missingSpriteCharacterUnicode, put=set_missingSpriteCharacterUnicode)) uint32_t  missingSpriteCharacterUnicode;

 __declspec(property(get=get_defaultStyleSheet, put=set_defaultStyleSheet)) ::UnityEngine::TextCore::Text::TextStyleSheet*  defaultStyleSheet;

 __declspec(property(get=get_styleSheetsResourcePath, put=set_styleSheetsResourcePath)) ::StringW  styleSheetsResourcePath;

 __declspec(property(get=get_defaultColorGradientPresetsPath, put=set_defaultColorGradientPresetsPath)) ::StringW  defaultColorGradientPresetsPath;

 __declspec(property(get=get_lineBreakingRules, put=set_lineBreakingRules)) ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*  lineBreakingRules;

 __declspec(property(get=get_displayWarnings, put=set_displayWarnings)) bool  displayWarnings;

constexpr void __set_m_Version(::StringW  value) ;

constexpr ::StringW& __get_m_Version() ;

constexpr ::StringW const& __get_m_Version() const;

constexpr void __set_m_DefaultFontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_m_DefaultFontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_m_DefaultFontAsset() const;

constexpr void __set_m_DefaultFontAssetPath(::StringW  value) ;

constexpr ::StringW& __get_m_DefaultFontAssetPath() ;

constexpr ::StringW const& __get_m_DefaultFontAssetPath() const;

constexpr void __set_m_FallbackFontAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* __get_m_FallbackFontAssets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*> __get_m_FallbackFontAssets() const;

constexpr void __set_m_MatchMaterialPreset(bool  value) ;

constexpr bool& __get_m_MatchMaterialPreset() ;

constexpr bool const& __get_m_MatchMaterialPreset() const;

constexpr void __set_m_MissingCharacterUnicode(int32_t  value) ;

constexpr int32_t& __get_m_MissingCharacterUnicode() ;

constexpr int32_t const& __get_m_MissingCharacterUnicode() const;

constexpr void __set_m_ClearDynamicDataOnBuild(bool  value) ;

constexpr bool& __get_m_ClearDynamicDataOnBuild() ;

constexpr bool const& __get_m_ClearDynamicDataOnBuild() const;

constexpr void __set_m_DefaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::SpriteAsset* __get_m_DefaultSpriteAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> __get_m_DefaultSpriteAsset() const;

constexpr void __set_m_DefaultSpriteAssetPath(::StringW  value) ;

constexpr ::StringW& __get_m_DefaultSpriteAssetPath() ;

constexpr ::StringW const& __get_m_DefaultSpriteAssetPath() const;

constexpr void __set_m_FallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* __get_m_FallbackSpriteAssets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*> __get_m_FallbackSpriteAssets() const;

constexpr void __set_m_MissingSpriteCharacterUnicode(uint32_t  value) ;

constexpr uint32_t& __get_m_MissingSpriteCharacterUnicode() ;

constexpr uint32_t const& __get_m_MissingSpriteCharacterUnicode() const;

constexpr void __set_m_DefaultStyleSheet(::UnityEngine::TextCore::Text::TextStyleSheet*  value) ;

constexpr ::UnityEngine::TextCore::Text::TextStyleSheet* __get_m_DefaultStyleSheet() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextStyleSheet*> __get_m_DefaultStyleSheet() const;

constexpr void __set_m_StyleSheetsResourcePath(::StringW  value) ;

constexpr ::StringW& __get_m_StyleSheetsResourcePath() ;

constexpr ::StringW const& __get_m_StyleSheetsResourcePath() const;

constexpr void __set_m_DefaultColorGradientPresetsPath(::StringW  value) ;

constexpr ::StringW& __get_m_DefaultColorGradientPresetsPath() ;

constexpr ::StringW const& __get_m_DefaultColorGradientPresetsPath() const;

constexpr void __set_m_UnicodeLineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*  value) ;

constexpr ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* __get_m_UnicodeLineBreakingRules() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*> __get_m_UnicodeLineBreakingRules() const;

constexpr void __set_m_DisplayWarnings(bool  value) ;

constexpr bool& __get_m_DisplayWarnings() ;

constexpr bool const& __get_m_DisplayWarnings() const;

constexpr void __set_m_FontLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset*>* __get_m_FontLookup() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset*>*> __get_m_FontLookup() const;

constexpr void __set_m_FontReferences(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>* __get_m_FontReferences() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>*> __get_m_FontReferences() const;

/// @brief Method get_version addr 0x2d3f860 size 0x8 virtual false final false
inline ::StringW get_version() ;

/// @brief Method set_version addr 0x2d3f868 size 0x8 virtual false final false
inline void set_version(::StringW  value) ;

/// @brief Method get_defaultFontAsset addr 0x2d3f870 size 0x8 virtual false final false
inline ::UnityEngine::TextCore::Text::FontAsset* get_defaultFontAsset() ;

/// @brief Method set_defaultFontAsset addr 0x2d3f878 size 0x8 virtual false final false
inline void set_defaultFontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

/// @brief Method get_defaultFontAssetPath addr 0x2d3f880 size 0x8 virtual false final false
inline ::StringW get_defaultFontAssetPath() ;

/// @brief Method set_defaultFontAssetPath addr 0x2d3f888 size 0x8 virtual false final false
inline void set_defaultFontAssetPath(::StringW  value) ;

/// @brief Method get_fallbackFontAssets addr 0x2d3f890 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* get_fallbackFontAssets() ;

/// @brief Method set_fallbackFontAssets addr 0x2d3f898 size 0x8 virtual false final false
inline void set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*  value) ;

/// @brief Method get_matchMaterialPreset addr 0x2d3f8a0 size 0x8 virtual false final false
inline bool get_matchMaterialPreset() ;

/// @brief Method set_matchMaterialPreset addr 0x2d3f8a8 size 0xc virtual false final false
inline void set_matchMaterialPreset(bool  value) ;

/// @brief Method get_missingCharacterUnicode addr 0x2d3f8b4 size 0x8 virtual false final false
inline int32_t get_missingCharacterUnicode() ;

/// @brief Method set_missingCharacterUnicode addr 0x2d3f8bc size 0x8 virtual false final false
inline void set_missingCharacterUnicode(int32_t  value) ;

/// @brief Method get_clearDynamicDataOnBuild addr 0x2d3f8c4 size 0x8 virtual false final false
inline bool get_clearDynamicDataOnBuild() ;

/// @brief Method set_clearDynamicDataOnBuild addr 0x2d3f8cc size 0xc virtual false final false
inline void set_clearDynamicDataOnBuild(bool  value) ;

/// @brief Method get_defaultSpriteAsset addr 0x2d3f8d8 size 0x8 virtual false final false
inline ::UnityEngine::TextCore::Text::SpriteAsset* get_defaultSpriteAsset() ;

/// @brief Method set_defaultSpriteAsset addr 0x2d3f8e0 size 0x8 virtual false final false
inline void set_defaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value) ;

/// @brief Method get_defaultSpriteAssetPath addr 0x2d3f8e8 size 0x8 virtual false final false
inline ::StringW get_defaultSpriteAssetPath() ;

/// @brief Method set_defaultSpriteAssetPath addr 0x2d3f8f0 size 0x8 virtual false final false
inline void set_defaultSpriteAssetPath(::StringW  value) ;

/// @brief Method get_fallbackSpriteAssets addr 0x2d3f8f8 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* get_fallbackSpriteAssets() ;

/// @brief Method set_fallbackSpriteAssets addr 0x2d3f900 size 0x8 virtual false final false
inline void set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*  value) ;

/// @brief Method get_missingSpriteCharacterUnicode addr 0x2d3f908 size 0x8 virtual false final false
inline uint32_t get_missingSpriteCharacterUnicode() ;

/// @brief Method set_missingSpriteCharacterUnicode addr 0x2d3f910 size 0x8 virtual false final false
inline void set_missingSpriteCharacterUnicode(uint32_t  value) ;

/// @brief Method get_defaultStyleSheet addr 0x2d3f918 size 0x8 virtual false final false
inline ::UnityEngine::TextCore::Text::TextStyleSheet* get_defaultStyleSheet() ;

/// @brief Method set_defaultStyleSheet addr 0x2d3f920 size 0x8 virtual false final false
inline void set_defaultStyleSheet(::UnityEngine::TextCore::Text::TextStyleSheet*  value) ;

/// @brief Method get_styleSheetsResourcePath addr 0x2d3f928 size 0x8 virtual false final false
inline ::StringW get_styleSheetsResourcePath() ;

/// @brief Method set_styleSheetsResourcePath addr 0x2d3f930 size 0x8 virtual false final false
inline void set_styleSheetsResourcePath(::StringW  value) ;

/// @brief Method get_defaultColorGradientPresetsPath addr 0x2d3f938 size 0x8 virtual false final false
inline ::StringW get_defaultColorGradientPresetsPath() ;

/// @brief Method set_defaultColorGradientPresetsPath addr 0x2d3f940 size 0x8 virtual false final false
inline void set_defaultColorGradientPresetsPath(::StringW  value) ;

/// @brief Method get_lineBreakingRules addr 0x2d3f948 size 0x84 virtual false final false
inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* get_lineBreakingRules() ;

/// @brief Method set_lineBreakingRules addr 0x2d3f9cc size 0x8 virtual false final false
inline void set_lineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*  value) ;

/// @brief Method get_displayWarnings addr 0x2d3f9d4 size 0x8 virtual false final false
inline bool get_displayWarnings() ;

/// @brief Method set_displayWarnings addr 0x2d3f9dc size 0xc virtual false final false
inline void set_displayWarnings(bool  value) ;

/// @brief Method InitializeFontReferenceLookup addr 0x2d3f9e8 size 0x1ec virtual false final false
inline void InitializeFontReferenceLookup() ;

/// @brief Method GetCachedFontAssetInternal addr 0x2d3fbd4 size 0x308 virtual false final false
inline ::UnityEngine::TextCore::Text::FontAsset* GetCachedFontAssetInternal(::UnityEngine::Font*  font) ;

static inline ::UnityEngine::TextCore::Text::TextSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2d3fee4 size 0x108 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextSettings(TextSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextSettings(TextSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextSettings()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextSettings, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextSettings*, "UnityEngine.TextCore.Text", "TextSettings");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap, "UnityEngine.TextCore.Text", "TextSettings/FontReferenceMap");
