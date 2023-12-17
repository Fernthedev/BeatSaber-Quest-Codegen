#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestStream)
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
struct __WebRequestStream___WriteChunkTrailer_inner_d__39;
}
namespace System::Net {
struct __WebRequestStream___SetHeadersAsync_d__37;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
struct __WebRequestStream___Initialize_d__36;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
struct __WebRequestStream___WriteRequestAsync_d__38;
}
namespace System::Net {
struct __WebRequestStream___WriteAsyncInner_d__33;
}
namespace System::Net {
struct __WebRequestStream___ProcessWrite_d__34;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
struct __WebRequestStream___FinishWriting_d__31;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class WebConnection;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
struct __WebRequestStream___WriteChunkTrailer_d__40;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
struct __WebRequestStream___FinishWriting_d__31;
}
namespace System::Net {
struct __WebRequestStream___Initialize_d__36;
}
namespace System::Net {
struct __WebRequestStream___ProcessWrite_d__34;
}
namespace System::Net {
struct __WebRequestStream___SetHeadersAsync_d__37;
}
namespace System::Net {
struct __WebRequestStream___WriteAsyncInner_d__33;
}
namespace System::Net {
struct __WebRequestStream___WriteChunkTrailer_d__40;
}
namespace System::Net {
struct __WebRequestStream___WriteChunkTrailer_inner_d__39;
}
namespace System::Net {
struct __WebRequestStream___WriteRequestAsync_d__38;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebRequestStream);
MARK_VAL_T(::System::Net::__WebRequestStream___FinishWriting_d__31);
MARK_VAL_T(::System::Net::__WebRequestStream___Initialize_d__36);
MARK_VAL_T(::System::Net::__WebRequestStream___ProcessWrite_d__34);
MARK_VAL_T(::System::Net::__WebRequestStream___SetHeadersAsync_d__37);
MARK_VAL_T(::System::Net::__WebRequestStream___WriteAsyncInner_d__33);
MARK_VAL_T(::System::Net::__WebRequestStream___WriteChunkTrailer_d__40);
MARK_VAL_T(::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39);
MARK_VAL_T(::System::Net::__WebRequestStream___WriteRequestAsync_d__38);
// Type: ::<FinishWriting>d__31
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9230))
// CS Name: ::WebRequestStream::<FinishWriting>d__31
struct CORDL_TYPE __WebRequestStream___FinishWriting_d__31 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebRequestStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

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

constexpr void __set___4__this(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29e51f0 size 0x2e0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e54d0 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebRequestStream___FinishWriting_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebRequestStream___FinishWriting_d__31(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebRequestStream___FinishWriting_d__31()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequestStream___FinishWriting_d__31, 0x40>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<WriteAsyncInner>d__33
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9231))
// CS Name: ::WebRequestStream::<WriteAsyncInner>d__33
struct CORDL_TYPE __WebRequestStream___WriteAsyncInner_d__33 : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebRequestStream*  __4__this;

/// @brief Field buffer offset 0x28
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field offset offset 0x30
 __declspec(property(get=__get_offset, put=__set_offset)) int32_t  offset;

/// @brief Field size offset 0x34
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field cancellationToken offset 0x38
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completion offset 0x40
 __declspec(property(get=__get_completion, put=__set_completion)) ::System::Net::WebCompletionSource*  completion;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2 offset 0x58
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get___4__this() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_offset(int32_t  value) ;

constexpr int32_t& __get_offset() ;

constexpr int32_t const& __get_offset() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_completion(::System::Net::WebCompletionSource*  value) ;

constexpr ::System::Net::WebCompletionSource* __get_completion() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource*> __get_completion() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29e54dc size 0x4ac virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e5988 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "completion", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebRequestStream___WriteAsyncInner_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebCompletionSource*  completion, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebRequestStream___WriteAsyncInner_d__33(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebRequestStream___WriteAsyncInner_d__33()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequestStream___WriteAsyncInner_d__33, 0x60>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<ProcessWrite>d__34
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9232))
// CS Name: ::WebRequestStream::<ProcessWrite>d__34
struct CORDL_TYPE __WebRequestStream___ProcessWrite_d__34 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebRequestStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field size offset 0x30
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field buffer offset 0x38
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field offset offset 0x40
 __declspec(property(get=__get_offset, put=__set_offset)) int32_t  offset;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_offset(int32_t  value) ;

constexpr int32_t& __get_offset() ;

