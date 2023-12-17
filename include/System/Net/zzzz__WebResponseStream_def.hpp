#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebResponseStream)
namespace System::Net {
struct ReadState;
}
namespace System {
class Exception;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class WebReadStream;
}
namespace System {
class Object;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
struct __WebResponseStream___ReadAllAsync_d__48;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebRequestStream;
}
namespace System {
class Version;
}
namespace System::Net {
struct __WebResponseStream___InitReadAsync_d__52;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
struct __WebResponseStream___ReadAllAsyncInner_d__47;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class __WebResponseStream____c__DisplayClass41_0;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
struct __WebResponseStream___ReadAsync_d__40;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
class __WebResponseStream____c__DisplayClass41_0;
}
namespace System::Net {
struct __WebResponseStream___InitReadAsync_d__52;
}
namespace System::Net {
struct __WebResponseStream___ReadAllAsyncInner_d__47;
}
namespace System::Net {
struct __WebResponseStream___ReadAllAsync_d__48;
}
namespace System::Net {
struct __WebResponseStream___ReadAsync_d__40;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebResponseStream);
MARK_REF_PTR_T(::System::Net::__WebResponseStream____c__DisplayClass41_0);
MARK_VAL_T(::System::Net::__WebResponseStream___InitReadAsync_d__52);
MARK_VAL_T(::System::Net::__WebResponseStream___ReadAllAsyncInner_d__47);
MARK_VAL_T(::System::Net::__WebResponseStream___ReadAllAsync_d__48);
MARK_VAL_T(::System::Net::__WebResponseStream___ReadAsync_d__40);
// Type: ::<ReadAsync>d__40
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9239))
// CS Name: ::WebResponseStream::<ReadAsync>d__40
struct CORDL_TYPE __WebResponseStream___ReadAsync_d__40 : public ::bs_hook::ValueTypeWrapper<0x78> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field cancellationToken offset 0x20
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field buffer offset 0x28
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field offset offset 0x30
 __declspec(property(get=__get_offset, put=__set_offset)) int32_t  offset;

/// @brief Field count offset 0x34
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field <>4__this offset 0x38
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebResponseStream*  __4__this;

/// @brief Field <completion>5__2 offset 0x40
 __declspec(property(get=__get__completion_5__2, put=__set__completion_5__2)) ::System::Net::WebCompletionSource*  _completion_5__2;

/// @brief Field <nbytes>5__3 offset 0x48
 __declspec(property(get=__get__nbytes_5__3, put=__set__nbytes_5__3)) int32_t  _nbytes_5__3;

/// @brief Field <throwMe>5__4 offset 0x50
 __declspec(property(get=__get__throwMe_5__4, put=__set__throwMe_5__4)) ::System::Exception*  _throwMe_5__4;

/// @brief Field <>u__1 offset 0x58
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*>  __u__1;

/// @brief Field <>u__2 offset 0x68
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> const& __get___t__builder() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_offset(int32_t  value) ;

constexpr int32_t& __get_offset() ;

constexpr int32_t const& __get_offset() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set___4__this(::System::Net::WebResponseStream*  value) ;

constexpr ::System::Net::WebResponseStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> __get___4__this() const;

constexpr void __set__completion_5__2(::System::Net::WebCompletionSource*  value) ;

constexpr ::System::Net::WebCompletionSource* __get__completion_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource*> __get__completion_5__2() const;

constexpr void __set__nbytes_5__3(int32_t  value) ;

constexpr int32_t& __get__nbytes_5__3() ;

constexpr int32_t const& __get__nbytes_5__3() const;

constexpr void __set__throwMe_5__4(::System::Exception*  value) ;

constexpr ::System::Exception* __get__throwMe_5__4() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get__throwMe_5__4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29e8ff4 size 0x8e4 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e98d8 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "_nbytes_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_throwMe_5__4", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr __WebResponseStream___ReadAsync_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Net::WebResponseStream*  __4__this, ::System::Net::WebCompletionSource*  _completion_5__2, int32_t  _nbytes_5__3, ::System::Exception*  _throwMe_5__4, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Object*>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebResponseStream___ReadAsync_d__40(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x78>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebResponseStream___ReadAsync_d__40()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream___ReadAsync_d__40, 0x78>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<>c__DisplayClass41_0
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9240))
// CS Name: ::WebResponseStream::<>c__DisplayClass41_0*
class CORDL_TYPE __WebResponseStream____c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebResponseStream*  __4__this;

