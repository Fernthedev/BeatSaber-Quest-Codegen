#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Stream)
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
class __Stream__SynchronousAsyncResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IAsyncDisposable;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace System::IO {
struct __Stream__ReadWriteParameters;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class __Stream__NullStream;
}
namespace System {
class Object;
}
namespace System::IO {
class __Stream__ReadWriteTask;
}
namespace System::IO {
class __Stream____c;
}
namespace System::IO {
struct __Stream____ReadAsync_g__FinishReadAsync_44_0_d;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::IO {
struct __Stream___CopyToAsyncInternal_d__28;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
struct __Stream___FinishWriteAsync_d__57;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class ContextCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System {
class Exception;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading {
class WaitHandle;
}
namespace GlobalNamespace {
class __Stream__SynchronousAsyncResult____c;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class Func_5;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncValueTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class __Stream__SynchronousAsyncResult____c;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class __Stream__ReadWriteTask;
}
namespace System::IO {
class __Stream__SynchronousAsyncResult;
}
namespace System::IO {
class __Stream____c;
}
namespace System::IO {
struct __Stream__ReadWriteParameters;
}
namespace System::IO {
struct __Stream___CopyToAsyncInternal_d__28;
}
namespace System::IO {
struct __Stream___FinishWriteAsync_d__57;
}
namespace System::IO {
struct __Stream____ReadAsync_g__FinishReadAsync_44_0_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__Stream__SynchronousAsyncResult____c);
MARK_REF_PTR_T(::System::IO::Stream);
MARK_REF_PTR_T(::System::IO::__Stream__ReadWriteTask);
MARK_REF_PTR_T(::System::IO::__Stream__SynchronousAsyncResult);
MARK_REF_PTR_T(::System::IO::__Stream____c);
MARK_VAL_T(::System::IO::__Stream__ReadWriteParameters);
MARK_VAL_T(::System::IO::__Stream___CopyToAsyncInternal_d__28);
MARK_VAL_T(::System::IO::__Stream___FinishWriteAsync_d__57);
MARK_VAL_T(::System::IO::__Stream____ReadAsync_g__FinishReadAsync_44_0_d);
// Type: ::ReadWriteParameters
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3610))
// CS Name: ::Stream::ReadWriteParameters
struct CORDL_TYPE __Stream__ReadWriteParameters : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Buffer offset 0x0
 __declspec(property(get=__get_Buffer, put=__set_Buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Buffer;

/// @brief Field Offset offset 0x8
 __declspec(property(get=__get_Offset, put=__set_Offset)) int32_t  Offset;

/// @brief Field Count offset 0xc
 __declspec(property(get=__get_Count, put=__set_Count)) int32_t  Count;

constexpr void __set_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Buffer() const;

constexpr void __set_Offset(int32_t  value) ;

constexpr int32_t& __get_Offset() ;

constexpr int32_t const& __get_Offset() const;

constexpr void __set_Count(int32_t  value) ;

constexpr int32_t& __get_Count() ;

constexpr int32_t const& __get_Count() const;

// Ctor Parameters [CppParam { name: "Buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Stream__ReadWriteParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  Buffer, int32_t  Offset, int32_t  Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stream__ReadWriteParameters(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stream__ReadWriteParameters()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Stream__ReadWriteParameters, 0x10>, "Size mismatch!");

} // namespace end def System::IO
// Type: ::ReadWriteTask
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 98 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3611))
// CS Name: ::Stream::ReadWriteTask*
class CORDL_TYPE __Stream__ReadWriteTask : public ::System::Threading::Tasks::Task_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::Threading::Tasks::Task_1<int32_t>)]{};

/// @brief Field _isRead offset 0x54
 __declspec(property(get=__get__isRead, put=__set__isRead)) bool  _isRead;

/// @brief Field _apm offset 0x55
 __declspec(property(get=__get__apm, put=__set__apm)) bool  _apm;

/// @brief Field _stream offset 0x58
 __declspec(property(get=__get__stream, put=__set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _buffer offset 0x60
 __declspec(property(get=__get__buffer, put=__set__buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer;

/// @brief Field _offset offset 0x68
 __declspec(property(get=__get__offset, put=__set__offset)) int32_t  _offset;

/// @brief Field _count offset 0x6c
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _callback offset 0x70
 __declspec(property(get=__get__callback, put=__set__callback)) ::System::AsyncCallback*  _callback;

/// @brief Field _context offset 0x78
 __declspec(property(get=__get__context, put=__set__context)) ::System::Threading::ExecutionContext*  _context;

 __declspec(property(get=System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode)) bool  System_Threading_Tasks_ITaskCompletionAction_InvokeMayRunArbitraryCode;

/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

constexpr void __set__isRead(bool  value) ;

constexpr bool& __get__isRead() ;

constexpr bool const& __get__isRead() const;

constexpr void __set__apm(bool  value) ;

constexpr bool& __get__apm() ;

constexpr bool const& __get__apm() const;

constexpr void __set__stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__stream() const;

constexpr void __set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__buffer() const;

constexpr void __set__offset(int32_t  value) ;

constexpr int32_t& __get__offset() ;

constexpr int32_t const& __get__offset() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__callback(::System::AsyncCallback*  value) ;

constexpr ::System::AsyncCallback* __get__callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> __get__callback() const;

constexpr void __set__context(::System::Threading::ExecutionContext*  value) ;

constexpr ::System::Threading::ExecutionContext* __get__context() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> __get__context() const;

static inline void setStaticF_s_invokeAsyncCallback(::System::Threading::ContextCallback*  value) ;

static inline ::System::Threading::ContextCallback* getStaticF_s_invokeAsyncCallback() ;

/// @brief Method ClearBeginState addr 0x2536948 size 0x8 virtual false final false
inline void ClearBeginState() ;

static inline ::System::IO::__Stream__ReadWriteTask* New_ctor(bool  isRead, bool  apm, ::System::Func_2<::System::Object*,int32_t>*  function, ::System::Object*  state, ::System::IO::Stream*  stream, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback) ;

/// @brief Method .ctor addr 0x25346b0 size 0x144 virtual false final false
inline void _ctor(bool  isRead, bool  apm, ::System::Func_2<::System::Object*,int32_t>*  function, ::System::Object*  state, ::System::IO::Stream*  stream, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback) ;

/// @brief Method InvokeAsyncCallback addr 0x2536950 size 0x7c virtual false final false
static inline void InvokeAsyncCallback(::System::Object*  completedTask) ;

/// @brief Method System.Threading.Tasks.ITaskCompletionAction.Invoke addr 0x25369cc size 0x120 virtual true final true
inline void System_Threading_Tasks_ITaskCompletionAction_Invoke(::System::Threading::Tasks::Task*  completingTask) ;

/// @brief Method System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode addr 0x2536aec size 0x8 virtual true final true
inline bool System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode() ;

// Ctor Parameters [CppParam { name: "", ty: "__Stream__ReadWriteTask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Stream__ReadWriteTask(__Stream__ReadWriteTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Stream__ReadWriteTask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Stream__ReadWriteTask(__Stream__ReadWriteTask const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Stream__ReadWriteTask()  = default;
public:


// Fields

// Static field s_invokeAsyncCallback


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Stream__ReadWriteTask, 0x80>, "Size mismatch!");

} // namespace end def System::IO
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3613))
// CS Name: ::Stream::SynchronousAsyncResult::<>c*
class CORDL_TYPE __Stream__SynchronousAsyncResult____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__Stream__SynchronousAsyncResult____c*  value) ;

static inline ::GlobalNamespace::__Stream__SynchronousAsyncResult____c* getStaticF___9() ;

static inline void setStaticF___9__12_0(::System::Func_1<::System::Threading::ManualResetEvent*>*  value) ;

static inline ::System::Func_1<::System::Threading::ManualResetEvent*>* getStaticF___9__12_0() ;

static inline ::GlobalNamespace::__Stream__SynchronousAsyncResult____c* New_ctor() ;

