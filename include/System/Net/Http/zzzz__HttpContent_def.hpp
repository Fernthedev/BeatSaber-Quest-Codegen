#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContent)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net::Http {
class __HttpContent__FixedMemoryStream;
}
namespace System::Net::Http {
struct __HttpContent___LoadIntoBufferAsync_d__17;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Net {
class TransportContext;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Net::Http::Headers {
class HttpContentHeaders;
}
namespace System {
class IDisposable;
}
namespace System::Net::Http {
struct __HttpContent___ReadAsStringAsync_d__20;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class __HttpContent__FixedMemoryStream;
}
namespace System::Net::Http {
struct __HttpContent___LoadIntoBufferAsync_d__17;
}
namespace System::Net::Http {
struct __HttpContent___ReadAsStringAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpContent);
MARK_REF_PTR_T(::System::Net::Http::__HttpContent__FixedMemoryStream);
MARK_VAL_T(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17);
MARK_VAL_T(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20);
// Type: ::FixedMemoryStream
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14646))
// CS Name: ::HttpContent::FixedMemoryStream*
class CORDL_TYPE __HttpContent__FixedMemoryStream : public ::System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::IO::MemoryStream)]{};

/// @brief Field maxSize offset 0x50
 __declspec(property(get=__get_maxSize, put=__set_maxSize)) int64_t  maxSize;

constexpr void __set_maxSize(int64_t  value) ;

constexpr int64_t& __get_maxSize() ;

constexpr int64_t const& __get_maxSize() const;

static inline ::System::Net::Http::__HttpContent__FixedMemoryStream* New_ctor(int64_t  maxSize) ;

/// @brief Method .ctor addr 0x283288c size 0x28 virtual false final false
inline void _ctor(int64_t  maxSize) ;

/// @brief Method CheckOverflow addr 0x2832ae4 size 0xb0 virtual false final false
inline void CheckOverflow(int32_t  count) ;

/// @brief Method WriteByte addr 0x2832bfc size 0x30 virtual true final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method Write addr 0x2832c2c size 0x48 virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

// Ctor Parameters [CppParam { name: "", ty: "__HttpContent__FixedMemoryStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HttpContent__FixedMemoryStream(__HttpContent__FixedMemoryStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HttpContent__FixedMemoryStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HttpContent__FixedMemoryStream(__HttpContent__FixedMemoryStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HttpContent__FixedMemoryStream()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent__FixedMemoryStream, 0x58>, "Size mismatch!");

} // namespace end def System::Net::Http
// Type: ::<LoadIntoBufferAsync>d__17
namespace System::Net::Http {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14647))
// CS Name: ::HttpContent::<LoadIntoBufferAsync>d__17
struct CORDL_TYPE __HttpContent___LoadIntoBufferAsync_d__17 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::Http::HttpContent*  __4__this;

/// @brief Field maxBufferSize offset 0x28
 __declspec(property(get=__get_maxBufferSize, put=__set_maxBufferSize)) int64_t  maxBufferSize;

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

constexpr void __set___4__this(::System::Net::Http::HttpContent*  value) ;

constexpr ::System::Net::Http::HttpContent* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> __get___4__this() const;

constexpr void __set_maxBufferSize(int64_t  value) ;

constexpr int64_t& __get_maxBufferSize() ;

constexpr int64_t const& __get_maxBufferSize() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2832c74 size 0x264 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2832ed8 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None }, CppParam { name: "maxBufferSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __HttpContent___LoadIntoBufferAsync_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::Http::HttpContent*  __4__this, int64_t  maxBufferSize, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HttpContent___LoadIntoBufferAsync_d__17(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HttpContent___LoadIntoBufferAsync_d__17()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, 0x40>, "Size mismatch!");

} // namespace end def System::Net::Http
// Type: ::<ReadAsStringAsync>d__20
namespace System::Net::Http {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14648))
// CS Name: ::HttpContent::<ReadAsStringAsync>d__20
struct CORDL_TYPE __HttpContent___ReadAsStringAsync_d__20 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::Http::HttpContent*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::Http::HttpContent*  value) ;

