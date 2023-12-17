#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(AwaitTaskContinuation)
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class AwaitTaskContinuation;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::AwaitTaskContinuation);
// Type: System.Threading.Tasks::AwaitTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2801))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2807))
// CS Name: ::System.Threading.Tasks::AwaitTaskContinuation*
class CORDL_TYPE AwaitTaskContinuation : public ::System::Threading::Tasks::TaskContinuation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Threading::Tasks::TaskContinuation)]{};

/// @brief Field m_capturedContext offset 0x10
 __declspec(property(get=__get_m_capturedContext, put=__set_m_capturedContext)) ::System::Threading::ExecutionContext*  m_capturedContext;

/// @brief Field m_action offset 0x18
 __declspec(property(get=__get_m_action, put=__set_m_action)) ::System::Action*  m_action;

/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr operator  ::System::Threading::IThreadPoolWorkItem*() noexcept;

constexpr void __set_m_capturedContext(::System::Threading::ExecutionContext*  value) ;

constexpr ::System::Threading::ExecutionContext* __get_m_capturedContext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> __get_m_capturedContext() const;

constexpr void __set_m_action(::System::Action*  value) ;

constexpr ::System::Action* __get_m_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_action() const;

static inline void setStaticF_s_invokeActionCallback(::System::Threading::ContextCallback*  value) ;

static inline ::System::Threading::ContextCallback* getStaticF_s_invokeActionCallback() ;

static inline ::System::Threading::Tasks::AwaitTaskContinuation* New_ctor(::System::Action*  action, bool  flowExecutionContext) ;

/// @brief Method .ctor addr 0x262b7a4 size 0x80 virtual false final false
inline void _ctor(::System::Action*  action, bool  flowExecutionContext) ;

/// @brief Method CreateTask addr 0x262c1e4 size 0x90 virtual false final false
inline ::System::Threading::Tasks::Task* CreateTask(::System::Action_1<::System::Object*>*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskScheduler*  scheduler) ;

/// @brief Method Run addr 0x262c0c8 size 0x11c virtual true final false
inline void Run(::System::Threading::Tasks::Task*  ignored, bool  canInlineContinuationTask) ;

/// @brief Method get_IsValidLocationForInlining addr 0x262c428 size 0x134 virtual false final false
static inline bool get_IsValidLocationForInlining() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x262c55c size 0x128 virtual true final true
inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method InvokeAction addr 0x262c684 size 0x6c virtual false final false
static inline void InvokeAction(::System::Object*  state) ;

/// @brief Method GetInvokeActionCallback addr 0x262c6f0 size 0xa8 virtual false final false
static inline ::System::Threading::ContextCallback* GetInvokeActionCallback() ;

/// @brief Method RunCallback addr 0x262ba10 size 0x17c virtual false final false
inline void RunCallback(::System::Threading::ContextCallback*  callback, ::System::Object*  state, ByRef<::System::Threading::Tasks::Task*>  currentTask) ;

/// @brief Method RunOrScheduleAction addr 0x2627a9c size 0x158 virtual false final false
static inline void RunOrScheduleAction(::System::Action*  action, bool  allowInlining, ByRef<::System::Threading::Tasks::Task*>  currentTask) ;

/// @brief Method UnsafeScheduleAction addr 0x2626a30 size 0x8c virtual false final false
static inline void UnsafeScheduleAction(::System::Action*  action) ;

/// @brief Method ThrowAsyncIfNecessary addr 0x262c3d0 size 0x58 virtual false final false
static inline void ThrowAsyncIfNecessary(::System::Exception*  exc) ;

/// @brief Method MarkAborted addr 0x262c798 size 0x4 virtual true final true
inline void MarkAborted(::System::Threading::ThreadAbortException*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "AwaitTaskContinuation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AwaitTaskContinuation(AwaitTaskContinuation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AwaitTaskContinuation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AwaitTaskContinuation(AwaitTaskContinuation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AwaitTaskContinuation()  = default;
public:


// Fields

// Static field s_invokeActionCallback


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::AwaitTaskContinuation, 0x20>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::AwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::AwaitTaskContinuation*, "System.Threading.Tasks", "AwaitTaskContinuation");
