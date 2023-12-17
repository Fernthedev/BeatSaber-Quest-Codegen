#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
CORDL_MODULE_EXPORT(HololensHand)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class HololensHand;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::WindowsMR::Input::HololensHand);
// Type: UnityEngine.XR.WindowsMR.Input::HololensHand
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6325))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6125))
// CS Name: ::UnityEngine.XR.WindowsMR.Input::HololensHand*
class CORDL_TYPE HololensHand : public ::UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x198};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x198 - sizeof(::UnityEngine::InputSystem::XR::XRController)]{};

/// @brief Field <deviceVelocity>k__BackingField offset 0x178
 __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _deviceVelocity_k__BackingField;

/// @brief Field <airTap>k__BackingField offset 0x180
 __declspec(property(get=__get__airTap_k__BackingField, put=__set__airTap_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _airTap_k__BackingField;

/// @brief Field <sourceLossRisk>k__BackingField offset 0x188
 __declspec(property(get=__get__sourceLossRisk_k__BackingField, put=__set__sourceLossRisk_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _sourceLossRisk_k__BackingField;

/// @brief Field <sourceLossMitigationDirection>k__BackingField offset 0x190
 __declspec(property(get=__get__sourceLossMitigationDirection_k__BackingField, put=__set__sourceLossMitigationDirection_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _sourceLossMitigationDirection_k__BackingField;

 __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control*  deviceVelocity;

 __declspec(property(get=get_airTap, put=set_airTap)) ::UnityEngine::InputSystem::Controls::ButtonControl*  airTap;

 __declspec(property(get=get_sourceLossRisk, put=set_sourceLossRisk)) ::UnityEngine::InputSystem::Controls::AxisControl*  sourceLossRisk;

 __declspec(property(get=get_sourceLossMitigationDirection, put=set_sourceLossMitigationDirection)) ::UnityEngine::InputSystem::Controls::Vector3Control*  sourceLossMitigationDirection;

constexpr void __set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__deviceVelocity_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__deviceVelocity_k__BackingField() const;

constexpr void __set__airTap_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__airTap_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__airTap_k__BackingField() const;

constexpr void __set__sourceLossRisk_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* __get__sourceLossRisk_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> __get__sourceLossRisk_k__BackingField() const;

constexpr void __set__sourceLossMitigationDirection_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* __get__sourceLossMitigationDirection_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> __get__sourceLossMitigationDirection_k__BackingField() const;

/// @brief Method get_deviceVelocity addr 0x2a34ed8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x2a34ee0 size 0x8 virtual false final false
inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method get_airTap addr 0x2a34ee8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_airTap() ;

/// @brief Method set_airTap addr 0x2a34ef0 size 0x8 virtual false final false
inline void set_airTap(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_sourceLossRisk addr 0x2a34ef8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk() ;

/// @brief Method set_sourceLossRisk addr 0x2a34f00 size 0x8 virtual false final false
inline void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method get_sourceLossMitigationDirection addr 0x2a34f08 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection() ;

/// @brief Method set_sourceLossMitigationDirection addr 0x2a34f10 size 0x8 virtual false final false
inline void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method FinishSetup addr 0x2a34f18 size 0x12c virtual true final false
inline void FinishSetup() ;

static inline ::UnityEngine::XR::WindowsMR::Input::HololensHand* New_ctor() ;

/// @brief Method .ctor addr 0x2a35044 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HololensHand", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HololensHand(HololensHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HololensHand", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HololensHand(HololensHand const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HololensHand()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::WindowsMR::Input::HololensHand, 0x198>, "Size mismatch!");

} // namespace end def UnityEngine::XR::WindowsMR::Input
NEED_NO_BOX(::UnityEngine::XR::WindowsMR::Input::HololensHand);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::WindowsMR::Input::HololensHand*, "UnityEngine.XR.WindowsMR.Input", "HololensHand");
