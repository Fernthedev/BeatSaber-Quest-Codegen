#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TaskAwaiter)
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class __TaskAwaiter____c__DisplayClass11_0;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class __TaskAwaiter____c__DisplayClass11_0;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0);
MARK_VAL_T(::System::Runtime::CompilerServices::TaskAwaiter);
// Type: ::<>c__DisplayClass11_0
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3392))
// CS Name: ::TaskAwaiter::<>c__DisplayClass11_0*
class CORDL_TYPE __TaskAwaiter____c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field task offset 0x10
 __declspec(property(get=__get_task, put=__set_task)) ::System::Threading::Tasks::Task*  task;

/// @brief Field continuation offset 0x18
 __declspec(property(get=__get_continuation, put=__set_continuation)) ::System::Action*  continuation;

constexpr void __set_task(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_task() const;

constexpr void __set_continuation(::System::Action*  value) ;

constexpr ::System::Action* __get_continuation() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_continuation() const;

static inline ::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0* New_ctor() ;

/// @brief Method .ctor addr 0x24dc1c4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <OutputWaitEtwEvents>b__0 addr 0x24dc1cc size 0x174 virtual false final false
inline void _OutputWaitEtwEvents_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskAwaiter____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskAwaiter____c__DisplayClass11_0(__TaskAwaiter____c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskAwaiter____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskAwaiter____c__DisplayClass11_0(__TaskAwaiter____c__DisplayClass11_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskAwaiter____c__DisplayClass11_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3393))
// CS Name: ::System.Runtime.CompilerServices::TaskAwaiter
struct CORDL_TYPE TaskAwaiter : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using __c__DisplayClass11_0 = ::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task*  m_task;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_m_task() const;

/// @brief Method .ctor addr 0x24dbd08 size 0x8 virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  task) ;

/// @brief Method get_IsCompleted addr 0x24dbd10 size 0x1c virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x24db9b8 size 0x10 virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x24dbb54 size 0x10 virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x24dbde0 size 0x8 virtual false final false
inline void GetResult() ;

/// @brief Method ValidateEnd addr 0x24dbde8 size 0x4c virtual false final false
static inline void ValidateEnd(::System::Threading::Tasks::Task*  task) ;

/// @brief Method HandleNonSuccessAndDebuggerNotification addr 0x24dbe34 size 0x60 virtual false final false
static inline void HandleNonSuccessAndDebuggerNotification(::System::Threading::Tasks::Task*  task) ;

/// @brief Method ThrowForNonSuccess addr 0x24dbe94 size 0x154 virtual false final false
static inline void ThrowForNonSuccess(::System::Threading::Tasks::Task*  task) ;

/// @brief Method OnCompletedInternal addr 0x24dbd2c size 0xb4 virtual false final false
static inline void OnCompletedInternal(::System::Threading::Tasks::Task*  task, ::System::Action*  continuation, bool  continueOnCapturedContext, bool  flowExecutionContext) ;

/// @brief Method OutputWaitEtwEvents addr 0x24dbfe8 size 0x1dc virtual false final false
static inline ::System::Action* OutputWaitEtwEvents(::System::Threading::Tasks::Task*  task, ::System::Action*  continuation) ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }]
constexpr TaskAwaiter(::System::Threading::Tasks::Task*  m_task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TaskAwaiter, 0x8>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0*, "System.Runtime.CompilerServices", "TaskAwaiter/<>c__DisplayClass11_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TaskAwaiter, "System.Runtime.CompilerServices", "TaskAwaiter");