/// @brief Method .ctor addr 0x253735c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <get_AsyncWaitHandle>b__12_0 addr 0x2537364 size 0x60 virtual false final false
inline ::System::Threading::ManualResetEvent* _get_AsyncWaitHandle_b__12_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__Stream__SynchronousAsyncResult____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Stream__SynchronousAsyncResult____c(__Stream__SynchronousAsyncResult____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Stream__SynchronousAsyncResult____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Stream__SynchronousAsyncResult____c(__Stream__SynchronousAsyncResult____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Stream__SynchronousAsyncResult____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__12_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Stream__SynchronousAsyncResult____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SynchronousAsyncResult
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3614))
// CS Name: ::Stream::SynchronousAsyncResult*
class CORDL_TYPE __Stream__SynchronousAsyncResult : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__Stream__SynchronousAsyncResult____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _stateObject offset 0x10
 __declspec(property(get=__get__stateObject, put=__set__stateObject)) ::System::Object*  _stateObject;

/// @brief Field _isWrite offset 0x18
 __declspec(property(get=__get__isWrite, put=__set__isWrite)) bool  _isWrite;

/// @brief Field _waitHandle offset 0x20
 __declspec(property(get=__get__waitHandle, put=__set__waitHandle)) ::System::Threading::ManualResetEvent*  _waitHandle;

/// @brief Field _exceptionInfo offset 0x28
 __declspec(property(get=__get__exceptionInfo, put=__set__exceptionInfo)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  _exceptionInfo;

/// @brief Field _endXxxCalled offset 0x30
 __declspec(property(get=__get__endXxxCalled, put=__set__endXxxCalled)) bool  _endXxxCalled;

/// @brief Field _bytesRead offset 0x34
 __declspec(property(get=__get__bytesRead, put=__set__bytesRead)) int32_t  _bytesRead;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_AsyncWaitHandle)) ::System::Threading::WaitHandle*  AsyncWaitHandle;

 __declspec(property(get=get_AsyncState)) ::System::Object*  AsyncState;

 __declspec(property(get=get_CompletedSynchronously)) bool  CompletedSynchronously;

/// @brief Convert operator to "::System::IAsyncResult"
constexpr operator  ::System::IAsyncResult*() noexcept;

constexpr void __set__stateObject(::System::Object*  value) ;

constexpr ::System::Object* __get__stateObject() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__stateObject() const;

constexpr void __set__isWrite(bool  value) ;

constexpr bool& __get__isWrite() ;

constexpr bool const& __get__isWrite() const;

constexpr void __set__waitHandle(::System::Threading::ManualResetEvent*  value) ;

constexpr ::System::Threading::ManualResetEvent* __get__waitHandle() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> __get__waitHandle() const;

constexpr void __set__exceptionInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* __get__exceptionInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> __get__exceptionInfo() const;

constexpr void __set__endXxxCalled(bool  value) ;

constexpr bool& __get__endXxxCalled() ;

constexpr bool const& __get__endXxxCalled() const;

constexpr void __set__bytesRead(int32_t  value) ;

constexpr int32_t& __get__bytesRead() ;

constexpr int32_t const& __get__bytesRead() const;

static inline ::System::IO::__Stream__SynchronousAsyncResult* New_ctor(int32_t  bytesRead, ::System::Object*  asyncStateObject) ;

/// @brief Method .ctor addr 0x253638c size 0x30 virtual false final false
inline void _ctor(int32_t  bytesRead, ::System::Object*  asyncStateObject) ;

static inline ::System::IO::__Stream__SynchronousAsyncResult* New_ctor(::System::Object*  asyncStateObject) ;

/// @brief Method .ctor addr 0x2536674 size 0x30 virtual false final false
inline void _ctor(::System::Object*  asyncStateObject) ;

static inline ::System::IO::__Stream__SynchronousAsyncResult* New_ctor(::System::Exception*  ex, ::System::Object*  asyncStateObject, bool  isWrite) ;

/// @brief Method .ctor addr 0x25363bc size 0x4c virtual false final false
inline void _ctor(::System::Exception*  ex, ::System::Object*  asyncStateObject, bool  isWrite) ;

/// @brief Method get_IsCompleted addr 0x25371d4 size 0x8 virtual true final true
inline bool get_IsCompleted() ;

/// @brief Method get_AsyncWaitHandle addr 0x25371dc size 0xf8 virtual true final true
inline ::System::Threading::WaitHandle* get_AsyncWaitHandle() ;

