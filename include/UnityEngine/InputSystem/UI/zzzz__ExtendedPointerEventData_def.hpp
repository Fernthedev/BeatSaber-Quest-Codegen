#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtendedPointerEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem {
class Pen;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::ExtendedPointerEventData);
// Type: UnityEngine.InputSystem.UI::ExtendedPointerEventData
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13168))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6371))
// CS Name: ::UnityEngine.InputSystem.UI::ExtendedPointerEventData*
class CORDL_TYPE ExtendedPointerEventData : public ::UnityEngine::EventSystems::PointerEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x198};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x198 - sizeof(::UnityEngine::EventSystems::PointerEventData)]{};

/// @brief Field <control>k__BackingField offset 0x160
 __declspec(property(get=__get__control_k__BackingField, put=__set__control_k__BackingField)) ::UnityEngine::InputSystem::InputControl*  _control_k__BackingField;

/// @brief Field <device>k__BackingField offset 0x168
 __declspec(property(get=__get__device_k__BackingField, put=__set__device_k__BackingField)) ::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField;

/// @brief Field <touchId>k__BackingField offset 0x170
 __declspec(property(get=__get__touchId_k__BackingField, put=__set__touchId_k__BackingField)) int32_t  _touchId_k__BackingField;

/// @brief Field <pointerType>k__BackingField offset 0x174
 __declspec(property(get=__get__pointerType_k__BackingField, put=__set__pointerType_k__BackingField)) ::UnityEngine::InputSystem::UI::UIPointerType  _pointerType_k__BackingField;

/// @brief Field <uiToolkitPointerId>k__BackingField offset 0x178
 __declspec(property(get=__get__uiToolkitPointerId_k__BackingField, put=__set__uiToolkitPointerId_k__BackingField)) int32_t  _uiToolkitPointerId_k__BackingField;

/// @brief Field <trackedDevicePosition>k__BackingField offset 0x17c
 __declspec(property(get=__get__trackedDevicePosition_k__BackingField, put=__set__trackedDevicePosition_k__BackingField)) ::UnityEngine::Vector3  _trackedDevicePosition_k__BackingField;

/// @brief Field <trackedDeviceOrientation>k__BackingField offset 0x188
 __declspec(property(get=__get__trackedDeviceOrientation_k__BackingField, put=__set__trackedDeviceOrientation_k__BackingField)) ::UnityEngine::Quaternion  _trackedDeviceOrientation_k__BackingField;

 __declspec(property(get=get_control, put=set_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_device, put=set_device)) ::UnityEngine::InputSystem::InputDevice*  device;

 __declspec(property(get=get_touchId, put=set_touchId)) int32_t  touchId;

 __declspec(property(get=get_pointerType, put=set_pointerType)) ::UnityEngine::InputSystem::UI::UIPointerType  pointerType;

 __declspec(property(get=get_uiToolkitPointerId, put=set_uiToolkitPointerId)) int32_t  uiToolkitPointerId;

 __declspec(property(get=get_trackedDevicePosition, put=set_trackedDevicePosition)) ::UnityEngine::Vector3  trackedDevicePosition;

 __declspec(property(get=get_trackedDeviceOrientation, put=set_trackedDeviceOrientation)) ::UnityEngine::Quaternion  trackedDeviceOrientation;

constexpr void __set__control_k__BackingField(::UnityEngine::InputSystem::InputControl*  value) ;

constexpr ::UnityEngine::InputSystem::InputControl* __get__control_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> __get__control_k__BackingField() const;

constexpr void __set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice*  value) ;

constexpr ::UnityEngine::InputSystem::InputDevice* __get__device_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> __get__device_k__BackingField() const;

constexpr void __set__touchId_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__touchId_k__BackingField() ;

constexpr int32_t const& __get__touchId_k__BackingField() const;

constexpr void __set__pointerType_k__BackingField(::UnityEngine::InputSystem::UI::UIPointerType  value) ;

constexpr ::UnityEngine::InputSystem::UI::UIPointerType& __get__pointerType_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& __get__pointerType_k__BackingField() const;

