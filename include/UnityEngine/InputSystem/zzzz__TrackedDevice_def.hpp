#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
CORDL_MODULE_EXPORT(TrackedDevice)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class TrackedDevice;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::TrackedDevice);
// Type: UnityEngine.InputSystem::TrackedDevice
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6289))
// CS Name: ::UnityEngine.InputSystem::TrackedDevice*
class CORDL_TYPE TrackedDevice : public ::UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x178};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x178 - sizeof(::UnityEngine::InputSystem::InputDevice)]{};

/// @brief Field <trackingState>k__BackingField offset 0x158
 __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl*  _trackingState_k__BackingField;

/// @brief Field <isTracked>k__BackingField offset 0x160
 __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _isTracked_k__BackingField;

/// @brief Field <devicePosition>k__BackingField offset 0x168
 __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _devicePosition_k__BackingField;

/// @brief Field <deviceRotation>k__BackingField offset 0x170
 __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  _deviceRotation_k__BackingField;

 __declspec(property(get=get_trackingState, put=set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl*  trackingState;

 __declspec(property(get=get_isTracked, put=set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl*  isTracked;

 __declspec(property(get=get_devicePosition, put=set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control*  devicePosition;

 __declspec(property(get=get_deviceRotation, put=set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  deviceRotation;

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

/// @brief Method get_trackingState addr 0x2aaab50 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState() ;

/// @brief Method set_trackingState addr 0x2aaab58 size 0x8 virtual false final false
inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

/// @brief Method get_isTracked addr 0x2aaab60 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked() ;

/// @brief Method set_isTracked addr 0x2aaab68 size 0x8 virtual false final false
inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_devicePosition addr 0x2aaab70 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2aaab78 size 0x8 virtual false final false
inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_deviceRotation addr 0x2aaab80 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2aaab88 size 0x8 virtual false final false
inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

/// @brief Method FinishSetup addr 0x2aaab90 size 0x148 virtual true final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::TrackedDevice* New_ctor() ;

/// @brief Method .ctor addr 0x2aaacd8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TrackedDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedDevice(TrackedDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedDevice(TrackedDevice const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackedDevice()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::TrackedDevice, 0x178>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::TrackedDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::TrackedDevice*, "UnityEngine.InputSystem", "TrackedDevice");