/// @brief Method get_AsyncState addr 0x25372d4 size 0x8 virtual true final true
inline ::System::Object* get_AsyncState() ;

/// @brief Method get_CompletedSynchronously addr 0x25372dc size 0x8 virtual true final true
inline bool get_CompletedSynchronously() ;

/// @brief Method ThrowIfError addr 0x25372e4 size 0x14 virtual false final false
inline void ThrowIfError() ;

/// @brief Method EndRead addr 0x253640c size 0xf0 virtual false final false
static inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndWrite addr 0x25366a8 size 0xf4 virtual false final false
static inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

// Ctor Parameters [CppParam { name: "", ty: "__Stream__SynchronousAsyncResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Stream__SynchronousAsyncResult(__Stream__SynchronousAsyncResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Stream__SynchronousAsyncResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Stream__SynchronousAsyncResult(__Stream__SynchronousAsyncResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Stream__SynchronousAsyncResult()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Stream__SynchronousAsyncResult, 0x38>, "Size mismatch!");

} // namespace end def System::IO
// Type: ::<>c
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3615))
// CS Name: ::Stream::<>c*
class CORDL_TYPE __Stream____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::IO::__Stream____c*  value) ;

static inline ::System::IO::__Stream____c* getStaticF___9() ;

static inline void setStaticF___9__4_0(::System::Func_1<::System::Threading::SemaphoreSlim*>*  value) ;

static inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* getStaticF___9__4_0() ;

static inline void setStaticF___9__37_0(::System::Action_1<::System::Object*>*  value) ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__37_0() ;

static inline void setStaticF___9__40_0(::System::Func_2<::System::Object*,int32_t>*  value) ;

static inline ::System::Func_2<::System::Object*,int32_t>* getStaticF___9__40_0() ;

static inline void setStaticF___9__45_0(::System::Func_5<::System::IO::Stream*,::System::IO::__Stream__ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  value) ;

static inline ::System::Func_5<::System::IO::Stream*,::System::IO::__Stream__ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>* getStaticF___9__45_0() ;

static inline void setStaticF___9__45_1(::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,int32_t>*  value) ;

static inline ::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,int32_t>* getStaticF___9__45_1() ;

static inline void setStaticF___9__48_0(::System::Func_2<::System::Object*,int32_t>*  value) ;

static inline ::System::Func_2<::System::Object*,int32_t>* getStaticF___9__48_0() ;

static inline void setStaticF___9__49_0(::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*  value) ;

static inline ::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>* getStaticF___9__49_0() ;

static inline void setStaticF___9__58_0(::System::Func_5<::System::IO::Stream*,::System::IO::__Stream__ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  value) ;

static inline ::System::Func_5<::System::IO::Stream*,::System::IO::__Stream__ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>* getStaticF___9__58_0() ;

static inline void setStaticF___9__58_1(::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  value) ;

static inline ::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>* getStaticF___9__58_1() ;

static inline ::System::IO::__Stream____c* New_ctor() ;

/// @brief Method .ctor addr 0x2537428 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <EnsureAsyncActiveSemaphoreInitialized>b__4_0 addr 0x2537430 size 0x64 virtual false final false
inline ::System::Threading::SemaphoreSlim* _EnsureAsyncActiveSemaphoreInitialized_b__4_0() ;

/// @brief Method <FlushAsync>b__37_0 addr 0x2537494 size 0xb0 virtual false final false
inline void _FlushAsync_b__37_0(::System::Object*  state) ;

/// @brief Method <BeginReadInternal>b__40_0 addr 0x2537544 size 0x190 virtual false final false
inline int32_t _BeginReadInternal_b__40_0(::System::Object*  _p0_) ;

