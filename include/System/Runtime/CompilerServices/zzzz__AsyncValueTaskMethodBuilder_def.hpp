#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncValueTaskMethodBuilder)
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncValueTaskMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder);
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3357))
// CS Name: ::System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder
struct CORDL_TYPE AsyncValueTaskMethodBuilder : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _methodBuilder offset 0x0
 __declspec(property(get=__get__methodBuilder, put=__set__methodBuilder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _methodBuilder;

/// @brief Field _haveResult offset 0x18
 __declspec(property(get=__get__haveResult, put=__set__haveResult)) bool  _haveResult;

/// @brief Field _useBuilder offset 0x19
 __declspec(property(get=__get__useBuilder, put=__set__useBuilder)) bool  _useBuilder;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::ValueTask  Task;

constexpr void __set__methodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get__methodBuilder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get__methodBuilder() const;

constexpr void __set__haveResult(bool  value) ;

constexpr bool& __get__haveResult() ;

constexpr bool const& __get__haveResult() const;

constexpr void __set__useBuilder(bool  value) ;

constexpr bool& __get__useBuilder() ;

constexpr bool const& __get__useBuilder() const;

/// @brief Method Create addr 0x24da794 size 0xc virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x24da7a0 size 0x4 virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method SetResult addr 0x24da7fc size 0x18 virtual false final false
inline void SetResult() ;

/// @brief Method SetException addr 0x24da88c size 0x4 virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method get_Task addr 0x24da8e8 size 0x48 virtual false final false
inline ::System::Threading::Tasks::ValueTask get_Task() ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncValueTaskMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _methodBuilder, bool  _haveResult, bool  _useBuilder) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncValueTaskMethodBuilder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncValueTaskMethodBuilder()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncValueTaskMethodBuilder");
