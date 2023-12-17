#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Toggle)
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class __Toggle__ToggleEvent;
}
namespace UnityEngine::UI {
struct __Toggle__ToggleTransition;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __Toggle__ToggleTransition;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class __Toggle__ToggleEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__Toggle__ToggleTransition);
MARK_REF_PTR_T(::UnityEngine::UI::Toggle);
MARK_REF_PTR_T(::UnityEngine::UI::__Toggle__ToggleEvent);
// Type: ::ToggleTransition
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13129))
// CS Name: ::Toggle::ToggleTransition
struct CORDL_TYPE __Toggle__ToggleTransition : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Toggle__ToggleTransition_Unwrapped
enum struct ____Toggle__ToggleTransition_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Fade = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UI::__Toggle__ToggleTransition const None;

/// @brief Field Fade value: static_cast<int32_t>(0x1)
static ::UnityEngine::UI::__Toggle__ToggleTransition const Fade;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Toggle__ToggleTransition_Unwrapped () const noexcept {
return std::bit_cast<____Toggle__ToggleTransition_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Toggle__ToggleTransition(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Toggle__ToggleTransition(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Toggle__ToggleTransition()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Toggle__ToggleTransition, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: ::ToggleEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(10465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13130))
// CS Name: ::Toggle::ToggleEvent*
class CORDL_TYPE __Toggle__ToggleEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent_1<bool>)]{};

static inline ::UnityEngine::UI::__Toggle__ToggleEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2d8c820 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Toggle__ToggleEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Toggle__ToggleEvent(__Toggle__ToggleEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Toggle__ToggleEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Toggle__ToggleEvent(__Toggle__ToggleEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Toggle__ToggleEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Toggle__ToggleEvent, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Toggle
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13131))
// CS Name: ::UnityEngine.UI::Toggle*
class CORDL_TYPE Toggle : public ::UnityEngine::UI::Selectable {
public:
// Declarations
using ToggleEvent = ::UnityEngine::UI::__Toggle__ToggleEvent;

using ToggleTransition = ::UnityEngine::UI::__Toggle__ToggleTransition;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::UnityEngine::UI::Selectable)]{};

/// @brief Field toggleTransition offset 0xf8
 __declspec(property(get=__get_toggleTransition, put=__set_toggleTransition)) ::UnityEngine::UI::__Toggle__ToggleTransition  toggleTransition;

/// @brief Field graphic offset 0x100
 __declspec(property(get=__get_graphic, put=__set_graphic)) ::UnityEngine::UI::Graphic*  graphic;

/// @brief Field m_Group offset 0x108
 __declspec(property(get=__get_m_Group, put=__set_m_Group)) ::UnityEngine::UI::ToggleGroup*  m_Group;

/// @brief Field onValueChanged offset 0x110
 __declspec(property(get=__get_onValueChanged, put=__set_onValueChanged)) ::UnityEngine::UI::__Toggle__ToggleEvent*  onValueChanged;

/// @brief Field m_IsOn offset 0x118
 __declspec(property(get=__get_m_IsOn, put=__set_m_IsOn)) bool  m_IsOn;

 __declspec(property(get=get_group, put=set_group)) ::UnityEngine::UI::ToggleGroup*  group;

 __declspec(property(get=get_isOn, put=set_isOn)) bool  isOn;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr operator  ::UnityEngine::UI::ICanvasElement*() noexcept;

constexpr void __set_toggleTransition(::UnityEngine::UI::__Toggle__ToggleTransition  value) ;

constexpr ::UnityEngine::UI::__Toggle__ToggleTransition& __get_toggleTransition() ;

constexpr ::UnityEngine::UI::__Toggle__ToggleTransition const& __get_toggleTransition() const;

constexpr void __set_graphic(::UnityEngine::UI::Graphic*  value) ;

constexpr ::UnityEngine::UI::Graphic* __get_graphic() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> __get_graphic() const;

