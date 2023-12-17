#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventBase_1)
namespace UnityEngine::UIElements {
class IPointerEventInternal;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class PointerEventBase_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class PointerEventBase_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::PointerEventBase_1);
// Type: UnityEngine.UIElements::PointerEventBase`1
// Type: UnityEngine.UIElements::PointerEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7198)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1718 }), TypeDefinitionIndex(TypeDefinitionIndex(7180))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 2 })
// CS Name: ::UnityEngine.UIElements::PointerEventBase`1<T>*
class CORDL_TYPE PointerEventBase_1<T> : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::UIElements::EventBase_1<T>)]{};

/// @brief Field <pointerId>k__BackingField offset 0x7c
 __declspec(property(get=__get__pointerId_k__BackingField, put=__set__pointerId_k__BackingField)) int32_t  _pointerId_k__BackingField;

/// @brief Field <pointerType>k__BackingField offset 0x80
 __declspec(property(get=__get__pointerType_k__BackingField, put=__set__pointerType_k__BackingField)) ::StringW  _pointerType_k__BackingField;

/// @brief Field <isPrimary>k__BackingField offset 0x88
 __declspec(property(get=__get__isPrimary_k__BackingField, put=__set__isPrimary_k__BackingField)) bool  _isPrimary_k__BackingField;

/// @brief Field <button>k__BackingField offset 0x8c
 __declspec(property(get=__get__button_k__BackingField, put=__set__button_k__BackingField)) int32_t  _button_k__BackingField;

/// @brief Field <pressedButtons>k__BackingField offset 0x90
 __declspec(property(get=__get__pressedButtons_k__BackingField, put=__set__pressedButtons_k__BackingField)) int32_t  _pressedButtons_k__BackingField;

/// @brief Field <position>k__BackingField offset 0x94
 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField)) ::UnityEngine::Vector3  _position_k__BackingField;

/// @brief Field <localPosition>k__BackingField offset 0xa0
 __declspec(property(get=__get__localPosition_k__BackingField, put=__set__localPosition_k__BackingField)) ::UnityEngine::Vector3  _localPosition_k__BackingField;

/// @brief Field <deltaPosition>k__BackingField offset 0xac
 __declspec(property(get=__get__deltaPosition_k__BackingField, put=__set__deltaPosition_k__BackingField)) ::UnityEngine::Vector3  _deltaPosition_k__BackingField;

/// @brief Field <deltaTime>k__BackingField offset 0xb8
 __declspec(property(get=__get__deltaTime_k__BackingField, put=__set__deltaTime_k__BackingField)) float_t  _deltaTime_k__BackingField;

/// @brief Field <clickCount>k__BackingField offset 0xbc
 __declspec(property(get=__get__clickCount_k__BackingField, put=__set__clickCount_k__BackingField)) int32_t  _clickCount_k__BackingField;

/// @brief Field <pressure>k__BackingField offset 0xc0
 __declspec(property(get=__get__pressure_k__BackingField, put=__set__pressure_k__BackingField)) float_t  _pressure_k__BackingField;

/// @brief Field <tangentialPressure>k__BackingField offset 0xc4
 __declspec(property(get=__get__tangentialPressure_k__BackingField, put=__set__tangentialPressure_k__BackingField)) float_t  _tangentialPressure_k__BackingField;

/// @brief Field <altitudeAngle>k__BackingField offset 0xc8
 __declspec(property(get=__get__altitudeAngle_k__BackingField, put=__set__altitudeAngle_k__BackingField)) float_t  _altitudeAngle_k__BackingField;

/// @brief Field <azimuthAngle>k__BackingField offset 0xcc
 __declspec(property(get=__get__azimuthAngle_k__BackingField, put=__set__azimuthAngle_k__BackingField)) float_t  _azimuthAngle_k__BackingField;

