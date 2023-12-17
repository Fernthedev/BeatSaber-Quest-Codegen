#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskSchedulerAwaitTaskContinuation)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System {
class Action;
}
namespace System::Threading::Tasks {
class __TaskSchedulerAwaitTaskContinuation____c;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskSchedulerAwaitTaskContinuation;
}
namespace System::Threading::Tasks {
class __TaskSchedulerAwaitTaskContinuation____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation);
MARK_REF_PTR_T(::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c);
// Type: ::<>c
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2805))
// CS Name: ::TaskSchedulerAwaitTaskContinuation::<>c*
class CORDL_TYPE __TaskSchedulerAwaitTaskContinuation____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c*  value) ;

static inline ::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c* getStaticF___9() ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c* New_ctor() ;

/// @brief Method .ctor addr 0x262c2d8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Run>b__2_0 addr 0x262c2e0 size 0xf0 virtual false final false
inline void _Run_b__2_0(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskSchedulerAwaitTaskContinuation____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskSchedulerAwaitTaskContinuation____c(__TaskSchedulerAwaitTaskContinuation____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskSchedulerAwaitTaskContinuation____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskSchedulerAwaitTaskContinuation____c(__TaskSchedulerAwaitTaskContinuation____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskSchedulerAwaitTaskContinuation____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__2_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c, 0x10>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskSchedulerAwaitTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2807))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2806))
// CS Name: ::System.Threading.Tasks::TaskSchedulerAwaitTaskContinuation*
class CORDL_TYPE TaskSchedulerAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation {
public:
// Declarations
using __c = ::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Threading::Tasks::AwaitTaskContinuation)]{};

/// @brief Field m_scheduler offset 0x20
 __declspec(property(get=__get_m_scheduler, put=__set_m_scheduler)) ::System::Threading::Tasks::TaskScheduler*  m_scheduler;

constexpr void __set_m_scheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

constexpr ::System::Threading::Tasks::TaskScheduler* __get_m_scheduler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> __get_m_scheduler() const;

static inline ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation* New_ctor(::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Action*  action, bool  flowExecutionContext) ;

/// @brief Method .ctor addr 0x262696c size 0x30 virtual false final false
inline void _ctor(::System::Threading::Tasks::TaskScheduler*  scheduler, ::System::Action*  action, bool  flowExecutionContext) ;

/// @brief Method Run addr 0x262be84 size 0x244 virtual true final true
inline void Run(::System::Threading::Tasks::Task*  ignored, bool  canInlineContinuationTask) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerAwaitTaskContinuation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskSchedulerAwaitTaskContinuation(TaskSchedulerAwaitTaskContinuation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerAwaitTaskContinuation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskSchedulerAwaitTaskContinuation(TaskSchedulerAwaitTaskContinuation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskSchedulerAwaitTaskContinuation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation, 0x28>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
NEED_NO_BOX(::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__TaskSchedulerAwaitTaskContinuation____c*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation/<>c");