/// @brief Method <BeginEndReadAsync>b__45_0 addr 0x25376d4 size 0x34 virtual false final false
inline ::System::IAsyncResult* _BeginEndReadAsync_b__45_0(::System::IO::Stream*  stream, ::System::IO::__Stream__ReadWriteParameters  args, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method <BeginEndReadAsync>b__45_1 addr 0x2537708 size 0x2c virtual false final false
inline int32_t _BeginEndReadAsync_b__45_1(::System::IO::Stream*  stream, ::System::IAsyncResult*  asyncResult) ;

/// @brief Method <BeginWriteInternal>b__48_0 addr 0x2537734 size 0x180 virtual false final false
inline int32_t _BeginWriteInternal_b__48_0(::System::Object*  _p0_) ;

/// @brief Method <RunReadWriteTaskWhenReady>b__49_0 addr 0x25378b4 size 0x6c virtual false final false
inline void _RunReadWriteTaskWhenReady_b__49_0(::System::Threading::Tasks::Task*  t, ::System::Object*  state) ;

/// @brief Method <BeginEndWriteAsync>b__58_0 addr 0x2537920 size 0x34 virtual false final false
inline ::System::IAsyncResult* _BeginEndWriteAsync_b__58_0(::System::IO::Stream*  stream, ::System::IO::__Stream__ReadWriteParameters  args, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method <BeginEndWriteAsync>b__58_1 addr 0x2537954 size 0x34 virtual false final false
inline ::System::Threading::Tasks::VoidTaskResult _BeginEndWriteAsync_b__58_1(::System::IO::Stream*  stream, ::System::IAsyncResult*  asyncResult) ;

// Ctor Parameters [CppParam { name: "", ty: "__Stream____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Stream____c(__Stream____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Stream____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Stream____c(__Stream____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Stream____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__4_0

// Static field <>9__37_0

// Static field <>9__40_0

// Static field <>9__45_0

// Static field <>9__45_1

// Static field <>9__48_0

// Static field <>9__49_0

// Static field <>9__58_0

// Static field <>9__58_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Stream____c, 0x10>, "Size mismatch!");

} // namespace end def System::IO
// Type: ::<CopyToAsyncInternal>d__28
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3616))
// CS Name: ::Stream::<CopyToAsyncInternal>d__28
struct CORDL_TYPE __Stream___CopyToAsyncInternal_d__28 : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field bufferSize offset 0x20
 __declspec(property(get=__get_bufferSize, put=__set_bufferSize)) int32_t  bufferSize;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::IO::Stream*  __4__this;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field destination offset 0x38
 __declspec(property(get=__get_destination, put=__set_destination)) ::System::IO::Stream*  destination;

/// @brief Field <buffer>5__2 offset 0x40
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer_5__2;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  __u__1;

/// @brief Field <>u__2 offset 0x58
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set_bufferSize(int32_t  value) ;

constexpr int32_t& __get_bufferSize() ;

constexpr int32_t const& __get_bufferSize() const;

constexpr void __set___4__this(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_destination(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_destination() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_destination() const;

constexpr void __set__buffer_5__2(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__buffer_5__2() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__buffer_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x2537988 size 0x6dc virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2538064 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr __Stream___CopyToAsyncInternal_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, int32_t  bufferSize, ::System::IO::Stream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::IO::Stream*  destination, ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer_5__2, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stream___CopyToAsyncInternal_d__28(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stream___CopyToAsyncInternal_d__28()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Stream___CopyToAsyncInternal_d__28, 0x68>, "Size mismatch!");

} // namespace end def System::IO
// Type: ::<FinishWriteAsync>d__57
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3617))
// CS Name: ::Stream::<FinishWriteAsync>d__57
struct CORDL_TYPE __Stream___FinishWriteAsync_d__57 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field writeTask offset 0x20
 __declspec(property(get=__get_writeTask, put=__set_writeTask)) ::System::Threading::Tasks::Task*  writeTask;

/// @brief Field localBuffer offset 0x28
 __declspec(property(get=__get_localBuffer, put=__set_localBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set_writeTask(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_writeTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_writeTask() const;

constexpr void __set_localBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_localBuffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_localBuffer() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2538070 size 0x20c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x253827c size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "writeTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __Stream___FinishWriteAsync_d__57(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  writeTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stream___FinishWriteAsync_d__57(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stream___FinishWriteAsync_d__57()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Stream___FinishWriteAsync_d__57, 0x40>, "Size mismatch!");

} // namespace end def System::IO
// Type: ::<<ReadAsync>g__FinishReadAsync|44_0>d
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3618))
// CS Name: ::Stream::<<ReadAsync>g__FinishReadAsync|44_0>d
struct CORDL_TYPE __Stream____ReadAsync_g__FinishReadAsync_44_0_d : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field readTask offset 0x28
 __declspec(property(get=__get_readTask, put=__set_readTask)) ::System::Threading::Tasks::Task_1<int32_t>*  readTask;