constexpr void __set_m_Group(::UnityEngine::UI::ToggleGroup*  value) ;

constexpr ::UnityEngine::UI::ToggleGroup* __get_m_Group() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::ToggleGroup*> __get_m_Group() const;

constexpr void __set_onValueChanged(::UnityEngine::UI::__Toggle__ToggleEvent*  value) ;

constexpr ::UnityEngine::UI::__Toggle__ToggleEvent* __get_onValueChanged() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Toggle__ToggleEvent*> __get_onValueChanged() const;

constexpr void __set_m_IsOn(bool  value) ;

constexpr bool& __get_m_IsOn() ;

constexpr bool const& __get_m_IsOn() const;

/// @brief Method get_group addr 0x2d8c56c size 0x8 virtual false final false
inline ::UnityEngine::UI::ToggleGroup* get_group() ;

/// @brief Method set_group addr 0x2d8c574 size 0x20 virtual false final false
inline void set_group(::UnityEngine::UI::ToggleGroup*  value) ;

static inline ::UnityEngine::UI::Toggle* New_ctor() ;

/// @brief Method .ctor addr 0x2d8c794 size 0x8c virtual false final false
inline void _ctor() ;

/// @brief Method Rebuild addr 0x2d8c868 size 0x4 virtual true final false
inline void Rebuild(::UnityEngine::UI::CanvasUpdate  executing) ;

/// @brief Method LayoutComplete addr 0x2d8c86c size 0x4 virtual true final false
inline void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2d8c870 size 0x4 virtual true final false
inline void GraphicUpdateComplete() ;

/// @brief Method OnDestroy addr 0x2d8c874 size 0x80 virtual true final false
inline void OnDestroy() ;

/// @brief Method OnEnable addr 0x2d8cce0 size 0x2c virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2d8cd0c size 0x20 virtual true final false
inline void OnDisable() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2d8cd2c size 0x124 virtual true final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method SetToggleGroup addr 0x2d8c594 size 0x13c virtual false final false
inline void SetToggleGroup(::UnityEngine::UI::ToggleGroup*  newGroup, bool  setMemberValue) ;

/// @brief Method get_isOn addr 0x2d8d234 size 0x8 virtual false final false
inline bool get_isOn() ;

/// @brief Method set_isOn addr 0x2d8d23c size 0xc virtual false final false
inline void set_isOn(bool  value) ;

/// @brief Method SetIsOnWithoutNotify addr 0x2d8d248 size 0xc virtual false final false
inline void SetIsOnWithoutNotify(bool  value) ;

/// @brief Method Set addr 0x2d8ce50 size 0x174 virtual false final false
inline void Set(bool  value, bool  sendCallback) ;

/// @brief Method PlayEffect addr 0x2d8c6d0 size 0xc4 virtual false final false
inline void PlayEffect(bool  instant) ;

/// @brief Method Start addr 0x2d8d390 size 0x8 virtual true final false
inline void Start() ;

/// @brief Method InternalToggle addr 0x2d8d398 size 0x54 virtual false final false
inline void InternalToggle() ;

/// @brief Method OnPointerClick addr 0x2d8d3ec size 0x24 virtual true final false
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSubmit addr 0x2d8d410 size 0x4 virtual true final false
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2d8d414 size 0x8 virtual true final true
inline ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform() ;

// Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Toggle(Toggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Toggle(Toggle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Toggle()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Toggle, 0x120>, "Size mismatch!");

} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Toggle__ToggleTransition, "UnityEngine.UI", "Toggle/ToggleTransition");
NEED_NO_BOX(::UnityEngine::UI::Toggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Toggle*, "UnityEngine.UI", "Toggle");
NEED_NO_BOX(::UnityEngine::UI::__Toggle__ToggleEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Toggle__ToggleEvent*, "UnityEngine.UI", "Toggle/ToggleEvent");
