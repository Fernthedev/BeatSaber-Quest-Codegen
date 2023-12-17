#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__PoseState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
CORDL_MODULE_EXPORT(PoseControl)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class PoseControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::PoseControl);
// Type: UnityEngine.InputSystem.XR::PoseControl
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6322)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3894 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6323))
// CS Name: ::UnityEngine.InputSystem.XR::PoseControl*
class CORDL_TYPE PoseControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::PoseState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::PoseState>)]{};

/// @brief Field <isTracked>k__BackingField offset 0xf0
 __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _isTracked_k__BackingField;

/// @brief Field <trackingState>k__BackingField offset 0xf8
 __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl*  _trackingState_k__BackingField;

/// @brief Field <position>k__BackingField offset 0x100
 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _position_k__BackingField;

/// @brief Field <rotation>k__BackingField offset 0x108
 __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  _rotation_k__BackingField;

/// @brief Field <velocity>k__BackingField offset 0x110
 __declspec(property(get=__get__velocity_k__BackingField, put=__set__velocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _velocity_k__BackingField;

/// @brief Field <angularVelocity>k__BackingField offset 0x118
 __declspec(property(get=__get__angularVelocity_k__BackingField, put=__set__angularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _angularVelocity_k__BackingField;

 __declspec(property(get=get_isTracked, put=set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl*  isTracked;

 __declspec(property(get=get_trackingState, put=set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl*  trackingState;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::InputSystem::Controls::Vector3Control*  position;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  rotation;

 __declspec(property(get=get_velocity, put=set_velocity)) ::UnityEngine::InputSystem::Controls::Vector3Control*  velocity;

 __declspec(property(get=get_angularVelocity, put=set_angularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control*  angularVelocity;

constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__isTracked_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__isTracked_k__BackingField() const;

constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* __get__trackingState_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> __get__trackingState_k__BackingField() const;

constexpr void __set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__position_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__position_k__BackingField() const;

constexpr void __set__rotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* __get__rotation_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> __get__rotation_k__BackingField() const;

constexpr void __set__velocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__velocity_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__velocity_k__BackingField() const;

constexpr void __set__angularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__angularVelocity_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__angularVelocity_k__BackingField() const;

/// @brief Method get_isTracked addr 0x2ac52d4 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked() ;

/// @brief Method set_isTracked addr 0x2ac52dc size 0x8 virtual false final false
inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_trackingState addr 0x2ac52e4 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState() ;

/// @brief Method set_trackingState addr 0x2ac52ec size 0x8 virtual false final false
inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

/// @brief Method get_position addr 0x2ac52f4 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_position() ;

/// @brief Method set_position addr 0x2ac52fc size 0x8 virtual false final false
inline void set_position(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_rotation addr 0x2ac5304 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation() ;

/// @brief Method set_rotation addr 0x2ac530c size 0x8 virtual false final false
inline void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

/// @brief Method get_velocity addr 0x2ac5314 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_velocity() ;

/// @brief Method set_velocity addr 0x2ac531c size 0x8 virtual false final false
inline void set_velocity(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_angularVelocity addr 0x2ac5324 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity() ;

/// @brief Method set_angularVelocity addr 0x2ac532c size 0x8 virtual false final false
inline void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

static inline ::UnityEngine::InputSystem::XR::PoseControl* New_ctor() ;

/// @brief Method .ctor addr 0x2ac5334 size 0x7c virtual false final false
inline void _ctor() ;

/// @brief Method FinishSetup addr 0x2ac53b0 size 0x194 virtual true final false
inline void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2ac5544 size 0x174 virtual true final false
inline ::UnityEngine::InputSystem::XR::PoseState ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2ac56b8 size 0x128 virtual true final false
inline void WriteValueIntoState(::UnityEngine::InputSystem::XR::PoseState  value, ::cordl_internals::Ptr<void>  statePtr) ;

// Ctor Parameters [CppParam { name: "", ty: "PoseControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseControl(PoseControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseControl(PoseControl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoseControl()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::PoseControl, 0x120>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::PoseControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::PoseControl*, "UnityEngine.InputSystem.XR", "PoseControl");