/// @brief Field localBuffer offset 0x30
 __declspec(property(get=__get_localBuffer, put=__set_localBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer;

/// @brief Field localDestination offset 0x38
 __declspec(property(get=__get_localDestination, put=__set_localDestination)) ::System::Memory_1<uint8_t>  localDestination;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> const& __get___t__builder() const;

constexpr void __set_readTask(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* __get_readTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> __get_readTask() const;

constexpr void __set_localBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_localBuffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_localBuffer() const;

constexpr void __set_localDestination(::System::Memory_1<uint8_t>  value) ;

constexpr ::System::Memory_1<uint8_t>& __get_localDestination() ;

constexpr ::System::Memory_1<uint8_t> const& __get_localDestination() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2538288 size 0x394 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x253861c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "readTask", ty: "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "localDestination", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr __Stream____ReadAsync_g__FinishReadAsync_44_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer, ::System::Memory_1<uint8_t>  localDestination, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stream____ReadAsync_g__FinishReadAsync_44_0_d(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stream____ReadAsync_g__FinishReadAsync_44_0_d()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Stream____ReadAsync_g__FinishReadAsync_44_0_d, 0x58>, "Size mismatch!");

} // namespace end def System::IO
// Type: System.IO::Stream
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3619))
// CS Name: ::System.IO::Stream*
class CORDL_TYPE Stream : public ::System::MarshalByRefObject {
public:
// Declarations
using __ReadAsync_g__FinishReadAsync_44_0_d = ::System::IO::__Stream____ReadAsync_g__FinishReadAsync_44_0_d;

using _FinishWriteAsync_d__57 = ::System::IO::__Stream___FinishWriteAsync_d__57;

using _CopyToAsyncInternal_d__28 = ::System::IO::__Stream___CopyToAsyncInternal_d__28;

using __c = ::System::IO::__Stream____c;

using SynchronousAsyncResult = ::System::IO::__Stream__SynchronousAsyncResult;

using NullStream = ::System::IO::__Stream__NullStream;

using ReadWriteTask = ::System::IO::__Stream__ReadWriteTask;

using ReadWriteParameters = ::System::IO::__Stream__ReadWriteParameters;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::MarshalByRefObject)]{};

/// @brief Field DefaultCopyBufferSize offset 0x0
static constexpr int32_t  DefaultCopyBufferSize{static_cast<int32_t>(0x14000)};

/// @brief Field _activeReadWriteTask offset 0x18
 __declspec(property(get=__get__activeReadWriteTask, put=__set__activeReadWriteTask)) ::System::IO::__Stream__ReadWriteTask*  _activeReadWriteTask;

/// @brief Field _asyncActiveSemaphore offset 0x20
 __declspec(property(get=__get__asyncActiveSemaphore, put=__set__asyncActiveSemaphore)) ::System::Threading::SemaphoreSlim*  _asyncActiveSemaphore;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanTimeout)) bool  CanTimeout;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) int32_t  ReadTimeout;

 __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) int32_t  WriteTimeout;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr operator  ::System::IAsyncDisposable*() noexcept;

static inline void setStaticF_Null(::System::IO::Stream*  value) ;

static inline ::System::IO::Stream* getStaticF_Null() ;

constexpr void __set__activeReadWriteTask(::System::IO::__Stream__ReadWriteTask*  value) ;

constexpr ::System::IO::__Stream__ReadWriteTask* __get__activeReadWriteTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::__Stream__ReadWriteTask*> __get__activeReadWriteTask() const;

constexpr void __set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim*  value) ;

constexpr ::System::Threading::SemaphoreSlim* __get__asyncActiveSemaphore() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> __get__asyncActiveSemaphore() const;

