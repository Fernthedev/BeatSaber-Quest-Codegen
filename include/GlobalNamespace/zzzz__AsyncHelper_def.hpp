#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncHelper)
namespace System {
template<typename TResult>
class Func_1;
}
namespace GlobalNamespace {
template<typename T>
class __AsyncHelper____c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
class __AsyncHelper____c__DisplayClass1_0;
}
namespace GlobalNamespace {
struct __AsyncHelper___AnyTaskTrueNonAlloc_d__2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
template<typename T>
struct __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d;
}
namespace GlobalNamespace {
struct __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __AsyncHelper____c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
class AsyncHelper;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __AsyncHelper____c__DisplayClass0_0_1<T>;
}
namespace GlobalNamespace {
class __AsyncHelper____c__DisplayClass1_0;
}
namespace GlobalNamespace {
template<typename T>
struct __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d;
}
namespace GlobalNamespace {
struct __AsyncHelper___AnyTaskTrueNonAlloc_d__2;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>;
}
namespace GlobalNamespace {
struct __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1);
MARK_REF_PTR_T(::GlobalNamespace::AsyncHelper);
MARK_REF_PTR_T(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d);
MARK_VAL_T(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2);
MARK_VAL_T(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d);
// Type: ::<<RunSync>b__0>d
// Type: ::<>c__DisplayClass0_0`1
// Type: ::<<RunSync>b__0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15816))
// CS Name: ::AsyncHelper::<>c__DisplayClass1_0::<<RunSync>b__0>d
struct CORDL_TYPE __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*  value) ;

constexpr ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe24eb4 size 0x194 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe25048 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass1_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15817))
// CS Name: ::AsyncHelper::<>c__DisplayClass1_0*
class CORDL_TYPE __AsyncHelper____c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
using __RunSync_b__0_d = ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field asyncTask offset 0x10
 __declspec(property(get=__get_asyncTask, put=__set_asyncTask)) ::System::Func_1<::System::Threading::Tasks::Task*>*  asyncTask;

constexpr void __set_asyncTask(::System::Func_1<::System::Threading::Tasks::Task*>*  value) ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task*>* __get_asyncTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task*>*> __get_asyncTask() const;

static inline ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0* New_ctor() ;

/// @brief Method .ctor addr 0xe24cec size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <RunSync>b__0 addr 0xe24dec size 0xc8 virtual false final false
inline ::System::Threading::Tasks::Task* _RunSync_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncHelper____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncHelper____c__DisplayClass1_0(__AsyncHelper____c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncHelper____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncHelper____c__DisplayClass1_0(__AsyncHelper____c__DisplayClass1_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncHelper____c__DisplayClass1_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<AnyTaskTrueNonAlloc>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15818))
// CS Name: ::AsyncHelper::<AnyTaskTrueNonAlloc>d__2
struct CORDL_TYPE __AsyncHelper___AnyTaskTrueNonAlloc_d__2 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field tasks offset 0x20
 __declspec(property(get=__get_tasks, put=__set_tasks)) ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*  tasks;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __get___t__builder() const;

constexpr void __set_tasks(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* __get_tasks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*> __get_tasks() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe25054 size 0x2a8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe252fc size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "tasks", ty: "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>", modifiers: "", def_value: None }]
constexpr __AsyncHelper___AnyTaskTrueNonAlloc_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*  tasks, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AsyncHelper___AnyTaskTrueNonAlloc_d__2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AsyncHelper___AnyTaskTrueNonAlloc_d__2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AsyncHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15819))
// CS Name: ::AsyncHelper*
class CORDL_TYPE AsyncHelper : public ::System::Object {
public:
// Declarations
using _AnyTaskTrueNonAlloc_d__2 = ::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2;

using __c__DisplayClass1_0 = ::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0;

template<typename T>
using __c__DisplayClass0_0_1 = ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method RunSync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T RunSync(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  asyncTask) ;

/// @brief Method RunSync addr 0xe24bec size 0x100 virtual false final false
static inline void RunSync(::System::Func_1<::System::Threading::Tasks::Task*>*  asyncTask) ;

/// @brief Method AnyTaskTrueNonAlloc addr 0xe24cf4 size 0xf8 virtual false final false
static inline ::System::Threading::Tasks::Task_1<bool>* AnyTaskTrueNonAlloc(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*  tasks) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncHelper(AsyncHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncHelper(AsyncHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<<RunSync>b__0>d
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15814))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15814), inst: 2 })
// CS Name: ::AsyncHelper::<>c__DisplayClass0_0`1::<<RunSync>b__0>d<T>
struct CORDL_TYPE __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*  value) ;

constexpr ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<T>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
constexpr __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass0_0`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15815)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15815), inst: 2 })
// CS Name: ::AsyncHelper::<>c__DisplayClass0_0`1<T>*
class CORDL_TYPE __AsyncHelper____c__DisplayClass0_0_1<T> : public ::System::Object {
public:
// Declarations
using __RunSync_b__0_d = ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field asyncTask offset 0x10
 __declspec(property(get=__get_asyncTask, put=__set_asyncTask)) ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  asyncTask;

/// @brief Field result offset 0x18
 __declspec(property(get=__get_result, put=__set_result)) T  result;

constexpr void __set_asyncTask(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  value) ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* __get_asyncTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*> __get_asyncTask() const;

constexpr void __set_result(T  value) ;

constexpr T& __get_result() ;

constexpr T const& __get_result() const;

static inline ::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <RunSync>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* _RunSync_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncHelper____c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncHelper____c__DisplayClass0_0_1(__AsyncHelper____c__DisplayClass0_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncHelper____c__DisplayClass0_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncHelper____c__DisplayClass0_0_1(__AsyncHelper____c__DisplayClass0_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncHelper____c__DisplayClass0_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1, "", "AsyncHelper/<>c__DisplayClass0_0`1");
NEED_NO_BOX(::GlobalNamespace::AsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncHelper*, "", "AsyncHelper");
NEED_NO_BOX(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0*, "", "AsyncHelper/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d, "", "AsyncHelper/<>c__DisplayClass0_0`1/<<RunSync>b__0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AsyncHelper___AnyTaskTrueNonAlloc_d__2, "", "AsyncHelper/<AnyTaskTrueNonAlloc>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d, "", "AsyncHelper/<>c__DisplayClass1_0/<<RunSync>b__0>d");
