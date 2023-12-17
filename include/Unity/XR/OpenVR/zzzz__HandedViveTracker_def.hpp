#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/OpenVR/zzzz__ViveTracker_def.hpp"
CORDL_MODULE_EXPORT(HandedViveTracker)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class HandedViveTracker;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::HandedViveTracker);
// Type: Unity.XR.OpenVR::HandedViveTracker
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6120))
// CS Name: ::Unity.XR.OpenVR::HandedViveTracker*
class CORDL_TYPE HandedViveTracker : public ::Unity::XR::OpenVR::ViveTracker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1b0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1b0 - sizeof(::Unity::XR::OpenVR::ViveTracker)]{};

/// @brief Field <grip>k__BackingField offset 0x188
 __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _grip_k__BackingField;

/// @brief Field <gripPressed>k__BackingField offset 0x190
 __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _gripPressed_k__BackingField;

/// @brief Field <primary>k__BackingField offset 0x198
 __declspec(property(get=__get__primary_k__BackingField, put=__set__primary_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _primary_k__BackingField;

/// @brief Field <trackpadPressed>k__BackingField offset 0x1a0
 __declspec(property(get=__get__trackpadPressed_k__BackingField, put=__set__trackpadPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _trackpadPressed_k__BackingField;

/// @brief Field <triggerPressed>k__BackingField offset 0x1a8
 __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _triggerPressed_k__BackingField;

 __declspec(property(get=get_grip, put=set_grip)) ::UnityEngine::InputSystem::Controls::AxisControl*  grip;

 __declspec(property(get=get_gripPressed, put=set_gripPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl*  gripPressed;

 __declspec(property(get=get_primary, put=set_primary)) ::UnityEngine::InputSystem::Controls::ButtonControl*  primary;

 __declspec(property(get=get_trackpadPressed, put=set_trackpadPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl*  trackpadPressed;

 __declspec(property(get=get_triggerPressed, put=set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl*  triggerPressed;

constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* __get__grip_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> __get__grip_k__BackingField() const;

constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__gripPressed_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__gripPressed_k__BackingField() const;

constexpr void __set__primary_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__primary_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__primary_k__BackingField() const;

constexpr void __set__trackpadPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__trackpadPressed_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__trackpadPressed_k__BackingField() const;

constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__triggerPressed_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__triggerPressed_k__BackingField() const;

/// @brief Method get_grip addr 0x2a34690 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip() ;

/// @brief Method set_grip addr 0x2a34698 size 0x8 virtual false final false
inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method get_gripPressed addr 0x2a346a0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x2a346a8 size 0x8 virtual false final false
inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_primary addr 0x2a346b0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary() ;

/// @brief Method set_primary addr 0x2a346b8 size 0x8 virtual false final false
inline void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_trackpadPressed addr 0x2a346c0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed() ;

/// @brief Method set_trackpadPressed addr 0x2a346c8 size 0x8 virtual false final false
inline void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_triggerPressed addr 0x2a346d0 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2a346d8 size 0x8 virtual false final false
inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method FinishSetup addr 0x2a346e0 size 0x138 virtual true final false
inline void FinishSetup() ;

static inline ::Unity::XR::OpenVR::HandedViveTracker* New_ctor() ;

/// @brief Method .ctor addr 0x2a34818 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HandedViveTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HandedViveTracker(HandedViveTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandedViveTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandedViveTracker(HandedViveTracker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HandedViveTracker()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::HandedViveTracker, 0x1b0>, "Size mismatch!");

} // namespace end def Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::HandedViveTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::HandedViveTracker*, "Unity.XR.OpenVR", "HandedViveTracker");
