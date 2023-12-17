#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PanelTextSettings)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelTextSettings);
// Type: UnityEngine.UIElements::PanelTextSettings
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13684))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7148))
// CS Name: ::UnityEngine.UIElements::PanelTextSettings*
class CORDL_TYPE PanelTextSettings : public ::UnityEngine::TextCore::Text::TextSettings {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::TextCore::Text::TextSettings)]{};

static inline void setStaticF_s_DefaultPanelTextSettings(::UnityEngine::UIElements::PanelTextSettings*  value) ;

static inline ::UnityEngine::UIElements::PanelTextSettings* getStaticF_s_DefaultPanelTextSettings() ;

static inline void setStaticF_EditorGUIUtilityLoad(::System::Func_2<::StringW,::UnityEngine::Object*>*  value) ;

static inline ::System::Func_2<::StringW,::UnityEngine::Object*>* getStaticF_EditorGUIUtilityLoad() ;

static inline void setStaticF_GetCurrentLanguage(::System::Func_1<::UnityEngine::SystemLanguage>*  value) ;

static inline ::System::Func_1<::UnityEngine::SystemLanguage>* getStaticF_GetCurrentLanguage() ;

static inline void setStaticF_s_DefaultEditorPanelTextSettingPath(::StringW  value) ;

static inline ::StringW getStaticF_s_DefaultEditorPanelTextSettingPath() ;

/// @brief Method get_defaultPanelTextSettings addr 0x2e4740c size 0x134 virtual false final false
static inline ::UnityEngine::UIElements::PanelTextSettings* get_defaultPanelTextSettings() ;

/// @brief Method UpdateLocalizationFontAsset addr 0x2e478f4 size 0x4c0 virtual false final false
static inline void UpdateLocalizationFontAsset() ;

/// @brief Method GetCachedFontAsset addr 0x2e46f04 size 0x8 virtual false final false
inline ::UnityEngine::TextCore::Text::FontAsset* GetCachedFontAsset(::UnityEngine::Font*  font) ;

static inline ::UnityEngine::UIElements::PanelTextSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2e47db4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelTextSettings(PanelTextSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelTextSettings(PanelTextSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PanelTextSettings()  = default;
public:


// Fields

// Static field s_DefaultPanelTextSettings

// Static field EditorGUIUtilityLoad

// Static field GetCurrentLanguage

// Static field s_DefaultEditorPanelTextSettingPath


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelTextSettings, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PanelTextSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelTextSettings*, "UnityEngine.UIElements", "PanelTextSettings");
