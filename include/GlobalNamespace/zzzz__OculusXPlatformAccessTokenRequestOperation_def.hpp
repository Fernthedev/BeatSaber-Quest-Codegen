#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusXPlatformAccessTokenRequestOperation)
namespace System::Threading {
struct CancellationToken;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace GlobalNamespace {
struct __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState;
}
namespace GlobalNamespace {
class OculusXPlatformAccessTokenRequestOperation;
}
namespace GlobalNamespace {
struct __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState);
MARK_REF_PTR_T(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation);
MARK_VAL_T(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7);
// Type: ::OculusTokenRequestOperationState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16000))
// CS Name: ::OculusXPlatformAccessTokenRequestOperation::OculusTokenRequestOperationState
struct CORDL_TYPE __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped
enum struct ____OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped : int32_t {
__E_NotStarted = static_cast<int32_t>(0x0),
__E_Requesting = static_cast<int32_t>(0x1),
__E_Succeeded = static_cast<int32_t>(0x2),
__E_Failed = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NotStarted value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const NotStarted;

/// @brief Field Requesting value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Requesting;

/// @brief Field Succeeded value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Succeeded;

/// @brief Field Failed value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped () const noexcept {
return std::bit_cast<____OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__7
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16001))
// CS Name: ::OculusXPlatformAccessTokenRequestOperation::<RequestXPlatformAccessToken>d__7
struct CORDL_TYPE __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <attemptCount>5__2 offset 0x30
 __declspec(property(get=__get__attemptCount_5__2, put=__set__attemptCount_5__2)) int32_t  _attemptCount_5__2;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*  value) ;

constexpr ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__attemptCount_5__2(int32_t  value) ;

constexpr int32_t& __get__attemptCount_5__2() ;

constexpr int32_t const& __get__attemptCount_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2800574 size 0x2d8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x280084c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_attemptCount_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  __t__builder, ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*  __4__this, ::System::Threading::CancellationToken  cancellationToken, int32_t  _attemptCount_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OculusXPlatformAccessTokenRequestOperation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16002))
// CS Name: ::OculusXPlatformAccessTokenRequestOperation*
class CORDL_TYPE OculusXPlatformAccessTokenRequestOperation : public ::System::Object {
public:
// Declarations
using _RequestXPlatformAccessToken_d__7 = ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7;

using OculusTokenRequestOperationState = ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field kMillisecondsDelayToCheckCallbackResponse offset 0x0
static constexpr int32_t  kMillisecondsDelayToCheckCallbackResponse{static_cast<int32_t>(0x1f4)};

/// @brief Field kMaxTokenRetry offset 0x0
static constexpr int32_t  kMaxTokenRetry{static_cast<int32_t>(0x3)};

/// @brief Field _tokenData offset 0x10
 __declspec(property(get=__get__tokenData, put=__set__tokenData)) ::GlobalNamespace::XPlatformAccessTokenData*  _tokenData;

/// @brief Field _operationState offset 0x18
 __declspec(property(get=__get__operationState, put=__set__operationState)) ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState  _operationState;

constexpr void __set__tokenData(::GlobalNamespace::XPlatformAccessTokenData*  value) ;

constexpr ::GlobalNamespace::XPlatformAccessTokenData* __get__tokenData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> __get__tokenData() const;

constexpr void __set__operationState(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState  value) ;

constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState& __get__operationState() ;

constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const& __get__operationState() const;

static inline ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* New_ctor() ;

/// @brief Method .ctor addr 0x28001d8 size 0x1c virtual false final false
inline void _ctor() ;

/// @brief Method Run addr 0x2800080 size 0x68 virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* Run(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method RequestXPlatformAccessToken addr 0x28001f4 size 0xf8 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* RequestXPlatformAccessToken(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method RequestAccessToken addr 0x28002ec size 0x10c virtual false final false
inline void RequestAccessToken() ;

/// @brief Method OnCompleteLoadingOculusAccessToken addr 0x28003f8 size 0x17c virtual false final false
inline void OnCompleteLoadingOculusAccessToken(::Oculus::Platform::Message_1<::StringW>*  message) ;

// Ctor Parameters [CppParam { name: "", ty: "OculusXPlatformAccessTokenRequestOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusXPlatformAccessTokenRequestOperation(OculusXPlatformAccessTokenRequestOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusXPlatformAccessTokenRequestOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusXPlatformAccessTokenRequestOperation(OculusXPlatformAccessTokenRequestOperation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusXPlatformAccessTokenRequestOperation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState, "", "OculusXPlatformAccessTokenRequestOperation/OculusTokenRequestOperationState");
NEED_NO_BOX(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*, "", "OculusXPlatformAccessTokenRequestOperation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, "", "OculusXPlatformAccessTokenRequestOperation/<RequestXPlatformAccessToken>d__7");
