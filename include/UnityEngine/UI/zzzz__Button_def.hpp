#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Button)
namespace UnityEngine::UI {
class __Button__ButtonClickedEvent;
}
namespace UnityEngine::UI {
class __Button___OnFinishSubmit_d__9;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class __Button__ButtonClickedEvent;
}
namespace UnityEngine::UI {
class __Button___OnFinishSubmit_d__9;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Button);
MARK_REF_PTR_T(::UnityEngine::UI::__Button__ButtonClickedEvent);
MARK_REF_PTR_T(::UnityEngine::UI::__Button___OnFinishSubmit_d__9);
// Type: ::ButtonClickedEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13017))
// CS Name: ::Button::ButtonClickedEvent*
class CORDL_TYPE __Button__ButtonClickedEvent : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent)]{};

static inline ::UnityEngine::UI::__Button__ButtonClickedEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2d50fe4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Button__ButtonClickedEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Button__ButtonClickedEvent(__Button__ButtonClickedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Button__ButtonClickedEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Button__ButtonClickedEvent(__Button__ButtonClickedEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Button__ButtonClickedEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Button__ButtonClickedEvent, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: ::<OnFinishSubmit>d__9
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13018))
// CS Name: ::Button::<OnFinishSubmit>d__9*
class CORDL_TYPE __Button___OnFinishSubmit_d__9 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::UI::Button*  __4__this;

/// @brief Field <fadeTime>5__2 offset 0x28
 __declspec(property(get=__get__fadeTime_5__2, put=__set__fadeTime_5__2)) float_t  _fadeTime_5__2;

/// @brief Field <elapsedTime>5__3 offset 0x2c
 __declspec(property(get=__get__elapsedTime_5__3, put=__set__elapsedTime_5__3)) float_t  _elapsedTime_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get___4__this() const;

constexpr void __set__fadeTime_5__2(float_t  value) ;

constexpr float_t& __get__fadeTime_5__2() ;

constexpr float_t const& __get__fadeTime_5__2() const;

constexpr void __set__elapsedTime_5__3(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__3() ;

constexpr float_t const& __get__elapsedTime_5__3() const;

static inline ::UnityEngine::UI::__Button___OnFinishSubmit_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2d51198 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d511c0 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d511c4 size 0xbc virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2d51280 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d51288 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d512c8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__Button___OnFinishSubmit_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Button___OnFinishSubmit_d__9(__Button___OnFinishSubmit_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Button___OnFinishSubmit_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Button___OnFinishSubmit_d__9(__Button___OnFinishSubmit_d__9 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Button___OnFinishSubmit_d__9()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Button___OnFinishSubmit_d__9, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Button
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13019))
// CS Name: ::UnityEngine.UI::Button*
class CORDL_TYPE Button : public ::UnityEngine::UI::Selectable {
public:
// Declarations
using _OnFinishSubmit_d__9 = ::UnityEngine::UI::__Button___OnFinishSubmit_d__9;

using ButtonClickedEvent = ::UnityEngine::UI::__Button__ButtonClickedEvent;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x100};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x100 - sizeof(::UnityEngine::UI::Selectable)]{};

/// @brief Field m_OnClick offset 0xf8
 __declspec(property(get=__get_m_OnClick, put=__set_m_OnClick)) ::UnityEngine::UI::__Button__ButtonClickedEvent*  m_OnClick;

 __declspec(property(get=get_onClick, put=set_onClick)) ::UnityEngine::UI::__Button__ButtonClickedEvent*  onClick;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

constexpr void __set_m_OnClick(::UnityEngine::UI::__Button__ButtonClickedEvent*  value) ;

constexpr ::UnityEngine::UI::__Button__ButtonClickedEvent* __get_m_OnClick() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Button__ButtonClickedEvent*> __get_m_OnClick() const;

static inline ::UnityEngine::UI::Button* New_ctor() ;

/// @brief Method .ctor addr 0x2d50f58 size 0x8c virtual false final false
inline void _ctor() ;

/// @brief Method get_onClick addr 0x2d50fec size 0x8 virtual false final false
inline ::UnityEngine::UI::__Button__ButtonClickedEvent* get_onClick() ;

/// @brief Method set_onClick addr 0x2d50ff4 size 0x8 virtual false final false
inline void set_onClick(::UnityEngine::UI::__Button__ButtonClickedEvent*  value) ;

/// @brief Method Press addr 0x2d50ffc size 0x98 virtual false final false
inline void Press() ;

/// @brief Method OnPointerClick addr 0x2d51094 size 0x24 virtual true final false
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSubmit addr 0x2d510b8 size 0x78 virtual true final false
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnFinishSubmit addr 0x2d51130 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* OnFinishSubmit() ;

// Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Button(Button && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Button(Button const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Button()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Button, 0x100>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Button*, "UnityEngine.UI", "Button");
NEED_NO_BOX(::UnityEngine::UI::__Button__ButtonClickedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Button__ButtonClickedEvent*, "UnityEngine.UI", "Button/ButtonClickedEvent");
NEED_NO_BOX(::UnityEngine::UI::__Button___OnFinishSubmit_d__9);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Button___OnFinishSubmit_d__9*, "UnityEngine.UI", "Button/<OnFinishSubmit>d__9");
