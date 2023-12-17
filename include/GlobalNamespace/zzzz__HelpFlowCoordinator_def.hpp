#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HelpFlowCoordinator)
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PlayerStatisticsViewController;
}
namespace GlobalNamespace {
class HealthWarningDisplayViewController;
}
namespace GlobalNamespace {
class HelpMenuViewController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class HowToPlayViewController;
}
namespace GlobalNamespace {
struct __HowToPlayViewController__HowToPlayOptions;
}
namespace GlobalNamespace {
class PrivacyPolicyDisplayViewController;
}
namespace GlobalNamespace {
class LicensesDisplayViewController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class HelpNavigationController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class EulaDisplayViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpFlowCoordinator);
// Type: ::HelpFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5499))
// CS Name: ::HelpFlowCoordinator*
class CORDL_TYPE HelpFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x108};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x108 - sizeof(::HMUI::FlowCoordinator)]{};

/// @brief Field kHowToPlayMenu offset 0x0
static constexpr ::ConstString  kHowToPlayMenu{u"LABEL_HOW_TO_PLAY"};

/// @brief Field kPrivacyPolicyMenu offset 0x0
static constexpr ::ConstString  kPrivacyPolicyMenu{u"PRIVACY_POLICY_MENU"};

/// @brief Field kEulaMenu offset 0x0
static constexpr ::ConstString  kEulaMenu{u"EULA_MENU"};

/// @brief Field kLicensesMenu offset 0x0
static constexpr ::ConstString  kLicensesMenu{u"SOFTWARE_LICENSES"};

/// @brief Field kHealthWarningMenu offset 0x0
static constexpr ::ConstString  kHealthWarningMenu{u"HEALTH_AND_SAFETY_MENU"};

/// @brief Field _helpMenuViewController offset 0xa8
 __declspec(property(get=__get__helpMenuViewController, put=__set__helpMenuViewController)) ::GlobalNamespace::HelpMenuViewController*  _helpMenuViewController;

/// @brief Field _helpNavigationController offset 0xb0
 __declspec(property(get=__get__helpNavigationController, put=__set__helpNavigationController)) ::GlobalNamespace::HelpNavigationController*  _helpNavigationController;

/// @brief Field _howToPlayViewController offset 0xb8
 __declspec(property(get=__get__howToPlayViewController, put=__set__howToPlayViewController)) ::GlobalNamespace::HowToPlayViewController*  _howToPlayViewController;

/// @brief Field _healthWarningDisplayViewController offset 0xc0
 __declspec(property(get=__get__healthWarningDisplayViewController, put=__set__healthWarningDisplayViewController)) ::GlobalNamespace::HealthWarningDisplayViewController*  _healthWarningDisplayViewController;

/// @brief Field _privacyPolicyDisplayViewController offset 0xc8
 __declspec(property(get=__get__privacyPolicyDisplayViewController, put=__set__privacyPolicyDisplayViewController)) ::GlobalNamespace::PrivacyPolicyDisplayViewController*  _privacyPolicyDisplayViewController;

/// @brief Field _eulaDisplayViewController offset 0xd0
 __declspec(property(get=__get__eulaDisplayViewController, put=__set__eulaDisplayViewController)) ::GlobalNamespace::EulaDisplayViewController*  _eulaDisplayViewController;

/// @brief Field _licensesDisplayViewController offset 0xd8
 __declspec(property(get=__get__licensesDisplayViewController, put=__set__licensesDisplayViewController)) ::GlobalNamespace::LicensesDisplayViewController*  _licensesDisplayViewController;

/// @brief Field _playerStatisticsViewController offset 0xe0
 __declspec(property(get=__get__playerStatisticsViewController, put=__set__playerStatisticsViewController)) ::GlobalNamespace::PlayerStatisticsViewController*  _playerStatisticsViewController;

/// @brief Field _playerDataModel offset 0xe8
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _menuTransitionsHelper offset 0xf0
 __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper)) ::GlobalNamespace::MenuTransitionsHelper*  _menuTransitionsHelper;

/// @brief Field didFinishEvent offset 0xf8
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*  didFinishEvent;

