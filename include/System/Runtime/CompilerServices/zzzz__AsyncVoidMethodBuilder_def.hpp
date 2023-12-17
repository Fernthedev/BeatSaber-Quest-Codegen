#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncVoidMethodBuilder)
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder);
// Type: System.Runtime.CompilerServices::AsyncVoidMethodBuilder
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3400))
// CS Name: ::System.Runtime.CompilerServices::AsyncVoidMethodBuilder
struct CORDL_TYPE AsyncVoidMethodBuilder : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_synchronizationContext offset 0x0
 __declspec(property(get=__get_m_synchronizationContext, put=__set_m_synchronizationContext)) ::System::Threading::SynchronizationContext*  m_synchronizationContext;

/// @brief Field m_coreState offset 0x8
 __declspec(property(get=__get_m_coreState, put=__set_m_coreState)) ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState;

/// @brief Field m_task offset 0x18
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task*  m_task;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task*  Task;

constexpr void __set_m_synchronizationContext(::System::Threading::SynchronizationContext*  value) ;

constexpr ::System::Threading::SynchronizationContext* __get_m_synchronizationContext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> __get_m_synchronizationContext() const;

constexpr void __set_m_coreState(::System::Runtime::CompilerServices::AsyncMethodBuilderCore  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& __get_m_coreState() ;

constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore const& __get_m_coreState() const;

constexpr void __set_m_task(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_m_task() const;

/// @brief Method Create addr 0x24dc3a0 size 0x40 virtual false final false
static inline ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
inline void Start(ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetStateMachine addr 0x24dc3e0 size 0x8 virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method AwaitOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine) ;

/// @brief Method SetResult addr 0x24dc4b0 size 0x5c virtual false final false
inline void SetResult() ;

/// @brief Method SetException addr 0x24dc61c size 0x134 virtual false final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method NotifySynchronizationContextOfCompletion addr 0x24dc578 size 0xa4 virtual false final false
inline void NotifySynchronizationContextOfCompletion() ;

/// @brief Method get_Task addr 0x24dc50c size 0x6c virtual false final false
inline ::System::Threading::Tasks::Task* get_Task() ;

// Ctor Parameters [CppParam { name: "m_synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None }, CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }]
constexpr AsyncVoidMethodBuilder(::System::Threading::SynchronizationContext*  m_synchronizationContext, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore  m_coreState, ::System::Threading::Tasks::Task*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncVoidMethodBuilder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncVoidMethodBuilder()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder");
