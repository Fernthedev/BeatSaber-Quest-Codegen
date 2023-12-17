#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Slider)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
struct __Slider__Direction;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
struct __Slider__Axis;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::UI {
class __Slider__SliderEvent;
}
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __Slider__Axis;
}
namespace UnityEngine::UI {
struct __Slider__Direction;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class __Slider__SliderEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__Slider__Axis);
MARK_VAL_T(::UnityEngine::UI::__Slider__Direction);
MARK_REF_PTR_T(::UnityEngine::UI::Slider);
MARK_REF_PTR_T(::UnityEngine::UI::__Slider__SliderEvent);
// Type: ::Direction
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13121))
// CS Name: ::Slider::Direction
struct CORDL_TYPE __Slider__Direction : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Slider__Direction_Unwrapped
enum struct ____Slider__Direction_Unwrapped : int32_t {
__E_LeftToRight = static_cast<int32_t>(0x0),
__E_RightToLeft = static_cast<int32_t>(0x1),
__E_BottomToTop = static_cast<int32_t>(0x2),
__E_TopToBottom = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LeftToRight value: static_cast<int32_t>(0x0)
static ::UnityEngine::UI::__Slider__Direction const LeftToRight;

/// @brief Field RightToLeft value: static_cast<int32_t>(0x1)
static ::UnityEngine::UI::__Slider__Direction const RightToLeft;

/// @brief Field BottomToTop value: static_cast<int32_t>(0x2)
static ::UnityEngine::UI::__Slider__Direction const BottomToTop;

/// @brief Field TopToBottom value: static_cast<int32_t>(0x3)
static ::UnityEngine::UI::__Slider__Direction const TopToBottom;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Slider__Direction_Unwrapped () const noexcept {
return std::bit_cast<____Slider__Direction_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Slider__Direction(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Slider__Direction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Slider__Direction()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Slider__Direction, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: ::SliderEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 391 }), TypeDefinitionIndex(TypeDefinitionIndex(10465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13122))
// CS Name: ::Slider::SliderEvent*
class CORDL_TYPE __Slider__SliderEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent_1<float_t>)]{};

static inline ::UnityEngine::UI::__Slider__SliderEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2d88e90 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Slider__SliderEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Slider__SliderEvent(__Slider__SliderEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Slider__SliderEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Slider__SliderEvent(__Slider__SliderEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Slider__SliderEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Slider__SliderEvent, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: ::Axis
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13123))
// CS Name: ::Slider::Axis
struct CORDL_TYPE __Slider__Axis : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Slider__Axis_Unwrapped
enum struct ____Slider__Axis_Unwrapped : int32_t {
__E_Horizontal = static_cast<int32_t>(0x0),
__E_Vertical = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Horizontal value: static_cast<int32_t>(0x0)
static ::UnityEngine::UI::__Slider__Axis const Horizontal;

/// @brief Field Vertical value: static_cast<int32_t>(0x1)
static ::UnityEngine::UI::__Slider__Axis const Vertical;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Slider__Axis_Unwrapped () const noexcept {
return std::bit_cast<____Slider__Axis_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Slider__Axis(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Slider__Axis(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Slider__Axis()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Slider__Axis, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Slider
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13124))
// CS Name: ::UnityEngine.UI::Slider*
class CORDL_TYPE Slider : public ::UnityEngine::UI::Selectable {
public:
// Declarations
using Axis = ::UnityEngine::UI::__Slider__Axis;

using SliderEvent = ::UnityEngine::UI::__Slider__SliderEvent;

using Direction = ::UnityEngine::UI::__Slider__Direction;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x160};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x160 - sizeof(::UnityEngine::UI::Selectable)]{};

/// @brief Field m_FillRect offset 0xf8
 __declspec(property(get=__get_m_FillRect, put=__set_m_FillRect)) ::UnityEngine::RectTransform*  m_FillRect;

/// @brief Field m_HandleRect offset 0x100
 __declspec(property(get=__get_m_HandleRect, put=__set_m_HandleRect)) ::UnityEngine::RectTransform*  m_HandleRect;

/// @brief Field m_Direction offset 0x108
 __declspec(property(get=__get_m_Direction, put=__set_m_Direction)) ::UnityEngine::UI::__Slider__Direction  m_Direction;

/// @brief Field m_MinValue offset 0x10c
 __declspec(property(get=__get_m_MinValue, put=__set_m_MinValue)) float_t  m_MinValue;

/// @brief Field m_MaxValue offset 0x110
 __declspec(property(get=__get_m_MaxValue, put=__set_m_MaxValue)) float_t  m_MaxValue;

/// @brief Field m_WholeNumbers offset 0x114
 __declspec(property(get=__get_m_WholeNumbers, put=__set_m_WholeNumbers)) bool  m_WholeNumbers;

/// @brief Field m_Value offset 0x118
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) float_t  m_Value;

