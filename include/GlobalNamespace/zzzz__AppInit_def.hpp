#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInit)
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class __AppInit____c;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
struct __AppInit___StartGameAsync_d__11;
}
namespace GlobalNamespace {
class __AppInit____c__DisplayClass21_0;
}
namespace GlobalNamespace {
class __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;
}
namespace GlobalNamespace {
struct __AppInit__AppStartType;
}
namespace GlobalNamespace {
struct __AppInit___Awake_d__10;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct __AppInit___InitializeAsync_d__13;
}
namespace GlobalNamespace {
class __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AppInit__AppStartType;
}
namespace GlobalNamespace {
class AppInit;
}
namespace GlobalNamespace {
class __AppInit____c;
}
namespace GlobalNamespace {
class __AppInit____c__DisplayClass21_0;
}
namespace GlobalNamespace {
class __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;
}
namespace GlobalNamespace {
struct __AppInit___Awake_d__10;
}
namespace GlobalNamespace {
struct __AppInit___InitializeAsync_d__13;
}
namespace GlobalNamespace {
struct __AppInit___StartGameAsync_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AppInit__AppStartType);
MARK_REF_PTR_T(::GlobalNamespace::AppInit);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit____c);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit____c__DisplayClass21_0);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d);
MARK_VAL_T(::GlobalNamespace::__AppInit___Awake_d__10);
MARK_VAL_T(::GlobalNamespace::__AppInit___InitializeAsync_d__13);
MARK_VAL_T(::GlobalNamespace::__AppInit___StartGameAsync_d__11);
// Type: ::AppStartType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15385))
// CS Name: ::AppInit::AppStartType
struct CORDL_TYPE __AppInit__AppStartType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AppInit__AppStartType_Unwrapped
enum struct ____AppInit__AppStartType_Unwrapped : int32_t {
__E_AppStart = static_cast<int32_t>(0x0),
__E_AppRestart = static_cast<int32_t>(0x1),
__E_MultiSceneEditor = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AppStart value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__AppInit__AppStartType const AppStart;

/// @brief Field AppRestart value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__AppInit__AppStartType const AppRestart;

/// @brief Field MultiSceneEditor value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__AppInit__AppStartType const MultiSceneEditor;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AppInit__AppStartType_Unwrapped () const noexcept {
return std::bit_cast<____AppInit__AppStartType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AppInit__AppStartType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AppInit__AppStartType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AppInit__AppStartType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit__AppStartType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Awake>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15386))
// CS Name: ::AppInit::<Awake>d__10
struct CORDL_TYPE __AppInit___Awake_d__10 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::AppInit*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::AppInit*  value) ;

constexpr ::GlobalNamespace::AppInit* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInit*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe1dcfc size 0x228 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe1df24 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AppInit*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __AppInit___Awake_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::AppInit*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AppInit___Awake_d__10(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AppInit___Awake_d__10()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___Awake_d__10, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<StartGameAsync>d__11
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15387))
// CS Name: ::AppInit::<StartGameAsync>d__11
struct CORDL_TYPE __AppInit___StartGameAsync_d__11 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::AppInit*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::AppInit*  value) ;

constexpr ::GlobalNamespace::AppInit* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInit*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe1df30 size 0x2d4 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe1e2cc size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AppInit*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __AppInit___StartGameAsync_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::AppInit*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AppInit___StartGameAsync_d__11(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AppInit___StartGameAsync_d__11()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___StartGameAsync_d__11, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15388))
// CS Name: ::AppInit::<>c*
class CORDL_TYPE __AppInit____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__AppInit____c*  value) ;

static inline ::GlobalNamespace::__AppInit____c* getStaticF___9() ;

static inline void setStaticF___9__13_1(::System::Func_1<bool>*  value) ;

static inline ::System::Func_1<bool>* getStaticF___9__13_1() ;

static inline ::GlobalNamespace::__AppInit____c* New_ctor() ;

/// @brief Method .ctor addr 0xe1e33c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <InitializeAsync>b__13_1 addr 0xe1e344 size 0x8 virtual false final false
inline bool _InitializeAsync_b__13_1() ;

