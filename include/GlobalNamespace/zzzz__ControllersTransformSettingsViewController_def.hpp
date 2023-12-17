#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllersTransformSettingsViewController)
namespace HMUI {
class RangeValuesTextSlider;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllersTransformSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ControllersTransformSettingsViewController);
// Type: ::ControllersTransformSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5619))
// CS Name: ::ControllersTransformSettingsViewController*
class CORDL_TYPE ControllersTransformSettingsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb8 - sizeof(::HMUI::ViewController)]{};

/// @brief Field kPositionStep offset 0x0
static constexpr float_t  kPositionStep{0.1};

/// @brief Field kPositionMul offset 0x0
static constexpr float_t  kPositionMul{100.0};

/// @brief Field kRotationStep offset 0x0
static constexpr float_t  kRotationStep{1.0};

/// @brief Field _controllerPosition offset 0x70
 __declspec(property(get=__get__controllerPosition, put=__set__controllerPosition)) ::GlobalNamespace::Vector3SO*  _controllerPosition;

/// @brief Field _controllerRotation offset 0x78
 __declspec(property(get=__get__controllerRotation, put=__set__controllerRotation)) ::GlobalNamespace::Vector3SO*  _controllerRotation;

/// @brief Field _posXSlider offset 0x80
 __declspec(property(get=__get__posXSlider, put=__set__posXSlider)) ::HMUI::RangeValuesTextSlider*  _posXSlider;

/// @brief Field _posYSlider offset 0x88
 __declspec(property(get=__get__posYSlider, put=__set__posYSlider)) ::HMUI::RangeValuesTextSlider*  _posYSlider;

/// @brief Field _posZSlider offset 0x90
 __declspec(property(get=__get__posZSlider, put=__set__posZSlider)) ::HMUI::RangeValuesTextSlider*  _posZSlider;

/// @brief Field _rotXSlider offset 0x98
 __declspec(property(get=__get__rotXSlider, put=__set__rotXSlider)) ::HMUI::RangeValuesTextSlider*  _rotXSlider;

/// @brief Field _rotYSlider offset 0xa0
 __declspec(property(get=__get__rotYSlider, put=__set__rotYSlider)) ::HMUI::RangeValuesTextSlider*  _rotYSlider;

/// @brief Field _rotZSlider offset 0xa8
 __declspec(property(get=__get__rotZSlider, put=__set__rotZSlider)) ::HMUI::RangeValuesTextSlider*  _rotZSlider;

/// @brief Field _vrPlatformHelper offset 0xb0
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

constexpr void __set__controllerPosition(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__controllerPosition() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__controllerPosition() const;

constexpr void __set__controllerRotation(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__controllerRotation() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__controllerRotation() const;

constexpr void __set__posXSlider(::HMUI::RangeValuesTextSlider*  value) ;

constexpr ::HMUI::RangeValuesTextSlider* __get__posXSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> __get__posXSlider() const;

constexpr void __set__posYSlider(::HMUI::RangeValuesTextSlider*  value) ;

constexpr ::HMUI::RangeValuesTextSlider* __get__posYSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> __get__posYSlider() const;

constexpr void __set__posZSlider(::HMUI::RangeValuesTextSlider*  value) ;

constexpr ::HMUI::RangeValuesTextSlider* __get__posZSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> __get__posZSlider() const;

constexpr void __set__rotXSlider(::HMUI::RangeValuesTextSlider*  value) ;

constexpr ::HMUI::RangeValuesTextSlider* __get__rotXSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> __get__rotXSlider() const;

constexpr void __set__rotYSlider(::HMUI::RangeValuesTextSlider*  value) ;

constexpr ::HMUI::RangeValuesTextSlider* __get__rotYSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> __get__rotYSlider() const;

constexpr void __set__rotZSlider(::HMUI::RangeValuesTextSlider*  value) ;

constexpr ::HMUI::RangeValuesTextSlider* __get__rotZSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> __get__rotZSlider() const;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

/// @brief Method DidActivate addr 0x22ae914 size 0x570 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22aee84 size 0xac virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x22aef30 size 0x338 virtual true final false
inline void OnDestroy() ;

/// @brief Method HandlePositionSliderValueDidChange addr 0x22af268 size 0x120 virtual false final false
inline void HandlePositionSliderValueDidChange(::HMUI::RangeValuesTextSlider*  slider, float_t  value) ;

/// @brief Method HandleRotationSliderValueDidChange addr 0x22af388 size 0x118 virtual false final false
inline void HandleRotationSliderValueDidChange(::HMUI::RangeValuesTextSlider*  slider, float_t  value) ;

static inline ::GlobalNamespace::ControllersTransformSettingsViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22af4a0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ControllersTransformSettingsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllersTransformSettingsViewController(ControllersTransformSettingsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllersTransformSettingsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllersTransformSettingsViewController(ControllersTransformSettingsViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ControllersTransformSettingsViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ControllersTransformSettingsViewController, 0xb8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ControllersTransformSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ControllersTransformSettingsViewController*, "", "ControllersTransformSettingsViewController");
