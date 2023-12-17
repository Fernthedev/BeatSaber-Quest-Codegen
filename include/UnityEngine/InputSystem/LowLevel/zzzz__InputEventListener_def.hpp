#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputEventListener)
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventListener__ObserverState;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventListener__DisposableObserver;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventListener__DisposableObserver;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventListener__ObserverState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventListener;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventListener);
// Type: ::ObserverState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6533))
// CS Name: ::InputEventListener::ObserverState*
class CORDL_TYPE __InputEventListener__ObserverState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field observers offset 0x10
 __declspec(property(get=__get_observers, put=__set_observers)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  observers;

/// @brief Field onEventDelegate offset 0x28
 __declspec(property(get=__get_onEventDelegate, put=__set_onEventDelegate)) ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  onEventDelegate;

constexpr void __set_observers(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& __get_observers() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __get_observers() const;

constexpr void __set_onEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>* __get_onEventDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*> __get_onEventDelegate() const;

static inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* New_ctor() ;

/// @brief Method .ctor addr 0x2aeb388 size 0x88 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__2_0 addr 0x2aeb418 size 0xf4 virtual false final false
inline void __ctor_b__2_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputEventListener__ObserverState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputEventListener__ObserverState(__InputEventListener__ObserverState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputEventListener__ObserverState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputEventListener__ObserverState(__InputEventListener__ObserverState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputEventListener__ObserverState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::DisposableObserver
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6534))
// CS Name: ::InputEventListener::DisposableObserver*
class CORDL_TYPE __InputEventListener__DisposableObserver : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field observer offset 0x10
 __declspec(property(get=__get_observer, put=__set_observer)) ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  observer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* __get_observer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> __get_observer() const;

/// @brief Method Dispose addr 0x2aeb50c size 0x138 virtual true final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver* New_ctor() ;

/// @brief Method .ctor addr 0x2aeb410 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputEventListener__DisposableObserver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputEventListener__DisposableObserver(__InputEventListener__DisposableObserver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputEventListener__DisposableObserver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputEventListener__DisposableObserver(__InputEventListener__DisposableObserver const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputEventListener__DisposableObserver()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputEventListener
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6535))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputEventListener
struct CORDL_TYPE InputEventListener : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using DisposableObserver = ::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver;

using ObserverState = ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr operator  ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() ;

static inline void setStaticF_s_ObserverState(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*  value) ;

static inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* getStaticF_s_ObserverState() ;

/// @brief Method op_Addition addr 0x2ae508c size 0x180 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener op_Addition(::UnityEngine::InputSystem::LowLevel::InputEventListener  _, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  callback) ;

/// @brief Method op_Subtraction addr 0x2ae5370 size 0x180 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener op_Subtraction(::UnityEngine::InputSystem::LowLevel::InputEventListener  _, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  callback) ;

/// @brief Method Subscribe addr 0x2aeb22c size 0x15c virtual true final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  observer) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputEventListener(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputEventListener()  = default;


// Fields

// Static field s_ObserverState


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventListener, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver*, "UnityEngine.InputSystem.LowLevel", "InputEventListener/DisposableObserver");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*, "UnityEngine.InputSystem.LowLevel", "InputEventListener/ObserverState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventListener, "UnityEngine.InputSystem.LowLevel", "InputEventListener");