// Ctor Parameters [CppParam { name: "", ty: "__AppInit____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AppInit____c(__AppInit____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AppInit____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AppInit____c(__AppInit____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AppInit____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__13_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<InitializeAsync>d__13
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15389))
// CS Name: ::AppInit::<InitializeAsync>d__13
struct CORDL_TYPE __AppInit___InitializeAsync_d__13 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::AppInit*  __4__this;

/// @brief Field <startType>5__2 offset 0x28
 __declspec(property(get=__get__startType_5__2, put=__set__startType_5__2)) ::GlobalNamespace::__AppInit__AppStartType  _startType_5__2;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::AppInit*  value) ;

constexpr ::GlobalNamespace::AppInit* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInit*> __get___4__this() const;

constexpr void __set__startType_5__2(::GlobalNamespace::__AppInit__AppStartType  value) ;

constexpr ::GlobalNamespace::__AppInit__AppStartType& __get__startType_5__2() ;

constexpr ::GlobalNamespace::__AppInit__AppStartType const& __get__startType_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe1e34c size 0x52c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe1e96c size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AppInit*", modifiers: "", def_value: None }, CppParam { name: "_startType_5__2", ty: "::GlobalNamespace::__AppInit__AppStartType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __AppInit___InitializeAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::AppInit*  __4__this, ::GlobalNamespace::__AppInit__AppStartType  _startType_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AppInit___InitializeAsync_d__13(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AppInit___InitializeAsync_d__13()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___InitializeAsync_d__13, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15390))
// CS Name: ::AppInit::<>c__DisplayClass21_0::<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d*
class CORDL_TYPE __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::__AppInit____c__DisplayClass21_0*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::__AppInit____c__DisplayClass21_0*  value) ;

constexpr ::GlobalNamespace::__AppInit____c__DisplayClass21_0* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AppInit____c__DisplayClass21_0*> __get___4__this() const;

static inline ::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0xe1e978 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0xe1e9a0 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0xe1e9a4 size 0xcc virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0xe1ea70 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0xe1ea78 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0xe1eab8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d(__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d(__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass21_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15391))
// CS Name: ::AppInit::<>c__DisplayClass21_0*
class CORDL_TYPE __AppInit____c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
using __WaitUntilAsync_g__WaitUntilPredicateTrue_0_d = ::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field predicate offset 0x10
 __declspec(property(get=__get_predicate, put=__set_predicate)) ::System::Func_1<bool>*  predicate;

