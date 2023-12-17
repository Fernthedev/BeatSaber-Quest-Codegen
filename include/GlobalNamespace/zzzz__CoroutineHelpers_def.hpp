#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoroutineHelpers)
namespace GlobalNamespace {
class __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Coroutine;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CoroutineHelpers;
}
namespace GlobalNamespace {
class __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoroutineHelpers);
MARK_REF_PTR_T(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0);
// Type: ::<ExecuteAfterDelayCoroutine>d__0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15848))
// CS Name: ::CoroutineHelpers::<ExecuteAfterDelayCoroutine>d__0*
class CORDL_TYPE __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 : public ::System::Object {
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

/// @brief Field timeSeconds offset 0x20
 __declspec(property(get=__get_timeSeconds, put=__set_timeSeconds)) float_t  timeSeconds;

/// @brief Field action offset 0x28
 __declspec(property(get=__get_action, put=__set_action)) ::System::Action*  action;

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

constexpr void __set_timeSeconds(float_t  value) ;

constexpr float_t& __get_timeSeconds() ;

constexpr float_t const& __get_timeSeconds() const;

constexpr void __set_action(::System::Action*  value) ;

constexpr ::System::Action* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_action() const;

static inline ::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0xe27058 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0xe271fc size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0xe27200 size 0xb8 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0xe272b8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0xe272c0 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0xe27300 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0(__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0(__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CoroutineHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15849))
// CS Name: ::CoroutineHelpers*
class CORDL_TYPE CoroutineHelpers : public ::System::Object {
public:
// Declarations
using _ExecuteAfterDelayCoroutine_d__0 = ::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ExecuteAfterDelayCoroutine addr 0xe26fe0 size 0x78 virtual false final false
static inline ::System::Collections::IEnumerator* ExecuteAfterDelayCoroutine(::System::Action*  action, float_t  timeSeconds) ;

/// @brief Method StartSingleCoroutine addr 0xe27080 size 0xc4 virtual false final false
static inline void StartSingleCoroutine(::GlobalNamespace::ICoroutineStarter*  coroutineStarter, ByRef<::UnityEngine::Coroutine*>  handle, ::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopSingleCoroutine addr 0xe27144 size 0xb8 virtual false final false
static inline void StopSingleCoroutine(::GlobalNamespace::ICoroutineStarter*  coroutineStarter, ByRef<::UnityEngine::Coroutine*>  handle) ;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoroutineHelpers(CoroutineHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoroutineHelpers(CoroutineHelpers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CoroutineHelpers()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoroutineHelpers, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoroutineHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineHelpers*, "", "CoroutineHelpers");
NEED_NO_BOX(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0*, "", "CoroutineHelpers/<ExecuteAfterDelayCoroutine>d__0");
