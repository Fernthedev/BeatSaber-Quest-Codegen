#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebOperation)
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Net {
struct __WebOperation___GetRequestStream_d__50;
}
namespace System::Net {
template<typename T>
class WebCompletionSource_1;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
struct __WebOperation___Run_d__58;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
class Exception;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct __WebOperation___GetRequestStream_d__50;
}
namespace System::Net {
struct __WebOperation___Run_d__58;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebOperation);
MARK_VAL_T(::System::Net::__WebOperation___GetRequestStream_d__50);
MARK_VAL_T(::System::Net::__WebOperation___Run_d__58);
// Type: ::<GetRequestStream>d__50
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9225))
// CS Name: ::WebOperation::<GetRequestStream>d__50
struct CORDL_TYPE __WebOperation___GetRequestStream_d__50 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebOperation*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebOperation*  value) ;

constexpr ::System::Net::WebOperation* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebOperation*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29e2b60 size 0x21c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e2d7c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value: None }]
constexpr __WebOperation___GetRequestStream_d__50(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder, ::System::Net::WebOperation*  __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebOperation___GetRequestStream_d__50(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebOperation___GetRequestStream_d__50()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebOperation___GetRequestStream_d__50, 0x38>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<Run>d__58
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9226))
// CS Name: ::WebOperation::<Run>d__58
struct CORDL_TYPE __WebOperation___Run_d__58 : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebOperation*  __4__this;

/// @brief Field <requestStream>5__2 offset 0x30
 __declspec(property(get=__get__requestStream_5__2, put=__set__requestStream_5__2)) ::System::Net::WebRequestStream*  _requestStream_5__2;

/// @brief Field <stream>5__3 offset 0x38
 __declspec(property(get=__get__stream_5__3, put=__set__stream_5__3)) ::System::Net::WebResponseStream*  _stream_5__3;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1;

/// @brief Field <>u__2 offset 0x50
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebOperation*  value) ;

constexpr ::System::Net::WebOperation* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebOperation*> __get___4__this() const;

constexpr void __set__requestStream_5__2(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get__requestStream_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get__requestStream_5__2() const;

constexpr void __set__stream_5__3(::System::Net::WebResponseStream*  value) ;

constexpr ::System::Net::WebResponseStream* __get__stream_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> __get__stream_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29e2dd4 size 0x58c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e343c size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "_requestStream_5__2", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "_stream_5__3", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebOperation___Run_d__58(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Net::WebOperation*  __4__this, ::System::Net::WebRequestStream*  _requestStream_5__2, ::System::Net::WebResponseStream*  _stream_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebOperation___Run_d__58(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebOperation___Run_d__58()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebOperation___Run_d__58, 0x60>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::WebOperation
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9227))
// CS Name: ::System.Net::WebOperation*
class CORDL_TYPE WebOperation : public ::System::Object {
public:
// Declarations
using _Run_d__58 = ::System::Net::__WebOperation___Run_d__58;

using _GetRequestStream_d__50 = ::System::Net::__WebOperation___GetRequestStream_d__50;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Object)]{};

/// @brief Field <Request>k__BackingField offset 0x10
 __declspec(property(get=__get__Request_k__BackingField, put=__set__Request_k__BackingField)) ::System::Net::HttpWebRequest*  _Request_k__BackingField;

/// @brief Field <Connection>k__BackingField offset 0x18
 __declspec(property(get=__get__Connection_k__BackingField, put=__set__Connection_k__BackingField)) ::System::Net::WebConnection*  _Connection_k__BackingField;

/// @brief Field <ServicePoint>k__BackingField offset 0x20
 __declspec(property(get=__get__ServicePoint_k__BackingField, put=__set__ServicePoint_k__BackingField)) ::System::Net::ServicePoint*  _ServicePoint_k__BackingField;

/// @brief Field <WriteBuffer>k__BackingField offset 0x28
 __declspec(property(get=__get__WriteBuffer_k__BackingField, put=__set__WriteBuffer_k__BackingField)) ::System::Net::BufferOffsetSize*  _WriteBuffer_k__BackingField;

/// @brief Field <IsNtlmChallenge>k__BackingField offset 0x30
 __declspec(property(get=__get__IsNtlmChallenge_k__BackingField, put=__set__IsNtlmChallenge_k__BackingField)) bool  _IsNtlmChallenge_k__BackingField;

/// @brief Field cts offset 0x38
 __declspec(property(get=__get_cts, put=__set_cts)) ::System::Threading::CancellationTokenSource*  cts;

/// @brief Field requestTask offset 0x40
 __declspec(property(get=__get_requestTask, put=__set_requestTask)) ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*  requestTask;

/// @brief Field requestWrittenTask offset 0x48
 __declspec(property(get=__get_requestWrittenTask, put=__set_requestWrittenTask)) ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*  requestWrittenTask;

/// @brief Field responseTask offset 0x50
 __declspec(property(get=__get_responseTask, put=__set_responseTask)) ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>*  responseTask;