/// @brief Field <twist>k__BackingField offset 0xd0
 __declspec(property(get=__get__twist_k__BackingField, put=__set__twist_k__BackingField)) float_t  _twist_k__BackingField;

/// @brief Field <radius>k__BackingField offset 0xd4
 __declspec(property(get=__get__radius_k__BackingField, put=__set__radius_k__BackingField)) ::UnityEngine::Vector2  _radius_k__BackingField;

/// @brief Field <radiusVariance>k__BackingField offset 0xdc
 __declspec(property(get=__get__radiusVariance_k__BackingField, put=__set__radiusVariance_k__BackingField)) ::UnityEngine::Vector2  _radiusVariance_k__BackingField;

/// @brief Field <modifiers>k__BackingField offset 0xe4
 __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField)) ::UnityEngine::EventModifiers  _modifiers_k__BackingField;

/// @brief Field <UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField offset 0xe8
 __declspec(property(get=__get__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField, put=__set__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField)) bool  _UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField;

/// @brief Field <UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField offset 0xe9
 __declspec(property(get=__get__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField, put=__set__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField)) bool  _UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField;

 __declspec(property(get=get_pointerId, put=set_pointerId)) int32_t  pointerId;

 __declspec(property(get=get_pointerType, put=set_pointerType)) ::StringW  pointerType;

 __declspec(property(get=get_isPrimary, put=set_isPrimary)) bool  isPrimary;

 __declspec(property(get=get_button, put=set_button)) int32_t  button;

 __declspec(property(get=get_pressedButtons, put=set_pressedButtons)) int32_t  pressedButtons;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_localPosition, put=set_localPosition)) ::UnityEngine::Vector3  localPosition;

 __declspec(property(get=get_deltaPosition, put=set_deltaPosition)) ::UnityEngine::Vector3  deltaPosition;

 __declspec(property(get=get_deltaTime, put=set_deltaTime)) float_t  deltaTime;

 __declspec(property(get=get_clickCount, put=set_clickCount)) int32_t  clickCount;

 __declspec(property(get=get_pressure, put=set_pressure)) float_t  pressure;

 __declspec(property(get=get_tangentialPressure, put=set_tangentialPressure)) float_t  tangentialPressure;

 __declspec(property(get=get_altitudeAngle, put=set_altitudeAngle)) float_t  altitudeAngle;

 __declspec(property(get=get_azimuthAngle, put=set_azimuthAngle)) float_t  azimuthAngle;

 __declspec(property(get=get_twist, put=set_twist)) float_t  twist;

 __declspec(property(get=get_radius, put=set_radius)) ::UnityEngine::Vector2  radius;

 __declspec(property(get=get_radiusVariance, put=set_radiusVariance)) ::UnityEngine::Vector2  radiusVariance;

 __declspec(property(get=get_modifiers, put=set_modifiers)) ::UnityEngine::EventModifiers  modifiers;

 __declspec(property(get=get_shiftKey)) bool  shiftKey;

 __declspec(property(get=get_ctrlKey)) bool  ctrlKey;

 __declspec(property(get=get_commandKey)) bool  commandKey;

 __declspec(property(get=get_altKey)) bool  altKey;

 __declspec(property(get=get_actionKey)) bool  actionKey;

 __declspec(property(get=UnityEngine_UIElements_IPointerEventInternal_get_triggeredByOS, put=UnityEngine_UIElements_IPointerEventInternal_set_triggeredByOS)) bool  UnityEngine_UIElements_IPointerEventInternal_triggeredByOS;

 __declspec(property(get=UnityEngine_UIElements_IPointerEventInternal_get_recomputeTopElementUnderPointer, put=UnityEngine_UIElements_IPointerEventInternal_set_recomputeTopElementUnderPointer)) bool  UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer;

 __declspec(property(get=get_currentTarget, put=set_currentTarget)) ::UnityEngine::UIElements::IEventHandler*  currentTarget;

