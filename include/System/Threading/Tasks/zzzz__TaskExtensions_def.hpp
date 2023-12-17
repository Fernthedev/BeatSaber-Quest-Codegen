#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskExtensions)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskExtensions);
// Type: System.Threading.Tasks::TaskExtensions
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14321))
// CS Name: ::System.Threading.Tasks::TaskExtensions*
class CORDL_TYPE TaskExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Unwrap addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static inline ::System::Threading::Tasks::Task_1<TResult>* Unwrap(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*  task) ;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtensions(TaskExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtensions(TaskExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskExtensions, 0x10>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskExtensions*, "System.Threading.Tasks", "TaskExtensions");