/// @brief Field m_OnValueChanged offset 0x120
 __declspec(property(get=__get_m_OnValueChanged, put=__set_m_OnValueChanged)) ::UnityEngine::UI::__Slider__SliderEvent*  m_OnValueChanged;

/// @brief Field m_FillImage offset 0x128
 __declspec(property(get=__get_m_FillImage, put=__set_m_FillImage)) ::UnityEngine::UI::Image*  m_FillImage;

/// @brief Field m_FillTransform offset 0x130
 __declspec(property(get=__get_m_FillTransform, put=__set_m_FillTransform)) ::UnityEngine::Transform*  m_FillTransform;

/// @brief Field m_FillContainerRect offset 0x138
 __declspec(property(get=__get_m_FillContainerRect, put=__set_m_FillContainerRect)) ::UnityEngine::RectTransform*  m_FillContainerRect;

/// @brief Field m_HandleTransform offset 0x140
 __declspec(property(get=__get_m_HandleTransform, put=__set_m_HandleTransform)) ::UnityEngine::Transform*  m_HandleTransform;

/// @brief Field m_HandleContainerRect offset 0x148
 __declspec(property(get=__get_m_HandleContainerRect, put=__set_m_HandleContainerRect)) ::UnityEngine::RectTransform*  m_HandleContainerRect;

/// @brief Field m_Offset offset 0x150
 __declspec(property(get=__get_m_Offset, put=__set_m_Offset)) ::UnityEngine::Vector2  m_Offset;

