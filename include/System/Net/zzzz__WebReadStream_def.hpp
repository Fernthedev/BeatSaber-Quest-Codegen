#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebReadStream)
namespace System {
class IAsyncResult;
}
namespace System::Net {
struct __WebReadStream___ReadAsync_d__28;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class WebOperation;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class Exception;
}
namespace System::Threading {
struct CancellationToken;
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
class IAsyncStateMachine;
}
// Forward declare root types
namespace System::Net {
class WebReadStream;
}
namespace System::Net {
struct __WebReadStream___ReadAsync_d__28;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebReadStream);
MARK_VAL_T(::System::Net::__WebReadStream___ReadAsync_d__28);
// Type: ::<ReadAsync>d__28
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9228))
// CS Name: ::WebReadStream::<ReadAsync>d__28
struct CORDL_TYPE __WebReadStream___ReadAsync_d__28 : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebReadStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field buffer offset 0x30
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field offset offset 0x38
 __declspec(property(get=__get_offset, put=__set_offset)) int32_t  offset;

/// @brief Field size offset 0x3c
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1;

/// @brief Field <>u__2 offset 0x50
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebReadStream*  value) ;

constexpr ::System::Net::WebReadStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebReadStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_offset(int32_t  value) ;

constexpr int32_t& __get_offset() ;

constexpr int32_t const& __get_offset() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29e3e60 size 0x584 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e43e4 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebReadStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebReadStream___ReadAsync_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Net::WebReadStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebReadStream___ReadAsync_d__28(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebReadStream___ReadAsync_d__28()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebReadStream___ReadAsync_d__28, 0x60>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::WebReadStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9229))
// CS Name: ::System.Net::WebReadStream*
class CORDL_TYPE WebReadStream : public ::System::IO::Stream {
public:
// Declarations
using _ReadAsync_d__28 = ::System::Net::__WebReadStream___ReadAsync_d__28;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::IO::Stream)]{};

/// @brief Field <Operation>k__BackingField offset 0x28
 __declspec(property(get=__get__Operation_k__BackingField, put=__set__Operation_k__BackingField)) ::System::Net::WebOperation*  _Operation_k__BackingField;

/// @brief Field <InnerStream>k__BackingField offset 0x30
 __declspec(property(get=__get__InnerStream_k__BackingField, put=__set__InnerStream_k__BackingField)) ::System::IO::Stream*  _InnerStream_k__BackingField;

/// @brief Field disposed offset 0x38
 __declspec(property(get=__get_disposed, put=__set_disposed)) bool  disposed;

 __declspec(property(get=get_Operation)) ::System::Net::WebOperation*  Operation;

 __declspec(property(get=get_InnerStream)) ::System::IO::Stream*  InnerStream;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

constexpr void __set__Operation_k__BackingField(::System::Net::WebOperation*  value) ;

constexpr ::System::Net::WebOperation* __get__Operation_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebOperation*> __get__Operation_k__BackingField() const;

constexpr void __set__InnerStream_k__BackingField(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__InnerStream_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__InnerStream_k__BackingField() const;

constexpr void __set_disposed(bool  value) ;

constexpr bool& __get_disposed() ;

constexpr bool const& __get_disposed() const;

/// @brief Method get_Operation addr 0x29e3448 size 0x8 virtual false final false
inline ::System::Net::WebOperation* get_Operation() ;

/// @brief Method get_InnerStream addr 0x29e3450 size 0x8 virtual false final false
inline ::System::IO::Stream* get_InnerStream() ;

static inline ::System::Net::WebReadStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream) ;

/// @brief Method .ctor addr 0x29d4a1c size 0x70 virtual false final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream) ;

/// @brief Method get_Length addr 0x29e3458 size 0x40 virtual true final false
inline int64_t get_Length() ;

/// @brief Method get_Position addr 0x29e3498 size 0x40 virtual true final false
inline int64_t get_Position() ;

/// @brief Method set_Position addr 0x29e34d8 size 0x40 virtual true final false
inline void set_Position(int64_t  value) ;

/// @brief Method get_CanSeek addr 0x29e3518 size 0x8 virtual true final false
inline bool get_CanSeek() ;

/// @brief Method get_CanRead addr 0x29e3520 size 0x8 virtual true final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x29e3528 size 0x8 virtual true final false
inline bool get_CanWrite() ;

/// @brief Method SetLength addr 0x29e3530 size 0x40 virtual true final false
inline void SetLength(int64_t  value) ;

/// @brief Method Seek addr 0x29e3570 size 0x40 virtual true final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method Write addr 0x29e35b0 size 0x40 virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Flush addr 0x29e35f0 size 0x40 virtual true final false
inline void Flush() ;

/// @brief Method GetException addr 0x29e3630 size 0x168 virtual false final false
inline ::System::Exception* GetException(::System::Exception*  e) ;

/// @brief Method Read addr 0x29e3798 size 0x268 virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method BeginRead addr 0x29e3a00 size 0x1d0 virtual true final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  cb, ::System::Object*  state) ;

/// @brief Method EndRead addr 0x29e3bd0 size 0x124 virtual true final false
inline int32_t EndRead(::System::IAsyncResult*  r) ;

/// @brief Method ReadAsync addr 0x29e3cf4 size 0x120 virtual true final true
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ProcessReadAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FinishReading addr 0x29d4cf0 size 0x104 virtual true final false
inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose addr 0x29e3e14 size 0x4c virtual true final false
inline void Dispose(bool  disposing) ;

// Ctor Parameters [CppParam { name: "", ty: "WebReadStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebReadStream(WebReadStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebReadStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebReadStream(WebReadStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebReadStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebReadStream, 0x40>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebReadStream*, "System.Net", "WebReadStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebReadStream___ReadAsync_d__28, "System.Net", "WebReadStream/<ReadAsync>d__28");