/// @brief Field finishedTask offset 0x58
 __declspec(property(get=__get_finishedTask, put=__set_finishedTask)) ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>*  finishedTask;

/// @brief Field writeStream offset 0x60
 __declspec(property(get=__get_writeStream, put=__set_writeStream)) ::System::Net::WebRequestStream*  writeStream;

/// @brief Field responseStream offset 0x68
 __declspec(property(get=__get_responseStream, put=__set_responseStream)) ::System::Net::WebResponseStream*  responseStream;

/// @brief Field disposedInfo offset 0x70
 __declspec(property(get=__get_disposedInfo, put=__set_disposedInfo)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  disposedInfo;

/// @brief Field closedInfo offset 0x78
 __declspec(property(get=__get_closedInfo, put=__set_closedInfo)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  closedInfo;

/// @brief Field priorityRequest offset 0x80
 __declspec(property(get=__get_priorityRequest, put=__set_priorityRequest)) ::System::Net::WebOperation*  priorityRequest;

/// @brief Field requestSent offset 0x88
 __declspec(property(get=__get_requestSent, put=__set_requestSent)) int32_t  requestSent;

/// @brief Field finished offset 0x8c
 __declspec(property(get=__get_finished, put=__set_finished)) int32_t  finished;

 __declspec(property(get=get_Request)) ::System::Net::HttpWebRequest*  Request;

 __declspec(property(get=get_Connection, put=set_Connection)) ::System::Net::WebConnection*  Connection;

 __declspec(property(get=get_ServicePoint, put=set_ServicePoint)) ::System::Net::ServicePoint*  ServicePoint;

 __declspec(property(get=get_WriteBuffer)) ::System::Net::BufferOffsetSize*  WriteBuffer;

 __declspec(property(get=get_IsNtlmChallenge)) bool  IsNtlmChallenge;

 __declspec(property(get=get_Aborted)) bool  Aborted;

 __declspec(property(get=get_Closed)) bool  Closed;

 __declspec(property(get=get_WriteStream)) ::System::Net::WebRequestStream*  WriteStream;

 __declspec(property(get=get_Finished)) ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>*  Finished;

constexpr void __set__Request_k__BackingField(::System::Net::HttpWebRequest*  value) ;

constexpr ::System::Net::HttpWebRequest* __get__Request_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> __get__Request_k__BackingField() const;

constexpr void __set__Connection_k__BackingField(::System::Net::WebConnection*  value) ;

constexpr ::System::Net::WebConnection* __get__Connection_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebConnection*> __get__Connection_k__BackingField() const;

constexpr void __set__ServicePoint_k__BackingField(::System::Net::ServicePoint*  value) ;

constexpr ::System::Net::ServicePoint* __get__ServicePoint_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePoint*> __get__ServicePoint_k__BackingField() const;

constexpr void __set__WriteBuffer_k__BackingField(::System::Net::BufferOffsetSize*  value) ;

constexpr ::System::Net::BufferOffsetSize* __get__WriteBuffer_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::BufferOffsetSize*> __get__WriteBuffer_k__BackingField() const;

constexpr void __set__IsNtlmChallenge_k__BackingField(bool  value) ;

constexpr bool& __get__IsNtlmChallenge_k__BackingField() ;

constexpr bool const& __get__IsNtlmChallenge_k__BackingField() const;

constexpr void __set_cts(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get_cts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get_cts() const;

constexpr void __set_requestTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*  value) ;

constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* __get_requestTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*> __get_requestTask() const;

constexpr void __set_requestWrittenTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*  value) ;

constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* __get_requestWrittenTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*> __get_requestWrittenTask() const;

constexpr void __set_responseTask(::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>*  value) ;

constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>* __get_responseTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>*> __get_responseTask() const;

constexpr void __set_finishedTask(::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>*  value) ;

constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>* __get_finishedTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>*> __get_finishedTask() const;

constexpr void __set_writeStream(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get_writeStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get_writeStream() const;

constexpr void __set_responseStream(::System::Net::WebResponseStream*  value) ;

constexpr ::System::Net::WebResponseStream* __get_responseStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> __get_responseStream() const;

constexpr void __set_disposedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* __get_disposedInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> __get_disposedInfo() const;

constexpr void __set_closedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* __get_closedInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> __get_closedInfo() const;

constexpr void __set_priorityRequest(::System::Net::WebOperation*  value) ;

constexpr ::System::Net::WebOperation* __get_priorityRequest() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebOperation*> __get_priorityRequest() const;

constexpr void __set_requestSent(int32_t  value) ;

constexpr int32_t& __get_requestSent() ;

constexpr int32_t const& __get_requestSent() const;

constexpr void __set_finished(int32_t  value) ;

constexpr int32_t& __get_finished() ;

constexpr int32_t const& __get_finished() const;

/// @brief Method get_Request addr 0x29e1f34 size 0x8 virtual false final false
inline ::System::Net::HttpWebRequest* get_Request() ;

/// @brief Method get_Connection addr 0x29e1f3c size 0x8 virtual false final false
inline ::System::Net::WebConnection* get_Connection() ;

/// @brief Method set_Connection addr 0x29e1f44 size 0x8 virtual false final false
inline void set_Connection(::System::Net::WebConnection*  value) ;

/// @brief Method get_ServicePoint addr 0x29e1f4c size 0x8 virtual false final false
inline ::System::Net::ServicePoint* get_ServicePoint() ;

/// @brief Method set_ServicePoint addr 0x29e1f54 size 0x8 virtual false final false
inline void set_ServicePoint(::System::Net::ServicePoint*  value) ;

/// @brief Method get_WriteBuffer addr 0x29e1f5c size 0x8 virtual false final false
inline ::System::Net::BufferOffsetSize* get_WriteBuffer() ;

/// @brief Method get_IsNtlmChallenge addr 0x29e1f64 size 0x8 virtual false final false
inline bool get_IsNtlmChallenge() ;

static inline ::System::Net::WebOperation* New_ctor(::System::Net::HttpWebRequest*  request, ::System::Net::BufferOffsetSize*  writeBuffer, bool  isNtlmChallenge, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor addr 0x29e1f6c size 0x194 virtual false final false
inline void _ctor(::System::Net::HttpWebRequest*  request, ::System::Net::BufferOffsetSize*  writeBuffer, bool  isNtlmChallenge, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Aborted addr 0x29db03c size 0x50 virtual false final false
inline bool get_Aborted() ;

/// @brief Method get_Closed addr 0x29e2100 size 0x2c virtual false final false
inline bool get_Closed() ;

/// @brief Method Abort addr 0x29daffc size 0x40 virtual false final false
inline void Abort() ;

/// @brief Method Close addr 0x29e22e8 size 0xac virtual false final false
inline void Close() ;

/// @brief Method SetCanceled addr 0x29e221c size 0xcc virtual false final false
inline void SetCanceled() ;

/// @brief Method SetError addr 0x29e25d8 size 0xa4 virtual false final false
inline void SetError(::System::Exception*  error) ;

/// @brief Method SetDisposed addr 0x29e212c size 0xf0 virtual false final false
inline ::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*,bool> SetDisposed(ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>  field) ;

/// @brief Method CheckDisposed addr 0x29e267c size 0x4c virtual false final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* CheckDisposed(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ThrowIfDisposed addr 0x29e2720 size 0x60 virtual false final false
inline void ThrowIfDisposed() ;

/// @brief Method ThrowIfDisposed addr 0x29de7b4 size 0x44 virtual false final false
inline void ThrowIfDisposed(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ThrowIfClosedOrDisposed addr 0x29dfc84 size 0x60 virtual false final false
inline void ThrowIfClosedOrDisposed() ;

/// @brief Method ThrowIfClosedOrDisposed addr 0x29df4a4 size 0x4c virtual false final false
inline void ThrowIfClosedOrDisposed(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CheckThrowDisposed addr 0x29e26c8 size 0x58 virtual false final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* CheckThrowDisposed(bool  throwIt, ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>  field) ;

/// @brief Method RegisterRequest addr 0x29dd99c size 0x254 virtual false final false
inline void RegisterRequest(::System::Net::ServicePoint*  servicePoint, ::System::Net::WebConnection*  connection) ;

/// @brief Method SetPriorityRequest addr 0x29e2780 size 0x18c virtual false final false
inline void SetPriorityRequest(::System::Net::WebOperation*  operation) ;

/// @brief Method GetRequestStream addr 0x29e290c size 0xf0 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStream() ;

/// @brief Method GetRequestStreamInternal addr 0x29e29fc size 0x50 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* GetRequestStreamInternal() ;

/// @brief Method get_WriteStream addr 0x29e2a4c size 0x18 virtual false final false
inline ::System::Net::WebRequestStream* get_WriteStream() ;

/// @brief Method GetResponseStream addr 0x29e2a64 size 0x50 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream*>* GetResponseStream() ;

/// @brief Method get_Finished addr 0x29e2ab4 size 0x8 virtual false final false
inline ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>* get_Finished() ;

/// @brief Method Run addr 0x29ddbf0 size 0x94 virtual false final false
inline void Run() ;

/// @brief Method CompleteRequestWritten addr 0x29e2abc size 0x80 virtual false final false
inline void CompleteRequestWritten(::System::Net::WebRequestStream*  stream, ::System::Exception*  error) ;

/// @brief Method Finish addr 0x29e2394 size 0x244 virtual false final false
inline void Finish(bool  ok, ::System::Exception*  error) ;

/// @brief Method <RegisterRequest>b__48_0 addr 0x29e2b3c size 0x24 virtual false final false
inline void _RegisterRequest_b__48_0() ;

// Ctor Parameters [CppParam { name: "", ty: "WebOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebOperation(WebOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebOperation(WebOperation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebOperation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebOperation, 0x90>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebOperation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebOperation*, "System.Net", "WebOperation");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebOperation___GetRequestStream_d__50, "System.Net", "WebOperation/<GetRequestStream>d__50");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebOperation___Run_d__58, "System.Net", "WebOperation/<Run>d__58");