/// @brief Method EnsureAsyncActiveSemaphoreInitialized addr 0x2533b78 size 0xf8 virtual false final false
inline ::System::Threading::SemaphoreSlim* EnsureAsyncActiveSemaphoreInitialized() ;

/// @brief Method get_CanRead addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_CanSeek() ;

/// @brief Method get_CanTimeout addr 0x2533c70 size 0x8 virtual true final false
inline bool get_CanTimeout() ;

/// @brief Method get_CanWrite addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_CanWrite() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_Length() ;

/// @brief Method get_Position addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_Position() ;

/// @brief Method set_Position addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_Position(int64_t  value) ;

/// @brief Method get_ReadTimeout addr 0x2533c78 size 0x50 virtual true final false
inline int32_t get_ReadTimeout() ;

/// @brief Method set_ReadTimeout addr 0x2533cc8 size 0x50 virtual true final false
inline void set_ReadTimeout(int32_t  value) ;

/// @brief Method get_WriteTimeout addr 0x2533d18 size 0x50 virtual true final false
inline int32_t get_WriteTimeout() ;

/// @brief Method set_WriteTimeout addr 0x2533d68 size 0x50 virtual true final false
inline void set_WriteTimeout(int32_t  value) ;

/// @brief Method CopyToAsync addr 0x2533db8 size 0x2c virtual false final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  destination) ;

/// @brief Method CopyToAsync addr 0x2533eac size 0x84 virtual false final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  destination, int32_t  bufferSize) ;

