#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncCachedLoader_2)
namespace GlobalNamespace {
template<typename K,typename V>
class HMCache_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __AsyncCachedLoader_2___LoadAsync_d__7;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __AsyncCachedLoader_2__ScheduledTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __AsyncCachedLoader_2___LoadAllAsync_d__8;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
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
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class AsyncCachedLoader_2;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class AsyncCachedLoader_2<TKey,TValue>;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __AsyncCachedLoader_2__ScheduledTask;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __AsyncCachedLoader_2___LoadAllAsync_d__8;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __AsyncCachedLoader_2___LoadAsync_d__7;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
struct __AsyncCachedLoader_2__ScheduledTask<TKey,TValue>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
struct __AsyncCachedLoader_2___LoadAllAsync_d__8<TKey,TValue>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
struct __AsyncCachedLoader_2___LoadAsync_d__7<TKey,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AsyncCachedLoader_2);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8);
MARK_GEN_VAL_T(::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7);
// Type: ::ScheduledTask
// Type: ::<LoadAsync>d__7
// Type: ::<LoadAllAsync>d__8
// Type: ::AsyncCachedLoader`2
// Type: ::ScheduledTask
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5906))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5906), inst: 81 })
// CS Name: ::AsyncCachedLoader`2::ScheduledTask<TKey,TValue>
struct CORDL_TYPE __AsyncCachedLoader_2__ScheduledTask<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field keyId offset 0x0
 __declspec(property(get=__get_keyId, put=__set_keyId)) TKey  keyId;

/// @brief Field taskCompletionSource offset 0x8
 __declspec(property(get=__get_taskCompletionSource, put=__set_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<TValue>*  taskCompletionSource;

/// @brief Field cancellationToken offset 0x10
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

constexpr void __set_keyId(TKey  value) ;

constexpr TKey& __get_keyId() ;

constexpr TKey const& __get_keyId() const;

constexpr void __set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<TValue>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TValue>* __get_taskCompletionSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<TValue>*> __get_taskCompletionSource() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TKey  keyId, ::System::Threading::Tasks::TaskCompletionSource_1<TValue>*  taskCompletionSource, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "taskCompletionSource", ty: "::System::Threading::Tasks::TaskCompletionSource_1<TValue>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr __AsyncCachedLoader_2__ScheduledTask(TKey  keyId, ::System::Threading::Tasks::TaskCompletionSource_1<TValue>*  taskCompletionSource, ::System::Threading::CancellationToken  cancellationToken) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AsyncCachedLoader_2__ScheduledTask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AsyncCachedLoader_2__ScheduledTask()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadAsync>d__7
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5907))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5907), inst: 81 })
// CS Name: ::AsyncCachedLoader`2::<LoadAsync>d__7<TKey,TValue>
struct CORDL_TYPE __AsyncCachedLoader_2___LoadAsync_d__7<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>  __t__builder;

/// @brief Field keyId offset 0x20
 __declspec(property(get=__get_keyId, put=__set_keyId)) TKey  keyId;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this offset 0x30
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*  __4__this;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> const& __get___t__builder() const;

constexpr void __set_keyId(TKey  value) ;

constexpr TKey& __get_keyId() ;

constexpr TKey const& __get_keyId() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___4__this(::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*  value) ;

constexpr ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: None }]
constexpr __AsyncCachedLoader_2___LoadAsync_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>  __t__builder, TKey  keyId, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AsyncCachedLoader_2___LoadAsync_d__7(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AsyncCachedLoader_2___LoadAsync_d__7()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadAllAsync>d__8
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5908))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5908), inst: 81 })
// CS Name: ::AsyncCachedLoader`2::<LoadAllAsync>d__8<TKey,TValue>
struct CORDL_TYPE __AsyncCachedLoader_2___LoadAllAsync_d__8<TKey,TValue> : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*  __4__this;

/// @brief Field <scheduledTask>5__2 offset 0x30
 __declspec(property(get=__get__scheduledTask_5__2, put=__set__scheduledTask_5__2)) ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>  _scheduledTask_5__2;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*  value) ;

constexpr ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*> __get___4__this() const;

constexpr void __set__scheduledTask_5__2(::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>  value) ;

constexpr ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>& __get__scheduledTask_5__2() ;

constexpr ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> const& __get__scheduledTask_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "_scheduledTask_5__2", ty: "::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: None }]
constexpr __AsyncCachedLoader_2___LoadAllAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*  __4__this, ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>  _scheduledTask_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AsyncCachedLoader_2___LoadAllAsync_d__8(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AsyncCachedLoader_2___LoadAllAsync_d__8()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AsyncCachedLoader`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5909)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5909), inst: 81 })
// CS Name: ::AsyncCachedLoader`2<TKey,TValue>*
class CORDL_TYPE AsyncCachedLoader_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
using _LoadAllAsync_d__8 = ::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>;

using _LoadAsync_d__7 = ::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>;

using ScheduledTask = ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _scheduledTaskList offset 0x10
 __declspec(property(get=__get__scheduledTaskList, put=__set__scheduledTaskList)) ::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>>*  _scheduledTaskList;

/// @brief Field _cache offset 0x18
 __declspec(property(get=__get__cache, put=__set__cache)) ::GlobalNamespace::HMCache_2<TKey,TValue>*  _cache;

/// @brief Field _resultValueFunc offset 0x20
 __declspec(property(get=__get__resultValueFunc, put=__set__resultValueFunc)) ::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>*>*  _resultValueFunc;

/// @brief Field _isLoading offset 0x28
 __declspec(property(get=__get__isLoading, put=__set__isLoading)) bool  _isLoading;

constexpr void __set__scheduledTaskList(::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>>* __get__scheduledTaskList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>>*> __get__scheduledTaskList() const;

constexpr void __set__cache(::GlobalNamespace::HMCache_2<TKey,TValue>*  value) ;

constexpr ::GlobalNamespace::HMCache_2<TKey,TValue>* __get__cache() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMCache_2<TKey,TValue>*> __get__cache() const;

constexpr void __set__resultValueFunc(::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>*>*  value) ;

constexpr ::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>*>* __get__resultValueFunc() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>*>*> __get__resultValueFunc() const;

constexpr void __set__isLoading(bool  value) ;

constexpr bool& __get__isLoading() ;

constexpr bool const& __get__isLoading() const;

/// @brief Method ClearCache addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearCache() ;

static inline ::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>* New_ctor(int32_t  maxNumberCachedElements, ::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>*>*  resultValueFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxNumberCachedElements, ::System::Func_3<TKey,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<TValue>*>*  resultValueFunc) ;

/// @brief Method LoadAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TValue>* LoadAsync(TKey  keyId, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method LoadAllAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LoadAllAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCachedLoader_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCachedLoader_2(AsyncCachedLoader_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCachedLoader_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCachedLoader_2(AsyncCachedLoader_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncCachedLoader_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AsyncCachedLoader_2, "", "AsyncCachedLoader`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask, "", "AsyncCachedLoader`2/ScheduledTask");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8, "", "AsyncCachedLoader`2/<LoadAllAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7, "", "AsyncCachedLoader`2/<LoadAsync>d__7");