/// @brief Convert operator to "::UnityEngine::UIElements::IPointerEvent"
constexpr operator  ::UnityEngine::UIElements::IPointerEvent*() noexcept;

/// @brief Convert operator to "::UnityEngine::UIElements::IPointerEventInternal"
constexpr operator  ::UnityEngine::UIElements::IPointerEventInternal*() noexcept;

constexpr void __set__pointerId_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__pointerId_k__BackingField() ;

constexpr int32_t const& __get__pointerId_k__BackingField() const;

constexpr void __set__pointerType_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__pointerType_k__BackingField() ;

constexpr ::StringW const& __get__pointerType_k__BackingField() const;

constexpr void __set__isPrimary_k__BackingField(bool  value) ;

constexpr bool& __get__isPrimary_k__BackingField() ;

constexpr bool const& __get__isPrimary_k__BackingField() const;

constexpr void __set__button_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__button_k__BackingField() ;

constexpr int32_t const& __get__button_k__BackingField() const;

constexpr void __set__pressedButtons_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__pressedButtons_k__BackingField() ;

constexpr int32_t const& __get__pressedButtons_k__BackingField() const;

constexpr void __set__position_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__position_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__position_k__BackingField() const;

constexpr void __set__localPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__localPosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__localPosition_k__BackingField() const;

constexpr void __set__deltaPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__deltaPosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__deltaPosition_k__BackingField() const;

constexpr void __set__deltaTime_k__BackingField(float_t  value) ;

constexpr float_t& __get__deltaTime_k__BackingField() ;

constexpr float_t const& __get__deltaTime_k__BackingField() const;

constexpr void __set__clickCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__clickCount_k__BackingField() ;

constexpr int32_t const& __get__clickCount_k__BackingField() const;

constexpr void __set__pressure_k__BackingField(float_t  value) ;

constexpr float_t& __get__pressure_k__BackingField() ;

constexpr float_t const& __get__pressure_k__BackingField() const;

constexpr void __set__tangentialPressure_k__BackingField(float_t  value) ;

constexpr float_t& __get__tangentialPressure_k__BackingField() ;

constexpr float_t const& __get__tangentialPressure_k__BackingField() const;

constexpr void __set__altitudeAngle_k__BackingField(float_t  value) ;

constexpr float_t& __get__altitudeAngle_k__BackingField() ;

constexpr float_t const& __get__altitudeAngle_k__BackingField() const;

constexpr void __set__azimuthAngle_k__BackingField(float_t  value) ;

constexpr float_t& __get__azimuthAngle_k__BackingField() ;

constexpr float_t const& __get__azimuthAngle_k__BackingField() const;

constexpr void __set__twist_k__BackingField(float_t  value) ;

constexpr float_t& __get__twist_k__BackingField() ;

constexpr float_t const& __get__twist_k__BackingField() const;

constexpr void __set__radius_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__radius_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __get__radius_k__BackingField() const;

constexpr void __set__radiusVariance_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__radiusVariance_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __get__radiusVariance_k__BackingField() const;

constexpr void __set__modifiers_k__BackingField(::UnityEngine::EventModifiers  value) ;

constexpr ::UnityEngine::EventModifiers& __get__modifiers_k__BackingField() ;

constexpr ::UnityEngine::EventModifiers const& __get__modifiers_k__BackingField() const;

constexpr void __set__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField(bool  value) ;

constexpr bool& __get__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField() ;

constexpr bool const& __get__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField() const;

constexpr void __set__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField(bool  value) ;

constexpr bool& __get__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField() ;

constexpr bool const& __get__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField() const;

/// @brief Method get_pointerId addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_pointerId() ;

/// @brief Method set_pointerId addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_pointerId(int32_t  value) ;

/// @brief Method get_pointerType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW get_pointerType() ;

/// @brief Method set_pointerType addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_pointerType(::StringW  value) ;

/// @brief Method get_isPrimary addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isPrimary() ;

