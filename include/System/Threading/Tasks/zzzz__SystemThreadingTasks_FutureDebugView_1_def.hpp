#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemThreadingTasks_FutureDebugView_1)
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class SystemThreadingTasks_FutureDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::SystemThreadingTasks_FutureDebugView_1);
// Type: System.Threading.Tasks::SystemThreadingTasks_FutureDebugView`1
namespace System::Threading::Tasks {
// cpp template
template<typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2774))
// CS Name: ::System.Threading.Tasks::SystemThreadingTasks_FutureDebugView`1<TResult>*
class CORDL_TYPE SystemThreadingTasks_FutureDebugView_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "SystemThreadingTasks_FutureDebugView_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemThreadingTasks_FutureDebugView_1(SystemThreadingTasks_FutureDebugView_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemThreadingTasks_FutureDebugView_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemThreadingTasks_FutureDebugView_1(SystemThreadingTasks_FutureDebugView_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SystemThreadingTasks_FutureDebugView_1()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::SystemThreadingTasks_FutureDebugView_1, "System.Threading.Tasks", "SystemThreadingTasks_FutureDebugView`1");