/// @brief Field _viewControllers offset 0x100
 __declspec(property(get=__get__viewControllers, put=__set__viewControllers)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*,::StringW>>*  _viewControllers;

constexpr void __set__helpMenuViewController(::GlobalNamespace::HelpMenuViewController*  value) ;

constexpr ::GlobalNamespace::HelpMenuViewController* __get__helpMenuViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HelpMenuViewController*> __get__helpMenuViewController() const;

constexpr void __set__helpNavigationController(::GlobalNamespace::HelpNavigationController*  value) ;

constexpr ::GlobalNamespace::HelpNavigationController* __get__helpNavigationController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HelpNavigationController*> __get__helpNavigationController() const;

constexpr void __set__howToPlayViewController(::GlobalNamespace::HowToPlayViewController*  value) ;

constexpr ::GlobalNamespace::HowToPlayViewController* __get__howToPlayViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HowToPlayViewController*> __get__howToPlayViewController() const;

constexpr void __set__healthWarningDisplayViewController(::GlobalNamespace::HealthWarningDisplayViewController*  value) ;

constexpr ::GlobalNamespace::HealthWarningDisplayViewController* __get__healthWarningDisplayViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningDisplayViewController*> __get__healthWarningDisplayViewController() const;

constexpr void __set__privacyPolicyDisplayViewController(::GlobalNamespace::PrivacyPolicyDisplayViewController*  value) ;

constexpr ::GlobalNamespace::PrivacyPolicyDisplayViewController* __get__privacyPolicyDisplayViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrivacyPolicyDisplayViewController*> __get__privacyPolicyDisplayViewController() const;

constexpr void __set__eulaDisplayViewController(::GlobalNamespace::EulaDisplayViewController*  value) ;

constexpr ::GlobalNamespace::EulaDisplayViewController* __get__eulaDisplayViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EulaDisplayViewController*> __get__eulaDisplayViewController() const;

constexpr void __set__licensesDisplayViewController(::GlobalNamespace::LicensesDisplayViewController*  value) ;

constexpr ::GlobalNamespace::LicensesDisplayViewController* __get__licensesDisplayViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LicensesDisplayViewController*> __get__licensesDisplayViewController() const;

constexpr void __set__playerStatisticsViewController(::GlobalNamespace::PlayerStatisticsViewController*  value) ;

constexpr ::GlobalNamespace::PlayerStatisticsViewController* __get__playerStatisticsViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerStatisticsViewController*> __get__playerStatisticsViewController() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper*  value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper* __get__menuTransitionsHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> __get__menuTransitionsHelper() const;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*> __get_didFinishEvent() const;

constexpr void __set__viewControllers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*,::StringW>>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*,::StringW>>* __get__viewControllers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*,::StringW>>*> __get__viewControllers() const;

/// @brief Method add_didFinishEvent addr 0x2289ca8 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x2289d58 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*  value) ;

/// @brief Method DidActivate addr 0x2289e08 size 0x50c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x228a314 size 0x10c virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method HandleDidSelectHelpSubMenu addr 0x228a420 size 0x64 virtual false final false
inline void HandleDidSelectHelpSubMenu(int32_t  idx) ;

/// @brief Method ReplaceViewController addr 0x228a484 size 0x104 virtual false final false
inline void ReplaceViewController(::HMUI::ViewController*  viewController) ;

/// @brief Method HandleHowToPlayViewControllerDidFinish addr 0x228a588 size 0x78 virtual false final false
inline void HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions  howToPlayOptions) ;

/// @brief Method BackButtonWasPressed addr 0x228a600 size 0x20 virtual true final false
inline void BackButtonWasPressed(::HMUI::ViewController*  topViewController) ;

static inline ::GlobalNamespace::HelpFlowCoordinator* New_ctor() ;

/// @brief Method .ctor addr 0x228a620 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HelpFlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpFlowCoordinator(HelpFlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpFlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpFlowCoordinator(HelpFlowCoordinator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HelpFlowCoordinator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpFlowCoordinator, 0x108>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpFlowCoordinator*, "", "HelpFlowCoordinator");