/// @brief Method CopyToAsync addr 0x2533f30 size 0x44 virtual true final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  destination, int32_t  bufferSize, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CopyToAsyncInternal addr 0x2533f74 size 0xf8 virtual false final false
inline ::System::Threading::Tasks::Task* CopyToAsyncInternal(::System::IO::Stream*  destination, int32_t  bufferSize, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CopyTo addr 0x253406c size 0x38 virtual false final false
inline void CopyTo(::System::IO::Stream*  destination) ;

/// @brief Method CopyTo addr 0x25340a4 size 0x1c0 virtual true final false
inline void CopyTo(::System::IO::Stream*  destination, int32_t  bufferSize) ;

/// @brief Method GetCopyBufferSize addr 0x2533de4 size 0xc8 virtual false final false
inline int32_t GetCopyBufferSize() ;

/// @brief Method Close addr 0x2534264 size 0x70 virtual true final false
inline void Close() ;

/// @brief Method Dispose addr 0x25342d4 size 0x10 virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x25342e4 size 0x4 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Flush() ;

/// @brief Method FlushAsync addr 0x2531190 size 0x6c virtual false final false
inline ::System::Threading::Tasks::Task* FlushAsync() ;

/// @brief Method FlushAsync addr 0x25342e8 size 0x1c4 virtual true final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method BeginRead addr 0x25344ac size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginReadInternal addr 0x25344cc size 0x1e4 virtual false final false
inline ::System::IAsyncResult* BeginReadInternal(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state, bool  serializeAsynchronously, bool  apm) ;

/// @brief Method EndRead addr 0x2534a2c size 0x1cc virtual true final false
inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method ReadAsync addr 0x2534bf8 size 0x94 virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadAsync addr 0x2534c8c size 0xbc virtual true final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsync addr 0x2534f00 size 0x260 virtual true final false
inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method BeginEndReadAsync addr 0x2534d48 size 0x1b8 virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* BeginEndReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method BeginWrite addr 0x2535268 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginWriteInternal addr 0x2535288 size 0x1e4 virtual false final false
inline ::System::IAsyncResult* BeginWriteInternal(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state, bool  serializeAsynchronously, bool  apm) ;

/// @brief Method RunReadWriteTaskWhenReady addr 0x25347f4 size 0x184 virtual false final false
inline void RunReadWriteTaskWhenReady(::System::Threading::Tasks::Task*  asyncWaiter, ::System::IO::__Stream__ReadWriteTask*  readWriteTask) ;

/// @brief Method RunReadWriteTask addr 0x2534978 size 0xb4 virtual false final false
inline void RunReadWriteTask(::System::IO::__Stream__ReadWriteTask*  readWriteTask) ;

/// @brief Method FinishTrackingAsyncOperation addr 0x253546c size 0x24 virtual false final false
inline void FinishTrackingAsyncOperation() ;

/// @brief Method EndWrite addr 0x2535490 size 0x1bc virtual true final false
inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method WriteAsync addr 0x253564c size 0x94 virtual false final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteAsync addr 0x25356e0 size 0xa8 virtual true final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteAsync addr 0x2535940 size 0x278 virtual true final false
inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FinishWriteAsync addr 0x2535bb8 size 0xd8 virtual false final false
inline ::System::Threading::Tasks::Task* FinishWriteAsync(::System::Threading::Tasks::Task*  writeTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer) ;

/// @brief Method BeginEndWriteAsync addr 0x2535788 size 0x1b8 virtual false final false
inline ::System::Threading::Tasks::Task* BeginEndWriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetLength(int64_t  value) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Read addr 0x2535c98 size 0x288 virtual true final false
inline int32_t Read(::System::Span_1<uint8_t>  buffer) ;

/// @brief Method ReadByte addr 0x2535f20 size 0x94 virtual true final false
inline int32_t ReadByte() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Write addr 0x2535fb4 size 0x1c8 virtual true final false
inline void Write(::System::ReadOnlySpan_1<uint8_t>  buffer) ;

/// @brief Method WriteByte addr 0x253617c size 0x8c virtual true final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method BlockingBeginRead addr 0x2536208 size 0x184 virtual false final false
inline ::System::IAsyncResult* BlockingBeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BlockingEndRead addr 0x2536408 size 0x4 virtual false final false
static inline int32_t BlockingEndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method BlockingBeginWrite addr 0x25364fc size 0x178 virtual false final false
inline ::System::IAsyncResult* BlockingBeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BlockingEndWrite addr 0x25366a4 size 0x4 virtual false final false
static inline void BlockingEndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method HasOverriddenBeginEndRead addr 0x2535260 size 0x8 virtual false final false
inline bool HasOverriddenBeginEndRead() ;

/// @brief Method HasOverriddenBeginEndWrite addr 0x2535c90 size 0x8 virtual false final false
inline bool HasOverriddenBeginEndWrite() ;

/// @brief Method DisposeAsync addr 0x253679c size 0xd8 virtual true final false
inline ::System::Threading::Tasks::ValueTask DisposeAsync() ;

static inline ::System::IO::Stream* New_ctor() ;

/// @brief Method .ctor addr 0x2536874 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ReadAsync>g__FinishReadAsync|44_0 addr 0x2535160 size 0x100 virtual false final false
static inline ::System::Threading::Tasks::ValueTask_1<int32_t> _ReadAsync_g__FinishReadAsync_44_0(::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer, ::System::Memory_1<uint8_t>  localDestination) ;

// Ctor Parameters [CppParam { name: "", ty: "Stream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stream(Stream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stream(Stream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stream()  = default;
public:


// Fields

// Static field Null


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Stream, 0x28>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::GlobalNamespace::__Stream__SynchronousAsyncResult____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Stream__SynchronousAsyncResult____c*, "System.IO", "Stream/SynchronousAsyncResult/<>c");
NEED_NO_BOX(::System::IO::Stream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream*, "System.IO", "Stream");
NEED_NO_BOX(::System::IO::__Stream__ReadWriteTask);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Stream__ReadWriteTask*, "System.IO", "Stream/ReadWriteTask");
NEED_NO_BOX(::System::IO::__Stream__SynchronousAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Stream__SynchronousAsyncResult*, "System.IO", "Stream/SynchronousAsyncResult");
NEED_NO_BOX(::System::IO::__Stream____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Stream____c*, "System.IO", "Stream/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Stream__ReadWriteParameters, "System.IO", "Stream/ReadWriteParameters");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Stream___CopyToAsyncInternal_d__28, "System.IO", "Stream/<CopyToAsyncInternal>d__28");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Stream___FinishWriteAsync_d__57, "System.IO", "Stream/<FinishWriteAsync>d__57");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Stream____ReadAsync_g__FinishReadAsync_44_0_d, "System.IO", "Stream/<<ReadAsync>g__FinishReadAsync|44_0>d");