/// @brief Field buffer offset 0x18
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field offset offset 0x20
 __declspec(property(get=__get_offset, put=__set_offset)) int32_t  offset;

/// @brief Field size offset 0x24
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

constexpr void __set___4__this(::System::Net::WebResponseStream*  value) ;

constexpr ::System::Net::WebResponseStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> __get___4__this() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_offset(int32_t  value) ;

constexpr int32_t& __get_offset() ;

constexpr int32_t const& __get_offset() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

static inline ::System::Net::__WebResponseStream____c__DisplayClass41_0* New_ctor() ;

/// @brief Method .ctor addr 0x29e7b18 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ProcessRead>b__0 addr 0x29e9930 size 0x3c virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* _ProcessRead_b__0(::System::Threading::CancellationToken  ct) ;

/// @brief Method <ProcessRead>b__1 addr 0x29e996c size 0x40 virtual false final false
inline void _ProcessRead_b__1() ;

/// @brief Method <ProcessRead>b__2 addr 0x29e99ac size 0x24 virtual false final false
inline bool _ProcessRead_b__2() ;

// Ctor Parameters [CppParam { name: "", ty: "__WebResponseStream____c__DisplayClass41_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__WebResponseStream____c__DisplayClass41_0(__WebResponseStream____c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__WebResponseStream____c__DisplayClass41_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__WebResponseStream____c__DisplayClass41_0(__WebResponseStream____c__DisplayClass41_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __WebResponseStream____c__DisplayClass41_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream____c__DisplayClass41_0, 0x28>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<ReadAllAsyncInner>d__47
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9241))
// CS Name: ::WebResponseStream::<ReadAllAsyncInner>d__47
struct CORDL_TYPE __WebResponseStream___ReadAllAsyncInner_d__47 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>  __t__builder;

/// @brief Field cancellationToken offset 0x20
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebResponseStream*  __4__this;

/// @brief Field <maximumSize>5__2 offset 0x30
 __declspec(property(get=__get__maximumSize_5__2, put=__set__maximumSize_5__2)) int64_t  _maximumSize_5__2;

/// @brief Field <ms>5__3 offset 0x38
 __declspec(property(get=__get__ms_5__3, put=__set__ms_5__3)) ::System::IO::MemoryStream*  _ms_5__3;

/// @brief Field <buffer>5__4 offset 0x40
 __declspec(property(get=__get__buffer_5__4, put=__set__buffer_5__4)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer_5__4;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>> const& __get___t__builder() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___4__this(::System::Net::WebResponseStream*  value) ;

constexpr ::System::Net::WebResponseStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> __get___4__this() const;

constexpr void __set__maximumSize_5__2(int64_t  value) ;

constexpr int64_t& __get__maximumSize_5__2() ;

constexpr int64_t const& __get__maximumSize_5__2() const;

constexpr void __set__ms_5__3(::System::IO::MemoryStream*  value) ;

constexpr ::System::IO::MemoryStream* __get__ms_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> __get__ms_5__3() const;

constexpr void __set__buffer_5__4(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__buffer_5__4() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__buffer_5__4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29e99d0 size 0x56c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e9f3c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name: "_maximumSize_5__2", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_ms_5__3", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr __WebResponseStream___ReadAllAsyncInner_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebResponseStream*  __4__this, int64_t  _maximumSize_5__2, ::System::IO::MemoryStream*  _ms_5__3, ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer_5__4, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebResponseStream___ReadAllAsyncInner_d__47(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebResponseStream___ReadAllAsyncInner_d__47()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream___ReadAllAsyncInner_d__47, 0x58>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<ReadAllAsync>d__48
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9242))
// CS Name: ::WebResponseStream::<ReadAllAsync>d__48
struct CORDL_TYPE __WebResponseStream___ReadAllAsync_d__48 : public ::bs_hook::ValueTypeWrapper<0x70> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebResponseStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field resending offset 0x30
 __declspec(property(get=__get_resending, put=__set_resending)) bool  resending;