constexpr ::System::Net::Http::HttpContent* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2832ee4 size 0x370 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28333d0 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __HttpContent___ReadAsStringAsync_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::Net::Http::HttpContent*  __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HttpContent___ReadAsStringAsync_d__20(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HttpContent___ReadAsStringAsync_d__20()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, 0x38>, "Size mismatch!");

} // namespace end def System::Net::Http
// Type: System.Net.Http::HttpContent
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14649))
// CS Name: ::System.Net.Http::HttpContent*
class CORDL_TYPE HttpContent : public ::System::Object {
public:
// Declarations
using _ReadAsStringAsync_d__20 = ::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20;

using _LoadIntoBufferAsync_d__17 = ::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17;

using FixedMemoryStream = ::System::Net::Http::__HttpContent__FixedMemoryStream;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field buffer offset 0x10
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::System::Net::Http::__HttpContent__FixedMemoryStream*  buffer;

/// @brief Field disposed offset 0x18
 __declspec(property(get=__get_disposed, put=__set_disposed)) bool  disposed;

/// @brief Field headers offset 0x20
 __declspec(property(get=__get_headers, put=__set_headers)) ::System::Net::Http::Headers::HttpContentHeaders*  headers;

 __declspec(property(get=get_Headers)) ::System::Net::Http::Headers::HttpContentHeaders*  Headers;

 __declspec(property(get=get_LoadedBufferLength)) ::System::Nullable_1<int64_t>  LoadedBufferLength;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_buffer(::System::Net::Http::__HttpContent__FixedMemoryStream*  value) ;

constexpr ::System::Net::Http::__HttpContent__FixedMemoryStream* __get_buffer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::__HttpContent__FixedMemoryStream*> __get_buffer() const;

constexpr void __set_disposed(bool  value) ;

constexpr bool& __get_disposed() ;

constexpr bool const& __get_disposed() const;

constexpr void __set_headers(::System::Net::Http::Headers::HttpContentHeaders*  value) ;

constexpr ::System::Net::Http::Headers::HttpContentHeaders* __get_headers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpContentHeaders*> __get_headers() const;

/// @brief Method get_Headers addr 0x282e3b4 size 0x6c virtual false final false
inline ::System::Net::Http::Headers::HttpContentHeaders* get_Headers() ;

/// @brief Method get_LoadedBufferLength addr 0x2832730 size 0x7c virtual false final false
inline ::System::Nullable_1<int64_t> get_LoadedBufferLength() ;

/// @brief Method CopyToAsync addr 0x28304c8 size 0x8 virtual false final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  stream) ;

/// @brief Method CopyToAsync addr 0x28327ac size 0x7c virtual false final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context) ;

/// @brief Method CreateFixedMemoryStream addr 0x2832828 size 0x64 virtual false final false
static inline ::System::Net::Http::__HttpContent__FixedMemoryStream* CreateFixedMemoryStream(int64_t  maxBufferSize) ;

/// @brief Method Dispose addr 0x28328b4 size 0x10 virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x28328c4 size 0x2c virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method LoadIntoBufferAsync addr 0x28328f0 size 0x8 virtual false final false
inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync() ;

/// @brief Method LoadIntoBufferAsync addr 0x28303f0 size 0xd8 virtual false final false
inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync(int64_t  maxBufferSize) ;

/// @brief Method ReadAsStringAsync addr 0x2832578 size 0xf0 virtual false final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAsStringAsync() ;

/// @brief Method GetEncodingFromBuffer addr 0x28328f8 size 0x178 virtual false final false
static inline ::System::Text::Encoding* GetEncodingFromBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  length, ByRef<int32_t>  preambleLength) ;

/// @brief Method StartsWith addr 0x2832a70 size 0x74 virtual false final false
static inline int32_t StartsWith(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method SerializeToStreamAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context) ;

/// @brief Method TryComputeLength addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryComputeLength(ByRef<int64_t>  length) ;

static inline ::System::Net::Http::HttpContent* New_ctor() ;

/// @brief Method .ctor addr 0x2830b9c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpContent(HttpContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpContent(HttpContent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpContent()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpContent, 0x28>, "Size mismatch!");

} // namespace end def System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent*, "System.Net.Http", "HttpContent");
NEED_NO_BOX(::System::Net::Http::__HttpContent__FixedMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent__FixedMemoryStream*, "System.Net.Http", "HttpContent/FixedMemoryStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, "System.Net.Http", "HttpContent/<LoadIntoBufferAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, "System.Net.Http", "HttpContent/<ReadAsStringAsync>d__20");
