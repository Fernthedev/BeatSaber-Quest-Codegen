#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionTrace)
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct __InputActionTrace__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
struct __InputActionTrace__ActionEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ActionEvent;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class InputActionTrace;
}
namespace UnityEngine::InputSystem::Utilities {
struct __InputActionTrace__ActionEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct __InputActionTrace__Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::InputActionTrace);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator);
// Type: ::ActionEventPtr
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6653))
// CS Name: ::InputActionTrace::ActionEventPtr
struct CORDL_TYPE __InputActionTrace__ActionEventPtr : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_State offset 0x0
 __declspec(property(get=__get_m_State, put=__set_m_State)) ::UnityEngine::InputSystem::InputActionState*  m_State;

/// @brief Field m_Ptr offset 0x8
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_Ptr;

 __declspec(property(get=get_action)) ::UnityEngine::InputSystem::InputAction*  action;

 __declspec(property(get=get_phase)) ::UnityEngine::InputSystem::InputActionPhase  phase;

 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_interaction)) ::UnityEngine::InputSystem::IInputInteraction*  interaction;

 __declspec(property(get=get_time)) double_t  time;

 __declspec(property(get=get_startTime)) double_t  startTime;

 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

constexpr void __set_m_State(::UnityEngine::InputSystem::InputActionState*  value) ;

constexpr ::UnityEngine::InputSystem::InputActionState* __get_m_State() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> __get_m_State() const;

constexpr void __set_m_Ptr(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>& __get_m_Ptr() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> const& __get_m_Ptr() const;

/// @brief Method get_action addr 0x2b0eb90 size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::InputAction* get_action() ;

/// @brief Method get_phase addr 0x2b0ebb8 size 0xc virtual false final false
inline ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method get_control addr 0x2b0ebc4 size 0x40 virtual false final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method get_interaction addr 0x2b0ec04 size 0x58 virtual false final false
inline ::UnityEngine::InputSystem::IInputInteraction* get_interaction() ;

/// @brief Method get_time addr 0x2b0ec5c size 0x1c virtual false final false
inline double_t get_time() ;

/// @brief Method get_startTime addr 0x2b0ec78 size 0xc virtual false final false
inline double_t get_startTime() ;

/// @brief Method get_duration addr 0x2b0ec84 size 0x30 virtual false final false
inline double_t get_duration() ;

/// @brief Method get_valueSizeInBytes addr 0x2b0ecb4 size 0xc virtual false final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValueAsObject addr 0x2b0ecc0 size 0x244 virtual false final false
inline ::System::Object* ReadValueAsObject() ;

/// @brief Method ReadValue addr 0x2b0ef04 size 0x104 virtual false final false
inline void ReadValue(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
inline TValue ReadValue() ;

/// @brief Method ToString addr 0x2b0e4dc size 0x2f4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_Ptr", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: None }]
constexpr __InputActionTrace__ActionEventPtr(::UnityEngine::InputSystem::InputActionState*  m_State, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_Ptr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionTrace__ActionEventPtr(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionTrace__ActionEventPtr()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6654))
// CS Name: ::InputActionTrace::Enumerator
struct CORDL_TYPE __InputActionTrace__Enumerator : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_Trace offset 0x0
 __declspec(property(get=__get_m_Trace, put=__set_m_Trace)) ::UnityEngine::InputSystem::Utilities::InputActionTrace*  m_Trace;

/// @brief Field m_Buffer offset 0x8
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_Buffer;

/// @brief Field m_EventCount offset 0x10
 __declspec(property(get=__get_m_EventCount, put=__set_m_EventCount)) int32_t  m_EventCount;

/// @brief Field m_CurrentEvent offset 0x18
 __declspec(property(get=__get_m_CurrentEvent, put=__set_m_CurrentEvent)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_CurrentEvent;

/// @brief Field m_CurrentIndex offset 0x20
 __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex)) int32_t  m_CurrentIndex;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Trace(::UnityEngine::InputSystem::Utilities::InputActionTrace*  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InputActionTrace* __get_m_Trace() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::InputActionTrace*> __get_m_Trace() const;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> const& __get_m_Buffer() const;

constexpr void __set_m_EventCount(int32_t  value) ;

constexpr int32_t& __get_m_EventCount() ;

constexpr int32_t const& __get_m_EventCount() const;

constexpr void __set_m_CurrentEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>& __get_m_CurrentEvent() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> const& __get_m_CurrentEvent() const;

constexpr void __set_m_CurrentIndex(int32_t  value) ;

constexpr int32_t& __get_m_CurrentIndex() ;

constexpr int32_t const& __get_m_CurrentIndex() const;

/// @brief Method .ctor addr 0x2b0e7e8 size 0x48 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::InputActionTrace*  trace) ;

/// @brief Method MoveNext addr 0x2b0f008 size 0x64 virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2b0f06c size 0xc virtual true final true
inline void Reset() ;

/// @brief Method Dispose addr 0x2b0f078 size 0x4 virtual true final true
inline void Dispose() ;

/// @brief Method get_Current addr 0x2b0f07c size 0x64 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2b0f0e0 size 0x64 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Trace", ty: "::UnityEngine::InputSystem::Utilities::InputActionTrace*", modifiers: "", def_value: None }, CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentEvent", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputActionTrace__Enumerator(::UnityEngine::InputSystem::Utilities::InputActionTrace*  m_Trace, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_Buffer, int32_t  m_EventCount, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_CurrentEvent, int32_t  m_CurrentIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionTrace__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionTrace__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InputActionTrace
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6655))
// CS Name: ::UnityEngine.InputSystem.Utilities::InputActionTrace*
class CORDL_TYPE InputActionTrace : public ::System::Object {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator;

using ActionEventPtr = ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::Object)]{};

