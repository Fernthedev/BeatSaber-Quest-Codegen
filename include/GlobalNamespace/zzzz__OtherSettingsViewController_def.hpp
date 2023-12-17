#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(OtherSettingsViewController)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class OtherSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OtherSettingsViewController);
// Type: ::OtherSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5756))
// CS Name: ::OtherSettingsViewController*
class CORDL_TYPE OtherSettingsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _playerDataModel offset 0x70
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _hideExplicitToggle offset 0x78
 __declspec(property(get=__get__hideExplicitToggle, put=__set__hideExplicitToggle)) ::UnityEngine::UI::Toggle*  _hideExplicitToggle;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__hideExplicitToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__hideExplicitToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__hideExplicitToggle() const;

/// @brief Method DidActivate addr 0x22da650 size 0x10c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22da75c size 0xa8 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method HandleHideExplicitChanged addr 0x22da804 size 0x34 virtual false final false
inline void HandleHideExplicitChanged(bool  newValue) ;

static inline ::GlobalNamespace::OtherSettingsViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22da838 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OtherSettingsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OtherSettingsViewController(OtherSettingsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OtherSettingsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OtherSettingsViewController(OtherSettingsViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OtherSettingsViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OtherSettingsViewController, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OtherSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OtherSettingsViewController*, "", "OtherSettingsViewController");