constexpr int32_t const& __get_offset() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29e5994 size 0x534 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e5ec8 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebRequestStream___ProcessWrite_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, int32_t  size, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebRequestStream___ProcessWrite_d__34(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebRequestStream___ProcessWrite_d__34()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequestStream___ProcessWrite_d__34, 0x58>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<Initialize>d__36
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9233))
// CS Name: ::WebRequestStream::<Initialize>d__36
struct CORDL_TYPE __WebRequestStream___Initialize_d__36 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebRequestStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2 offset 0x40
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29e5ed4 size 0x308 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e61dc size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebRequestStream___Initialize_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebRequestStream___Initialize_d__36(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebRequestStream___Initialize_d__36()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequestStream___Initialize_d__36, 0x48>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<SetHeadersAsync>d__37
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9234))
// CS Name: ::WebRequestStream::<SetHeadersAsync>d__37
struct CORDL_TYPE __WebRequestStream___SetHeadersAsync_d__37 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebRequestStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field setInternalLength offset 0x30
 __declspec(property(get=__get_setInternalLength, put=__set_setInternalLength)) bool  setInternalLength;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_setInternalLength(bool  value) ;

constexpr bool& __get_setInternalLength() ;

constexpr bool const& __get_setInternalLength() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29e61e8 size 0x69c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e6884 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "setInternalLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebRequestStream___SetHeadersAsync_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, bool  setInternalLength, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebRequestStream___SetHeadersAsync_d__37(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebRequestStream___SetHeadersAsync_d__37()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequestStream___SetHeadersAsync_d__37, 0x48>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<WriteRequestAsync>d__38
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9235))
// CS Name: ::WebRequestStream::<WriteRequestAsync>d__38
struct CORDL_TYPE __WebRequestStream___WriteRequestAsync_d__38 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebRequestStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <buffer>5__2 offset 0x30
 __declspec(property(get=__get__buffer_5__2, put=__set__buffer_5__2)) ::System::Net::BufferOffsetSize*  _buffer_5__2;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2 offset 0x48
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__buffer_5__2(::System::Net::BufferOffsetSize*  value) ;

constexpr ::System::Net::BufferOffsetSize* __get__buffer_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::BufferOffsetSize*> __get__buffer_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29e6890 size 0x4b8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e6d48 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebRequestStream___WriteRequestAsync_d__38(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::BufferOffsetSize*  _buffer_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebRequestStream___WriteRequestAsync_d__38(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebRequestStream___WriteRequestAsync_d__38()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequestStream___WriteRequestAsync_d__38, 0x50>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<WriteChunkTrailer_inner>d__39
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9236))
// CS Name: ::WebRequestStream::<WriteChunkTrailer_inner>d__39
struct CORDL_TYPE __WebRequestStream___WriteChunkTrailer_inner_d__39 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebRequestStream*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

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

constexpr void __set___4__this(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29e6d54 size 0x234 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e6f88 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebRequestStream___WriteChunkTrailer_inner_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebRequestStream___WriteChunkTrailer_inner_d__39(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebRequestStream___WriteChunkTrailer_inner_d__39()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39, 0x40>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<WriteChunkTrailer>d__40
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9237))
// CS Name: ::WebRequestStream::<WriteChunkTrailer>d__40
struct CORDL_TYPE __WebRequestStream___WriteChunkTrailer_d__40 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebRequestStream*  __4__this;

/// @brief Field <cts>5__2 offset 0x28
 __declspec(property(get=__get__cts_5__2, put=__set__cts_5__2)) ::System::Threading::CancellationTokenSource*  _cts_5__2;

/// @brief Field <timeoutTask>5__3 offset 0x30
 __declspec(property(get=__get__timeoutTask_5__3, put=__set__timeoutTask_5__3)) ::System::Threading::Tasks::Task*  _timeoutTask_5__3;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1;

/// @brief Field <>u__2 offset 0x48
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebRequestStream*  value) ;

constexpr ::System::Net::WebRequestStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> __get___4__this() const;

constexpr void __set__cts_5__2(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cts_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cts_5__2() const;

constexpr void __set__timeoutTask_5__3(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get__timeoutTask_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get__timeoutTask_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x29e6f94 size 0x6c0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29e7654 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __WebRequestStream___WriteChunkTrailer_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::System::Threading::CancellationTokenSource*  _cts_5__2, ::System::Threading::Tasks::Task*  _timeoutTask_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebRequestStream___WriteChunkTrailer_d__40(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebRequestStream___WriteChunkTrailer_d__40()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequestStream___WriteChunkTrailer_d__40, 0x58>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::WebRequestStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9220))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9238))
// CS Name: ::System.Net::WebRequestStream*
class CORDL_TYPE WebRequestStream : public ::System::Net::WebConnectionStream {
public:
// Declarations
using _WriteChunkTrailer_d__40 = ::System::Net::__WebRequestStream___WriteChunkTrailer_d__40;

using _WriteChunkTrailer_inner_d__39 = ::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39;

using _WriteRequestAsync_d__38 = ::System::Net::__WebRequestStream___WriteRequestAsync_d__38;

using _SetHeadersAsync_d__37 = ::System::Net::__WebRequestStream___SetHeadersAsync_d__37;

using _Initialize_d__36 = ::System::Net::__WebRequestStream___Initialize_d__36;

using _ProcessWrite_d__34 = ::System::Net::__WebRequestStream___ProcessWrite_d__34;

using _WriteAsyncInner_d__33 = ::System::Net::__WebRequestStream___WriteAsyncInner_d__33;

using _FinishWriting_d__31 = ::System::Net::__WebRequestStream___FinishWriting_d__31;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::Net::WebConnectionStream)]{};