/// @brief Field m_SubscribedToAll offset 0x10
 __declspec(property(get=__get_m_SubscribedToAll, put=__set_m_SubscribedToAll)) bool  m_SubscribedToAll;

/// @brief Field m_OnActionChangeHooked offset 0x11
 __declspec(property(get=__get_m_OnActionChangeHooked, put=__set_m_OnActionChangeHooked)) bool  m_OnActionChangeHooked;

/// @brief Field m_SubscribedActions offset 0x18
 __declspec(property(get=__get_m_SubscribedActions, put=__set_m_SubscribedActions)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>  m_SubscribedActions;

/// @brief Field m_SubscribedActionMaps offset 0x30
 __declspec(property(get=__get_m_SubscribedActionMaps, put=__set_m_SubscribedActionMaps)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>  m_SubscribedActionMaps;

/// @brief Field m_EventBuffer offset 0x48
 __declspec(property(get=__get_m_EventBuffer, put=__set_m_EventBuffer)) ::UnityEngine::InputSystem::LowLevel::InputEventBuffer  m_EventBuffer;

/// @brief Field m_ActionMapStates offset 0x68
 __declspec(property(get=__get_m_ActionMapStates, put=__set_m_ActionMapStates)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>  m_ActionMapStates;

/// @brief Field m_ActionMapStateClones offset 0x80
 __declspec(property(get=__get_m_ActionMapStateClones, put=__set_m_ActionMapStateClones)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>  m_ActionMapStateClones;

/// @brief Field m_CallbackDelegate offset 0x98
 __declspec(property(get=__get_m_CallbackDelegate, put=__set_m_CallbackDelegate)) ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  m_CallbackDelegate;

/// @brief Field m_ActionChangeDelegate offset 0xa0
 __declspec(property(get=__get_m_ActionChangeDelegate, put=__set_m_ActionChangeDelegate)) ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  m_ActionChangeDelegate;

 __declspec(property(get=get_buffer)) ::UnityEngine::InputSystem::LowLevel::InputEventBuffer  buffer;

 __declspec(property(get=get_count)) int32_t  count;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_SubscribedToAll(bool  value) ;

constexpr bool& __get_m_SubscribedToAll() ;

constexpr bool const& __get_m_SubscribedToAll() const;

constexpr void __set_m_OnActionChangeHooked(bool  value) ;

constexpr bool& __get_m_OnActionChangeHooked() ;

constexpr bool const& __get_m_OnActionChangeHooked() const;

constexpr void __set_m_SubscribedActions(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>& __get_m_SubscribedActions() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> const& __get_m_SubscribedActions() const;

constexpr void __set_m_SubscribedActionMaps(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>& __get_m_SubscribedActionMaps() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> const& __get_m_SubscribedActionMaps() const;

constexpr void __set_m_EventBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& __get_m_EventBuffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer const& __get_m_EventBuffer() const;

constexpr void __set_m_ActionMapStates(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>& __get_m_ActionMapStates() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> const& __get_m_ActionMapStates() const;

constexpr void __set_m_ActionMapStateClones(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>& __get_m_ActionMapStateClones() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> const& __get_m_ActionMapStateClones() const;

constexpr void __set_m_CallbackDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* __get_m_CallbackDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> __get_m_CallbackDelegate() const;

constexpr void __set_m_ActionChangeDelegate(::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  value) ;

constexpr ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>* __get_m_ActionChangeDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*> __get_m_ActionChangeDelegate() const;

/// @brief Method get_buffer addr 0x2b0d4f4 size 0x10 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer get_buffer() ;

/// @brief Method get_count addr 0x2b0d504 size 0x8 virtual false final false
inline int32_t get_count() ;

static inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* New_ctor() ;

/// @brief Method .ctor addr 0x2b0d50c size 0x8 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* New_ctor(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method .ctor addr 0x2b0d514 size 0x7c virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputAction*  action) ;

static inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* New_ctor(::UnityEngine::InputSystem::InputActionMap*  actionMap) ;

/// @brief Method .ctor addr 0x2b0d6c4 size 0x7c virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputActionMap*  actionMap) ;

/// @brief Method SubscribeToAll addr 0x2b0d854 size 0xdc virtual false final false
inline void SubscribeToAll() ;

/// @brief Method UnsubscribeFromAll addr 0x2b0dc0c size 0xd8 virtual false final false
inline void UnsubscribeFromAll() ;

/// @brief Method SubscribeTo addr 0x2b0d590 size 0x134 virtual false final false
inline void SubscribeTo(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method SubscribeTo addr 0x2b0d740 size 0x114 virtual false final false
inline void SubscribeTo(::UnityEngine::InputSystem::InputActionMap*  actionMap) ;

/// @brief Method UnsubscribeFrom addr 0x2b0d9f4 size 0x11c virtual false final false
inline void UnsubscribeFrom(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method UnsubscribeFrom addr 0x2b0db10 size 0xfc virtual false final false
inline void UnsubscribeFrom(::UnityEngine::InputSystem::InputActionMap*  actionMap) ;

/// @brief Method RecordAction addr 0x2b0dd50 size 0x1d0 virtual false final false
inline void RecordAction(::UnityEngine::InputSystem::__InputAction__CallbackContext  context) ;

/// @brief Method Clear addr 0x2b0df20 size 0x54 virtual false final false
inline void Clear() ;

/// @brief Method Finalize addr 0x2b0df74 size 0x94 virtual true final false
inline void Finalize() ;

/// @brief Method ToString addr 0x2b0e108 size 0x35c virtual true final false
inline ::StringW ToString() ;

/// @brief Method Dispose addr 0x2b0e7d0 size 0x18 virtual true final true
inline void Dispose() ;

/// @brief Method DisposeInternal addr 0x2b0e008 size 0x100 virtual false final false
inline void DisposeInternal() ;

/// @brief Method GetEnumerator addr 0x2b0e464 size 0x78 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2b0e830 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method HookOnActionChange addr 0x2b0d930 size 0xc4 virtual false final false
inline void HookOnActionChange() ;

/// @brief Method UnhookOnActionChange addr 0x2b0dce4 size 0x6c virtual false final false
inline void UnhookOnActionChange() ;

/// @brief Method OnActionChange addr 0x2b0e834 size 0x264 virtual false final false
inline void OnActionChange(::System::Object*  actionOrMapOrAsset, ::UnityEngine::InputSystem::InputActionChange  change) ;

/// @brief Method CloneActionStateBeforeBindingsChange addr 0x2b0ea98 size 0xf8 virtual false final false
inline void CloneActionStateBeforeBindingsChange(::UnityEngine::InputSystem::InputActionMap*  actionMap) ;

// Ctor Parameters [CppParam { name: "", ty: "InputActionTrace", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionTrace(InputActionTrace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionTrace", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionTrace(InputActionTrace const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputActionTrace()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::InputActionTrace, 0xa8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::InputActionTrace);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InputActionTrace*, "UnityEngine.InputSystem.Utilities", "InputActionTrace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr, "UnityEngine.InputSystem.Utilities", "InputActionTrace/ActionEventPtr");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator, "UnityEngine.InputSystem.Utilities", "InputActionTrace/Enumerator");
