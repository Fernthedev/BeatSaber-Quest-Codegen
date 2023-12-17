#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
CORDL_MODULE_EXPORT(GearVRTrackedController)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class GearVRTrackedController;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::GearVRTrackedController);
// Type: Unity.XR.Oculus.Input::GearVRTrackedController
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6325))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15159))
// CS Name: ::Unity.XR.Oculus.Input::GearVRTrackedController*
class CORDL_TYPE GearVRTrackedController : public ::UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1e0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1e0 - sizeof(::UnityEngine::InputSystem::XR::XRController)]{};

/// @brief Field <touchpad>k__BackingField offset 0x178
 __declspec(property(get=__get__touchpad_k__BackingField, put=__set__touchpad_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control*  _touchpad_k__BackingField;

/// @brief Field <trigger>k__BackingField offset 0x180
 __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _trigger_k__BackingField;

/// @brief Field <back>k__BackingField offset 0x188
 __declspec(property(get=__get__back_k__BackingField, put=__set__back_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _back_k__BackingField;

/// @brief Field <triggerPressed>k__BackingField offset 0x190
 __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _triggerPressed_k__BackingField;

/// @brief Field <touchpadClicked>k__BackingField offset 0x198
 __declspec(property(get=__get__touchpadClicked_k__BackingField, put=__set__touchpadClicked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _touchpadClicked_k__BackingField;

/// @brief Field <touchpadTouched>k__BackingField offset 0x1a0
 __declspec(property(get=__get__touchpadTouched_k__BackingField, put=__set__touchpadTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _touchpadTouched_k__BackingField;

/// @brief Field <trackingState>k__BackingField offset 0x1a8
 __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl*  _trackingState_k__BackingField;

/// @brief Field <isTracked>k__BackingField offset 0x1b0
 __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _isTracked_k__BackingField;

/// @brief Field <devicePosition>k__BackingField offset 0x1b8
 __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _devicePosition_k__BackingField;

/// @brief Field <deviceRotation>k__BackingField offset 0x1c0
 __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  _deviceRotation_k__BackingField;

/// @brief Field <deviceAngularVelocity>k__BackingField offset 0x1c8
 __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _deviceAngularVelocity_k__BackingField;

/// @brief Field <deviceAcceleration>k__BackingField offset 0x1d0
 __declspec(property(get=__get__deviceAcceleration_k__BackingField, put=__set__deviceAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _deviceAcceleration_k__BackingField;

/// @brief Field <deviceAngularAcceleration>k__BackingField offset 0x1d8
 __declspec(property(get=__get__deviceAngularAcceleration_k__BackingField, put=__set__deviceAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _deviceAngularAcceleration_k__BackingField;

 __declspec(property(get=get_touchpad, put=set_touchpad)) ::UnityEngine::InputSystem::Controls::Vector2Control*  touchpad;

 __declspec(property(get=get_trigger, put=set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl*  trigger;

 __declspec(property(get=get_back, put=set_back)) ::UnityEngine::InputSystem::Controls::ButtonControl*  back;

 __declspec(property(get=get_triggerPressed, put=set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl*  triggerPressed;

 __declspec(property(get=get_touchpadClicked, put=set_touchpadClicked)) ::UnityEngine::InputSystem::Controls::ButtonControl*  touchpadClicked;

 __declspec(property(get=get_touchpadTouched, put=set_touchpadTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  touchpadTouched;

 __declspec(property(get=get_trackingState, put=set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl*  trackingState;

 __declspec(property(get=get_isTracked, put=set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl*  isTracked;

 __declspec(property(get=get_devicePosition, put=set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control*  devicePosition;

 __declspec(property(get=get_deviceRotation, put=set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  deviceRotation;

 __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control*  deviceAngularVelocity;

 __declspec(property(get=get_deviceAcceleration, put=set_deviceAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control*  deviceAcceleration;

 __declspec(property(get=get_deviceAngularAcceleration, put=set_deviceAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control*  deviceAngularAcceleration;

constexpr void __set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* __get__touchpad_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> __get__touchpad_k__BackingField() const;

constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* __get__trigger_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> __get__trigger_k__BackingField() const;

constexpr void __set__back_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__back_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__back_k__BackingField() const;

constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__triggerPressed_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__triggerPressed_k__BackingField() const;

constexpr void __set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__touchpadClicked_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__touchpadClicked_k__BackingField() const;

constexpr void __set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__touchpadTouched_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__touchpadTouched_k__BackingField() const;

constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* __get__trackingState_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> __get__trackingState_k__BackingField() const;

constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__isTracked_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__isTracked_k__BackingField() const;

constexpr void __set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__devicePosition_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__devicePosition_k__BackingField() const;

constexpr void __set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* __get__deviceRotation_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> __get__deviceRotation_k__BackingField() const;

constexpr void __set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__deviceAngularVelocity_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__deviceAngularVelocity_k__BackingField() const;

constexpr void __set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__deviceAcceleration_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__deviceAcceleration_k__BackingField() const;

constexpr void __set__deviceAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__deviceAngularAcceleration_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__deviceAngularAcceleration_k__BackingField() const;

/// @brief Method get_touchpad addr 0x2c7cc6c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad() ;

/// @brief Method set_touchpad addr 0x2c7cc74 size 0x8 virtual false final false
inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

/// @brief Method get_trigger addr 0x2c7cc7c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger() ;

/// @brief Method set_trigger addr 0x2c7cc84 size 0x8 virtual false final false
inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method get_back addr 0x2c7cc8c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_back() ;

/// @brief Method set_back addr 0x2c7cc94 size 0x8 virtual false final false
inline void set_back(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_triggerPressed addr 0x2c7cc9c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2c7cca4 size 0x8 virtual false final false
inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_touchpadClicked addr 0x2c7ccac size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked() ;

/// @brief Method set_touchpadClicked addr 0x2c7ccb4 size 0x8 virtual false final false
inline void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_touchpadTouched addr 0x2c7ccbc size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched() ;

/// @brief Method set_touchpadTouched addr 0x2c7ccc4 size 0x8 virtual false final false
inline void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_trackingState addr 0x2c7cccc size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState() ;

/// @brief Method set_trackingState addr 0x2c7ccd4 size 0x8 virtual false final false
inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

/// @brief Method get_isTracked addr 0x2c7ccdc size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked() ;

/// @brief Method set_isTracked addr 0x2c7cce4 size 0x8 virtual false final false
inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_devicePosition addr 0x2c7ccec size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2c7ccf4 size 0x8 virtual false final false
inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_deviceRotation addr 0x2c7ccfc size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2c7cd04 size 0x8 virtual false final false
inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

/// @brief Method get_deviceAngularVelocity addr 0x2c7cd0c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x2c7cd14 size 0x8 virtual false final false
inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_deviceAcceleration addr 0x2c7cd1c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration() ;

/// @brief Method set_deviceAcceleration addr 0x2c7cd24 size 0x8 virtual false final false
inline void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_deviceAngularAcceleration addr 0x2c7cd2c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration() ;

/// @brief Method set_deviceAngularAcceleration addr 0x2c7cd34 size 0x8 virtual false final false
inline void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method FinishSetup addr 0x2c7cd3c size 0x2d8 virtual true final false
inline void FinishSetup() ;

static inline ::Unity::XR::Oculus::Input::GearVRTrackedController* New_ctor() ;

/// @brief Method .ctor addr 0x2c7cb80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GearVRTrackedController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GearVRTrackedController(GearVRTrackedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GearVRTrackedController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GearVRTrackedController(GearVRTrackedController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GearVRTrackedController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::GearVRTrackedController, 0x1e0>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::GearVRTrackedController);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::GearVRTrackedController*, "Unity.XR.Oculus.Input", "GearVRTrackedController");