/// @brief Field tcs offset 0x18
 __declspec(property(get=__get_tcs, put=__set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  tcs;

constexpr void __set_predicate(::System::Func_1<bool>*  value) ;

constexpr ::System::Func_1<bool>* __get_predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> __get_predicate() const;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* __get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*> __get_tcs() const;

static inline ::GlobalNamespace::__AppInit____c__DisplayClass21_0* New_ctor() ;

/// @brief Method .ctor addr 0xe1dbd4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <WaitUntilAsync>g__WaitUntilPredicateTrue|0 addr 0xe1dbdc size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* _WaitUntilAsync_g__WaitUntilPredicateTrue_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__AppInit____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AppInit____c__DisplayClass21_0(__AppInit____c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AppInit____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AppInit____c__DisplayClass21_0(__AppInit____c__DisplayClass21_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AppInit____c__DisplayClass21_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit____c__DisplayClass21_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15392))
// CS Name: ::AppInit*
class CORDL_TYPE AppInit : public ::Zenject::MonoInstaller {
public:
// Declarations
using __c__DisplayClass21_0 = ::GlobalNamespace::__AppInit____c__DisplayClass21_0;

using _InitializeAsync_d__13 = ::GlobalNamespace::__AppInit___InitializeAsync_d__13;

using __c = ::GlobalNamespace::__AppInit____c;

using _StartGameAsync_d__11 = ::GlobalNamespace::__AppInit___StartGameAsync_d__11;

using _Awake_d__10 = ::GlobalNamespace::__AppInit___Awake_d__10;

using AppStartType = ::GlobalNamespace::__AppInit__AppStartType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _cameraGO offset 0x20
 __declspec(property(get=__get__cameraGO, put=__set__cameraGO)) ::UnityEngine::GameObject*  _cameraGO;

/// @brief Field _asyncSceneContext offset 0x28
 __declspec(property(get=__get__asyncSceneContext, put=__set__asyncSceneContext)) ::BGLib::AppFlow::Initialization::AsyncSceneContext*  _asyncSceneContext;

/// @brief Field sceneSetupData offset 0x30
 __declspec(property(get=__get_sceneSetupData, put=__set_sceneSetupData)) ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*  sceneSetupData;

/// @brief Field _setupData offset 0x38
 __declspec(property(get=__get__setupData, put=__set__setupData)) ::GlobalNamespace::AppInitSetupData*  _setupData;

/// @brief Field _gameScenesManager offset 0x40
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

 __declspec(property(get=get_gameScenesManager)) ::GlobalNamespace::GameScenesManager*  gameScenesManager;

 __declspec(property(get=get_isTestContext)) bool  isTestContext;

constexpr void __set__cameraGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__cameraGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__cameraGO() const;

constexpr void __set__asyncSceneContext(::BGLib::AppFlow::Initialization::AsyncSceneContext*  value) ;

constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext* __get__asyncSceneContext() ;

constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncSceneContext*> __get__asyncSceneContext() const;

constexpr void __set_sceneSetupData(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*  value) ;

constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* __get_sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*> __get_sceneSetupData() const;

constexpr void __set__setupData(::GlobalNamespace::AppInitSetupData*  value) ;

constexpr ::GlobalNamespace::AppInitSetupData* __get__setupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> __get__setupData() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

/// @brief Method get_gameScenesManager addr 0xe1d57c size 0x8 virtual false final false
inline ::GlobalNamespace::GameScenesManager* get_gameScenesManager() ;

/// @brief Method get_isTestContext addr 0xe1d584 size 0x20 virtual false final false
inline bool get_isTestContext() ;

/// @brief Method Awake addr 0xe1d5a4 size 0x94 virtual false final false
inline void Awake() ;

/// @brief Method StartGameAsync addr 0xe1d638 size 0xc8 virtual false final false
inline ::System::Threading::Tasks::Task* StartGameAsync() ;

/// @brief Method PreloadAsync addr 0xe1d700 size 0x88 virtual true final false
inline ::System::Threading::Tasks::Task* PreloadAsync() ;

/// @brief Method InitializeAsync addr 0xe1d788 size 0xcc virtual false final false
inline ::System::Threading::Tasks::Task* InitializeAsync() ;

/// @brief Method OnDestroy addr 0xe1d854 size 0xd0 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeforeDismissingScenes addr 0xe1d9c0 size 0x9c virtual false final false
inline void HandleBeforeDismissingScenes() ;

/// @brief Method GetAppStartType addr 0xe1da5c size 0x94 virtual false final false
inline ::GlobalNamespace::__AppInit__AppStartType GetAppStartType() ;

/// @brief Method InstallBindings addr 0xe1daf0 size 0x4 virtual true final false
inline void InstallBindings() ;

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetupAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task* RepeatableSetupAsync() ;

/// @brief Method TransitionToNextScene addr 0x0 size 0xffffffffffffffff virtual true final false
inline void TransitionToNextScene() ;

/// @brief Method WaitUntilAsync addr 0xe1daf4 size 0xe0 virtual false final false
inline ::System::Threading::Tasks::Task* WaitUntilAsync(::System::Func_1<bool>*  predicate) ;

static inline ::GlobalNamespace::AppInit* New_ctor() ;

/// @brief Method .ctor addr 0xe1dc44 size 0x6c virtual false final false
inline void _ctor() ;

/// @brief Method <InitializeAsync>b__13_0 addr 0xe1dcd8 size 0x24 virtual false final false
inline bool _InitializeAsync_b__13_0() ;

// Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppInit(AppInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppInit(AppInit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AppInit()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit__AppStartType, "", "AppInit/AppStartType");
NEED_NO_BOX(::GlobalNamespace::AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit*, "", "AppInit");
NEED_NO_BOX(::GlobalNamespace::__AppInit____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit____c*, "", "AppInit/<>c");
NEED_NO_BOX(::GlobalNamespace::__AppInit____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit____c__DisplayClass21_0*, "", "AppInit/<>c__DisplayClass21_0");
NEED_NO_BOX(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*, "", "AppInit/<>c__DisplayClass21_0/<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___Awake_d__10, "", "AppInit/<Awake>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___InitializeAsync_d__13, "", "AppInit/<InitializeAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___StartGameAsync_d__11, "", "AppInit/<StartGameAsync>d__11");
