#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
CORDL_MODULE_EXPORT(XRHMD)
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRHMD;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRHMD);
// Type: UnityEngine.InputSystem.XR::XRHMD
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6289))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6324))
// CS Name: ::UnityEngine.InputSystem.XR::XRHMD*
class CORDL_TYPE XRHMD : public ::UnityEngine::InputSystem::TrackedDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1a8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1a8 - sizeof(::UnityEngine::InputSystem::TrackedDevice)]{};

/// @brief Field <leftEyePosition>k__BackingField offset 0x178
 __declspec(property(get=__get__leftEyePosition_k__BackingField, put=__set__leftEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _leftEyePosition_k__BackingField;

/// @brief Field <leftEyeRotation>k__BackingField offset 0x180
 __declspec(property(get=__get__leftEyeRotation_k__BackingField, put=__set__leftEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  _leftEyeRotation_k__BackingField;

/// @brief Field <rightEyePosition>k__BackingField offset 0x188
 __declspec(property(get=__get__rightEyePosition_k__BackingField, put=__set__rightEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _rightEyePosition_k__BackingField;

/// @brief Field <rightEyeRotation>k__BackingField offset 0x190
 __declspec(property(get=__get__rightEyeRotation_k__BackingField, put=__set__rightEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  _rightEyeRotation_k__BackingField;

/// @brief Field <centerEyePosition>k__BackingField offset 0x198
 __declspec(property(get=__get__centerEyePosition_k__BackingField, put=__set__centerEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _centerEyePosition_k__BackingField;

/// @brief Field <centerEyeRotation>k__BackingField offset 0x1a0
 __declspec(property(get=__get__centerEyeRotation_k__BackingField, put=__set__centerEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  _centerEyeRotation_k__BackingField;

 __declspec(property(get=get_leftEyePosition, put=set_leftEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control*  leftEyePosition;

 __declspec(property(get=get_leftEyeRotation, put=set_leftEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  leftEyeRotation;

 __declspec(property(get=get_rightEyePosition, put=set_rightEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control*  rightEyePosition;

 __declspec(property(get=get_rightEyeRotation, put=set_rightEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  rightEyeRotation;

 __declspec(property(get=get_centerEyePosition, put=set_centerEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control*  centerEyePosition;

 __declspec(property(get=get_centerEyeRotation, put=set_centerEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  centerEyeRotation;

constexpr void __set__leftEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__leftEyePosition_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__leftEyePosition_k__BackingField() const;

constexpr void __set__leftEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* __get__leftEyeRotation_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> __get__leftEyeRotation_k__BackingField() const;

constexpr void __set__rightEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__rightEyePosition_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__rightEyePosition_k__BackingField() const;

constexpr void __set__rightEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* __get__rightEyeRotation_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> __get__rightEyeRotation_k__BackingField() const;

constexpr void __set__centerEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__centerEyePosition_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__centerEyePosition_k__BackingField() const;

constexpr void __set__centerEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* __get__centerEyeRotation_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> __get__centerEyeRotation_k__BackingField() const;

/// @brief Method get_leftEyePosition addr 0x2ac57e0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition() ;

/// @brief Method set_leftEyePosition addr 0x2ac57e8 size 0x8 virtual false final false
inline void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_leftEyeRotation addr 0x2ac57f0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation() ;

/// @brief Method set_leftEyeRotation addr 0x2ac57f8 size 0x8 virtual false final false
inline void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

/// @brief Method get_rightEyePosition addr 0x2ac5800 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition() ;

/// @brief Method set_rightEyePosition addr 0x2ac5808 size 0x8 virtual false final false
inline void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_rightEyeRotation addr 0x2ac5810 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation() ;

/// @brief Method set_rightEyeRotation addr 0x2ac5818 size 0x8 virtual false final false
inline void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

/// @brief Method get_centerEyePosition addr 0x2ac5820 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyePosition() ;

/// @brief Method set_centerEyePosition addr 0x2ac5828 size 0x8 virtual false final false
inline void set_centerEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_centerEyeRotation addr 0x2ac5830 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_centerEyeRotation() ;

/// @brief Method set_centerEyeRotation addr 0x2ac5838 size 0x8 virtual false final false
inline void set_centerEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

/// @brief Method FinishSetup addr 0x2ac5840 size 0x170 virtual true final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::XR::XRHMD* New_ctor() ;

/// @brief Method .ctor addr 0x2ac59b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XRHMD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRHMD(XRHMD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRHMD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRHMD(XRHMD const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRHMD()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRHMD, 0x1a8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRHMD);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRHMD*, "UnityEngine.InputSystem.XR", "XRHMD");
