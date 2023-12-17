#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameplaySetupViewController)
namespace GlobalNamespace {
class __GameplaySetupViewController__Panel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class EnvironmentOverrideSettingsPanelController;
}
namespace GlobalNamespace {
struct __PlayerSettingsPanelController__PlayerSettingsPanelLayout;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace GlobalNamespace {
class MultiplayerSettingsPanelController;
}
namespace GlobalNamespace {
class ColorsOverrideSettingsPanelController;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class __GameplaySetupViewController__Panel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplaySetupViewController);
MARK_REF_PTR_T(::GlobalNamespace::__GameplaySetupViewController__Panel);
// Type: ::Panel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5637))
// CS Name: ::GameplaySetupViewController::Panel*
class CORDL_TYPE __GameplaySetupViewController__Panel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field title offset 0x10
 __declspec(property(get=__get_title, put=__set_title)) ::StringW  title;

/// @brief Field refreshable offset 0x18
 __declspec(property(get=__get_refreshable, put=__set_refreshable)) ::GlobalNamespace::IRefreshable*  refreshable;

/// @brief Field gameObject offset 0x20
 __declspec(property(get=__get_gameObject, put=__set_gameObject)) ::UnityEngine::GameObject*  gameObject;

constexpr void __set_title(::StringW  value) ;

constexpr ::StringW& __get_title() ;

constexpr ::StringW const& __get_title() const;

constexpr void __set_refreshable(::GlobalNamespace::IRefreshable*  value) ;

constexpr ::GlobalNamespace::IRefreshable* __get_refreshable() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRefreshable*> __get_refreshable() const;

constexpr void __set_gameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_gameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_gameObject() const;

static inline ::GlobalNamespace::__GameplaySetupViewController__Panel* New_ctor(::StringW  title, ::GlobalNamespace::IRefreshable*  refreshable, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method .ctor addr 0x22b312c size 0x3c virtual false final false
inline void _ctor(::StringW  title, ::GlobalNamespace::IRefreshable*  refreshable, ::UnityEngine::GameObject*  gameObject) ;

// Ctor Parameters [CppParam { name: "", ty: "__GameplaySetupViewController__Panel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GameplaySetupViewController__Panel(__GameplaySetupViewController__Panel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GameplaySetupViewController__Panel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GameplaySetupViewController__Panel(__GameplaySetupViewController__Panel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GameplaySetupViewController__Panel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplaySetupViewController__Panel, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameplaySetupViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5638))
// CS Name: ::GameplaySetupViewController*
class CORDL_TYPE GameplaySetupViewController : public ::HMUI::ViewController {
public:
// Declarations
using Panel = ::GlobalNamespace::__GameplaySetupViewController__Panel;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc8 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _selectionSegmentedControl offset 0x70
 __declspec(property(get=__get__selectionSegmentedControl, put=__set__selectionSegmentedControl)) ::HMUI::TextSegmentedControl*  _selectionSegmentedControl;

/// @brief Field _playerSettingsPanelController offset 0x78
 __declspec(property(get=__get__playerSettingsPanelController, put=__set__playerSettingsPanelController)) ::GlobalNamespace::PlayerSettingsPanelController*  _playerSettingsPanelController;

/// @brief Field _gameplayModifiersPanelController offset 0x80
 __declspec(property(get=__get__gameplayModifiersPanelController, put=__set__gameplayModifiersPanelController)) ::GlobalNamespace::GameplayModifiersPanelController*  _gameplayModifiersPanelController;

/// @brief Field _environmentOverrideSettingsPanelController offset 0x88
 __declspec(property(get=__get__environmentOverrideSettingsPanelController, put=__set__environmentOverrideSettingsPanelController)) ::GlobalNamespace::EnvironmentOverrideSettingsPanelController*  _environmentOverrideSettingsPanelController;

/// @brief Field _colorsOverrideSettingsPanelController offset 0x90
 __declspec(property(get=__get__colorsOverrideSettingsPanelController, put=__set__colorsOverrideSettingsPanelController)) ::GlobalNamespace::ColorsOverrideSettingsPanelController*  _colorsOverrideSettingsPanelController;

/// @brief Field _multiplayerSettingsPanelController offset 0x98
 __declspec(property(get=__get__multiplayerSettingsPanelController, put=__set__multiplayerSettingsPanelController)) ::GlobalNamespace::MultiplayerSettingsPanelController*  _multiplayerSettingsPanelController;

/// @brief Field _playerDataModel offset 0xa0
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field didChangeGameplayModifiersEvent offset 0xa8
 __declspec(property(get=__get_didChangeGameplayModifiersEvent, put=__set_didChangeGameplayModifiersEvent)) ::System::Action*  didChangeGameplayModifiersEvent;

/// @brief Field _panels offset 0xb0
 __declspec(property(get=__get__panels, put=__set__panels)) ::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>*  _panels;

/// @brief Field _activePanelIdx offset 0xb8
 __declspec(property(get=__get__activePanelIdx, put=__set__activePanelIdx)) int32_t  _activePanelIdx;

/// @brief Field _showModifiers offset 0xbc
 __declspec(property(get=__get__showModifiers, put=__set__showModifiers)) bool  _showModifiers;

/// @brief Field _showEnvironmentOverrideSettings offset 0xbd
 __declspec(property(get=__get__showEnvironmentOverrideSettings, put=__set__showEnvironmentOverrideSettings)) bool  _showEnvironmentOverrideSettings;

/// @brief Field _showColorSchemesSettings offset 0xbe
 __declspec(property(get=__get__showColorSchemesSettings, put=__set__showColorSchemesSettings)) bool  _showColorSchemesSettings;

/// @brief Field _showMultiplayer offset 0xbf
 __declspec(property(get=__get__showMultiplayer, put=__set__showMultiplayer)) bool  _showMultiplayer;

/// @brief Field _shouldRefreshContent offset 0xc0
 __declspec(property(get=__get__shouldRefreshContent, put=__set__shouldRefreshContent)) bool  _shouldRefreshContent;

/// @brief Field _isInitialized offset 0xc1
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

 __declspec(property(get=get_playerSettings)) ::GlobalNamespace::PlayerSpecificSettings*  playerSettings;

 __declspec(property(get=get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  gameplayModifiers;

 __declspec(property(get=get_environmentOverrideSettings)) ::GlobalNamespace::OverrideEnvironmentSettings*  environmentOverrideSettings;

 __declspec(property(get=get_colorSchemesSettings)) ::GlobalNamespace::ColorSchemesSettings*  colorSchemesSettings;

constexpr void __set__selectionSegmentedControl(::HMUI::TextSegmentedControl*  value) ;

constexpr ::HMUI::TextSegmentedControl* __get__selectionSegmentedControl() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> __get__selectionSegmentedControl() const;

constexpr void __set__playerSettingsPanelController(::GlobalNamespace::PlayerSettingsPanelController*  value) ;

constexpr ::GlobalNamespace::PlayerSettingsPanelController* __get__playerSettingsPanelController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSettingsPanelController*> __get__playerSettingsPanelController() const;

constexpr void __set__gameplayModifiersPanelController(::GlobalNamespace::GameplayModifiersPanelController*  value) ;

constexpr ::GlobalNamespace::GameplayModifiersPanelController* __get__gameplayModifiersPanelController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersPanelController*> __get__gameplayModifiersPanelController() const;

constexpr void __set__environmentOverrideSettingsPanelController(::GlobalNamespace::EnvironmentOverrideSettingsPanelController*  value) ;

constexpr ::GlobalNamespace::EnvironmentOverrideSettingsPanelController* __get__environmentOverrideSettingsPanelController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*> __get__environmentOverrideSettingsPanelController() const;

constexpr void __set__colorsOverrideSettingsPanelController(::GlobalNamespace::ColorsOverrideSettingsPanelController*  value) ;

constexpr ::GlobalNamespace::ColorsOverrideSettingsPanelController* __get__colorsOverrideSettingsPanelController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorsOverrideSettingsPanelController*> __get__colorsOverrideSettingsPanelController() const;

constexpr void __set__multiplayerSettingsPanelController(::GlobalNamespace::MultiplayerSettingsPanelController*  value) ;

constexpr ::GlobalNamespace::MultiplayerSettingsPanelController* __get__multiplayerSettingsPanelController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSettingsPanelController*> __get__multiplayerSettingsPanelController() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set_didChangeGameplayModifiersEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeGameplayModifiersEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeGameplayModifiersEvent() const;

constexpr void __set__panels(::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>* __get__panels() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>*> __get__panels() const;

constexpr void __set__activePanelIdx(int32_t  value) ;

constexpr int32_t& __get__activePanelIdx() ;

constexpr int32_t const& __get__activePanelIdx() const;

constexpr void __set__showModifiers(bool  value) ;

constexpr bool& __get__showModifiers() ;

constexpr bool const& __get__showModifiers() const;

constexpr void __set__showEnvironmentOverrideSettings(bool  value) ;

constexpr bool& __get__showEnvironmentOverrideSettings() ;

constexpr bool const& __get__showEnvironmentOverrideSettings() const;

constexpr void __set__showColorSchemesSettings(bool  value) ;

constexpr bool& __get__showColorSchemesSettings() ;

constexpr bool const& __get__showColorSchemesSettings() const;

constexpr void __set__showMultiplayer(bool  value) ;

constexpr bool& __get__showMultiplayer() ;

constexpr bool const& __get__showMultiplayer() const;

constexpr void __set__shouldRefreshContent(bool  value) ;

constexpr bool& __get__shouldRefreshContent() ;

constexpr bool const& __get__shouldRefreshContent() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

/// @brief Method add_didChangeGameplayModifiersEvent addr 0x22b1e30 size 0x9c virtual false final false
inline void add_didChangeGameplayModifiersEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeGameplayModifiersEvent addr 0x22b1ecc size 0x9c virtual false final false
inline void remove_didChangeGameplayModifiersEvent(::System::Action*  value) ;

/// @brief Method get_playerSettings addr 0x22b1f68 size 0x18 virtual false final false
inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSettings() ;

/// @brief Method get_gameplayModifiers addr 0x22b2338 size 0x1c virtual false final false
inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers() ;

/// @brief Method get_environmentOverrideSettings addr 0x22b2354 size 0x24 virtual false final false
inline ::GlobalNamespace::OverrideEnvironmentSettings* get_environmentOverrideSettings() ;

/// @brief Method get_colorSchemesSettings addr 0x22b2378 size 0x24 virtual false final false
inline ::GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings() ;

/// @brief Method Setup addr 0x22b239c size 0x8c virtual false final false
inline void Setup(bool  showModifiers, bool  showEnvironmentOverrideSettings, bool  showColorSchemesSettings, bool  showMultiplayer, ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout  playerSettingsPanelLayout) ;

/// @brief Method Init addr 0x22b2428 size 0x90 virtual false final false
inline void Init() ;

/// @brief Method DidActivate addr 0x22b2c2c size 0x174 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method OnDisable addr 0x22b2e3c size 0xd4 virtual false final false
inline void OnDisable() ;

/// @brief Method HandleSelectionSegmentedControlDidSelectCell addr 0x22b2f10 size 0x8 virtual false final false
inline void HandleSelectionSegmentedControlDidSelectCell(::HMUI::SegmentedControl*  segmentedControl, int32_t  cellIdx) ;

/// @brief Method HandlePlayerSettingsPanelControllerDidChangePlayerSettings addr 0x22b2fc8 size 0x38 virtual false final false
inline void HandlePlayerSettingsPanelControllerDidChangePlayerSettings() ;

/// @brief Method HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers addr 0x22b3000 size 0x54 virtual false final false
inline void HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers() ;

/// @brief Method SetActivePanel addr 0x22b2f18 size 0xb0 virtual false final false
inline void SetActivePanel(int32_t  panelIdx) ;

/// @brief Method RefreshContent addr 0x22b24dc size 0x72c virtual false final false
inline void RefreshContent() ;

/// @brief Method RefreshActivePanel addr 0x22b3054 size 0xd8 virtual false final false
inline void RefreshActivePanel() ;

static inline ::GlobalNamespace::GameplaySetupViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22b3168 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameplaySetupViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplaySetupViewController(GameplaySetupViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplaySetupViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplaySetupViewController(GameplaySetupViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplaySetupViewController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplaySetupViewController, 0xc8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplaySetupViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplaySetupViewController*, "", "GameplaySetupViewController");
NEED_NO_BOX(::GlobalNamespace::__GameplaySetupViewController__Panel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplaySetupViewController__Panel*, "", "GameplaySetupViewController/Panel");