/// @brief Field <completion>5__2 offset 0x38
 __declspec(property(get=__get__completion_5__2, put=__set__completion_5__2)) ::System::Net::WebCompletionSource*  _completion_5__2;

/// @brief Field <timeoutCts>5__3 offset 0x40
 __declspec(property(get=__get__timeoutCts_5__3, put=__set__timeoutCts_5__3)) ::System::Threading::CancellationTokenSource*  _timeoutCts_5__3;

/// @brief Field <timeoutTask>5__4 offset 0x48
 __declspec(property(get=__get__timeoutTask_5__4, put=__set__timeoutTask_5__4)) ::System::Threading::Tasks::Task*  _timeoutTask_5__4;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1;

/// @brief Field <>u__2 offset 0x60
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebResponseStream*  value) ;

constexpr ::System::Net::WebResponseStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_resending(bool  value) ;

constexpr bool& __get_resending() ;

constexpr bool const& __get_resending() const;

constexpr void __set__completion_5__2(::System::Net::WebCompletionSource*  value) ;

constexpr ::System::Net::WebCompletionSource* __get__completion_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource*> __get__completion_5__2() const;

constexpr void __set__timeoutCts_5__3(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__timeoutCts_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__timeoutCts_5__3() const;

constexpr void __set__timeoutTask_5__4(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get__timeoutTask_5__4() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get__timeoutTask_5__4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29e9f94 size 0x95c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29ea8f0 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "resending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "_timeoutCts_5__3", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__4", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }]
constexpr __WebResponseStream___ReadAllAsync_d__48(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebResponseStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, bool  resending, ::System::Net::WebCompletionSource*  _completion_5__2, ::System::Threading::CancellationTokenSource*  _timeoutCts_5__3, ::System::Threading::Tasks::Task*  _timeoutTask_5__4, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebResponseStream___ReadAllAsync_d__48(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x70>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebResponseStream___ReadAllAsync_d__48()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream___ReadAllAsync_d__48, 0x70>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<InitReadAsync>d__52
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9243))
// CS Name: ::WebResponseStream::<InitReadAsync>d__52
struct CORDL_TYPE __WebResponseStream___InitReadAsync_d__52 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebResponseStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <buffer>5__2 offset 0x30
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Net::BufferOffsetSize*  _buffer_5__2;

/// @brief Field <state>5__3 offset 0x38
 __declspec(property(get=__get__state_5__3, put=__set__state_5__3)) ::System::Net::ReadState  _state_5__3;

/// @brief Field <position>5__4 offset 0x3c
 __declspec(property(get=__get__position_5__4, put=__set__position_5__4)) int32_t  _position_5__4;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebResponseStream*  value) ;

constexpr ::System::Net::WebResponseStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__buffer_5__2(::System::Net::BufferOffsetSize*  value) ;

constexpr ::System::Net::BufferOffsetSize* __get__buffer_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::BufferOffsetSize*> __get__buffer_5__2() const;

constexpr void __set__state_5__3(::System::Net::ReadState  value) ;

constexpr ::System::Net::ReadState& __get__state_5__3() ;

constexpr ::System::Net::ReadState const& __get__state_5__3() const;

constexpr void __set__position_5__4(int32_t  value) ;

constexpr int32_t& __get__position_5__4() ;

constexpr int32_t const& __get__position_5__4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29ea8fc size 0x6bc virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29eafb8 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None }, CppParam { name: "_state_5__3", ty: "::System::Net::ReadState", modifiers: "", def_value: None }, CppParam { name: "_position_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr __WebResponseStream___InitReadAsync_d__52(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebResponseStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::BufferOffsetSize*  _buffer_5__2, ::System::Net::ReadState  _state_5__3, int32_t  _position_5__4, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebResponseStream___InitReadAsync_d__52(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebResponseStream___InitReadAsync_d__52()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebResponseStream___InitReadAsync_d__52, 0x50>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::WebResponseStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9220))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9244))
// CS Name: ::System.Net::WebResponseStream*
class CORDL_TYPE WebResponseStream : public ::System::Net::WebConnectionStream {
public:
// Declarations
using _InitReadAsync_d__52 = ::System::Net::__WebResponseStream___InitReadAsync_d__52;

using _ReadAllAsync_d__48 = ::System::Net::__WebResponseStream___ReadAllAsync_d__48;

using _ReadAllAsyncInner_d__47 = ::System::Net::__WebResponseStream___ReadAllAsyncInner_d__47;

using __c__DisplayClass41_0 = ::System::Net::__WebResponseStream____c__DisplayClass41_0;

using _ReadAsync_d__40 = ::System::Net::__WebResponseStream___ReadAsync_d__40;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::Net::WebConnectionStream)]{};

/// @brief Field innerStream offset 0x58
 __declspec(property(get=__get_innerStream, put=__set_innerStream)) ::System::Net::WebReadStream*  innerStream;

/// @brief Field nextReadCalled offset 0x60
 __declspec(property(get=__get_nextReadCalled, put=__set_nextReadCalled)) bool  nextReadCalled;

/// @brief Field bufferedEntireContent offset 0x61
 __declspec(property(get=__get_bufferedEntireContent, put=__set_bufferedEntireContent)) bool  bufferedEntireContent;

/// @brief Field pendingRead offset 0x68
 __declspec(property(get=__get_pendingRead, put=__set_pendingRead)) ::System::Net::WebCompletionSource*  pendingRead;

/// @brief Field locker offset 0x70
 __declspec(property(get=__get_locker, put=__set_locker)) ::System::Object*  locker;

/// @brief Field nestedRead offset 0x78
 __declspec(property(get=__get_nestedRead, put=__set_nestedRead)) int32_t  nestedRead;

/// @brief Field read_eof offset 0x7c
 __declspec(property(get=__get_read_eof, put=__set_read_eof)) bool  read_eof;

/// @brief Field <RequestStream>k__BackingField offset 0x80
 __declspec(property(get=__get__RequestStream_k__BackingField, put=__set__RequestStream_k__BackingField)) ::System::Net::WebRequestStream*  _RequestStream_k__BackingField;

/// @brief Field <Headers>k__BackingField offset 0x88
 __declspec(property(get=__get__Headers_k__BackingField, put=__set__Headers_k__BackingField)) ::System::Net::WebHeaderCollection*  _Headers_k__BackingField;

/// @brief Field <StatusCode>k__BackingField offset 0x90
 __declspec(property(get=__get__StatusCode_k__BackingField, put=__set__StatusCode_k__BackingField)) ::System::Net::HttpStatusCode  _StatusCode_k__BackingField;

/// @brief Field <StatusDescription>k__BackingField offset 0x98
 __declspec(property(get=__get__StatusDescription_k__BackingField, put=__set__StatusDescription_k__BackingField)) ::StringW  _StatusDescription_k__BackingField;

/// @brief Field <Version>k__BackingField offset 0xa0
 __declspec(property(get=__get__Version_k__BackingField, put=__set__Version_k__BackingField)) ::System::Version*  _Version_k__BackingField;

/// @brief Field <KeepAlive>k__BackingField offset 0xa8
 __declspec(property(get=__get__KeepAlive_k__BackingField, put=__set__KeepAlive_k__BackingField)) bool  _KeepAlive_k__BackingField;

