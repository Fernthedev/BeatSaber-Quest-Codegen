#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReader)
namespace System::IO {
struct __StreamReader___ReadLineAsyncInternal_d__61;
}
namespace System::Text {
class Encoding;
}
namespace System::IO {
struct __StreamReader___ReadBufferAsync_d__69;
}
namespace System::Text {
class Decoder;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class __StreamReader__NullStreamReader;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::IO {
class StreamReader;
}
namespace System::IO {
struct __StreamReader___ReadBufferAsync_d__69;
}
namespace System::IO {
struct __StreamReader___ReadLineAsyncInternal_d__61;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamReader);
MARK_VAL_T(::System::IO::__StreamReader___ReadBufferAsync_d__69);
MARK_VAL_T(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61);
// Type: ::<ReadLineAsyncInternal>d__61
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3573))
// CS Name: ::StreamReader::<ReadLineAsyncInternal>d__61
struct CORDL_TYPE __StreamReader___ReadLineAsyncInternal_d__61 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::IO::StreamReader*  __4__this;

/// @brief Field <sb>5__2 offset 0x28
 __declspec(property(get=__get__sb_5__2, put=__set__sb_5__2)) ::System::Text::StringBuilder*  _sb_5__2;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1;

/// @brief Field <s>5__3 offset 0x40
 __declspec(property(get=__get__s_5__3, put=__set__s_5__3)) ::StringW  _s_5__3;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> const& __get___t__builder() const;

constexpr void __set___4__this(::System::IO::StreamReader*  value) ;

constexpr ::System::IO::StreamReader* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> __get___4__this() const;

constexpr void __set__sb_5__2(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__sb_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__sb_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__1() const;

constexpr void __set__s_5__3(::StringW  value) ;

constexpr ::StringW& __get__s_5__3() ;

constexpr ::StringW const& __get__s_5__3() const;

/// @brief Method MoveNext addr 0x2502e74 size 0x548 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x25033bc size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_s_5__3", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __StreamReader___ReadLineAsyncInternal_d__61(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::IO::StreamReader*  __4__this, ::System::Text::StringBuilder*  _sb_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1, ::StringW  _s_5__3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StreamReader___ReadLineAsyncInternal_d__61(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StreamReader___ReadLineAsyncInternal_d__61()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, 0x48>, "Size mismatch!");

} // namespace end def System::IO
// Type: ::<ReadBufferAsync>d__69
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3574))
// CS Name: ::StreamReader::<ReadBufferAsync>d__69
struct CORDL_TYPE __StreamReader___ReadBufferAsync_d__69 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::IO::StreamReader*  __4__this;

/// @brief Field <tmpByteBuffer>5__2 offset 0x28
 __declspec(property(get=__get__tmpByteBuffer_5__2, put=__set__tmpByteBuffer_5__2)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _tmpByteBuffer_5__2;

/// @brief Field <tmpStream>5__3 offset 0x30
 __declspec(property(get=__get__tmpStream_5__3, put=__set__tmpStream_5__3)) ::System::IO::Stream*  _tmpStream_5__3;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> const& __get___t__builder() const;

constexpr void __set___4__this(::System::IO::StreamReader*  value) ;

constexpr ::System::IO::StreamReader* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> __get___4__this() const;

constexpr void __set__tmpByteBuffer_5__2(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__tmpByteBuffer_5__2() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__tmpByteBuffer_5__2() const;

constexpr void __set__tmpStream_5__3(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__tmpStream_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__tmpStream_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2503414 size 0x5f8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2503a0c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None }, CppParam { name: "_tmpByteBuffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_tmpStream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr __StreamReader___ReadBufferAsync_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::IO::StreamReader*  __4__this, ::ArrayW<uint8_t,::Array<uint8_t>*>  _tmpByteBuffer_5__2, ::System::IO::Stream*  _tmpStream_5__3, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StreamReader___ReadBufferAsync_d__69(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StreamReader___ReadBufferAsync_d__69()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__StreamReader___ReadBufferAsync_d__69, 0x48>, "Size mismatch!");

} // namespace end def System::IO
// Type: System.IO::StreamReader
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3575))
// CS Name: ::System.IO::StreamReader*
class CORDL_TYPE StreamReader : public ::System::IO::TextReader {
public:
// Declarations
using _ReadBufferAsync_d__69 = ::System::IO::__StreamReader___ReadBufferAsync_d__69;

using _ReadLineAsyncInternal_d__61 = ::System::IO::__StreamReader___ReadLineAsyncInternal_d__61;

using NullStreamReader = ::System::IO::__StreamReader__NullStreamReader;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::IO::TextReader)]{};

