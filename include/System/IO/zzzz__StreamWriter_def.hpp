#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamWriter)
namespace System::IO {
struct __StreamWriter___DisposeAsyncCore_d__33;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class Encoder;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::IO {
struct __StreamWriter___FlushAsyncInternal_d__74;
}
namespace System::IO {
class Stream;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncValueTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
// Forward declare root types
namespace System::IO {
class StreamWriter;
}
namespace System::IO {
struct __StreamWriter___DisposeAsyncCore_d__33;
}
namespace System::IO {
struct __StreamWriter___FlushAsyncInternal_d__74;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamWriter);
MARK_VAL_T(::System::IO::__StreamWriter___DisposeAsyncCore_d__33);
MARK_VAL_T(::System::IO::__StreamWriter___FlushAsyncInternal_d__74);
// Type: ::<DisposeAsyncCore>d__33
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3576))
// CS Name: ::StreamWriter::<DisposeAsyncCore>d__33
struct CORDL_TYPE __StreamWriter___DisposeAsyncCore_d__33 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::IO::StreamWriter*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::IO::StreamWriter*  value) ;

constexpr ::System::IO::StreamWriter* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamWriter*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2505fc4 size 0x28c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2506250 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __StreamWriter___DisposeAsyncCore_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  __t__builder, ::System::IO::StreamWriter*  __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StreamWriter___DisposeAsyncCore_d__33(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StreamWriter___DisposeAsyncCore_d__33()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__StreamWriter___DisposeAsyncCore_d__33, 0x40>, "Size mismatch!");

} // namespace end def System::IO
// Type: ::<FlushAsyncInternal>d__74
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3577))
// CS Name: ::StreamWriter::<FlushAsyncInternal>d__74
struct CORDL_TYPE __StreamWriter___FlushAsyncInternal_d__74 : public ::bs_hook::ValueTypeWrapper<0x90> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field haveWrittenPreamble offset 0x20
 __declspec(property(get=__get_haveWrittenPreamble, put=__set_haveWrittenPreamble)) bool  haveWrittenPreamble;

/// @brief Field _this offset 0x28
 __declspec(property(get=__get__this, put=__set__this)) ::System::IO::StreamWriter*  _this;

/// @brief Field encoding offset 0x30
 __declspec(property(get=__get_encoding, put=__set_encoding)) ::System::Text::Encoding*  encoding;

/// @brief Field stream offset 0x38
 __declspec(property(get=__get_stream, put=__set_stream)) ::System::IO::Stream*  stream;

/// @brief Field cancellationToken offset 0x40
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field encoder offset 0x48
 __declspec(property(get=__get_encoder, put=__set_encoder)) ::System::Text::Encoder*  encoder;