constexpr void __set__uiToolkitPointerId_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__uiToolkitPointerId_k__BackingField() ;

constexpr int32_t const& __get__uiToolkitPointerId_k__BackingField() const;

constexpr void __set__trackedDevicePosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__trackedDevicePosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__trackedDevicePosition_k__BackingField() const;

constexpr void __set__trackedDeviceOrientation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__trackedDeviceOrientation_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __get__trackedDeviceOrientation_k__BackingField() const;

static inline ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method .ctor addr 0x2acf7fc size 0x8 virtual false final false
inline void _ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method get_control addr 0x2acf804 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method set_control addr 0x2acf80c size 0x8 virtual false final false
inline void set_control(::UnityEngine::InputSystem::InputControl*  value) ;

/// @brief Method get_device addr 0x2acf814 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* get_device() ;

/// @brief Method set_device addr 0x2acf81c size 0x8 virtual false final false
inline void set_device(::UnityEngine::InputSystem::InputDevice*  value) ;

/// @brief Method get_touchId addr 0x2acf824 size 0x8 virtual false final false
inline int32_t get_touchId() ;

/// @brief Method set_touchId addr 0x2acf82c size 0x8 virtual false final false
inline void set_touchId(int32_t  value) ;

/// @brief Method get_pointerType addr 0x2acf834 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::UI::UIPointerType get_pointerType() ;

/// @brief Method set_pointerType addr 0x2acf83c size 0x8 virtual false final false
inline void set_pointerType(::UnityEngine::InputSystem::UI::UIPointerType  value) ;

/// @brief Method get_uiToolkitPointerId addr 0x2acf844 size 0x8 virtual false final false
inline int32_t get_uiToolkitPointerId() ;

/// @brief Method set_uiToolkitPointerId addr 0x2acf84c size 0x8 virtual false final false
inline void set_uiToolkitPointerId(int32_t  value) ;

/// @brief Method get_trackedDevicePosition addr 0x2acf854 size 0x10 virtual false final false
inline ::UnityEngine::Vector3 get_trackedDevicePosition() ;

/// @brief Method set_trackedDevicePosition addr 0x2acf864 size 0x10 virtual false final false
inline void set_trackedDevicePosition(::UnityEngine::Vector3  value) ;

/// @brief Method get_trackedDeviceOrientation addr 0x2acf874 size 0x14 virtual false final false
inline ::UnityEngine::Quaternion get_trackedDeviceOrientation() ;

/// @brief Method set_trackedDeviceOrientation addr 0x2acf888 size 0x14 virtual false final false
inline void set_trackedDeviceOrientation(::UnityEngine::Quaternion  value) ;

/// @brief Method ToString addr 0x2acf89c size 0x3bc virtual true final false
inline ::StringW ToString() ;

/// @brief Method MakePointerIdForTouch addr 0x2acfc58 size 0x8 virtual false final false
static inline int32_t MakePointerIdForTouch(int32_t  deviceId, int32_t  touchId) ;

/// @brief Method TouchIdFromPointerId addr 0x2acfc60 size 0x8 virtual false final false
static inline int32_t TouchIdFromPointerId(int32_t  pointerId) ;

/// @brief Method ReadDeviceState addr 0x2acfc68 size 0x254 virtual false final false
inline void ReadDeviceState() ;

/// @brief Method GetPenPointerId addr 0x2acfebc size 0x254 virtual false final false
static inline int32_t GetPenPointerId(::UnityEngine::InputSystem::Pen*  pen) ;

/// @brief Method GetTouchPointerId addr 0x2ad0110 size 0xf8 virtual false final false
static inline int32_t GetTouchPointerId(::UnityEngine::InputSystem::Controls::TouchControl*  touchControl) ;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPointerEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtendedPointerEventData(ExtendedPointerEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPointerEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtendedPointerEventData(ExtendedPointerEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExtendedPointerEventData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::ExtendedPointerEventData, 0x198>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::ExtendedPointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, "UnityEngine.InputSystem.UI", "ExtendedPointerEventData");