/// @brief Field <ChunkedRead>k__BackingField offset 0xa9
 __declspec(property(get=__get__ChunkedRead_k__BackingField, put=__set__ChunkedRead_k__BackingField)) bool  _ChunkedRead_k__BackingField;

 __declspec(property(get=get_RequestStream)) ::System::Net::WebRequestStream*  RequestStream;

 __declspec(property(get=get_Headers, put=set_Headers)) ::System::Net::WebHeaderCollection*  Headers;

 __declspec(property(get=get_StatusCode, put=set_StatusCode)) ::System::Net::HttpStatusCode  StatusCode;

 __declspec(property(get=get_StatusDescription, put=set_StatusDescription)) ::StringW  StatusDescription;

 __declspec(property(get=get_Version, put=set_Version)) ::System::Version*  Version;

 __declspec(property(get=get_KeepAlive, put=set_KeepAlive)) bool  KeepAlive;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_ChunkedRead, put=set_ChunkedRead)) bool  ChunkedRead;

 __declspec(property(get=get_ExpectContent)) bool  ExpectContent;

constexpr void __set_innerStream(::System::Net::WebReadStream*  value) ;

constexpr ::System::Net::WebReadStream* __get_innerStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebReadStream*> __get_innerStream() const;

constexpr void __set_nextReadCalled(bool  value) ;

constexpr bool& __get_nextReadCalled() ;

constexpr bool const& __get_nextReadCalled() const;

constexpr void __set_bufferedEntireContent(bool  value) ;

constexpr bool& __get_bufferedEntireContent() ;

constexpr bool const& __get_bufferedEntireContent() const;

constexpr void __set_pendingRead(::System::Net::WebCompletionSource*  value) ;

constexpr ::System::Net::WebCompletionSource* __get_pendingRead() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource*> __get_pendingRead() const;

constexpr void __set_locker(::System::Object*  value) ;

constexpr ::System::Object* __get_locker() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_locker() const;

constexpr void __set_nestedRead(int32_t  value) ;

constexpr int32_t& __get_nestedRead() ;

constexpr int32_t const& __get_nestedRead() const;

constexpr void __set_read_eof(bool  value) ;

constexpr bool& __get_read_eof() ;

constexpr bool const& __get_read_eof() const;

