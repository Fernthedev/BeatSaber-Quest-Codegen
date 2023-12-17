#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
CORDL_MODULE_EXPORT(StandardTaskContinuation)
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class StandardTaskContinuation;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::StandardTaskContinuation);
// Type: System.Threading.Tasks::StandardTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2801))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2802))
// CS Name: ::System.Threading.Tasks::StandardTaskContinuation*
class CORDL_TYPE StandardTaskContinuation : public ::System::Threading::Tasks::TaskContinuation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Threading::Tasks::TaskContinuation)]{};

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task*  m_task;

/// @brief Field m_options offset 0x18
 __declspec(property(get=__get_m_options, put=__set_m_options)) ::System::Threading::Tasks::TaskContinuationOptions  m_options;

/// @brief Field m_taskScheduler offset 0x20
 __declspec(property(get=__get_m_taskScheduler, put=__set_m_taskScheduler)) ::System::Threading::Tasks::TaskScheduler*  m_taskScheduler;

constexpr void __set_m_task(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_m_task() const;

constexpr void __set_m_options(::System::Threading::Tasks::TaskContinuationOptions  value) ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_options() ;

constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_options() const;

constexpr void __set_m_taskScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_taskScheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_taskScheduler() const;

static inline ::System::Threading::Tasks::StandardTaskContinuation* New_ctor(::System::Threading::Tasks::Task*  task, ::System::Threading::Tasks::TaskContinuationOptions  options, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method .ctor addr 0x2628370 size 0x120 virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  task, ::System::Threading::Tasks::TaskContinuationOptions  options, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method Run addr 0x262b60c size 0x198 virtual true final false
inline void Run(::System::Threading::Tasks::Task*  completedTask, bool  bCanInlineContinuationTask) ;

// Ctor Parameters [CppParam { name: "", ty: "StandardTaskContinuation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardTaskContinuation(StandardTaskContinuation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardTaskContinuation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardTaskContinuation(StandardTaskContinuation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardTaskContinuation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::StandardTaskContinuation, 0x28>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::StandardTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::StandardTaskContinuation*, "System.Threading.Tasks", "StandardTaskContinuation");