/// @brief Field writeBuffer offset 0x58
 __declspec(property(get=__get_writeBuffer, put=__set_writeBuffer)) ::System::IO::MemoryStream*  writeBuffer;

/// @brief Field requestWritten offset 0x60
 __declspec(property(get=__get_requestWritten, put=__set_requestWritten)) bool  requestWritten;

/// @brief Field allowBuffering offset 0x61
 __declspec(property(get=__get_allowBuffering, put=__set_allowBuffering)) bool  allowBuffering;

/// @brief Field sendChunked offset 0x62
 __declspec(property(get=__get_sendChunked, put=__set_sendChunked)) bool  sendChunked;

/// @brief Field pendingWrite offset 0x68
 __declspec(property(get=__get_pendingWrite, put=__set_pendingWrite)) ::System::Net::WebCompletionSource*  pendingWrite;

/// @brief Field totalWritten offset 0x70
 __declspec(property(get=__get_totalWritten, put=__set_totalWritten)) int64_t  totalWritten;

/// @brief Field headers offset 0x78
 __declspec(property(get=__get_headers, put=__set_headers)) ::ArrayW<uint8_t,::Array<uint8_t>*>  headers;

/// @brief Field headersSent offset 0x80
 __declspec(property(get=__get_headersSent, put=__set_headersSent)) bool  headersSent;

/// @brief Field completeRequestWritten offset 0x84
 __declspec(property(get=__get_completeRequestWritten, put=__set_completeRequestWritten)) int32_t  completeRequestWritten;

/// @brief Field chunkTrailerWritten offset 0x88
 __declspec(property(get=__get_chunkTrailerWritten, put=__set_chunkTrailerWritten)) int32_t  chunkTrailerWritten;

/// @brief Field <InnerStream>k__BackingField offset 0x90
 __declspec(property(get=__get__InnerStream_k__BackingField, put=__set__InnerStream_k__BackingField)) ::System::IO::Stream*  _InnerStream_k__BackingField;

/// @brief Field <KeepAlive>k__BackingField offset 0x98
 __declspec(property(get=__get__KeepAlive_k__BackingField, put=__set__KeepAlive_k__BackingField)) bool  _KeepAlive_k__BackingField;

 __declspec(property(get=get_InnerStream)) ::System::IO::Stream*  InnerStream;

 __declspec(property(get=get_KeepAlive)) bool  KeepAlive;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_HasWriteBuffer)) bool  HasWriteBuffer;

 __declspec(property(get=get_WriteBufferLength)) int32_t  WriteBufferLength;