/// @brief Field charBuffer offset 0x50
 __declspec(property(get=__get_charBuffer, put=__set_charBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer;

/// @brief Field charPos offset 0x58
 __declspec(property(get=__get_charPos, put=__set_charPos)) int32_t  charPos;

/// @brief Field byteBuffer offset 0x60
 __declspec(property(get=__get_byteBuffer, put=__set_byteBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuffer;

/// @brief Field flushEncoder offset 0x68
 __declspec(property(get=__get_flushEncoder, put=__set_flushEncoder)) bool  flushEncoder;

/// @brief Field flushStream offset 0x69
 __declspec(property(get=__get_flushStream, put=__set_flushStream)) bool  flushStream;

/// @brief Field <>u__1 offset 0x70
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  __u__1;

/// @brief Field <>u__2 offset 0x80
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set_haveWrittenPreamble(bool  value) ;

constexpr bool& __get_haveWrittenPreamble() ;

constexpr bool const& __get_haveWrittenPreamble() const;

constexpr void __set__this(::System::IO::StreamWriter*  value) ;

constexpr ::System::IO::StreamWriter* __get__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamWriter*> __get__this() const;

constexpr void __set_encoding(::System::Text::Encoding*  value) ;

constexpr ::System::Text::Encoding* __get_encoding() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> __get_encoding() const;

constexpr void __set_stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_stream() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_encoder(::System::Text::Encoder*  value) ;

constexpr ::System::Text::Encoder* __get_encoder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoder*> __get_encoder() const;

constexpr void __set_charBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get_charBuffer() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get_charBuffer() const;

constexpr void __set_charPos(int32_t  value) ;

constexpr int32_t& __get_charPos() ;

constexpr int32_t const& __get_charPos() const;

constexpr void __set_byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_byteBuffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_byteBuffer() const;

constexpr void __set_flushEncoder(bool  value) ;

constexpr bool& __get_flushEncoder() ;

constexpr bool const& __get_flushEncoder() const;

constexpr void __set_flushStream(bool  value) ;

constexpr bool& __get_flushStream() ;

constexpr bool const& __get_flushStream() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x250625c size 0x724 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2506980 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "haveWrittenPreamble", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "encoder", ty: "::System::Text::Encoder*", modifiers: "", def_value: None }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "byteBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "flushEncoder", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flushStream", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __StreamWriter___FlushAsyncInternal_d__74(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  haveWrittenPreamble, ::System::IO::StreamWriter*  _this, ::System::Text::Encoding*  encoding, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken, ::System::Text::Encoder*  encoder, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, int32_t  charPos, ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuffer, bool  flushEncoder, bool  flushStream, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StreamWriter___FlushAsyncInternal_d__74(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x90>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StreamWriter___FlushAsyncInternal_d__74()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__StreamWriter___FlushAsyncInternal_d__74, 0x90>, "Size mismatch!");

} // namespace end def System::IO
// Type: System.IO::StreamWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3578))
// CS Name: ::System.IO::StreamWriter*
class CORDL_TYPE StreamWriter : public ::System::IO::TextWriter {
public:
// Declarations
using _FlushAsyncInternal_d__74 = ::System::IO::__StreamWriter___FlushAsyncInternal_d__74;

using _DisposeAsyncCore_d__33 = ::System::IO::__StreamWriter___DisposeAsyncCore_d__33;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::IO::TextWriter)]{};

/// @brief Field _stream offset 0x30
 __declspec(property(get=__get__stream, put=__set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _encoding offset 0x38
 __declspec(property(get=__get__encoding, put=__set__encoding)) ::System::Text::Encoding*  _encoding;

/// @brief Field _encoder offset 0x40
 __declspec(property(get=__get__encoder, put=__set__encoder)) ::System::Text::Encoder*  _encoder;

/// @brief Field _byteBuffer offset 0x48
 __declspec(property(get=__get__byteBuffer, put=__set__byteBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _byteBuffer;

/// @brief Field _charBuffer offset 0x50
 __declspec(property(get=__get__charBuffer, put=__set__charBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  _charBuffer;

/// @brief Field _charPos offset 0x58
 __declspec(property(get=__get__charPos, put=__set__charPos)) int32_t  _charPos;

/// @brief Field _charLen offset 0x5c
 __declspec(property(get=__get__charLen, put=__set__charLen)) int32_t  _charLen;

/// @brief Field _autoFlush offset 0x60
 __declspec(property(get=__get__autoFlush, put=__set__autoFlush)) bool  _autoFlush;

/// @brief Field _haveWrittenPreamble offset 0x61
 __declspec(property(get=__get__haveWrittenPreamble, put=__set__haveWrittenPreamble)) bool  _haveWrittenPreamble;

/// @brief Field _closable offset 0x62
 __declspec(property(get=__get__closable, put=__set__closable)) bool  _closable;

/// @brief Field _asyncWriteTask offset 0x68
 __declspec(property(get=__get__asyncWriteTask, put=__set__asyncWriteTask)) ::System::Threading::Tasks::Task*  _asyncWriteTask;

 __declspec(property(put=set_AutoFlush)) bool  AutoFlush;

 __declspec(property(get=get_LeaveOpen)) bool  LeaveOpen;

 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(put=set_HaveWrittenPreamble_Prop)) bool  HaveWrittenPreamble_Prop;

static inline void setStaticF_Null(::System::IO::StreamWriter*  value) ;

static inline ::System::IO::StreamWriter* getStaticF_Null() ;

constexpr void __set__stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__stream() const;

constexpr void __set__encoding(::System::Text::Encoding*  value) ;

constexpr ::System::Text::Encoding* __get__encoding() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> __get__encoding() const;

constexpr void __set__encoder(::System::Text::Encoder*  value) ;

constexpr ::System::Text::Encoder* __get__encoder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoder*> __get__encoder() const;

constexpr void __set__byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__byteBuffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__byteBuffer() const;

constexpr void __set__charBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get__charBuffer() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get__charBuffer() const;

constexpr void __set__charPos(int32_t  value) ;

constexpr int32_t& __get__charPos() ;

constexpr int32_t const& __get__charPos() const;

constexpr void __set__charLen(int32_t  value) ;

constexpr int32_t& __get__charLen() ;

constexpr int32_t const& __get__charLen() const;

constexpr void __set__autoFlush(bool  value) ;

constexpr bool& __get__autoFlush() ;

constexpr bool const& __get__autoFlush() const;

constexpr void __set__haveWrittenPreamble(bool  value) ;

constexpr bool& __get__haveWrittenPreamble() ;

constexpr bool const& __get__haveWrittenPreamble() const;

constexpr void __set__closable(bool  value) ;

constexpr bool& __get__closable() ;

constexpr bool const& __get__closable() const;

constexpr void __set__asyncWriteTask(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get__asyncWriteTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get__asyncWriteTask() const;

/// @brief Method CheckAsyncTaskInProgress addr 0x2503a64 size 0x64 virtual false final false
inline void CheckAsyncTaskInProgress() ;

/// @brief Method ThrowAsyncIOInProgress addr 0x2503ac8 size 0x50 virtual false final false
static inline void ThrowAsyncIOInProgress() ;

/// @brief Method get_UTF8NoBOM addr 0x2503b18 size 0x50 virtual false final false
static inline ::System::Text::Encoding* get_UTF8NoBOM() ;

static inline ::System::IO::StreamWriter* New_ctor() ;

/// @brief Method .ctor addr 0x2503b68 size 0xbc virtual false final false
inline void _ctor() ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor addr 0x2503cac size 0x74 virtual false final false
inline void _ctor(::System::IO::Stream*  stream) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor addr 0x2503f38 size 0xc virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

/// @brief Method .ctor addr 0x2503f44 size 0x8 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen) ;

/// @brief Method .ctor addr 0x2503d20 size 0x218 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen) ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path) ;

/// @brief Method .ctor addr 0x2504088 size 0x74 virtual false final false
inline void _ctor(::StringW  path) ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path, bool  append) ;

/// @brief Method .ctor addr 0x250434c size 0x78 virtual false final false
inline void _ctor(::StringW  path, bool  append) ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

/// @brief Method .ctor addr 0x25040fc size 0x250 virtual false final false
inline void _ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

/// @brief Method Init addr 0x2503f4c size 0x13c virtual false final false
inline void Init(::System::IO::Stream*  streamArg, ::System::Text::Encoding*  encodingArg, int32_t  bufferSize, bool  shouldLeaveOpen) ;

/// @brief Method Close addr 0x2504440 size 0x6c virtual true final false
inline void Close() ;

/// @brief Method Dispose addr 0x25044ac size 0x94 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method DisposeAsync addr 0x25046c0 size 0xbc virtual true final false
inline ::System::Threading::Tasks::ValueTask DisposeAsync() ;

/// @brief Method DisposeAsyncCore addr 0x250477c size 0xa8 virtual false final false
inline ::System::Threading::Tasks::ValueTask DisposeAsyncCore() ;

/// @brief Method CloseStreamFromDispose addr 0x25048f0 size 0xc8 virtual false final false
inline void CloseStreamFromDispose(bool  disposing) ;

/// @brief Method Flush addr 0x25049c8 size 0x20 virtual true final false
inline void Flush() ;

/// @brief Method Flush addr 0x2504540 size 0x180 virtual false final false
inline void Flush(bool  flushStream, bool  flushEncoder) ;

/// @brief Method set_AutoFlush addr 0x25049e8 size 0x44 virtual true final false
inline void set_AutoFlush(bool  value) ;

/// @brief Method get_LeaveOpen addr 0x25049b8 size 0x10 virtual false final false
inline bool get_LeaveOpen() ;

/// @brief Method get_Encoding addr 0x2504a2c size 0x8 virtual true final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method Write addr 0x2504a34 size 0x8c virtual true final false
inline void Write(char16_t  value) ;

/// @brief Method Write addr 0x2504ac0 size 0x268 virtual true final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer) ;

/// @brief Method Write addr 0x2504d28 size 0x3d8 virtual true final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteSpan addr 0x2505100 size 0x2c8 virtual false final false
inline void WriteSpan(::System::ReadOnlySpan_1<char16_t>  buffer, bool  appendNewLine) ;

/// @brief Method Write addr 0x25053c8 size 0x26c virtual true final false
inline void Write(::StringW  value) ;

/// @brief Method WriteLine addr 0x2505634 size 0x2fc virtual true final false
inline void WriteLine(::StringW  value) ;

/// @brief Method FlushAsync addr 0x2505930 size 0x138 virtual true final false
inline ::System::Threading::Tasks::Task* FlushAsync() ;

/// @brief Method set_HaveWrittenPreamble_Prop addr 0x2505dd0 size 0xc virtual false final false
inline void set_HaveWrittenPreamble_Prop(bool  value) ;

/// @brief Method FlushAsyncInternal addr 0x2505c5c size 0x174 virtual false final false
inline ::System::Threading::Tasks::Task* FlushAsyncInternal(bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t,::Array<char16_t>*>  sCharBuffer, int32_t  sCharPos, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FlushAsyncInternal addr 0x2505ddc size 0x134 virtual false final false
static inline ::System::Threading::Tasks::Task* FlushAsyncInternal(::System::IO::StreamWriter*  _this, bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, int32_t  charPos, bool  haveWrittenPreamble, ::System::Text::Encoding*  encoding, ::System::Text::Encoder*  encoder, ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuffer, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamWriter(StreamWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamWriter(StreamWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StreamWriter()  = default;
public:


// Fields

// Static field Null


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::StreamWriter, 0x70>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::StreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamWriter*, "System.IO", "StreamWriter");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamWriter___DisposeAsyncCore_d__33, "System.IO", "StreamWriter/<DisposeAsyncCore>d__33");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamWriter___FlushAsyncInternal_d__74, "System.IO", "StreamWriter/<FlushAsyncInternal>d__74");
