#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoChunkStream)
namespace System::Net {
struct __MonoChunkStream___ProcessReadAsync_d__7;
}
namespace System::Net {
class MonoChunkParser;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct __MonoChunkStream___FinishReading_d__8;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net {
class MonoChunkStream;
}
namespace System::Net {
struct __MonoChunkStream___FinishReading_d__8;
}
namespace System::Net {
struct __MonoChunkStream___ProcessReadAsync_d__7;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::MonoChunkStream);
MARK_VAL_T(::System::Net::__MonoChunkStream___FinishReading_d__8);
MARK_VAL_T(::System::Net::__MonoChunkStream___ProcessReadAsync_d__7);
// Type: ::<ProcessReadAsync>d__7
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9194))
// CS Name: ::MonoChunkStream::<ProcessReadAsync>d__7
struct CORDL_TYPE __MonoChunkStream___ProcessReadAsync_d__7 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field cancellationToken offset 0x20
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::MonoChunkStream*  __4__this;

/// @brief Field buffer offset 0x30
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field offset offset 0x38
 __declspec(property(get=__get_offset, put=__set_offset)) int32_t  offset;

/// @brief Field size offset 0x3c
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field <moreBytes>5__2 offset 0x40
 __declspec(property(get=__get__moreBytes_5__2, put=__set__moreBytes_5__2)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _moreBytes_5__2;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1;

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

constexpr void __set___4__this(::System::Net::MonoChunkStream*  value) ;

constexpr ::System::Net::MonoChunkStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::MonoChunkStream*> __get___4__this() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_offset(int32_t  value) ;

constexpr int32_t& __get_offset() ;

constexpr int32_t const& __get_offset() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set__moreBytes_5__2(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__moreBytes_5__2() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__moreBytes_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29d4df4 size 0x36c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29d5160 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_moreBytes_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr __MonoChunkStream___ProcessReadAsync_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::MonoChunkStream*  __4__this, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::ArrayW<uint8_t,::Array<uint8_t>*>  _moreBytes_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MonoChunkStream___ProcessReadAsync_d__7(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MonoChunkStream___ProcessReadAsync_d__7()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__MonoChunkStream___ProcessReadAsync_d__7, 0x58>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<FinishReading>d__8
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9195))
// CS Name: ::MonoChunkStream::<FinishReading>d__8
struct CORDL_TYPE __MonoChunkStream___FinishReading_d__8 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::MonoChunkStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Field <buffer>5__2 offset 0x40
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer_5__2;

/// @brief Field <>u__2 offset 0x48
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::MonoChunkStream*  value) ;

constexpr ::System::Net::MonoChunkStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::MonoChunkStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

constexpr void __set__buffer_5__2(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__buffer_5__2() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__buffer_5__2() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29d51b8 size 0x3d0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29d5588 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr __MonoChunkStream___FinishReading_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::MonoChunkStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MonoChunkStream___FinishReading_d__8(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MonoChunkStream___FinishReading_d__8()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__MonoChunkStream___FinishReading_d__8, 0x58>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::MonoChunkStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9196))
// CS Name: ::System.Net::MonoChunkStream*
class CORDL_TYPE MonoChunkStream : public ::System::Net::WebReadStream {
public:
// Declarations
using _FinishReading_d__8 = ::System::Net::__MonoChunkStream___FinishReading_d__8;

using _ProcessReadAsync_d__7 = ::System::Net::__MonoChunkStream___ProcessReadAsync_d__7;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Net::WebReadStream)]{};

/// @brief Field <Headers>k__BackingField offset 0x40
 __declspec(property(get=__get__Headers_k__BackingField, put=__set__Headers_k__BackingField)) ::System::Net::WebHeaderCollection*  _Headers_k__BackingField;

/// @brief Field <Decoder>k__BackingField offset 0x48
 __declspec(property(get=__get__Decoder_k__BackingField, put=__set__Decoder_k__BackingField)) ::System::Net::MonoChunkParser*  _Decoder_k__BackingField;

 __declspec(property(get=get_Decoder)) ::System::Net::MonoChunkParser*  Decoder;

constexpr void __set__Headers_k__BackingField(::System::Net::WebHeaderCollection*  value) ;

constexpr ::System::Net::WebHeaderCollection* __get__Headers_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> __get__Headers_k__BackingField() const;

constexpr void __set__Decoder_k__BackingField(::System::Net::MonoChunkParser*  value) ;

constexpr ::System::Net::MonoChunkParser* __get__Decoder_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::MonoChunkParser*> __get__Decoder_k__BackingField() const;

/// @brief Method get_Decoder addr 0x29d4984 size 0x8 virtual false final false
inline ::System::Net::MonoChunkParser* get_Decoder() ;

static inline ::System::Net::MonoChunkStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::WebHeaderCollection*  headers) ;

/// @brief Method .ctor addr 0x29d498c size 0x90 virtual false final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::WebHeaderCollection*  headers) ;

/// @brief Method ProcessReadAsync addr 0x29d4a8c size 0x124 virtual true final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FinishReading addr 0x29d4bb0 size 0xe0 virtual true final false
inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ThrowExpectingChunkTrailer addr 0x29d4c90 size 0x5c virtual false final false
static inline void ThrowExpectingChunkTrailer() ;

/// @brief Method <>n__0 addr 0x29d4cec size 0x4 virtual false final false
inline ::System::Threading::Tasks::Task* __n__0(::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoChunkStream(MonoChunkStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoChunkStream(MonoChunkStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoChunkStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::MonoChunkStream, 0x50>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::MonoChunkStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::MonoChunkStream*, "System.Net", "MonoChunkStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__MonoChunkStream___FinishReading_d__8, "System.Net", "MonoChunkStream/<FinishReading>d__8");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__MonoChunkStream___ProcessReadAsync_d__7, "System.Net", "MonoChunkStream/<ProcessReadAsync>d__7");
