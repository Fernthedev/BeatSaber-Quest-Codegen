#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskContinuation)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskContinuation;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskContinuation);
// Type: System.Threading.Tasks::TaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2801))
// CS Name: ::System.Threading.Tasks::TaskContinuation*
class CORDL_TYPE TaskContinuation : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Run(::System::Threading::Tasks::Task*  completedTask, bool  bCanInlineContinuationTask) ;

/// @brief Method InlineIfPossibleOrElseQueue addr 0x262b4c0 size 0x144 virtual false final false
static inline void InlineIfPossibleOrElseQueue(::System::Threading::Tasks::Task*  task, bool  needsProtection) ;

static inline ::System::Threading::Tasks::TaskContinuation* New_ctor() ;

/// @brief Method .ctor addr 0x262b604 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskContinuation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskContinuation(TaskContinuation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskContinuation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskContinuation(TaskContinuation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskContinuation()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskContinuation, 0x10>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskContinuation*, "System.Threading.Tasks", "TaskContinuation");