/// @brief Method set_isPrimary addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_isPrimary(bool  value) ;

/// @brief Method get_button addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_button() ;

/// @brief Method set_button addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_button(int32_t  value) ;

/// @brief Method get_pressedButtons addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_pressedButtons() ;

/// @brief Method set_pressedButtons addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_pressedButtons(int32_t  value) ;

/// @brief Method get_position addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method get_localPosition addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector3 get_localPosition() ;

/// @brief Method set_localPosition addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_localPosition(::UnityEngine::Vector3  value) ;

/// @brief Method get_deltaPosition addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method set_deltaPosition addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_deltaPosition(::UnityEngine::Vector3  value) ;

/// @brief Method get_deltaTime addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_deltaTime() ;

/// @brief Method set_deltaTime addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_deltaTime(float_t  value) ;

/// @brief Method get_clickCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_clickCount() ;

/// @brief Method set_clickCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_clickCount(int32_t  value) ;

/// @brief Method get_pressure addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_pressure() ;

/// @brief Method set_pressure addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_pressure(float_t  value) ;

/// @brief Method get_tangentialPressure addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_tangentialPressure() ;

/// @brief Method set_tangentialPressure addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_tangentialPressure(float_t  value) ;

/// @brief Method get_altitudeAngle addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_altitudeAngle() ;

/// @brief Method set_altitudeAngle addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_altitudeAngle(float_t  value) ;

/// @brief Method get_azimuthAngle addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_azimuthAngle() ;

/// @brief Method set_azimuthAngle addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_azimuthAngle(float_t  value) ;

/// @brief Method get_twist addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_twist() ;

/// @brief Method set_twist addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_twist(float_t  value) ;

/// @brief Method get_radius addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector2 get_radius() ;

/// @brief Method set_radius addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_radius(::UnityEngine::Vector2  value) ;

/// @brief Method get_radiusVariance addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector2 get_radiusVariance() ;

/// @brief Method set_radiusVariance addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_radiusVariance(::UnityEngine::Vector2  value) ;

/// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method set_modifiers addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_modifiers(::UnityEngine::EventModifiers  value) ;

/// @brief Method get_shiftKey addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_shiftKey() ;

/// @brief Method get_ctrlKey addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_ctrlKey() ;

/// @brief Method get_commandKey addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_commandKey() ;

/// @brief Method get_altKey addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_altKey() ;

/// @brief Method get_actionKey addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_actionKey() ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.get_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool UnityEngine_UIElements_IPointerEventInternal_get_triggeredByOS() ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.set_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_UIElements_IPointerEventInternal_set_triggeredByOS(bool  value) ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.get_recomputeTopElementUnderPointer addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool UnityEngine_UIElements_IPointerEventInternal_get_recomputeTopElementUnderPointer() ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.set_recomputeTopElementUnderPointer addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_UIElements_IPointerEventInternal_set_recomputeTopElementUnderPointer(bool  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method get_currentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::UIElements::IEventHandler* get_currentTarget() ;

/// @brief Method set_currentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_currentTarget(::UnityEngine::UIElements::IEventHandler*  value) ;

/// @brief Method IsMouse addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsMouse(::UnityEngine::Event*  systemEvent) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::Event*  systemEvent) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::Touch  touch, ::UnityEngine::EventModifiers  modifiers) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::UIElements::IPointerEvent*  triggerEvent, ::UnityEngine::Vector2  position, int32_t  pointerId) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::UIElements::IPointerEvent*  triggerEvent) ;

/// @brief Method PreDispatch addr 0x0 size 0xffffffffffffffff virtual true final false
inline void PreDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method PostDispatch addr 0x0 size 0xffffffffffffffff virtual true final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

static inline ::UnityEngine::UIElements::PointerEventBase_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerEventBase_1(PointerEventBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerEventBase_1(PointerEventBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerEventBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PointerEventBase_1, "UnityEngine.UIElements", "PointerEventBase`1");