constexpr void __set__RequestStream_k__BackingField(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get__RequestStream_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get__RequestStream_k__BackingField() const;

constexpr void __set__Headers_k__BackingField(::System::Net::WebHeaderCollection*  value) ;

constexpr ::System::Net::WebHeaderCollection* __get__Headers_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> __get__Headers_k__BackingField() const;

constexpr void __set__StatusCode_k__BackingField(::System::Net::HttpStatusCode  value) ;

constexpr ::System::Net::HttpStatusCode& __get__StatusCode_k__BackingField() ;

constexpr ::System::Net::HttpStatusCode const& __get__StatusCode_k__BackingField() const;

constexpr void __set__StatusDescription_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__StatusDescription_k__BackingField() ;

constexpr ::StringW const& __get__StatusDescription_k__BackingField() const;

constexpr void __set__Version_k__BackingField(::System::Version*  value) ;

constexpr ::System::Version* __get__Version_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Version*> __get__Version_k__BackingField() const;

constexpr void __set__KeepAlive_k__BackingField(bool  value) ;

constexpr bool& __get__KeepAlive_k__BackingField() ;

constexpr bool const& __get__KeepAlive_k__BackingField() const;

constexpr void __set__ChunkedRead_k__BackingField(bool  value) ;

constexpr bool& __get__ChunkedRead_k__BackingField() ;

constexpr bool const& __get__ChunkedRead_k__BackingField() const;

/// @brief Method get_RequestStream addr 0x29e7660 size 0x8 virtual false final false
inline ::System::Net::WebRequestStream* get_RequestStream() ;

/// @brief Method get_Headers addr 0x29e7668 size 0x8 virtual false final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

/// @brief Method set_Headers addr 0x29e7670 size 0x8 virtual false final false
inline void set_Headers(::System::Net::WebHeaderCollection*  value) ;

/// @brief Method get_StatusCode addr 0x29e7678 size 0x8 virtual false final false
inline ::System::Net::HttpStatusCode get_StatusCode() ;

/// @brief Method set_StatusCode addr 0x29e7680 size 0x8 virtual false final false
inline void set_StatusCode(::System::Net::HttpStatusCode  value) ;

/// @brief Method get_StatusDescription addr 0x29e7688 size 0x8 virtual false final false
inline ::StringW get_StatusDescription() ;

/// @brief Method set_StatusDescription addr 0x29e7690 size 0x8 virtual false final false
inline void set_StatusDescription(::StringW  value) ;

/// @brief Method get_Version addr 0x29e7698 size 0x8 virtual false final false
inline ::System::Version* get_Version() ;

/// @brief Method set_Version addr 0x29e76a0 size 0x8 virtual false final false
inline void set_Version(::System::Version*  value) ;

/// @brief Method get_KeepAlive addr 0x29e76a8 size 0x8 virtual false final false
inline bool get_KeepAlive() ;

/// @brief Method set_KeepAlive addr 0x29e76b0 size 0xc virtual false final false
inline void set_KeepAlive(bool  value) ;

static inline ::System::Net::WebResponseStream* New_ctor(::System::Net::WebRequestStream*  request) ;

/// @brief Method .ctor addr 0x29e76bc size 0x84 virtual false final false
inline void _ctor(::System::Net::WebRequestStream*  request) ;

/// @brief Method get_CanRead addr 0x29e7740 size 0x8 virtual true final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x29e7748 size 0x8 virtual true final false
inline bool get_CanWrite() ;

/// @brief Method get_ChunkedRead addr 0x29e7750 size 0x8 virtual false final false
inline bool get_ChunkedRead() ;

/// @brief Method set_ChunkedRead addr 0x29e7758 size 0xc virtual false final false
inline void set_ChunkedRead(bool  value) ;

/// @brief Method ReadAsync addr 0x29e7764 size 0x134 virtual true final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ProcessRead addr 0x29e7898 size 0x280 virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryReadFromBufferedContent addr 0x29e7b20 size 0xcc virtual true final false
inline bool TryReadFromBufferedContent(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ByRef<int32_t>  result) ;

/// @brief Method get_ExpectContent addr 0x29e7bec size 0x90 virtual false final false
inline bool get_ExpectContent() ;

/// @brief Method Initialize addr 0x29e7c7c size 0x52c virtual false final false
inline void Initialize(::System::Net::BufferOffsetSize*  buffer) ;

/// @brief Method ReadAllAsyncInner addr 0x29e81a8 size 0x100 virtual false final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* ReadAllAsyncInner(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAllAsync addr 0x29e82a8 size 0xf4 virtual false final false
inline ::System::Threading::Tasks::Task* ReadAllAsync(bool  resending, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteAsync addr 0x29e839c size 0x9c virtual true final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Close_internal addr 0x29e8438 size 0x8c virtual true final false
inline void Close_internal(ByRef<bool>  disposed) ;

/// @brief Method GetReadException addr 0x29e84c4 size 0x29c virtual false final false
inline ::System::Net::WebException* GetReadException(::System::Net::WebExceptionStatus  status, ::System::Exception*  error, ::StringW  where) ;

/// @brief Method InitReadAsync addr 0x29e8760 size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task* InitReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetResponse addr 0x29e883c size 0x7b8 virtual false final false
inline bool GetResponse(::System::Net::BufferOffsetSize*  buffer, ByRef<int32_t>  pos, ByRef<::System::Net::ReadState>  state) ;

// Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebResponseStream(WebResponseStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebResponseStream(WebResponseStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebResponseStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebResponseStream, 0xb0>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebResponseStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream*, "System.Net", "WebResponseStream");
NEED_NO_BOX(::System::Net::__WebResponseStream____c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream____c__DisplayClass41_0*, "System.Net", "WebResponseStream/<>c__DisplayClass41_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream___InitReadAsync_d__52, "System.Net", "WebResponseStream/<InitReadAsync>d__52");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream___ReadAllAsyncInner_d__47, "System.Net", "WebResponseStream/<ReadAllAsyncInner>d__47");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream___ReadAllAsync_d__48, "System.Net", "WebResponseStream/<ReadAllAsync>d__48");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebResponseStream___ReadAsync_d__40, "System.Net", "WebResponseStream/<ReadAsync>d__40");