/// @brief Field m_Tracker offset 0x158
 __declspec(property(get=__get_m_Tracker, put=__set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker  m_Tracker;

/// @brief Field m_DelayedUpdateVisuals offset 0x159
 __declspec(property(get=__get_m_DelayedUpdateVisuals, put=__set_m_DelayedUpdateVisuals)) bool  m_DelayedUpdateVisuals;

 __declspec(property(get=get_fillRect, put=set_fillRect)) ::UnityEngine::RectTransform*  fillRect;

 __declspec(property(get=get_handleRect, put=set_handleRect)) ::UnityEngine::RectTransform*  handleRect;

 __declspec(property(get=get_direction, put=set_direction)) ::UnityEngine::UI::__Slider__Direction  direction;

 __declspec(property(get=get_minValue, put=set_minValue)) float_t  minValue;

 __declspec(property(get=get_maxValue, put=set_maxValue)) float_t  maxValue;

 __declspec(property(get=get_wholeNumbers, put=set_wholeNumbers)) bool  wholeNumbers;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

 __declspec(property(get=get_normalizedValue, put=set_normalizedValue)) float_t  normalizedValue;

 __declspec(property(get=get_onValueChanged, put=set_onValueChanged)) ::UnityEngine::UI::__Slider__SliderEvent*  onValueChanged;

 __declspec(property(get=get_stepSize)) float_t  stepSize;

 __declspec(property(get=get_axis)) ::UnityEngine::UI::__Slider__Axis  axis;

 __declspec(property(get=get_reverseValue)) bool  reverseValue;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr operator  ::UnityEngine::UI::ICanvasElement*() noexcept;

constexpr void __set_m_FillRect(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get_m_FillRect() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get_m_FillRect() const;

constexpr void __set_m_HandleRect(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get_m_HandleRect() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get_m_HandleRect() const;

constexpr void __set_m_Direction(::UnityEngine::UI::__Slider__Direction  value) ;

constexpr ::UnityEngine::UI::__Slider__Direction& __get_m_Direction() ;

constexpr ::UnityEngine::UI::__Slider__Direction const& __get_m_Direction() const;

constexpr void __set_m_MinValue(float_t  value) ;

constexpr float_t& __get_m_MinValue() ;

constexpr float_t const& __get_m_MinValue() const;

constexpr void __set_m_MaxValue(float_t  value) ;

constexpr float_t& __get_m_MaxValue() ;

constexpr float_t const& __get_m_MaxValue() const;

constexpr void __set_m_WholeNumbers(bool  value) ;

constexpr bool& __get_m_WholeNumbers() ;

constexpr bool const& __get_m_WholeNumbers() const;

constexpr void __set_m_Value(float_t  value) ;

constexpr float_t& __get_m_Value() ;

constexpr float_t const& __get_m_Value() const;

constexpr void __set_m_OnValueChanged(::UnityEngine::UI::__Slider__SliderEvent*  value) ;

constexpr ::UnityEngine::UI::__Slider__SliderEvent* __get_m_OnValueChanged() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Slider__SliderEvent*> __get_m_OnValueChanged() const;

constexpr void __set_m_FillImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get_m_FillImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get_m_FillImage() const;

constexpr void __set_m_FillTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_m_FillTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_m_FillTransform() const;

constexpr void __set_m_FillContainerRect(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get_m_FillContainerRect() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get_m_FillContainerRect() const;

constexpr void __set_m_HandleTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_m_HandleTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_m_HandleTransform() const;

constexpr void __set_m_HandleContainerRect(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get_m_HandleContainerRect() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get_m_HandleContainerRect() const;

constexpr void __set_m_Offset(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Offset() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Offset() const;

constexpr void __set_m_Tracker(::UnityEngine::DrivenRectTransformTracker  value) ;

constexpr ::UnityEngine::DrivenRectTransformTracker& __get_m_Tracker() ;

constexpr ::UnityEngine::DrivenRectTransformTracker const& __get_m_Tracker() const;

constexpr void __set_m_DelayedUpdateVisuals(bool  value) ;

constexpr bool& __get_m_DelayedUpdateVisuals() ;

constexpr bool const& __get_m_DelayedUpdateVisuals() const;

/// @brief Method get_fillRect addr 0x2d882d4 size 0x8 virtual false final false
inline ::UnityEngine::RectTransform* get_fillRect() ;

/// @brief Method set_fillRect addr 0x2d882dc size 0x7c virtual false final false
inline void set_fillRect(::UnityEngine::RectTransform*  value) ;

/// @brief Method get_handleRect addr 0x2d888e4 size 0x8 virtual false final false
inline ::UnityEngine::RectTransform* get_handleRect() ;

/// @brief Method set_handleRect addr 0x2d888ec size 0x7c virtual false final false
inline void set_handleRect(::UnityEngine::RectTransform*  value) ;

/// @brief Method get_direction addr 0x2d88968 size 0x8 virtual false final false
inline ::UnityEngine::UI::__Slider__Direction get_direction() ;

/// @brief Method set_direction addr 0x2d88970 size 0x74 virtual false final false
inline void set_direction(::UnityEngine::UI::__Slider__Direction  value) ;

/// @brief Method get_minValue addr 0x2d889e4 size 0x8 virtual false final false
inline float_t get_minValue() ;

/// @brief Method set_minValue addr 0x2d889ec size 0x90 virtual false final false
inline void set_minValue(float_t  value) ;

/// @brief Method get_maxValue addr 0x2d88a7c size 0x8 virtual false final false
inline float_t get_maxValue() ;

/// @brief Method set_maxValue addr 0x2d88a84 size 0x90 virtual false final false
inline void set_maxValue(float_t  value) ;

/// @brief Method get_wholeNumbers addr 0x2d88b14 size 0x8 virtual false final false
inline bool get_wholeNumbers() ;

/// @brief Method set_wholeNumbers addr 0x2d88b1c size 0x90 virtual false final false
inline void set_wholeNumbers(bool  value) ;

/// @brief Method get_value addr 0x2d88bac size 0xa0 virtual true final false
inline float_t get_value() ;

/// @brief Method set_value addr 0x2d88c4c size 0x14 virtual true final false
inline void set_value(float_t  value) ;

/// @brief Method SetValueWithoutNotify addr 0x2d88c60 size 0x14 virtual true final false
inline void SetValueWithoutNotify(float_t  input) ;

/// @brief Method get_normalizedValue addr 0x2d88c74 size 0xe4 virtual false final false
inline float_t get_normalizedValue() ;

/// @brief Method set_normalizedValue addr 0x2d88d58 size 0x38 virtual false final false
inline void set_normalizedValue(float_t  value) ;

/// @brief Method get_onValueChanged addr 0x2d88d90 size 0x8 virtual false final false
inline ::UnityEngine::UI::__Slider__SliderEvent* get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x2d88d98 size 0x8 virtual false final false
inline void set_onValueChanged(::UnityEngine::UI::__Slider__SliderEvent*  value) ;

/// @brief Method get_stepSize addr 0x2d88da0 size 0x2c virtual false final false
inline float_t get_stepSize() ;

static inline ::UnityEngine::UI::Slider* New_ctor() ;

/// @brief Method .ctor addr 0x2d88dcc size 0xc4 virtual false final false
inline void _ctor() ;

/// @brief Method Rebuild addr 0x2d88ed8 size 0x4 virtual true final false
inline void Rebuild(::UnityEngine::UI::CanvasUpdate  executing) ;

/// @brief Method LayoutComplete addr 0x2d88edc size 0x4 virtual true final false
inline void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2d88ee0 size 0x4 virtual true final false
inline void GraphicUpdateComplete() ;

/// @brief Method OnEnable addr 0x2d88ee4 size 0x3c virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2d88f20 size 0x20 virtual true final false
inline void OnDisable() ;

/// @brief Method Update addr 0x2d88f40 size 0x40 virtual true final false
inline void Update() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2d88f80 size 0x1f0 virtual true final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method UpdateCachedReferences addr 0x2d88358 size 0x2a4 virtual false final false
inline void UpdateCachedReferences() ;

/// @brief Method ClampValue addr 0x2d89170 size 0xb4 virtual false final false
inline float_t ClampValue(float_t  input) ;

/// @brief Method Set addr 0x2d89248 size 0xc4 virtual true final false
inline void Set(float_t  input, bool  sendCallback) ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2d8930c size 0x38 virtual true final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method get_axis addr 0x2d89238 size 0x10 virtual false final false
inline ::UnityEngine::UI::__Slider__Axis get_axis() ;

/// @brief Method get_reverseValue addr 0x2d89224 size 0x14 virtual false final false
inline bool get_reverseValue() ;

/// @brief Method UpdateVisuals addr 0x2d885fc size 0x2e8 virtual false final false
inline void UpdateVisuals() ;

/// @brief Method UpdateDrag addr 0x2d89344 size 0x238 virtual false final false
inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData*  eventData, ::UnityEngine::Camera*  cam) ;

/// @brief Method MayDrag addr 0x2d8957c size 0x64 virtual false final false
inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerDown addr 0x2d895e0 size 0x1b8 virtual true final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnDrag addr 0x2d89798 size 0x50 virtual true final false
inline void OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnMove addr 0x2d897e8 size 0x24c virtual true final false
inline void OnMove(::UnityEngine::EventSystems::AxisEventData*  eventData) ;

/// @brief Method FindSelectableOnLeft addr 0x2d89a34 size 0x24 virtual true final false
inline ::UnityEngine::UI::Selectable* FindSelectableOnLeft() ;

/// @brief Method FindSelectableOnRight addr 0x2d89a58 size 0x24 virtual true final false
inline ::UnityEngine::UI::Selectable* FindSelectableOnRight() ;

/// @brief Method FindSelectableOnUp addr 0x2d89a7c size 0x24 virtual true final false
inline ::UnityEngine::UI::Selectable* FindSelectableOnUp() ;

/// @brief Method FindSelectableOnDown addr 0x2d89aa0 size 0x24 virtual true final false
inline ::UnityEngine::UI::Selectable* FindSelectableOnDown() ;

/// @brief Method OnInitializePotentialDrag addr 0x2d89ac4 size 0x18 virtual true final false
inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method SetDirection addr 0x2d89adc size 0x178 virtual false final false
inline void SetDirection(::UnityEngine::UI::__Slider__Direction  direction, bool  includeRectLayouts) ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2d89c54 size 0x8 virtual true final true
inline ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform() ;

// Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Slider(Slider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Slider(Slider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Slider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Slider, 0x160>, "Size mismatch!");

} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Slider__Axis, "UnityEngine.UI", "Slider/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Slider__Direction, "UnityEngine.UI", "Slider/Direction");
NEED_NO_BOX(::UnityEngine::UI::Slider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Slider*, "UnityEngine.UI", "Slider");
NEED_NO_BOX(::UnityEngine::UI::__Slider__SliderEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Slider__SliderEvent*, "UnityEngine.UI", "Slider/SliderEvent");
