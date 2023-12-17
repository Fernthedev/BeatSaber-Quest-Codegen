#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorsOverrideSettingsPanelController)
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace HMUI {
class ModalView;
}
namespace GlobalNamespace {
class ColorSchemeDropdown;
}
namespace GlobalNamespace {
class EditColorSchemeController;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class ButtonBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorsOverrideSettingsPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorsOverrideSettingsPanelController);
// Type: ::ColorsOverrideSettingsPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5412))
// CS Name: ::ColorsOverrideSettingsPanelController*
class CORDL_TYPE ColorsOverrideSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _overrideColorsToggle offset 0x18
 __declspec(property(get=__get__overrideColorsToggle, put=__set__overrideColorsToggle)) ::UnityEngine::UI::Toggle*  _overrideColorsToggle;

/// @brief Field _detailsPanelGO offset 0x20
 __declspec(property(get=__get__detailsPanelGO, put=__set__detailsPanelGO)) ::UnityEngine::GameObject*  _detailsPanelGO;

/// @brief Field _colorSchemeDropDown offset 0x28
 __declspec(property(get=__get__colorSchemeDropDown, put=__set__colorSchemeDropDown)) ::GlobalNamespace::ColorSchemeDropdown*  _colorSchemeDropDown;

/// @brief Field _editColorSchemeController offset 0x30
 __declspec(property(get=__get__editColorSchemeController, put=__set__editColorSchemeController)) ::GlobalNamespace::EditColorSchemeController*  _editColorSchemeController;

/// @brief Field _editColorSchemeModalView offset 0x38
 __declspec(property(get=__get__editColorSchemeModalView, put=__set__editColorSchemeModalView)) ::HMUI::ModalView*  _editColorSchemeModalView;

/// @brief Field _editColorSchemeButton offset 0x40
 __declspec(property(get=__get__editColorSchemeButton, put=__set__editColorSchemeButton)) ::UnityEngine::UI::Button*  _editColorSchemeButton;

/// @brief Field _presentPanelAnimation offset 0x48
 __declspec(property(get=__get__presentPanelAnimation, put=__set__presentPanelAnimation)) ::HMUI::PanelAnimationSO*  _presentPanelAnimation;

/// @brief Field _dismissPanelAnimation offset 0x50
 __declspec(property(get=__get__dismissPanelAnimation, put=__set__dismissPanelAnimation)) ::HMUI::PanelAnimationSO*  _dismissPanelAnimation;

/// @brief Field _analyticsModel offset 0x58
 __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field _colorSchemesSettings offset 0x60
 __declspec(property(get=__get__colorSchemesSettings, put=__set__colorSchemesSettings)) ::GlobalNamespace::ColorSchemesSettings*  _colorSchemesSettings;

/// @brief Field _initialized offset 0x68
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Field _isDirty offset 0x69
 __declspec(property(get=__get__isDirty, put=__set__isDirty)) bool  _isDirty;

/// @brief Field _buttonBinder offset 0x70
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr operator  ::GlobalNamespace::IRefreshable*() noexcept;

constexpr void __set__overrideColorsToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__overrideColorsToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__overrideColorsToggle() const;

constexpr void __set__detailsPanelGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__detailsPanelGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__detailsPanelGO() const;

constexpr void __set__colorSchemeDropDown(::GlobalNamespace::ColorSchemeDropdown*  value) ;

constexpr ::GlobalNamespace::ColorSchemeDropdown* __get__colorSchemeDropDown() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeDropdown*> __get__colorSchemeDropDown() const;

constexpr void __set__editColorSchemeController(::GlobalNamespace::EditColorSchemeController*  value) ;

constexpr ::GlobalNamespace::EditColorSchemeController* __get__editColorSchemeController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditColorSchemeController*> __get__editColorSchemeController() const;

constexpr void __set__editColorSchemeModalView(::HMUI::ModalView*  value) ;

constexpr ::HMUI::ModalView* __get__editColorSchemeModalView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> __get__editColorSchemeModalView() const;

constexpr void __set__editColorSchemeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__editColorSchemeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__editColorSchemeButton() const;

constexpr void __set__presentPanelAnimation(::HMUI::PanelAnimationSO*  value) ;

constexpr ::HMUI::PanelAnimationSO* __get__presentPanelAnimation() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> __get__presentPanelAnimation() const;

constexpr void __set__dismissPanelAnimation(::HMUI::PanelAnimationSO*  value) ;

constexpr ::HMUI::PanelAnimationSO* __get__dismissPanelAnimation() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> __get__dismissPanelAnimation() const;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr ::GlobalNamespace::IAnalyticsModel* __get__analyticsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> __get__analyticsModel() const;

constexpr void __set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings*  value) ;

constexpr ::GlobalNamespace::ColorSchemesSettings* __get__colorSchemesSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesSettings*> __get__colorSchemesSettings() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

constexpr void __set__isDirty(bool  value) ;

constexpr bool& __get__isDirty() ;

constexpr bool const& __get__isDirty() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

/// @brief Method SetData addr 0x2275e84 size 0x268 virtual false final false
inline void SetData(::GlobalNamespace::ColorSchemesSettings*  colorSchemesSettings) ;

/// @brief Method OnDestroy addr 0x2276238 size 0x23c virtual false final false
inline void OnDestroy() ;

/// @brief Method OnDisable addr 0x22765c0 size 0x24 virtual false final false
inline void OnDisable() ;

/// @brief Method OnEnable addr 0x22765e4 size 0x10 virtual false final false
inline void OnEnable() ;

/// @brief Method Refresh addr 0x22765f4 size 0x1d8 virtual true final true
inline void Refresh() ;

/// @brief Method HandleDropDownDidSelectCellWithIdx addr 0x22767cc size 0x18c virtual false final false
inline void HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropDownWithTableView, int32_t  idx) ;

/// @brief Method HandleOverrideColorsToggleValueChanged addr 0x2276958 size 0x22c virtual false final false
inline void HandleOverrideColorsToggleValueChanged(bool  isOn) ;

/// @brief Method HandleEditColorSchemeButtonWasPressed addr 0x2276b84 size 0x7c virtual false final false
inline void HandleEditColorSchemeButtonWasPressed() ;

/// @brief Method HandleEditColorSchemeControllerDidFinish addr 0x2276c18 size 0x50 virtual false final false
inline void HandleEditColorSchemeControllerDidFinish() ;

/// @brief Method HandleEditColorSchemeControllerDidChangeColorScheme addr 0x2276c68 size 0x2c virtual false final false
inline void HandleEditColorSchemeControllerDidChangeColorScheme(::GlobalNamespace::ColorScheme*  colorScheme) ;

static inline ::GlobalNamespace::ColorsOverrideSettingsPanelController* New_ctor() ;

/// @brief Method .ctor addr 0x2276c94 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleOverrideColorsToggleValueChanged>b__19_0 addr 0x2276c9c size 0x20 virtual false final false
inline void _HandleOverrideColorsToggleValueChanged_b__19_0() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorsOverrideSettingsPanelController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorsOverrideSettingsPanelController(ColorsOverrideSettingsPanelController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorsOverrideSettingsPanelController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorsOverrideSettingsPanelController(ColorsOverrideSettingsPanelController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorsOverrideSettingsPanelController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorsOverrideSettingsPanelController, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorsOverrideSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorsOverrideSettingsPanelController*, "", "ColorsOverrideSettingsPanelController");
