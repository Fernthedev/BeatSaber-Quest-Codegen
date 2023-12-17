#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedSizeReadStream)
namespace System::IO {
class Stream;
}
namespace System::Net {
struct __FixedSizeReadStream___ProcessReadAsync_d__5;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
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
class FixedSizeReadStream;
}
namespace System::Net {
struct __FixedSizeReadStream___ProcessReadAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FixedSizeReadStream);
MARK_VAL_T(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5);
// Type: ::<ProcessReadAsync>d__5
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9166))
// CS Name: ::FixedSizeReadStream::<ProcessReadAsync>d__5
struct CORDL_TYPE __FixedSizeReadStream___ProcessReadAsync_d__5 : public ::bs_hook::ValueTypeWrapper<0x58> {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::FixedSizeReadStream*  __4__this;

/// @brief Field size offset 0x30
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field buffer offset 0x38
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field offset offset 0x40
 __declspec(property(get=__get_offset, put=__set_offset)) int32_t  offset;

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

constexpr void __set___4__this(::System::Net::FixedSizeReadStream*  value) ;

constexpr ::System::Net::FixedSizeReadStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::FixedSizeReadStream*> __get___4__this() const;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_offset(int32_t  value) ;

constexpr int32_t& __get_offset() ;

constexpr int32_t const& __get_offset() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x29c4ad4 size 0x2b0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x29c4d84 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::FixedSizeReadStream*", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr __FixedSizeReadStream___ProcessReadAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::FixedSizeReadStream*  __4__this, int32_t  size, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FixedSizeReadStream___ProcessReadAsync_d__5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FixedSizeReadStream___ProcessReadAsync_d__5()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, 0x58>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::FixedSizeReadStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9167))
// CS Name: ::System.Net::FixedSizeReadStream*
class CORDL_TYPE FixedSizeReadStream : public ::System::Net::WebReadStream {
public:
// Declarations
using _ProcessReadAsync_d__5 = ::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Net::WebReadStream)]{};

/// @brief Field <ContentLength>k__BackingField offset 0x40
 __declspec(property(get=__get__ContentLength_k__BackingField, put=__set__ContentLength_k__BackingField)) int64_t  _ContentLength_k__BackingField;

/// @brief Field position offset 0x48
 __declspec(property(get=__get_position, put=__set_position)) int64_t  position;

 __declspec(property(get=get_ContentLength)) int64_t  ContentLength;

constexpr void __set__ContentLength_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__ContentLength_k__BackingField() ;

constexpr int64_t const& __get__ContentLength_k__BackingField() const;

constexpr void __set_position(int64_t  value) ;

constexpr int64_t& __get_position() ;

constexpr int64_t const& __get_position() const;

/// @brief Method get_ContentLength addr 0x29c497c size 0x8 virtual false final false
inline int64_t get_ContentLength() ;

static inline ::System::Net::FixedSizeReadStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, int64_t  contentLength) ;

/// @brief Method .ctor addr 0x29c4984 size 0x28 virtual false final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, int64_t  contentLength) ;

/// @brief Method ProcessReadAsync addr 0x29c49ac size 0x128 virtual true final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedSizeReadStream(FixedSizeReadStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedSizeReadStream(FixedSizeReadStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FixedSizeReadStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FixedSizeReadStream, 0x50>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::FixedSizeReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FixedSizeReadStream*, "System.Net", "FixedSizeReadStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__FixedSizeReadStream___ProcessReadAsync_d__5, "System.Net", "FixedSizeReadStream/<ProcessReadAsync>d__5");