static inline void setStaticF_crlf(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_crlf() ;

constexpr void __set_writeBuffer(::System::IO::MemoryStream*  value) ;

constexpr ::System::IO::MemoryStream* __get_writeBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> __get_writeBuffer() const;

constexpr void __set_requestWritten(bool  value) ;

constexpr bool& __get_requestWritten() ;

constexpr bool const& __get_requestWritten() const;

constexpr void __set_allowBuffering(bool  value) ;

constexpr bool& __get_allowBuffering() ;

constexpr bool const& __get_allowBuffering() const;

constexpr void __set_sendChunked(bool  value) ;

constexpr bool& __get_sendChunked() ;

constexpr bool const& __get_sendChunked() const;

constexpr void __set_pendingWrite(::System::Net::WebCompletionSource*  value) ;

constexpr ::System::Net::WebCompletionSource* __get_pendingWrite() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource*> __get_pendingWrite() const;

constexpr void __set_totalWritten(int64_t  value) ;

constexpr int64_t& __get_totalWritten() ;

constexpr int64_t const& __get_totalWritten() const;

constexpr void __set_headers(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_headers() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_headers() const;

constexpr void __set_headersSent(bool  value) ;

constexpr bool& __get_headersSent() ;

constexpr bool const& __get_headersSent() const;

constexpr void __set_completeRequestWritten(int32_t  value) ;

constexpr int32_t& __get_completeRequestWritten() ;

constexpr int32_t const& __get_completeRequestWritten() const;

constexpr void __set_chunkTrailerWritten(int32_t  value) ;

constexpr int32_t& __get_chunkTrailerWritten() ;

constexpr int32_t const& __get_chunkTrailerWritten() const;

constexpr void __set__InnerStream_k__BackingField(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__InnerStream_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__InnerStream_k__BackingField() const;

constexpr void __set__KeepAlive_k__BackingField(bool  value) ;

constexpr bool& __get__KeepAlive_k__BackingField() ;

constexpr bool const& __get__KeepAlive_k__BackingField() const;

static inline ::System::Net::WebRequestStream* New_ctor(::System::Net::WebConnection*  connection, ::System::Net::WebOperation*  operation, ::System::IO::Stream*  stream, ::System::Net::WebConnectionTunnel*  tunnel) ;

/// @brief Method .ctor addr 0x29df4f0 size 0x160 virtual false final false
inline void _ctor(::System::Net::WebConnection*  connection, ::System::Net::WebOperation*  operation, ::System::IO::Stream*  stream, ::System::Net::WebConnectionTunnel*  tunnel) ;

/// @brief Method get_InnerStream addr 0x29e443c size 0x8 virtual false final false
inline ::System::IO::Stream* get_InnerStream() ;

/// @brief Method get_KeepAlive addr 0x29e4444 size 0x8 virtual false final false
inline bool get_KeepAlive() ;

/// @brief Method get_CanRead addr 0x29e444c size 0x8 virtual true final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x29e4454 size 0x8 virtual true final false
inline bool get_CanWrite() ;

/// @brief Method get_HasWriteBuffer addr 0x29e445c size 0x34 virtual false final false
inline bool get_HasWriteBuffer() ;

/// @brief Method get_WriteBufferLength addr 0x29e4490 size 0x44 virtual false final false
inline int32_t get_WriteBufferLength() ;

/// @brief Method GetWriteBuffer addr 0x29e44d4 size 0xdc virtual false final false
inline ::System::Net::BufferOffsetSize* GetWriteBuffer() ;

/// @brief Method FinishWriting addr 0x29e45b0 size 0xd8 virtual false final false
inline ::System::Threading::Tasks::Task* FinishWriting(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteAsync addr 0x29e4688 size 0x258 virtual true final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteAsyncInner addr 0x29e48e0 size 0x104 virtual false final false
inline ::System::Threading::Tasks::Task* WriteAsyncInner(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::WebCompletionSource*  completion, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ProcessWrite addr 0x29e49e4 size 0x100 virtual false final false
inline ::System::Threading::Tasks::Task* ProcessWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CheckWriteOverflow addr 0x29e4ae4 size 0x9c virtual false final false
inline void CheckWriteOverflow(int64_t  contentLength, int64_t  totalWritten, int64_t  size) ;

/// @brief Method Initialize addr 0x29e3360 size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task* Initialize(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetHeadersAsync addr 0x29e4b80 size 0xe4 virtual false final false
inline ::System::Threading::Tasks::Task* SetHeadersAsync(bool  setInternalLength, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteRequestAsync addr 0x29e4c64 size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task* WriteRequestAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteChunkTrailer_inner addr 0x29e4d40 size 0xd8 virtual false final false
inline ::System::Threading::Tasks::Task* WriteChunkTrailer_inner(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteChunkTrailer addr 0x29e4e18 size 0xd4 virtual false final false
inline ::System::Threading::Tasks::Task* WriteChunkTrailer() ;

/// @brief Method KillBuffer addr 0x29d1800 size 0x8 virtual false final false
inline void KillBuffer() ;

/// @brief Method ReadAsync addr 0x29e4eec size 0xb0 virtual true final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryReadFromBufferedContent addr 0x29e4f9c size 0x40 virtual true final false
inline bool TryReadFromBufferedContent(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ByRef<int32_t>  result) ;

/// @brief Method Close_internal addr 0x29e4fdc size 0x180 virtual true final false
inline void Close_internal(ByRef<bool>  disposed) ;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestStream(WebRequestStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestStream(WebRequestStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebRequestStream()  = default;
public:


// Fields

// Static field crlf


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestStream, 0xa0>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebRequestStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestStream*, "System.Net", "WebRequestStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequestStream___FinishWriting_d__31, "System.Net", "WebRequestStream/<FinishWriting>d__31");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequestStream___Initialize_d__36, "System.Net", "WebRequestStream/<Initialize>d__36");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequestStream___ProcessWrite_d__34, "System.Net", "WebRequestStream/<ProcessWrite>d__34");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequestStream___SetHeadersAsync_d__37, "System.Net", "WebRequestStream/<SetHeadersAsync>d__37");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequestStream___WriteAsyncInner_d__33, "System.Net", "WebRequestStream/<WriteAsyncInner>d__33");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequestStream___WriteChunkTrailer_d__40, "System.Net", "WebRequestStream/<WriteChunkTrailer>d__40");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39, "System.Net", "WebRequestStream/<WriteChunkTrailer_inner>d__39");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequestStream___WriteRequestAsync_d__38, "System.Net", "WebRequestStream/<WriteRequestAsync>d__38");
