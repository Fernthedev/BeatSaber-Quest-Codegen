#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskExtensions)
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
template<typename T>
class __TaskExtensions____c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
template<typename T>
struct __TaskExtensions___WaitForTask_d__1_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __TaskExtensions____c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
class TaskExtensions;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __TaskExtensions____c__DisplayClass0_0_1<T>;
}
namespace GlobalNamespace {
template<>
class __TaskExtensions____c__DisplayClass0_0_1<bool>;
}
namespace GlobalNamespace {
template<typename T>
struct __TaskExtensions___WaitForTask_d__1_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __TaskExtensions___WaitForTask_d__1_1<T>;
}
namespace GlobalNamespace {
template<>
struct __TaskExtensions___WaitForTask_d__1_1<bool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1);
MARK_REF_PTR_T(::GlobalNamespace::TaskExtensions);
MARK_GEN_VAL_T(::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1);
// Type: ::<>c__DisplayClass0_0`1
// Type: ::<WaitForTask>d__1`1
// Type: ::TaskExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12991))
// CS Name: ::TaskExtensions*
class CORDL_TYPE TaskExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using _WaitForTask_d__1_1 = ::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>;

template<typename T>
using __c__DisplayClass0_0_1 = ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method WithCancellation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* WithCancellation(::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitForTask addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void WaitForTask(::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtensions(TaskExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtensions(TaskExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TaskExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass0_0`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12989))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12989), inst: 105 })
// CS Name: ::TaskExtensions::<>c__DisplayClass0_0`1<T>*
class CORDL_TYPE __TaskExtensions____c__DisplayClass0_0_1<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field tcs offset 0x10
 __declspec(property(get=__get_tcs, put=__set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

/// @brief Field cancellationToken offset 0x18
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get_tcs() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

static inline ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <WithCancellation>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _WithCancellation_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskExtensions____c__DisplayClass0_0_1(__TaskExtensions____c__DisplayClass0_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass0_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskExtensions____c__DisplayClass0_0_1(__TaskExtensions____c__DisplayClass0_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskExtensions____c__DisplayClass0_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass0_0`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12989)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12989), inst: 2 })
// CS Name: ::TaskExtensions::<>c__DisplayClass0_0`1<T>*
class CORDL_TYPE __TaskExtensions____c__DisplayClass0_0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field tcs offset 0x10
 __declspec(property(get=__get_tcs, put=__set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs;

/// @brief Field cancellationToken offset 0x18
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* __get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> __get_tcs() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

static inline ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <WithCancellation>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _WithCancellation_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskExtensions____c__DisplayClass0_0_1(__TaskExtensions____c__DisplayClass0_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskExtensions____c__DisplayClass0_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskExtensions____c__DisplayClass0_0_1(__TaskExtensions____c__DisplayClass0_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskExtensions____c__DisplayClass0_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<WaitForTask>d__1`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12990))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12990), inst: 105 })
// CS Name: ::TaskExtensions::<WaitForTask>d__1`1<T>
struct CORDL_TYPE __TaskExtensions___WaitForTask_d__1_1<bool> : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field tcs offset 0x28
 __declspec(property(get=__get_tcs, put=__set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

/// @brief Field task offset 0x30
 __declspec(property(get=__get_task, put=__set_task)) ::System::Threading::Tasks::Task_1<bool>*  task;

/// @brief Field <>7__wrap1 offset 0x38
 __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  __7__wrap1;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get_tcs() const;

constexpr void __set_task(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<bool>* __get_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> __get_task() const;

constexpr void __set___7__wrap1(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get___7__wrap1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get___7__wrap1() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Threading::Tasks::TaskCompletionSource_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __TaskExtensions___WaitForTask_d__1_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs, ::System::Threading::Tasks::Task_1<bool>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TaskExtensions___WaitForTask_d__1_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TaskExtensions___WaitForTask_d__1_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<WaitForTask>d__1`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12990))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12990), inst: 2 })
// CS Name: ::TaskExtensions::<WaitForTask>d__1`1<T>
struct CORDL_TYPE __TaskExtensions___WaitForTask_d__1_1<T> : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field tcs offset 0x28
 __declspec(property(get=__get_tcs, put=__set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs;

/// @brief Field task offset 0x30
 __declspec(property(get=__get_task, put=__set_task)) ::System::Threading::Tasks::Task_1<T>*  task;

/// @brief Field <>7__wrap1 offset 0x38
 __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1)) ::System::Threading::Tasks::TaskCompletionSource_1<T>*  __7__wrap1;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* __get_tcs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> __get_tcs() const;

constexpr void __set_task(::System::Threading::Tasks::Task_1<T>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<T>* __get_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<T>*> __get_task() const;

constexpr void __set___7__wrap1(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* __get___7__wrap1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> __get___7__wrap1() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<T>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
constexpr __TaskExtensions___WaitForTask_d__1_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs, ::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<T>*  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TaskExtensions___WaitForTask_d__1_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TaskExtensions___WaitForTask_d__1_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1, "", "TaskExtensions/<>c__DisplayClass0_0`1");
NEED_NO_BOX(::GlobalNamespace::TaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TaskExtensions*, "", "TaskExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1, "", "TaskExtensions/<WaitForTask>d__1`1");