/// @brief Field _stream offset 0x18
 __declspec(property(get=__get__stream, put=__set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _encoding offset 0x20
 __declspec(property(get=__get__encoding, put=__set__encoding)) ::System::Text::Encoding*  _encoding;

/// @brief Field _decoder offset 0x28
 __declspec(property(get=__get__decoder, put=__set__decoder)) ::System::Text::Decoder*  _decoder;

/// @brief Field _byteBuffer offset 0x30
 __declspec(property(get=__get__byteBuffer, put=__set__byteBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _byteBuffer;

/// @brief Field _charBuffer offset 0x38
 __declspec(property(get=__get__charBuffer, put=__set__charBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  _charBuffer;

/// @brief Field _charPos offset 0x40
 __declspec(property(get=__get__charPos, put=__set__charPos)) int32_t  _charPos;

/// @brief Field _charLen offset 0x44
 __declspec(property(get=__get__charLen, put=__set__charLen)) int32_t  _charLen;

/// @brief Field _byteLen offset 0x48
 __declspec(property(get=__get__byteLen, put=__set__byteLen)) int32_t  _byteLen;

/// @brief Field _bytePos offset 0x4c
 __declspec(property(get=__get__bytePos, put=__set__bytePos)) int32_t  _bytePos;

/// @brief Field _maxCharsPerBuffer offset 0x50
 __declspec(property(get=__get__maxCharsPerBuffer, put=__set__maxCharsPerBuffer)) int32_t  _maxCharsPerBuffer;

/// @brief Field _detectEncoding offset 0x54
 __declspec(property(get=__get__detectEncoding, put=__set__detectEncoding)) bool  _detectEncoding;

/// @brief Field _checkPreamble offset 0x55
 __declspec(property(get=__get__checkPreamble, put=__set__checkPreamble)) bool  _checkPreamble;

/// @brief Field _isBlocked offset 0x56
 __declspec(property(get=__get__isBlocked, put=__set__isBlocked)) bool  _isBlocked;

/// @brief Field _closable offset 0x57
 __declspec(property(get=__get__closable, put=__set__closable)) bool  _closable;

/// @brief Field _asyncReadTask offset 0x58
 __declspec(property(get=__get__asyncReadTask, put=__set__asyncReadTask)) ::System::Threading::Tasks::Task*  _asyncReadTask;

 __declspec(property(get=get_CurrentEncoding)) ::System::Text::Encoding*  CurrentEncoding;

 __declspec(property(get=get_BaseStream)) ::System::IO::Stream*  BaseStream;

 __declspec(property(get=get_LeaveOpen)) bool  LeaveOpen;

 __declspec(property(get=get_EndOfStream)) bool  EndOfStream;

static inline void setStaticF_Null(::System::IO::StreamReader*  value) ;

static inline ::System::IO::StreamReader* getStaticF_Null() ;

constexpr void __set__stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__stream() const;

constexpr void __set__encoding(::System::Text::Encoding*  value) ;

constexpr ::System::Text::Encoding* __get__encoding() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> __get__encoding() const;

constexpr void __set__decoder(::System::Text::Decoder*  value) ;

constexpr ::System::Text::Decoder* __get__decoder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> __get__decoder() const;

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

constexpr void __set__byteLen(int32_t  value) ;

constexpr int32_t& __get__byteLen() ;

constexpr int32_t const& __get__byteLen() const;

constexpr void __set__bytePos(int32_t  value) ;

constexpr int32_t& __get__bytePos() ;

constexpr int32_t const& __get__bytePos() const;

constexpr void __set__maxCharsPerBuffer(int32_t  value) ;

constexpr int32_t& __get__maxCharsPerBuffer() ;

constexpr int32_t const& __get__maxCharsPerBuffer() const;

constexpr void __set__detectEncoding(bool  value) ;

constexpr bool& __get__detectEncoding() ;

constexpr bool const& __get__detectEncoding() const;

constexpr void __set__checkPreamble(bool  value) ;

constexpr bool& __get__checkPreamble() ;

constexpr bool const& __get__checkPreamble() const;

constexpr void __set__isBlocked(bool  value) ;

constexpr bool& __get__isBlocked() ;

constexpr bool const& __get__isBlocked() const;

constexpr void __set__closable(bool  value) ;

constexpr bool& __get__closable() ;

constexpr bool const& __get__closable() const;

constexpr void __set__asyncReadTask(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get__asyncReadTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get__asyncReadTask() const;

/// @brief Method CheckAsyncTaskInProgress addr 0x2500bec size 0x64 virtual false final false
inline void CheckAsyncTaskInProgress() ;

/// @brief Method ThrowAsyncIOInProgress addr 0x2500c50 size 0x50 virtual false final false
static inline void ThrowAsyncIOInProgress() ;

static inline ::System::IO::StreamReader* New_ctor() ;

/// @brief Method .ctor addr 0x2500ca0 size 0xbc virtual false final false
inline void _ctor() ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor addr 0x2500d64 size 0x3c virtual false final false
inline void _ctor(::System::IO::Stream*  stream) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream, bool  detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x2500da0 size 0x40 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, bool  detectEncodingFromByteOrderMarks) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor addr 0x2501008 size 0x10 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x2501018 size 0x10 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen) ;

/// @brief Method .ctor addr 0x2500de0 size 0x228 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path) ;

/// @brief Method .ctor addr 0x2501150 size 0x38 virtual false final false
inline void _ctor(::StringW  path) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path, bool  detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x2501188 size 0x3c virtual false final false
inline void _ctor(::StringW  path, bool  detectEncodingFromByteOrderMarks) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor addr 0x2501410 size 0xc virtual false final false
inline void _ctor(::StringW  path, ::System::Text::Encoding*  encoding) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor addr 0x250141c size 0xc virtual false final false
inline void _ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize) ;

/// @brief Method .ctor addr 0x25011c4 size 0x24c virtual false final false
inline void _ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize) ;

/// @brief Method Init addr 0x2501028 size 0x128 virtual false final false
inline void Init(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen) ;

/// @brief Method Init addr 0x2501428 size 0x10 virtual false final false
inline void Init(::System::IO::Stream*  stream) ;

/// @brief Method Close addr 0x2501438 size 0x10 virtual true final false
inline void Close() ;

/// @brief Method Dispose addr 0x2501448 size 0xd0 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method get_CurrentEncoding addr 0x2501528 size 0x8 virtual true final false
inline ::System::Text::Encoding* get_CurrentEncoding() ;

/// @brief Method get_BaseStream addr 0x2501530 size 0x8 virtual true final false
inline ::System::IO::Stream* get_BaseStream() ;

/// @brief Method get_LeaveOpen addr 0x2501518 size 0x10 virtual false final false
inline bool get_LeaveOpen() ;

/// @brief Method get_EndOfStream addr 0x2501538 size 0x9c virtual false final false
inline bool get_EndOfStream() ;

/// @brief Method Peek addr 0x25015d4 size 0xc8 virtual true final false
inline int32_t Peek() ;

/// @brief Method Read addr 0x250169c size 0xc8 virtual true final false
inline int32_t Read() ;

/// @brief Method Read addr 0x2501764 size 0x1c0 virtual true final false
inline int32_t Read(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadSpan addr 0x2501924 size 0x268 virtual false final false
inline int32_t ReadSpan(::System::Span_1<char16_t>  buffer) ;

/// @brief Method ReadToEnd addr 0x2501e9c size 0x11c virtual true final false
inline ::StringW ReadToEnd() ;

/// @brief Method CompressBuffer addr 0x2501fb8 size 0x44 virtual false final false
inline void CompressBuffer(int32_t  n) ;

/// @brief Method DetectEncoding addr 0x2501ffc size 0x2b8 virtual false final false
inline void DetectEncoding() ;

/// @brief Method IsPreamble addr 0x25022b4 size 0x130 virtual false final false
inline bool IsPreamble() ;

/// @brief Method ReadBuffer addr 0x25023e4 size 0x16c virtual true final false
inline int32_t ReadBuffer() ;

/// @brief Method ReadBuffer addr 0x2501b8c size 0x310 virtual false final false
inline int32_t ReadBuffer(::System::Span_1<char16_t>  userBuffer, ByRef<bool>  readToUserBuffer) ;

/// @brief Method ReadLine addr 0x2502550 size 0x260 virtual true final false
inline ::StringW ReadLine() ;

/// @brief Method ReadLineAsync addr 0x25027b0 size 0x124 virtual true final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ReadLineAsync() ;

/// @brief Method ReadLineAsyncInternal addr 0x2502aa0 size 0xf0 virtual false final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ReadLineAsyncInternal() ;

/// @brief Method ReadBufferAsync addr 0x2502b90 size 0xf8 virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadBufferAsync() ;

/// @brief Method DataAvailable addr 0x2502c88 size 0x10 virtual false final false
inline bool DataAvailable() ;

// Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamReader(StreamReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamReader(StreamReader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StreamReader()  = default;
public:


// Fields

// Static field Null


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::StreamReader, 0x60>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::StreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamReader*, "System.IO", "StreamReader");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamReader___ReadBufferAsync_d__69, "System.IO", "StreamReader/<ReadBufferAsync>d__69");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, "System.IO", "StreamReader/<ReadLineAsyncInternal>d__61");
