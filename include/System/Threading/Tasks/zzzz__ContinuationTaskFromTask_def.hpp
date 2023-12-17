#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
CORDL_MODULE_EXPORT(ContinuationTaskFromTask)
namespace System {
class Delegate;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class ContinuationTaskFromTask;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::ContinuationTaskFromTask);
// Type: System.Threading.Tasks::ContinuationTaskFromTask
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2787))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2798))
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromTask*
class CORDL_TYPE ContinuationTaskFromTask : public ::System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task)]{};

/// @brief Field m_antecedent offset 0x50
 __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent)) ::System::Threading::Tasks::Task*  m_antecedent;

constexpr void __set_m_antecedent(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_m_antecedent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_m_antecedent() const;

static inline ::System::Threading::Tasks::ContinuationTaskFromTask* New_ctor(::System::Threading::Tasks::Task*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method .ctor addr 0x2628018 size 0xb4 virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions) ;

/// @brief Method InnerInvoke addr 0x262b3f0 size 0xd0 virtual true final false
inline void InnerInvoke() ;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromTask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationTaskFromTask(ContinuationTaskFromTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromTask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationTaskFromTask(ContinuationTaskFromTask const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContinuationTaskFromTask()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ContinuationTaskFromTask, 0x58>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::ContinuationTaskFromTask);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ContinuationTaskFromTask*, "System.Threading.Tasks", "ContinuationTaskFromTask");
