#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncValueTaskMethodBuilder_1)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncValueTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct AsyncValueTaskMethodBuilder_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncValueTaskMethodBuilder_1<int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1);
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3358))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3358), inst: 98 })
// CS Name: ::System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncValueTaskMethodBuilder_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _methodBuilder offset 0x0
 __declspec(property(get=__get__methodBuilder, put=__set__methodBuilder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  _methodBuilder;

/// @brief Field _result offset 0x18
 __declspec(property(get=__get__result, put=__set__result)) int32_t  _result;

/// @brief Field _haveResult offset 0x1c
 __declspec(property(get=__get__haveResult, put=__set__haveResult)) bool  _haveResult;

/// @brief Field _useBuilder offset 0x1d
 __declspec(property(get=__get__useBuilder, put=__set__useBuilder)) bool  _useBuilder;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::ValueTask_1<int32_t>  Task;

constexpr void __set__methodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>& __get__methodBuilder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> const& __get__methodBuilder() const;

constexpr void __set__result(int32_t  value) ;

constexpr int32_t& __get__result() ;

constexpr int32_t const& __get__result() const;

constexpr void __set__haveResult(bool  value) ;

constexpr bool& __get__haveResult() ;

constexpr bool const& __get__haveResult() const;

constexpr void __set__useBuilder(bool  value) ;

constexpr bool& __get__useBuilder() ;

constexpr bool const& __get__useBuilder() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(int32_t  result) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::ValueTask_1<int32_t> get_Task() ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncValueTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  _methodBuilder, int32_t  _result, bool  _haveResult, bool  _useBuilder) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncValueTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncValueTaskMethodBuilder_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3358))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3358), inst: 2 })
// CS Name: ::System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncValueTaskMethodBuilder_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _methodBuilder offset 0x0
 __declspec(property(get=__get__methodBuilder, put=__set__methodBuilder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>  _methodBuilder;

/// @brief Field _result offset 0x18
 __declspec(property(get=__get__result, put=__set__result)) TResult  _result;

/// @brief Field _haveResult offset 0x20
 __declspec(property(get=__get__haveResult, put=__set__haveResult)) bool  _haveResult;

/// @brief Field _useBuilder offset 0x21
 __declspec(property(get=__get__useBuilder, put=__set__useBuilder)) bool  _useBuilder;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::ValueTask_1<TResult>  Task;

constexpr void __set__methodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>& __get__methodBuilder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> const& __get__methodBuilder() const;

constexpr void __set__result(TResult  value) ;

constexpr TResult& __get__result() ;

constexpr TResult const& __get__result() const;

constexpr void __set__haveResult(bool  value) ;

constexpr bool& __get__haveResult() ;

constexpr bool const& __get__haveResult() const;

constexpr void __set__useBuilder(bool  value) ;

constexpr bool& __get__useBuilder() ;

constexpr bool const& __get__useBuilder() const;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(TResult  result) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::ValueTask_1<TResult> get_Task() ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: None }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncValueTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>  _methodBuilder, TResult  _result, bool  _haveResult, bool  _useBuilder) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncValueTaskMethodBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncValueTaskMethodBuilder_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncValueTaskMethodBuilder`1");
